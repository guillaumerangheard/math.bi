'#cmdline "-gen gcc -O 2"

Type rational
    As String n,d
    Declare Constructor
    Declare Constructor(Byval As String)
    Declare Constructor(Byval As Double)
    Declare Operator Let(Byval As String)
    Declare Operator Let(As Double)
    Declare Operator Cast() As String
    Declare Function Val() As String
    Declare Operator For( Byval stp As rational )
    Declare Operator Step( Byval stp As rational )
    Declare Operator Next( Byval cond As rational, Byval stp As rational ) As Integer
    #define fr rational
End Type

'non members
Declare Function Precision Byref As Long
Declare Function Format_( Byval Number As String ) As String
Declare Function divide(n1 As String,n2 As String,decimal_places As Integer = precision,dpflag As String="s") As String
Declare Function mult(Byval a As String,Byval b As String) As String
Declare Function plus(Byval _num1 As String,Byval _num2 As String) As String
Declare Function minus(Byval num1 As String,Byval num2 As String) As String
Declare Function Rationalize(Byval num As String, Byref n As String="",Byref d As String="")As rational
Declare Function simplify(Byval f As rational) As rational
Declare  Function factorial(num As String) As String
Declare Function round_(num As String,n As Integer) As String

Sub _Remove(Text As String,Char As String)
    Var index = 0,asci=Asc(char)
    For i As Integer = 0 To Len(Text) - 1
        If Text[i] <> asci Then Text[index] = Text[i] : index =index+ 1
    Next : Text = Left(Text,index)
End Sub

Function Precision() Byref As Long
    Static As Long z=50
    Return z
End Function

Function gcd(a As String,b As String) As String
    Dim As String ca=a,cb=b
    ca=Ltrim(ca,"-")
    cb=Ltrim(cb,"-")
    If Len(cb)>Len(ca) Then Swap cb,ca
    If Len(cb)=Len(ca) Then
        If cb>ca Then Swap cb,ca
    End If
    Dim As String c
    While cb<>"0"
        c=ca
        ca=cb
        cb=divide(c,cb,0,"mod")
    Wend
    Return ca
End Function

Constructor rational
End Constructor

Constructor rational (Byval s As String)
If Instr(s, Any "eEdD") Then s=format_(s)
If Instr(s,".") Then s=Rationalize(s)
Var i=Instr(s,"/")
If i=0 Then n=s:d="1":Return
n=Mid(s,1,i-1)
d=Mid(s,i+1)
End Constructor

Constructor rational (Byval x As Double)
Dim As String s=Format_(Str(x))
If Instr(s,".") Then s=Rationalize(s)
Var i=Instr(s,"/")
If i=0 Then n=s:d="1":Return
n=Mid(s,1,i-1)
d=Mid(s,i+1)
End Constructor

Operator rational.let(Byval s As String)
If Instr(s, Any "eEdD") Then s=format_(s)
If Instr(s,".") Then s=Rationalize(s)
Var i=Instr(s,"/")
If i=0 Then n=s:d="1":Return'''jhh
n=Mid(s,1,i-1)
d=Mid(s,i+1)
End Operator

Operator rational.let(x As Double)
Dim As String s=Format_(Str(x))
If Instr(s,".") Then s=Rationalize(s)
Var i=Instr(s,"/")
If i=0 Then n=s:d="1":Return
n=Mid(s,1,i-1)
d=Mid(s,i+1)
End Operator

Operator rational.cast() As String
Return n+"/"+d
End Operator

Function rational.val() As String
    If d="1" Then Return n
    Return divide(n,d,precision)
End Function

Operator +(a As rational,b As rational) As rational
Var p=mult(a.d,b.d)
Var n1=mult(a.n,b.d)
Var n2=mult(b.n,a.d)
Var n3=plus(n1,n2)
Return simplify(format_((n3))+"/"+format_((p)))
End Operator


Operator -(a As rational,b As rational) As rational
Var p=mult(a.d,b.d)
Var n1=mult(a.n,b.d)
Var n2=mult(b.n,a.d)
Var n3=minus(n1,n2)
Return simplify(format_((n3))+"/"+format_((p)))
End Operator


Operator *(a As rational,b As rational) As rational
Var n2=mult(a.n,b.n)
Var d2=mult(a.d,b.d)
Return simplify(format_(n2)+"/"+format_(d2))
End Operator

Operator -(a As rational) As rational
Return simplify(format_(fr("-1/1")*a))
End Operator


Operator /(Byval a As rational,Byval b As rational) As rational
Swap b.n,b.d
Return a*b
End Operator

Operator =(a As rational,b As rational) As Long
a=simplify(a)
b=simplify(b)
Return a.n=b.n And a.d=b.d
End Operator

Operator <(Byval a As rational,Byval b As rational) As Long
If a=b Then Return 0
If Instr((a-b),"-")Then Return 1
Return 0
End Operator

Operator >(Byval a As rational,Byval b As rational) As Long
If a=b Then Return 0
If Instr((a-b),"-")=0 Then Return 1
Return 0
End Operator

Operator Abs(Byval a As rational) As rational
a.n=Ltrim(a.n,"-")
a.d=Ltrim(a.d,"-")
Return a
End Operator

Operator Mod(a As rational,b As rational) As rational
Var d=divide(a.n,a.d,precision),e=divide(b.n,b.d,precision)
Var f=divide(d,e,5,"mod")
Return fr(f)
End Operator

Operator \(a As rational,b As rational) As rational
Return Iif(a<b,fr("0"),fr(divide((a.val),(b.val),-2)))
End Operator


Operator rational.for( Byval step_var As rational )
End Operator

Operator rational.step( Byval step_var As rational )
This=This+step_var
End Operator 

Operator rational.next( Byval end_cond As rational, Byval step_var As rational ) As Integer
If step_var > fr("0") Then
    Return This<end_cond
Else
    Return This>end_cond  
End If
End Operator

Operator ^(n As rational,p As rational) As rational
If p.val="0" Then Return fr("1")
Dim As rational num=n,temp=num
For z As rational=fr("1") To fr(p)  Step fr("1")
    num=temp*num
Next
Return num
End Operator
'1+x+x^2/fac(2)+x^3/fac(3)
Operator Exp(n As rational) As rational
Dim As rational num="0",temp="1"
For x As rational=fr("1") To fr(Str(precision*1.5))  Step fr("1")
    num=num+(n^temp)/fr(factorial(temp.val))
    temp=temp+fr("1")
Next
Return round_(fr("1")+num,precision)
End Operator

Function Format_( Byval Number As String ) As String
    Dim As String  NumberPart, sign,var1,var2
    Dim As Integer  Epart,pst
    Var s = Trim(Number)
    #macro splice(stri,char,var1,var2)
    pst=Instr(stri,char)
    var1="":var2=""
    If pst<>0 Then
        var1=Mid(stri,1,pst-1)
        var2=Mid(stri,pst+1)
    Else
        var1=stri
    End If
    #endmacro
    If Instr(s, Any "eEdD")=0 Then Return s
    If Chr(s[0])="-" Then sign="-":s=Ltrim(s,"-")
    If Instr(s,"+") Then s=Ltrim(s,"+")
    splice(s,Any "eEdD",var1,var2)
    Epart = Vallng(var2)
    NumberPart = var1
    
    If Instr(NumberPart,".") Then
        Var DecPos = Instr(NumberPart, ".") 
        splice(NumberPart,".",var1,var2)
        Epart = Epart + DecPos - Len(NumberPart)
        NumberPart=var1+var2
    End If
    
    Select Case Epart
    Case 0:s=NumberPart
    Case Is>0:s = NumberPart+String(Epart,"0")
    Case Else
        Epart=Abs(Epart)
        If Epart > Len(NumberPart) Then    ' insert leading zeros
            s = "." + String(Epart-Len(NumberPart),"0")+NumberPart
        Else            ' insert a decimal point
            s = Left(NumberPart,Len(NumberPart)-Epart )+"."+Right(NumberPart,Epart)
        End If
    End Select
    s = Ltrim(s, "0") 
    If s = "." Or s="" Then s = "0"
    
    Return sign+Ltrim(s,"-")
End Function

Function simplify(Byval f As rational) As rational
    Var h= gcd(f.n,f.d)
    If h>"1" Then
        f.n=divide(f.n,h,5)
        f.d=divide(f.d,h,5)
        Return f
    Else
        Return f
    End If
End Function

Function Rationalize(Byval num As String, Byref n As String="",Byref d As String="")As rational
    If Instr(num,Any"eEdD") Then num=format_(num)
    #macro remove_(s,char)
    Scope
        Dim temp As String
        Dim As Integer asci=Asc(char)
        For i As Long =0 To Len(s)-1 
            If s[i]<>asci Then temp=temp+Chr(s[i])
        Next i
        s= temp
    End Scope
    #endmacro
    
    Dim As String sign=""
    Dim As String cnum=num
    If Instr(cnum,"-") Then cnum=Ltrim(cnum,"-"):sign="-"
    Var pl=Len(cnum)-Instr(cnum,".")
    Var t="1"+String(pl,"0")
    If Instr(cnum,".") Then
        remove_(cnum,".")
        cnum=Ltrim(cnum,"0")
        
    Else
        cnum=Ltrim(cnum,"0")
        n=sign+cnum:d="1"
        Return (fr(n+"/"+d))
    
    End If
    Dim As String hcf_=gcd(cnum,t)
    n=sign+divide(cnum,hcf_,5)
    d=divide(t,hcf_,5)
    Return fr(n+"/"+d)'simplify(tmp)
End Function
' =============
Function divide(n1 As String,n2 As String,decimal_places As Integer=precision,dpflag As String="s") As String
    Dim As String number=n1,divisor=n2
    dpflag=Lcase(dpflag)
    Dim As Integer modstop
    If dpflag="mod" Then
        If Len(n1)<Len(n2) Then Return n1
        If Len(n1)=Len(n2) Then
            If n1<n2 Then Return n1
        End If
        modstop=Len(n1)-Len(n2)+1
    End If
    If dpflag<>"mod" Then
        If dpflag<>"s" Then dpflag="raw"
    End If
    Dim runcount As Integer
    Static As Ubyte Qmod(19)={48,49,50,51,52,53,54,55,56,57,48,49,50,51,52,53,54,55,56,57}
    Static As Ubyte bool(19)={1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}
    
    Dim answer As String
    
    Dim As String part1,part2
    Dim As String var1,var2
    Dim pst As Integer
    
    Dim sign As String
    If Left(number,1)="-" Xor Left (divisor,1)="-" Then sign="-"
    If Left(number,1)="-" Then number=Ltrim(number,"-")
    If Left (divisor,1)="-" Then divisor=Ltrim(divisor,"-")
    
    Dim As Integer lennint,lenddec,lend,lenn,difflen
    pst=Instr(number,".")
    var1="":var2=""
    If pst<>0 Then
        var1=Rtrim(Mid(number,1,pst),".")
        var2=Ltrim(Mid(number,pst),".")
    Else
        var1=number
    End If
    lennint=Len(var1)
    pst=Instr(divisor,".")
    var1="":var2=""
    If pst<>0 Then
        var1=Rtrim(Mid(divisor,1,pst),".")
        var2=Ltrim(Mid(divisor,pst),".")
    Else
        var1=divisor
    End If
    lenddec=Len(var2)
    
    If Instr(number,".") Then
        pst=Instr(number,".")
        var1="":var2=""
        If pst<>0 Then
            var1=Rtrim(Mid(number,1,pst),".")
            var2=Ltrim(Mid(number,pst),".")
        Else
            var1=number
        End If
        number=var1+var2
    End If
    If Instr(divisor,".") Then
        pst=Instr(divisor,".")
        var1="":var2=""
        If pst<>0 Then
            var1=Rtrim(Mid(divisor,1,pst),".")
            var2=Ltrim(Mid(divisor,pst),".")
        Else
            var1=divisor
        End If
        divisor=var1+var2
    End If
    Dim As Integer numzeros
    numzeros=Len(number)
    number=Ltrim(number,"0"):divisor=Ltrim (divisor,"0")
    numzeros=numzeros-Len(number)
    lend=Len(divisor):lenn=Len(number)
    If lend>lenn Then difflen=lend-lenn
    Dim decpos As Integer=lenddec+lennint-lend+2-numzeros
    Dim _sgn As Byte=-Sgn(decpos)
    If _sgn=0 Then _sgn=1
    Dim As String thepoint=String(_sgn,".")
    Dim As String zeros=String(-decpos+1,"0")
    If dpflag<>"mod" Then
        If Len(zeros) =0 Then dpflag="s"
    End If
    Dim As Integer runlength
    If Len(zeros) Then
        runlength=decimal_places
        answer=String(Len(zeros)+runlength+10,"0")
        If dpflag="raw" Then
            runlength=1
            answer=String(Len(zeros)+runlength+10,"0")
            If decimal_places>Len(zeros) Then
                runlength=runlength+(decimal_places-Len(zeros))
                answer=String(Len(zeros)+runlength+10,"0")
            End If
        End If
    Else
        decimal_places=decimal_places+decpos
        runlength=decimal_places
        answer=String(Len(zeros)+runlength+10,"0")
    End If
    
    number=number+String(difflen+decimal_places,"0")
    Dim count As Integer
    Dim temp As String
    Dim copytemp As String
    Dim topstring As String
    Dim copytopstring As String
    Dim As Integer lenf,lens
    Dim As Ubyte takeaway,subtractcarry
    Dim As Integer n3,diff
    If Ltrim(divisor,"0")="" Then Return "Error :division by zero"
    lens=Len(divisor)
    topstring=Left(number,lend)
    copytopstring=topstring
    Do
        count=0
        Do
            count=count+1
            copytemp=temp
            Do
                lenf=Len(topstring)
                If lens<lenf=0 Then
                    If Lens>lenf Then
                        temp= "done"
                        Exit Do
                    End If
                    If divisor>topstring Then
                        temp= "done"
                        Exit Do
                    End If
                End If
                
                diff=lenf-lens
                temp=topstring
                subtractcarry=0
                
                For n3=lenf-1 To diff Step -1
                    takeaway= topstring[n3]-divisor[n3-diff]+10-subtractcarry
                    temp[n3]=Qmod(takeaway)
                    subtractcarry=bool(takeaway)
                Next n3
                If subtractcarry=0 Then Exit Do
                If n3=-1 Then Exit Do
                For n3=n3 To 0 Step -1
                    takeaway= topstring[n3]-38-subtractcarry
                    temp[n3]=Qmod(takeaway)
                    subtractcarry=bool(takeaway)
                    If subtractcarry=0 Then Exit Do
                Next n3
                Exit Do
                
            Loop
            temp=Ltrim(temp,"0")
            If temp="" Then temp= "0"
            topstring=temp
        Loop Until temp="done"
        runcount=runcount+1
        If count=1 Then
            topstring=copytopstring+Mid(number,lend+runcount,1)
        Else
            topstring=copytemp+Mid(number,lend+runcount,1)
        End If
        copytopstring=topstring
        topstring=Ltrim(topstring,"0")
        If dpflag="mod" Then
            If runcount=modstop Then
                If topstring="" Then Return "0"
                Return Mid(topstring,1,Len(topstring)-1)
            End If
        End If
        answer[runcount-1]=count+47
        If topstring="" And runcount>Len(n1)+1 Then
            Exit Do
        End If
    Loop Until runcount=runlength+1
    
    If decpos > 0 And decpos <=Len(answer) Then
        part1=Mid(answer,1,decpos-1)
        part2=Mid(answer,decpos)
        answer=part1+"."+part2
    End If
    answer=thepoint+zeros+answer
    If dpflag="raw" Then
        answer=Mid(answer,1,decimal_places)
    End If
    answer=Rtrim(answer,"0")
    answer=Rtrim(answer,".")
    answer=Ltrim(answer,"0")
    If answer="" Then Return "0"
    Return sign+answer
End Function



'===================  END DIVIDE ==============================
Function mult(Byval a As String,Byval b As String) As String
    Static As Ubyte _mod(99)= _  
    {48,49,50,51,52,53,54,55,56,57,48,49,50,51,52,53,54,55,56,57,48,49,50,51,52,53,54,55,56,57,48, _
    49,50,51,52,53,54,55,56,57,48,49,50,51,52,53,54,55,56,57,48,49,50,51,52,53,54,55,56,57,48, _
    49,50,51,52,53,54,55,56,57,48,49,50,51,52,53,54,55,56,57,48,49,50,51,52,53,54,55,56,57,48, _
    49,50,51,52,53,54,55,56,57}
    Static As Ubyte _div(99)= _
    {0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,3, _
    3,3,3,3,3,3,3,3,3,4,4,4,4,4,4,4,4,4,4,5,5,5,5,5,5,5,5,5,5,6, _
    6,6,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,8,8,8,8,8,8,8,8,8,8,9, _
    9,9,9,9,9,9,9,9,9}
    Dim As String sign
    If Instr(a,"-") xor Instr(b,"-") Then
        _remove(a,"-")
        _remove(b,"-")
        sign="-"
    End If
    If Instr(a,"-") And Instr(b,"-") Then
        _remove(a,"-")
        _remove(b,"-")
        sign=""
    End If
    
    Var flag=0,la = Len(a),lb = Len(b)
    If Len(b)>Len(a) Then flag=1:Swap a,b:Swap la,lb
    Dim As Ubyte n,carry,ai
    Var c =String(la+lb,"0")
    For i As Integer =la-1 To 0 Step -1
        carry=0:ai=a[i]-48
        For j As Integer =lb-1 To 0 Step -1
            n = ai * (b[j]-48) + (c[i+j+1]-48) + carry
            carry =_Div(n):c[i+j+1]=_Mod(n)
        Next j
        c[i]+=carry
    Next i
    'If flag Then Swap a,b
    If Ltrim(c,"0")="" Then Return "0"
    Return sign+Ltrim(c,"0")
End Function
Function plus(Byval _num1 As String,Byval _num2 As String) As String
    Dim As String sign
    If Instr(_num1,"-") And Instr(_num2,"-") Then
        _num1=Ltrim(_num1,"-"):_num2=Ltrim(_num2,"-")
        sign="-"
    End If
    If Instr(_num1,"-") And Instr(_num2,"-")  =0 Then
        Return minus(_num2,Ltrim(_num1,"-"))
    End If
    If Instr(_num1,"-")=0 And Instr(_num2,"-") Then
        'print _num1,ltrim(_num2,"-")
        Return minus(_num1,Ltrim(_num2,"-"))
    End If
    Static As Ubyte addQmod(0 To 19)={48,49,50,51,52,53,54,55,56,57,48,49,50,51,52,53,54,55,56,57}
    Static As Ubyte addbool(0 To 19)={0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1}
    Var _flag=0,n_=0
    Dim As Ubyte addup=Any,addcarry=Any
    #macro finish()
    answer=Ltrim(answer,"0")
    Return sign+answer
    #endmacro
    If Len(_num2)>Len(_num1) Then 
        Swap _num2,_num1
        '_flag=1
    End If
    Var diff=Len(_num1)-Len(_num2)
    Var answer="0"+_num1
    addcarry=0
    For n_=Len(_num1)-1 To diff Step -1 
        addup=_num2[n_-diff]+_num1[n_]-96
        answer[n_+1]=ADDQmod(addup+addcarry)
        addcarry=ADDbool(addup+addcarry)
    Next n_ 
    If addcarry=0 Then 
        finish()
    End If
    If n_=-1 Then 
        answer[0]=addcarry+48
        finish()
        Endif
        For n_=n_ To 0 Step -1 
            addup=_num1[n_]-48
            answer[n_+1]=ADDQmod(addup+addcarry)
            addcarry=ADDbool(addup+addcarry)
            If addcarry=0 Then Exit For
        Next n_
        answer[0]=addcarry+48
        finish()
    End Function
    
    Function minus(Byval num1 As String,Byval num2 As String) As String
        If Instr(num1,"-") And Instr(num2,"-") Then' return "-"+plus(ltrim(num1,"-"),ltrim(num2,"-"))
            Var t=num1
            num1=Ltrim(num2,"-"):num2=Ltrim(t,"-")
        End If
        If Instr(num1,"-") And Instr(num2,"-")=0 Then
            Return "-"+plus(Ltrim(num1,"-"),Ltrim(num2,"-"))
        End If
        If Instr(num1,"-")=0 And Instr(num2,"-") Then
            Return plus(num1,Ltrim(num2,"-"))
        End If
        Static As Ubyte subQmod(0 To 19)={48,49,50,51,52,53,54,55,56,57,48,49,50,51,52,53,54,55,56,57}
        Static As Ubyte subBool(0 To 19)={1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}
        Dim As Integer bigger,swapflag           
        Dim sign As String * 1
        Var lenf=Len(NUM1)
        Var lens=Len(NUM2)
        #macro finishup()
        answer=Ltrim(answer,"0")
        If answer="" Then Return "0"
        ' If swapflag=1 Then Swap NUM1,NUM2
        Return sign+answer
        #endmacro
        #macro compare()
        If Lens>lenf Then bigger= -1:Goto fin
        If Lens<lenf Then bigger =0:Goto fin
        If NUM2>NUM1 Then 
            bigger=-1
        Else
            bigger= 0
        End If
        fin:
        #endmacro
        compare()
        If bigger Then 
            sign="-"
            Swap NUM2,NUM1
            Swap lens,lenf
        End If
        Var diff=lenf-lens
        Dim As String answer=NUM1
        Dim As Integer n
        Dim As Ubyte takeaway,subtractcarry
        subtractcarry=0
        For n=lenf-1 To diff Step -1 
            takeaway= num1[n]-num2[n-diff]+10-subtractcarry
            answer[n]=Subqmod(takeaway)
            subtractcarry=Subbool(takeaway)
        Next n 
        
        If subtractcarry=0 Then:finishup():End If
        If n=-1 Then:finishup():End If
        For n=n To 0 Step -1 
            takeaway= num1[n]-38-subtractcarry 
            answer[n]=Subqmod(takeaway)
            subtractcarry=Subbool(takeaway)
            If subtractcarry=0 Then Exit For
        Next n
        finishup()
    End Function 
    
    
    Function round_(num As String,n As Integer) As String
        Dim As Integer counts,lns,pst
        #macro increment(s)
        counts=0
        lns=Len(s)
        Do
            Select Case As Const s[lns-counts-1]
            Case 57
                counts=counts+1
                If counts=lns Then s="1"+String(lns,"0"):Exit Do
            Case Else
                s=Left(s,lns-counts-1)+Str(s[lns-counts-1]-47)+String(counts,"0")
                Exit Do
            End Select
        Loop
        #endmacro   
        
        #macro _split(stri,char,var1,var2 )
        pst=Instr(stri,char)
        If pst<>0 Then
            var1=Mid(stri,1,pst-1)
            var2=Mid(stri,pst+1)
        Else
            var1=stri
        End If
        #endmacro 
        
        If Instr(num,".")=0 Then Return num
        If (Len(num)-Instr(num,"."))<=n Then Return num
        Var part1="",part2="",sign="",s=num
        s=Mid(num,1,Instr(s,"."))+Mid(s,Instr(s,".")+1,n)
        
        Dim As String ref=Left(num,Len(s)+1)
        
        #macro insert(s,char,position)
        part1=Mid$(s,1,position-1)
        part2=Mid$(s,position)
        s=part1+char+part2
        #endmacro
        
        If Instr(s,"-") Then 
            sign="-":s=Ltrim(s,"-")
        End If
        Dim i As Integer=Instr(s,".")
        Dim As Integer lens=Len(s),position
        Dim As String var1,var2
        _split(s,".",var1,var2)
        s=var1+var2
        If Right(ref,1)>="5" And Len(s) Then
            increment(s)
        End If
        If Len(s)+1>lens Then 
            position=i+1
        Else
            position=i
        End If
        If n<>0 Then 
            insert(s,".",position)
        End If
        s=Rtrim(s,"0")
        s=Rtrim(s,".")
        s=Ltrim(s,"0")
        If s="-" Or s="" Then Return"0"
        Return sign+s
    End Function
    
    Function GetRepeat(s As String) As String
        Dim As String copys=Mid(s,Instr(s,".")+1,Len(s)),temp,lasttemp,im
        dim as integer p=len(copys)
       copys= ltrim(copys,"0")
       dim as integer q=len(copys)
       dim as integer zeros=p-q
        dim as string ref=copys,msg="No repeats in range"
        dim as integer flag,in,counter=1,ln=len(copys),n
        #macro checksingle()
        do
        for n  =0 to lcs-1
            if copys[n]<>copys[n+1] then  exit do
        next n
           if n= lcs then return chr(copys[0])
        loop
        #endmacro
        start:
        var lcs=Len(copys)-1
        checksingle()
        For z As Integer=0 To lcs
            temp=temp+Chr(copys[z])
            im=mid(copys,z+1)
            in= instr(im,temp)
            if in>1 then flag=1
            if z>0 and flag then
            if in=1 then exit for
            lasttemp=temp
            end if
        next z
        if len(ref)<1 then return msg
             if in<>1 then
            counter=counter+1
             ref=mid(ref,counter)
           copys=ref:flag=0:temp=""
           goto start
         end if 
         if len(lasttemp)>=len(ref) then return msg
         if zeros then
             var l=len(lasttemp)
             lasttemp=rtrim(lasttemp,"0")
             var m=len(lasttemp)
             var st=string(l-m,"0")
             lasttemp=st+lasttemp
         end if
             return lasttemp
    end function
    
    
    Function factorial(num As String) As String 
        Static  As Ubyte _Mod(0 To 99),_Div(0 To 99),flag=0
        If flag=0 Then
            For z As Integer=0 To 99:_Mod(z)=(z Mod 10+48):_Div(z)=z\10:Next
                flag=1
            End If
            Var fact="1",a="",b="",c=""
            Dim As Ubyte n,carry,ai
            For z As Integer=1 To Valint(num)
                a=fact:b=Str(z):Var la =Len(a),lb =Len(b)
                c =String(la+lb,"0")
                For i As Integer =la-1 To 0 Step -1
                    carry=0:ai=a[i]-48
                    For j As Integer =lb-1 To 0 Step -1
                        n =ai*(b[j]-48)+(c[i+j+1]-48)+carry
                        carry =_Div(n):c[i+j+1]=_Mod(n)
                    Next j
                    c[i]+=carry
                Next i
                fact=Ltrim(c,"0")
            Next z
            Return fact
        End Function
     '=================  test ==============================
        
        precision()=30
        
        var e=exp(fr(1))
        print e
        print e.val
        print str(exp(1))
        
        
        precision()=80
        
        for n as rational="0" to "1/2" step "1/77"
            print n,n.val
        next
        print "press a key"
        sleep
        
        dim as rational x= fr("1220045888")/fr("52")
        print x.val
        print round_(x.val,22)
       
        print 1220045888/52
        print
        
        precision()=5000
        dim as rational z="1/1777"
        print z.val
        print
        var rep=GetRepeat(z.val)
        print
        color 2
        print " ";rep
        Color 15
    Print "   (Green is repeating)"
    print "length of number ";len(x.val)
    print "length of repeat ";len(rep)
   
    sleep

    