typedef   signed char       int8;
typedef unsigned char      uint8;
typedef   signed short      int16;
typedef unsigned short     uint16;
typedef   signed int        int32;
typedef unsigned int       uint32;
typedef   signed long long  int64;
typedef unsigned long long uint64;
typedef struct { char *data; int64 len; int64 size; } FBSTRING;
typedef int8 boolean;
struct $N4MATH8RATIONALE {
	int64 _N;
	int64 _D;
};
#define __FB_STATIC_ASSERT( expr ) extern int __$fb_structsizecheck[(expr) ? 1 : -1]
__FB_STATIC_ASSERT( sizeof( struct $N4MATH8RATIONALE ) == 16 );
struct $N4MATH7COMPLEXE {
	double R;
	double I;
};
__FB_STATIC_ASSERT( sizeof( struct $N4MATH7COMPLEXE ) == 16 );
struct $N4MATH4VEC2E {
	double X;
	double Y;
};
__FB_STATIC_ASSERT( sizeof( struct $N4MATH4VEC2E ) == 16 );
struct $N4MATH4PVECE {
	double _A;
	double _R;
};
__FB_STATIC_ASSERT( sizeof( struct $N4MATH4PVECE ) == 16 );
struct $N4MATH4VEC3E {
	double X;
	double Y;
	double Z;
};
__FB_STATIC_ASSERT( sizeof( struct $N4MATH4VEC3E ) == 24 );
struct $N4MATH4CVECE {
	double Z;
	double _A;
	double _R;
};
__FB_STATIC_ASSERT( sizeof( struct $N4MATH4CVECE ) == 24 );
struct $N4MATH4VEC4E {
	double X;
	double Y;
	double Z;
	double W;
};
__FB_STATIC_ASSERT( sizeof( struct $N4MATH4VEC4E ) == 32 );
struct $N4MATH10QUATERNIONE {
	double X;
	double Y;
	double Z;
	double W;
};
__FB_STATIC_ASSERT( sizeof( struct $N4MATH10QUATERNIONE ) == 32 );
struct $N4MATH10BASEMATRIXE {
	double* _P;
};
__FB_STATIC_ASSERT( sizeof( struct $N4MATH10BASEMATRIXE ) == 8 );
struct $N4MATH4MAT2E {
	struct $N4MATH10BASEMATRIXE BASE$;
};
__FB_STATIC_ASSERT( sizeof( struct $N4MATH4MAT2E ) == 8 );
struct $N4MATH4MAT3E {
	struct $N4MATH10BASEMATRIXE BASE$;
};
__FB_STATIC_ASSERT( sizeof( struct $N4MATH4MAT3E ) == 8 );
struct $N4MATH4MAT4E {
	struct $N4MATH10BASEMATRIXE BASE$;
};
__FB_STATIC_ASSERT( sizeof( struct $N4MATH4MAT4E ) == 8 );
struct $N4MATH9BASEARRAYE {
	int64 _L;
};
__FB_STATIC_ASSERT( sizeof( struct $N4MATH9BASEARRAYE ) == 8 );
struct $N4MATH5ARRAYE {
	struct $N4MATH9BASEARRAYE BASE$;
	double* _P;
	double _D;
};
__FB_STATIC_ASSERT( sizeof( struct $N4MATH5ARRAYE ) == 24 );
typedef void (*tmp$1293)( double* );
typedef void (*tmp$1294)( double*, int64* );
typedef boolean (*tmp$1295)( double* );
typedef boolean (*tmp$1296)( double*, int64* );
typedef double (*tmp$1297)( double* );
typedef double (*tmp$1298)( double*, int64* );
struct $N4MATH12COMPLEXARRAYE {
	struct $N4MATH9BASEARRAYE BASE$;
	struct $N4MATH7COMPLEXE* _P;
	struct $N4MATH7COMPLEXE _D;
};
__FB_STATIC_ASSERT( sizeof( struct $N4MATH12COMPLEXARRAYE ) == 32 );
typedef void (*tmp$1358)( struct $N4MATH7COMPLEXE* );
typedef void (*tmp$1359)( struct $N4MATH7COMPLEXE*, int64* );
typedef boolean (*tmp$1360)( struct $N4MATH7COMPLEXE* );
typedef boolean (*tmp$1361)( struct $N4MATH7COMPLEXE*, int64* );
typedef struct $N4MATH7COMPLEXE (*tmp$1362)( struct $N4MATH7COMPLEXE* );
struct $N4MATH7V2ARRAYE {
	struct $N4MATH9BASEARRAYE BASE$;
	struct $N4MATH4VEC2E* _P;
	struct $N4MATH4VEC2E _D;
};
__FB_STATIC_ASSERT( sizeof( struct $N4MATH7V2ARRAYE ) == 32 );
typedef void (*tmp$1491)( struct $N4MATH4VEC2E* );
typedef void (*tmp$1492)( struct $N4MATH4VEC2E*, int64* );
typedef boolean (*tmp$1493)( struct $N4MATH4VEC2E* );
typedef boolean (*tmp$1494)( struct $N4MATH4VEC2E*, int64* );
typedef struct $N4MATH4VEC2E (*tmp$1495)( struct $N4MATH4VEC2E* );
struct $N4MATH7V3ARRAYE {
	struct $N4MATH9BASEARRAYE BASE$;
	struct $N4MATH4VEC3E* _P;
	struct $N4MATH4VEC3E _D;
};
__FB_STATIC_ASSERT( sizeof( struct $N4MATH7V3ARRAYE ) == 40 );
typedef void (*tmp$1622)( struct $N4MATH4VEC3E* );
typedef void (*tmp$1623)( struct $N4MATH4VEC3E*, int64* );
typedef boolean (*tmp$1624)( struct $N4MATH4VEC3E* );
typedef boolean (*tmp$1625)( struct $N4MATH4VEC3E*, int64* );
typedef struct $N4MATH4VEC3E (*tmp$1626)( struct $N4MATH4VEC3E* );
struct $N4MATH7V4ARRAYE {
	struct $N4MATH9BASEARRAYE BASE$;
	struct $N4MATH4VEC4E* _P;
	struct $N4MATH4VEC4E _D;
};
__FB_STATIC_ASSERT( sizeof( struct $N4MATH7V4ARRAYE ) == 48 );
#define fb_D2L( value ) ((int64)__builtin_nearbyint( value ))
double pow( double, double );
int32 fb_SGNDouble( double );
double fb_FIXDouble( double );
double fb_FRACd( double );
double atan2( double, double );
void* malloc( uint64 );
void free( void* );
void fb_PrintString( int32, FBSTRING*, int32 );
FBSTRING* fb_StrInit( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
FBSTRING* fb_StrAllocTempResult( FBSTRING* );
FBSTRING* fb_StrAllocTempDescZEx( char*, int64 );
FBSTRING* fb_LongintToStr( int64 );
FBSTRING* fb_DoubleToStr( double );
void fb_Init( int32, char**, int32 );
void fb_End( int32 );
void fb_Sleep( int32 );
double _ZN4MATH5ACOSHERKd( double* );
double _ZN4MATH4ACOTERKd( double* );
double _ZN4MATH5ACOTHERKd( double* );
double _ZN4MATH4ACRDERKd( double* );
double _ZN4MATH4ACSCERKd( double* );
double _ZN4MATH6ACVCOSERKd( double* );
double _ZN4MATH6ACVSINERKd( double* );
double _ZN4MATH6AEXCSCERKd( double* );
double _ZN4MATH6AEXSECERKd( double* );
double _ZN4MATH7AHCVCOSERKd( double* );
double _ZN4MATH7AHCVSINERKd( double* );
double _ZN4MATH6AHVCOSERKd( double* );
double _ZN4MATH6AHVSINERKd( double* );
double _ZN4MATH4ASECERKd( double* );
double _ZN4MATH5ASINHERKd( double* );
double _ZN4MATH5ATANHERKd( double* );
double _ZN4MATH5AVCOSERKd( double* );
double _ZN4MATH5AVSINERKd( double* );
double _ZN4MATH5CLAMPERKd( double* );
double _ZN4MATH4COSHERKd( double* );
double _ZN4MATH3COTERKd( double* );
double _ZN4MATH4COTHERKd( double* );
double _ZN4MATH3CRDERKd( double* );
double _ZN4MATH3CSCERKd( double* );
double _ZN4MATH4CSCHERKd( double* );
double _ZN4MATH5CVCOSERKd( double* );
double _ZN4MATH5CVSINERKd( double* );
double _ZN4MATH5EXCSCERKd( double* );
double _ZN4MATH5EXSECERKd( double* );
int64 _ZN4MATH3GCDERKxS1_( int64*, int64* );
double _ZN4MATH6HCVCOSERKd( double* );
double _ZN4MATH6HCVSINERKd( double* );
double _ZN4MATH5HVCOSERKd( double* );
double _ZN4MATH5HVSINERKd( double* );
double _ZN4MATH5HYPOTERKdS1_( double*, double* );
double _ZN4MATH4LOG2ERKd( double* );
double _ZN4MATH5LOG10ERKd( double* );
double _ZN4MATH5LOG1PERKd( double* );
double _ZN4MATH4LOGBERKdS1_( double*, double* );
double _ZN4MATH3MAXERKdS1_( double*, double* );
double _ZN4MATH3MAXERKdS1_S1_( double*, double*, double* );
double _ZN4MATH3MAXERKdS1_S1_S1_( double*, double*, double*, double* );
void _ZN4MATH4ROTZERdS0_RKd( double*, double*, double* );
double _ZN4MATH3SECERKd( double* );
double _ZN4MATH4SECHERKd( double* );
double _ZN4MATH4SINHERKd( double* );
double _ZN4MATH4TANHERKd( double* );
double _ZN4MATH5THETAERKdS1_( double*, double* );
double _ZN4MATH4VCOSERKd( double* );
double _ZN4MATH4VSINERKd( double* );
double _ZN4MATH4WRAPERKd( double* );
double _ZN4MATH4WRAPERKdS1_( double*, double* );
void _ZN4MATH8RATIONALC1Ev( struct $N4MATH8RATIONALE* );
void _ZN4MATH8RATIONALC1ERKxS2_( struct $N4MATH8RATIONALE*, int64*, int64* );
void _ZN4MATH8RATIONALC1ERKS0_( struct $N4MATH8RATIONALE*, struct $N4MATH8RATIONALE* );
double _ZNK4MATH8RATIONALcvdEv( struct $N4MATH8RATIONALE* );
int64 _ZNK4MATH8RATIONAL8D__get__Ev( struct $N4MATH8RATIONALE* );
int64 _ZNK4MATH8RATIONAL8N__get__Ev( struct $N4MATH8RATIONALE* );
void _ZN4MATH7COMPLEXC1Ev( struct $N4MATH7COMPLEXE* );
void _ZN4MATH7COMPLEXC1ERKdS2_( struct $N4MATH7COMPLEXE*, double*, double* );
void _ZN4MATH7COMPLEXC1ERKS0_( struct $N4MATH7COMPLEXE*, struct $N4MATH7COMPLEXE* );
void _ZN4MATH7COMPLEXpLERKd( struct $N4MATH7COMPLEXE*, double* );
void _ZN4MATH7COMPLEXpLERKS0_( struct $N4MATH7COMPLEXE*, struct $N4MATH7COMPLEXE* );
void _ZN4MATH7COMPLEXmIERKd( struct $N4MATH7COMPLEXE*, double* );
void _ZN4MATH7COMPLEXmIERKS0_( struct $N4MATH7COMPLEXE*, struct $N4MATH7COMPLEXE* );
void _ZN4MATH7COMPLEXmLERKd( struct $N4MATH7COMPLEXE*, double* );
void _ZN4MATH7COMPLEXmLERKS0_( struct $N4MATH7COMPLEXE*, struct $N4MATH7COMPLEXE* );
void _ZN4MATH7COMPLEXdVERKS0_( struct $N4MATH7COMPLEXE*, struct $N4MATH7COMPLEXE* );
void _ZN4MATH7COMPLEXaSERKS0_( struct $N4MATH7COMPLEXE*, struct $N4MATH7COMPLEXE* );
double _ZNK4MATH7COMPLEX15ARGUMENT__get__Ev( struct $N4MATH7COMPLEXE* );
double _ZNK4MATH7COMPLEX14MODULUS__get__Ev( struct $N4MATH7COMPLEXE* );
FBSTRING* _ZNK4MATH7COMPLEX6TOJSONERKb( struct $N4MATH7COMPLEXE*, boolean* );
struct $N4MATH7COMPLEXE _ZN4MATHplERKdRKNS_7COMPLEXE( double*, struct $N4MATH7COMPLEXE* );
struct $N4MATH7COMPLEXE _ZN4MATHdvERKdRKNS_7COMPLEXE( double*, struct $N4MATH7COMPLEXE* );
struct $N4MATH7COMPLEXE _ZN4MATHdvERKNS_7COMPLEXERKd( struct $N4MATH7COMPLEXE*, double* );
struct $N4MATH7COMPLEXE _ZN4MATHdvERKNS_7COMPLEXES2_( struct $N4MATH7COMPLEXE*, struct $N4MATH7COMPLEXE* );
double _ZN4MATHv13absERKNS_7COMPLEXE( struct $N4MATH7COMPLEXE* );
struct $N4MATH7COMPLEXE _ZN4MATHv13logERKNS_7COMPLEXE( struct $N4MATH7COMPLEXE* );
struct $N4MATH7COMPLEXE _ZN4MATH4COSHERKNS_7COMPLEXE( struct $N4MATH7COMPLEXE* );
struct $N4MATH7COMPLEXE _ZN4MATH4SINHERKNS_7COMPLEXE( struct $N4MATH7COMPLEXE* );
void _ZN4MATH4VEC2C1Ev( struct $N4MATH4VEC2E* );
void _ZN4MATH4VEC2C1ERKdS2_( struct $N4MATH4VEC2E*, double*, double* );
void _ZN4MATH4VEC2C1ERKS0_( struct $N4MATH4VEC2E*, struct $N4MATH4VEC2E* );
void _ZN4MATH4VEC2pLERKS0_( struct $N4MATH4VEC2E*, struct $N4MATH4VEC2E* );
void _ZN4MATH4VEC2mIERKS0_( struct $N4MATH4VEC2E*, struct $N4MATH4VEC2E* );
void _ZN4MATH4VEC2mLERKd( struct $N4MATH4VEC2E*, double* );
void _ZN4MATH4VEC2mLERKS0_( struct $N4MATH4VEC2E*, struct $N4MATH4VEC2E* );
FBSTRING* _ZNK4MATH4VEC2cv8FBSTRINGEv( struct $N4MATH4VEC2E* );
void _ZN4MATH4VEC2aSERKS0_( struct $N4MATH4VEC2E*, struct $N4MATH4VEC2E* );
double _ZNK4MATH4VEC211NORM__get__Ev( struct $N4MATH4VEC2E* );
double _ZNK4MATH4VEC212THETA__get__Ev( struct $N4MATH4VEC2E* );
struct $N4MATH4VEC2E _ZN4MATH4VEC29FROMPOLARERKdS2_( double*, double* );
void _ZN4MATH4VEC26ROTATEERKd( struct $N4MATH4VEC2E*, double* );
FBSTRING* _ZNK4MATH4VEC26TOJSONERKb( struct $N4MATH4VEC2E*, boolean* );
void _ZN4MATH4PVECC1Ev( struct $N4MATH4PVECE* );
void _ZN4MATH4PVECC1ERKdS2_( struct $N4MATH4PVECE*, double*, double* );
double _ZNK4MATH4PVEC10RHO__get__Ev( struct $N4MATH4PVECE* );
double _ZNK4MATH4PVEC12THETA__get__Ev( struct $N4MATH4PVECE* );
double _ZNK4MATH4PVEC8X__get__Ev( struct $N4MATH4PVECE* );
double _ZNK4MATH4PVEC8Y__get__Ev( struct $N4MATH4PVECE* );
void _ZN4MATH4VEC3C1Ev( struct $N4MATH4VEC3E* );
void _ZN4MATH4VEC3C1ERKdS2_S2_( struct $N4MATH4VEC3E*, double*, double*, double* );
void _ZN4MATH4VEC3C1ERKS0_( struct $N4MATH4VEC3E*, struct $N4MATH4VEC3E* );
void _ZN4MATH4VEC3pLERKS0_( struct $N4MATH4VEC3E*, struct $N4MATH4VEC3E* );
void _ZN4MATH4VEC3mIERKS0_( struct $N4MATH4VEC3E*, struct $N4MATH4VEC3E* );
void _ZN4MATH4VEC3mLERKS0_( struct $N4MATH4VEC3E*, struct $N4MATH4VEC3E* );
void _ZN4MATH4VEC3aSERKNS_4VEC2E( struct $N4MATH4VEC3E*, struct $N4MATH4VEC2E* );
void _ZN4MATH4VEC3aSERKNS_4PVECE( struct $N4MATH4VEC3E*, struct $N4MATH4PVECE* );
void _ZN4MATH4VEC3aSERKS0_( struct $N4MATH4VEC3E*, struct $N4MATH4VEC3E* );
double _ZNK4MATH4VEC311NORM__get__Ev( struct $N4MATH4VEC3E* );
double _ZNK4MATH4VEC312THETA__get__Ev( struct $N4MATH4VEC3E* );
void _ZN4MATH4VEC39NORMALISEEv( struct $N4MATH4VEC3E* );
FBSTRING* _ZNK4MATH4VEC36TOJSONERKb( struct $N4MATH4VEC3E*, boolean* );
void _ZN4MATH4CVECC1ERKdS2_S2_( struct $N4MATH4CVECE*, double*, double*, double* );
struct $N4MATH4VEC3E _ZNK4MATH4CVECcvNS_4VEC3EEv( struct $N4MATH4CVECE* );
double _ZNK4MATH4CVEC11NORM__get__Ev( struct $N4MATH4CVECE* );
double _ZNK4MATH4CVEC8X__get__Ev( struct $N4MATH4CVECE* );
double _ZNK4MATH4CVEC8Y__get__Ev( struct $N4MATH4CVECE* );
void _ZN4MATH4VEC4C1Ev( struct $N4MATH4VEC4E* );
void _ZN4MATH4VEC4C1ERKdS2_S2_S2_( struct $N4MATH4VEC4E*, double*, double*, double*, double* );
void _ZN4MATH4VEC4C1ERKS0_( struct $N4MATH4VEC4E*, struct $N4MATH4VEC4E* );
void _ZN4MATH4VEC4aSERKS0_( struct $N4MATH4VEC4E*, struct $N4MATH4VEC4E* );
double _ZNK4MATH4VEC411NORM__get__Ev( struct $N4MATH4VEC4E* );
void _ZN4MATH10QUATERNIONC1Ev( struct $N4MATH10QUATERNIONE* );
void _ZN4MATH10QUATERNIONC1ERKdS2_S2_S2_( struct $N4MATH10QUATERNIONE*, double*, double*, double*, double* );
void _ZN4MATH10QUATERNIONC1ERKS0_( struct $N4MATH10QUATERNIONE*, struct $N4MATH10QUATERNIONE* );
double _ZNK4MATH10QUATERNION11NORM__get__Ev( struct $N4MATH10QUATERNIONE* );
void _ZN4MATH10BASEMATRIXD1Ev( struct $N4MATH10BASEMATRIXE* );
double* _ZNK4MATH10BASEMATRIX11DATA__get__Ev( struct $N4MATH10BASEMATRIXE* );
void _ZN4MATH4MAT2C1Ev( struct $N4MATH4MAT2E* );
void _ZN4MATH4MAT2C1ERKS0_( struct $N4MATH4MAT2E*, struct $N4MATH4MAT2E* );
static void _ZN4MATH4MAT2D1Ev( struct $N4MATH4MAT2E* );
void _ZN4MATH4MAT3C1Ev( struct $N4MATH4MAT3E* );
void _ZN4MATH4MAT3C1ERKS0_( struct $N4MATH4MAT3E*, struct $N4MATH4MAT3E* );
static void _ZN4MATH4MAT3D1Ev( struct $N4MATH4MAT3E* );
void _ZN4MATH4MAT4C1Ev( struct $N4MATH4MAT4E* );
void _ZN4MATH4MAT4C1ERKS0_( struct $N4MATH4MAT4E*, struct $N4MATH4MAT4E* );
struct $N4MATH4MAT4E* _ZN4MATH4MAT413FROMAXISANGLEERKdS2_S2_S2_( struct $N4MATH4MAT4E*, double*, double*, double*, double* );
static void _ZN4MATH4MAT4D1Ev( struct $N4MATH4MAT4E* );
double* _ZNK4MATH5ARRAY11DATA__get__Ev( struct $N4MATH5ARRAYE* );
void _ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( struct $N4MATH5ARRAYE*, int64* );
void _ZN4MATH12COMPLEXARRAY13LENGTH__set__ERKu7INTEGER( struct $N4MATH12COMPLEXARRAYE*, int64* );
struct $N4MATH4VEC2E* _ZNK4MATH7V2ARRAY11DATA__get__Ev( struct $N4MATH7V2ARRAYE* );
void _ZN4MATH7V2ARRAY13LENGTH__set__ERKu7INTEGER( struct $N4MATH7V2ARRAYE*, int64* );
struct $N4MATH4VEC3E* _ZNK4MATH7V3ARRAY11DATA__get__Ev( struct $N4MATH7V3ARRAYE* );
void _ZN4MATH7V3ARRAY13LENGTH__set__ERKu7INTEGER( struct $N4MATH7V3ARRAYE*, int64* );

double _ZN4MATH5ACOSHERKd( double* N$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$2:;
	fb$result$1 = __builtin_log( (*N$1 + __builtin_sqrt( ((*N$1 * *N$1) + -0x1.p+0) )) );
	goto label$3;
	label$3:;
	return fb$result$1;
}

double _ZN4MATH4ACOTERKd( double* N$1 )
{
	double TMP$9$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$4:;
	if( *N$1 == 0x0p+0 ) goto label$6;
	TMP$9$1 = __builtin_atan( (0x1.p+0 / *N$1) );
	goto label$7;
	label$6:;
	TMP$9$1 = 0x0p+0;
	label$7:;
	fb$result$1 = TMP$9$1;
	goto label$5;
	label$5:;
	return fb$result$1;
}

double _ZN4MATH5ACOTHERKd( double* N$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$8:;
	if( *N$1 == 0x0p+0 ) goto label$11;
	{
		double M$2;
		M$2 = 0x1.p+0 / *N$1;
		fb$result$1 = (__builtin_log( (M$2 + 0x1.p+0) ) - __builtin_log( (0x1.p+0 - M$2) )) * 0x1.p-1;
		goto label$9;
	}
	label$11:;
	label$10:;
	fb$result$1 = 0x0p+0;
	goto label$9;
	label$9:;
	return fb$result$1;
}

double _ZN4MATH4ACRDERKd( double* N$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$12:;
	fb$result$1 = __builtin_asin( (*N$1 * 0x1.p-1) ) * 0x1.p+1;
	goto label$13;
	label$13:;
	return fb$result$1;
}

double _ZN4MATH4ACSCERKd( double* N$1 )
{
	double TMP$10$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$14:;
	if( *N$1 == 0x0p+0 ) goto label$16;
	TMP$10$1 = __builtin_asin( (0x1.p+0 / *N$1) );
	goto label$17;
	label$16:;
	TMP$10$1 = 0x0p+0;
	label$17:;
	fb$result$1 = TMP$10$1;
	goto label$15;
	label$15:;
	return fb$result$1;
}

double _ZN4MATH6ACVCOSERKd( double* N$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$18:;
	fb$result$1 = __builtin_asin( (*N$1 + -0x1.p+0) );
	goto label$19;
	label$19:;
	return fb$result$1;
}

double _ZN4MATH6ACVSINERKd( double* N$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$20:;
	fb$result$1 = __builtin_asin( (-(*N$1) + 0x1.p+0) );
	goto label$21;
	label$21:;
	return fb$result$1;
}

double _ZN4MATH6AEXCSCERKd( double* N$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$22:;
	fb$result$1 = __builtin_asin( (0x1.p+0 / (*N$1 + 0x1.p+0)) );
	goto label$23;
	label$23:;
	return fb$result$1;
}

double _ZN4MATH6AEXSECERKd( double* N$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$24:;
	fb$result$1 = __builtin_acos( (0x1.p+0 / (*N$1 + 0x1.p+0)) );
	goto label$25;
	label$25:;
	return fb$result$1;
}

double _ZN4MATH7AHCVCOSERKd( double* N$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$26:;
	fb$result$1 = __builtin_asin( ((*N$1 * 0x1.p+1) + -0x1.p+0) );
	goto label$27;
	label$27:;
	return fb$result$1;
}

double _ZN4MATH7AHCVSINERKd( double* N$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$28:;
	fb$result$1 = __builtin_asin( (-(*N$1 * 0x1.p+1) + 0x1.p+0) );
	goto label$29;
	label$29:;
	return fb$result$1;
}

double _ZN4MATH6AHVCOSERKd( double* N$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$30:;
	fb$result$1 = __builtin_acos( ((*N$1 * 0x1.p+1) + 0x1.p+0) );
	goto label$31;
	label$31:;
	return fb$result$1;
}

double _ZN4MATH6AHVSINERKd( double* N$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$32:;
	fb$result$1 = __builtin_acos( (-(*N$1 * 0x1.p+1) + 0x1.p+0) );
	goto label$33;
	label$33:;
	return fb$result$1;
}

double _ZN4MATH4ASECERKd( double* N$1 )
{
	double TMP$11$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$34:;
	if( *N$1 == 0x0p+0 ) goto label$36;
	TMP$11$1 = __builtin_acos( (0x1.p+0 / *N$1) );
	goto label$37;
	label$36:;
	TMP$11$1 = 0x0p+0;
	label$37:;
	fb$result$1 = TMP$11$1;
	goto label$35;
	label$35:;
	return fb$result$1;
}

double _ZN4MATH5ASINHERKd( double* N$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$38:;
	fb$result$1 = __builtin_log( (*N$1 + __builtin_sqrt( ((*N$1 * *N$1) + 0x1.p+0) )) );
	goto label$39;
	label$39:;
	return fb$result$1;
}

double _ZN4MATH5ATANHERKd( double* N$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$40:;
	fb$result$1 = __builtin_log( ((*N$1 + 0x1.p+0) / (-(*N$1) + 0x1.p+0)) ) * 0x1.p-1;
	goto label$41;
	label$41:;
	return fb$result$1;
}

double _ZN4MATH5AVCOSERKd( double* N$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$42:;
	fb$result$1 = __builtin_acos( (*N$1 + -0x1.p+0) );
	goto label$43;
	label$43:;
	return fb$result$1;
}

double _ZN4MATH3AVGERKdS1_( double* N1$1, double* N2$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$44:;
	fb$result$1 = (*N1$1 + *N2$1) * 0x1.p-1;
	goto label$45;
	label$45:;
	return fb$result$1;
}

double _ZN4MATH3AVGERKdS1_S1_( double* N1$1, double* N2$1, double* N3$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$46:;
	fb$result$1 = ((*N1$1 + *N2$1) + *N3$1) * 0x1.5555555555555p-2;
	goto label$47;
	label$47:;
	return fb$result$1;
}

double _ZN4MATH3AVGERKdS1_S1_S1_( double* N1$1, double* N2$1, double* N3$1, double* N4$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$48:;
	fb$result$1 = (((*N1$1 + *N2$1) + *N3$1) + *N4$1) * 0x1.p-2;
	goto label$49;
	label$49:;
	return fb$result$1;
}

double _ZN4MATH3AVGERKu7INTEGERRKPKd( int64* N$1, double** P$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$50:;
	if( ((int64)-(*N$1 > 0ll) & (int64)-(*P$1 != (double*)0ull)) == 0ll ) goto label$53;
	{
		double R$2;
		__builtin_memset( &R$2, 0, 8ll );
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$12$3;
			TMP$12$3 = *N$1 + -1ll;
			goto label$54;
			label$57:;
			{
				R$2 = R$2 + *(double*)((uint8*)*P$1 + (I$3 << (3ll & 63ll)));
			}
			label$55:;
			I$3 = I$3 + 1ll;
			label$54:;
			if( I$3 <= TMP$12$3 ) goto label$57;
			label$56:;
		}
		fb$result$1 = R$2 / (double)*N$1;
		goto label$51;
	}
	label$53:;
	label$52:;
	fb$result$1 = 0x0p+0;
	goto label$51;
	label$51:;
	return fb$result$1;
}

double _ZN4MATH5AVSINERKd( double* N$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$58:;
	fb$result$1 = __builtin_acos( (-(*N$1) + 0x1.p+0) );
	goto label$59;
	label$59:;
	return fb$result$1;
}

double _ZN4MATH3CBRERKd( double* N$1 )
{
	double TMP$13$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$60:;
	if( *N$1 >= 0x0p+0 ) goto label$62;
	double vr$3 = pow( *N$1, 0x1.5555555555555p-2 );
	TMP$13$1 = vr$3;
	goto label$63;
	label$62:;
	double vr$7 = pow( *N$1, 0x1.5555555555555p-2 );
	TMP$13$1 = vr$7;
	label$63:;
	fb$result$1 = TMP$13$1;
	goto label$61;
	label$61:;
	return fb$result$1;
}

double _ZN4MATH4CEILERKd( double* N$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$64:;
	double vr$2 = fb_FIXDouble( *N$1 );
	fb$result$1 = (double)fb_D2L( vr$2 ) + 0x1.p+0;
	goto label$65;
	label$65:;
	return fb$result$1;
}

double _ZN4MATH5CLAMPERKd( double* N$1 )
{
	double TMP$14$1;
	double TMP$15$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$66:;
	if( *N$1 >= 0x0p+0 ) goto label$69;
	TMP$15$1 = 0x0p+0;
	goto label$70;
	label$69:;
	if( *N$1 <= 0x1.p+0 ) goto label$68;
	TMP$14$1 = 0x1.p+0;
	goto label$71;
	label$68:;
	TMP$14$1 = *N$1;
	label$71:;
	TMP$15$1 = TMP$14$1;
	label$70:;
	fb$result$1 = TMP$15$1;
	goto label$67;
	label$67:;
	return fb$result$1;
}

double _ZN4MATH5CLAMPERKdS1_( double* N$1, double* NMAX$1 )
{
	double TMP$16$1;
	double TMP$17$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$72:;
	if( *N$1 >= 0x0p+0 ) goto label$75;
	TMP$17$1 = 0x0p+0;
	goto label$76;
	label$75:;
	if( *NMAX$1 >= *N$1 ) goto label$74;
	TMP$16$1 = *NMAX$1;
	goto label$77;
	label$74:;
	TMP$16$1 = *N$1;
	label$77:;
	TMP$17$1 = TMP$16$1;
	label$76:;
	fb$result$1 = TMP$17$1;
	goto label$73;
	label$73:;
	return fb$result$1;
}

double _ZN4MATH5CLAMPERKdS1_S1_( double* N$1, double* NMIN$1, double* NMAX$1 )
{
	double TMP$18$1;
	double TMP$19$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$78:;
	if( *N$1 >= *NMIN$1 ) goto label$81;
	TMP$19$1 = *NMIN$1;
	goto label$82;
	label$81:;
	if( *NMAX$1 >= *N$1 ) goto label$80;
	TMP$18$1 = *NMAX$1;
	goto label$83;
	label$80:;
	TMP$18$1 = *N$1;
	label$83:;
	TMP$19$1 = TMP$18$1;
	label$82:;
	fb$result$1 = TMP$19$1;
	goto label$79;
	label$79:;
	return fb$result$1;
}

boolean _ZN4MATH3CMPERKdS1_S1_( double* N1$1, double* N2$1, double* T$1 )
{
	boolean TMP$20$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$84:;
	if( __builtin_fabs( (*N1$1 - *N2$1) ) > __builtin_fabs( *T$1 ) ) goto label$86;
	TMP$20$1 = (boolean)1ll;
	goto label$87;
	label$86:;
	TMP$20$1 = (boolean)0ll;
	label$87:;
	fb$result$1 = TMP$20$1;
	goto label$85;
	label$85:;
	return fb$result$1;
}

double _ZN4MATH4COSHERKd( double* T$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$88:;
	fb$result$1 = (__builtin_exp( *T$1 ) + __builtin_exp( -(*T$1) )) * 0x1.p-1;
	goto label$89;
	label$89:;
	return fb$result$1;
}

double _ZN4MATH3COTERKd( double* T$1 )
{
	double TMP$21$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$90:;
	double S$1;
	S$1 = __builtin_tan( *T$1 );
	if( S$1 == 0x0p+0 ) goto label$92;
	TMP$21$1 = 0x1.p+0 / S$1;
	goto label$93;
	label$92:;
	TMP$21$1 = 0x0p+0;
	label$93:;
	fb$result$1 = TMP$21$1;
	goto label$91;
	label$91:;
	return fb$result$1;
}

double _ZN4MATH4COTHERKd( double* T$1 )
{
	double TMP$22$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$94:;
	double S$1;
	double vr$1 = _ZN4MATH4TANHERKd( T$1 );
	S$1 = vr$1;
	if( S$1 == 0x0p+0 ) goto label$96;
	TMP$22$1 = 0x1.p+0 / S$1;
	goto label$97;
	label$96:;
	TMP$22$1 = 0x0p+0;
	label$97:;
	fb$result$1 = TMP$22$1;
	goto label$95;
	label$95:;
	return fb$result$1;
}

double _ZN4MATH3CRDERKd( double* T$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$98:;
	fb$result$1 = __builtin_sin( (*T$1 * 0x1.p-1) ) * 0x1.p+1;
	goto label$99;
	label$99:;
	return fb$result$1;
}

double _ZN4MATH3CSCERKd( double* T$1 )
{
	double TMP$23$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$100:;
	double S$1;
	S$1 = __builtin_sin( *T$1 );
	if( S$1 == 0x0p+0 ) goto label$102;
	TMP$23$1 = 0x1.p+0 / S$1;
	goto label$103;
	label$102:;
	TMP$23$1 = 0x0p+0;
	label$103:;
	fb$result$1 = TMP$23$1;
	goto label$101;
	label$101:;
	return fb$result$1;
}

double _ZN4MATH4CSCHERKd( double* T$1 )
{
	double TMP$24$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$104:;
	double S$1;
	double vr$1 = _ZN4MATH4SINHERKd( T$1 );
	S$1 = vr$1;
	if( S$1 == 0x0p+0 ) goto label$106;
	TMP$24$1 = 0x1.p+0 / S$1;
	goto label$107;
	label$106:;
	TMP$24$1 = 0x0p+0;
	label$107:;
	fb$result$1 = TMP$24$1;
	goto label$105;
	label$105:;
	return fb$result$1;
}

double _ZN4MATH5CVCOSERKd( double* T$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$108:;
	fb$result$1 = __builtin_sin( *T$1 ) + 0x1.p+0;
	goto label$109;
	label$109:;
	return fb$result$1;
}

double _ZN4MATH5CVSINERKd( double* T$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$110:;
	fb$result$1 = -(__builtin_sin( *T$1 )) + 0x1.p+0;
	goto label$111;
	label$111:;
	return fb$result$1;
}

double _ZN4MATH5EXCSCERKd( double* T$1 )
{
	double TMP$25$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$112:;
	double S$1;
	S$1 = __builtin_sin( *T$1 );
	if( S$1 == 0x0p+0 ) goto label$114;
	TMP$25$1 = (0x1.p+0 / S$1) + -0x1.p+0;
	goto label$115;
	label$114:;
	TMP$25$1 = 0x0p+0;
	label$115:;
	fb$result$1 = TMP$25$1;
	goto label$113;
	label$113:;
	return fb$result$1;
}

double _ZN4MATH5EXSECERKd( double* T$1 )
{
	double TMP$26$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$116:;
	double C$1;
	C$1 = __builtin_cos( *T$1 );
	if( C$1 == 0x0p+0 ) goto label$118;
	TMP$26$1 = (0x1.p+0 / C$1) + -0x1.p+0;
	goto label$119;
	label$118:;
	TMP$26$1 = 0x0p+0;
	label$119:;
	fb$result$1 = TMP$26$1;
	goto label$117;
	label$117:;
	return fb$result$1;
}

double _ZN4MATH5FLOORERKd( double* N$1 )
{
	double TMP$27$1;
	double TMP$28$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$120:;
	double vr$2 = fb_FRACd( *N$1 );
	if( vr$2 == 0x0p+0 ) goto label$123;
	if( *N$1 >= 0x0p+0 ) goto label$122;
	double vr$5 = fb_FIXDouble( *N$1 );
	TMP$27$1 = vr$5 + -0x1.p+0;
	goto label$125;
	label$122:;
	double vr$8 = fb_FIXDouble( *N$1 );
	TMP$27$1 = vr$8;
	label$125:;
	TMP$28$1 = TMP$27$1;
	goto label$124;
	label$123:;
	TMP$28$1 = *N$1;
	label$124:;
	fb$result$1 = TMP$28$1;
	goto label$121;
	label$121:;
	return fb$result$1;
}

int64 _ZN4MATH3GCDERKxS1_( int64* N1$1, int64* N2$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$126:;
	if( *(int64*)N1$1 == 0ll ) goto label$129;
	{
		if( *(int64*)N2$1 == 0ll ) goto label$131;
		{
			int64 A$3;
			A$3 = __builtin_llabs( *(int64*)N1$1 );
			int64 B$3;
			B$3 = __builtin_llabs( *(int64*)N2$1 );
			int64 T$3;
			__builtin_memset( &T$3, 0, 8ll );
			label$132:;
			if( B$3 == 0ll ) goto label$133;
			{
				T$3 = B$3;
				B$3 = A$3 % B$3;
				A$3 = T$3;
			}
			goto label$132;
			label$133:;
			fb$result$1 = A$3;
			goto label$127;
		}
		goto label$130;
		label$131:;
		{
			fb$result$1 = __builtin_llabs( *(int64*)N1$1 );
			goto label$127;
		}
		label$130:;
	}
	goto label$128;
	label$129:;
	{
		if( *(int64*)N2$1 == 0ll ) goto label$135;
		{
			fb$result$1 = __builtin_llabs( *(int64*)N2$1 );
			goto label$127;
		}
		goto label$134;
		label$135:;
		{
			fb$result$1 = 0ll;
			goto label$127;
		}
		label$134:;
	}
	label$128:;
	label$127:;
	return fb$result$1;
}

double _ZN4MATH6HCVCOSERKd( double* T$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$136:;
	fb$result$1 = (__builtin_sin( *T$1 ) * 0x1.p-1) + 0x1.p-1;
	goto label$137;
	label$137:;
	return fb$result$1;
}

double _ZN4MATH6HCVSINERKd( double* T$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$138:;
	fb$result$1 = (-(__builtin_sin( *T$1 )) * 0x1.p-1) + 0x1.p-1;
	goto label$139;
	label$139:;
	return fb$result$1;
}

double _ZN4MATH5HVCOSERKd( double* T$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$140:;
	fb$result$1 = (__builtin_cos( *T$1 ) * 0x1.p-1) + 0x1.p-1;
	goto label$141;
	label$141:;
	return fb$result$1;
}

double _ZN4MATH5HVSINERKd( double* T$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$142:;
	fb$result$1 = (-(__builtin_cos( *T$1 )) * 0x1.p-1) + 0x1.p-1;
	goto label$143;
	label$143:;
	return fb$result$1;
}

double _ZN4MATH5HYPOTERKdS1_( double* X$1, double* Y$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$144:;
	fb$result$1 = __builtin_sqrt( ((*X$1 * *X$1) + (*Y$1 * *Y$1)) );
	goto label$145;
	label$145:;
	return fb$result$1;
}

double _ZN4MATH5HYPOTERKdS1_S1_( double* X$1, double* Y$1, double* Z$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$146:;
	fb$result$1 = __builtin_sqrt( (((*X$1 * *X$1) + (*Y$1 * *Y$1)) + (*Z$1 * *Z$1)) );
	goto label$147;
	label$147:;
	return fb$result$1;
}

double _ZN4MATH5HYPOTERKdS1_S1_S1_( double* X$1, double* Y$1, double* Z$1, double* W$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$148:;
	fb$result$1 = __builtin_sqrt( ((((*X$1 * *X$1) + (*Y$1 * *Y$1)) + (*Z$1 * *Z$1)) + (*W$1 * *W$1)) );
	goto label$149;
	label$149:;
	return fb$result$1;
}

int64 _ZN4MATH3LCMERKxS1_( int64* A$1, int64* B$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$150:;
	int64 vr$6 = _ZN4MATH3GCDERKxS1_( A$1, B$1 );
	fb$result$1 = fb_D2L( (double)__builtin_llabs( (*(int64*)A$1 * *(int64*)B$1) ) / (double)vr$6 );
	goto label$151;
	label$151:;
	return fb$result$1;
}

double _ZN4MATH4LERPERKdS1_S1_( double* N1$1, double* N2$1, double* S$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$152:;
	double T$1;
	double vr$1 = _ZN4MATH5CLAMPERKd( S$1 );
	T$1 = vr$1;
	double U$1;
	U$1 = 0x1.p+0 - T$1;
	fb$result$1 = (*N1$1 * U$1) + (*N2$1 * T$1);
	goto label$153;
	label$153:;
	return fb$result$1;
}

double _ZN4MATH4LOG2ERKd( double* N$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$154:;
	fb$result$1 = __builtin_log( *N$1 ) / 0x1.62E42FEFA39EFp-1;
	goto label$155;
	label$155:;
	return fb$result$1;
}

double _ZN4MATH5LOG10ERKd( double* N$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$156:;
	fb$result$1 = __builtin_log( *N$1 ) / 0x1.26BB1BBB55516p+1;
	goto label$157;
	label$157:;
	return fb$result$1;
}

double _ZN4MATH5LOG1PERKd( double* N$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$158:;
	fb$result$1 = __builtin_log( (*N$1 + 0x1.p+0) );
	goto label$159;
	label$159:;
	return fb$result$1;
}

double _ZN4MATH4LOGBERKdS1_( double* N$1, double* B$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$160:;
	fb$result$1 = __builtin_log( *N$1 ) / __builtin_log( *B$1 );
	goto label$161;
	label$161:;
	return fb$result$1;
}

double _ZN4MATH3MAPERKdS1_S1_S1_S1_( double* N$1, double* MN1$1, double* MX1$1, double* MN2$1, double* MX2$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$162:;
	if( *N$1 > *MN1$1 ) goto label$165;
	{
		fb$result$1 = *MN2$1;
		goto label$163;
		label$165:;
	}
	if( *MX1$1 > *N$1 ) goto label$167;
	{
		fb$result$1 = *MX2$1;
		goto label$163;
		label$167:;
	}
	fb$result$1 = *MN2$1 + (((*N$1 - *MN1$1) / (*MX1$1 - *MN1$1)) * (*MX2$1 - *MN2$1));
	goto label$163;
	label$163:;
	return fb$result$1;
}

double _ZN4MATH3MAXERKdS1_( double* N1$1, double* N2$1 )
{
	double TMP$29$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$168:;
	if( *N1$1 >= *N2$1 ) goto label$170;
	TMP$29$1 = *N2$1;
	goto label$171;
	label$170:;
	TMP$29$1 = *N1$1;
	label$171:;
	fb$result$1 = TMP$29$1;
	goto label$169;
	label$169:;
	return fb$result$1;
}

double _ZN4MATH3MAXERKdS1_S1_( double* N1$1, double* N2$1, double* N3$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$172:;
	double R$1;
	R$1 = *N1$1;
	if( R$1 >= *N2$1 ) goto label$175;
	{
		R$1 = *N2$1;
		label$175:;
	}
	if( R$1 >= *N3$1 ) goto label$177;
	{
		R$1 = *N3$1;
		label$177:;
	}
	fb$result$1 = R$1;
	goto label$173;
	label$173:;
	return fb$result$1;
}

double _ZN4MATH3MAXERKdS1_S1_S1_( double* N1$1, double* N2$1, double* N3$1, double* N4$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$178:;
	double R$1;
	R$1 = *N1$1;
	if( R$1 >= *N2$1 ) goto label$181;
	{
		R$1 = *N2$1;
		label$181:;
	}
	if( R$1 >= *N3$1 ) goto label$183;
	{
		R$1 = *N3$1;
		label$183:;
	}
	if( R$1 >= *N4$1 ) goto label$185;
	{
		R$1 = *N4$1;
		label$185:;
	}
	fb$result$1 = R$1;
	goto label$179;
	label$179:;
	return fb$result$1;
}

double _ZN4MATH3MAXERKu7INTEGERRKPKd( int64* N$1, double** P$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$186:;
	if( ((int64)-(*N$1 >= 2ll) & (int64)-(*P$1 != (double*)0ull)) == 0ll ) goto label$189;
	{
		double R$2;
		R$2 = *(double*)*P$1;
		{
			int64 I$3;
			I$3 = 1ll;
			int64 TMP$30$3;
			TMP$30$3 = *N$1 + -1ll;
			goto label$190;
			label$193:;
			{
				if( R$2 >= *(double*)((uint8*)*P$1 + (I$3 << (3ll & 63ll))) ) goto label$195;
				{
					R$2 = *(double*)((uint8*)*P$1 + (I$3 << (3ll & 63ll)));
					label$195:;
				}
			}
			label$191:;
			I$3 = I$3 + 1ll;
			label$190:;
			if( I$3 <= TMP$30$3 ) goto label$193;
			label$192:;
		}
		fb$result$1 = R$2;
		goto label$187;
	}
	label$189:;
	label$188:;
	fb$result$1 = 0x0p+0;
	goto label$187;
	label$187:;
	return fb$result$1;
}

double _ZN4MATH3MINERKdS1_( double* N1$1, double* N2$1 )
{
	double TMP$31$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$196:;
	if( *N1$1 >= *N2$1 ) goto label$198;
	TMP$31$1 = *N1$1;
	goto label$199;
	label$198:;
	TMP$31$1 = *N2$1;
	label$199:;
	fb$result$1 = TMP$31$1;
	goto label$197;
	label$197:;
	return fb$result$1;
}

double _ZN4MATH3MINERKdS1_S1_( double* N1$1, double* N2$1, double* N3$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$200:;
	double R$1;
	R$1 = *N1$1;
	if( *N2$1 >= R$1 ) goto label$203;
	{
		R$1 = *N2$1;
		label$203:;
	}
	if( *N3$1 >= R$1 ) goto label$205;
	{
		R$1 = *N3$1;
		label$205:;
	}
	fb$result$1 = R$1;
	goto label$201;
	label$201:;
	return fb$result$1;
}

double _ZN4MATH3MINERKdS1_S1_S1_( double* N1$1, double* N2$1, double* N3$1, double* N4$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$206:;
	double R$1;
	R$1 = *N1$1;
	if( *N2$1 >= R$1 ) goto label$209;
	{
		R$1 = *N2$1;
		label$209:;
	}
	if( *N3$1 >= R$1 ) goto label$211;
	{
		R$1 = *N3$1;
		label$211:;
	}
	if( *N4$1 >= R$1 ) goto label$213;
	{
		R$1 = *N4$1;
		label$213:;
	}
	fb$result$1 = R$1;
	goto label$207;
	label$207:;
	return fb$result$1;
}

double _ZN4MATH3MINERKu7INTEGERRKPKd( int64* N$1, double** P$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$214:;
	if( ((int64)-(*N$1 >= 2ll) & (int64)-(*P$1 != (double*)0ull)) == 0ll ) goto label$217;
	{
		double R$2;
		R$2 = *(double*)*P$1;
		{
			int64 I$3;
			I$3 = 1ll;
			int64 TMP$32$3;
			TMP$32$3 = *N$1 + -1ll;
			goto label$218;
			label$221:;
			{
				if( *(double*)((uint8*)*P$1 + (I$3 << (3ll & 63ll))) >= R$2 ) goto label$223;
				{
					R$2 = *(double*)((uint8*)*P$1 + (I$3 << (3ll & 63ll)));
					label$223:;
				}
			}
			label$219:;
			I$3 = I$3 + 1ll;
			label$218:;
			if( I$3 <= TMP$32$3 ) goto label$221;
			label$220:;
		}
		fb$result$1 = R$2;
		goto label$215;
	}
	label$217:;
	label$216:;
	fb$result$1 = 0x0p+0;
	goto label$215;
	label$215:;
	return fb$result$1;
}

double _ZN4MATH3NRTERKdS1_( double* N$1, double* R$1 )
{
	double TMP$33$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$224:;
	if( *R$1 <= 0x0p+0 ) goto label$226;
	double vr$5 = pow( *N$1, 0x1.p+0 / *R$1 );
	TMP$33$1 = vr$5;
	goto label$227;
	label$226:;
	TMP$33$1 = 0x1.p+0;
	label$227:;
	fb$result$1 = TMP$33$1;
	goto label$225;
	label$225:;
	return fb$result$1;
}

double _ZN4MATH3QDTERKdS1_( double* X$1, double* Y$1 )
{
	double TMP$34$1;
	double TMP$35$1;
	double TMP$36$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$228:;
	if( *X$1 <= 0x0p+0 ) goto label$232;
	if( *Y$1 <= 0x0p+0 ) goto label$230;
	TMP$34$1 = 0x0p+0;
	goto label$234;
	label$230:;
	TMP$34$1 = 0x1.8p+1;
	label$234:;
	TMP$36$1 = TMP$34$1;
	goto label$233;
	label$232:;
	if( *Y$1 <= 0x0p+0 ) goto label$231;
	TMP$35$1 = 0x1.p+0;
	goto label$235;
	label$231:;
	TMP$35$1 = 0x1.p+1;
	label$235:;
	TMP$36$1 = TMP$35$1;
	label$233:;
	fb$result$1 = TMP$36$1;
	goto label$229;
	label$229:;
	return fb$result$1;
}

void _ZN4MATH4ROTZERdS0_RKd( double* X$1, double* Y$1, double* T$1 )
{
	label$236:;
	if( *T$1 == 0x0p+0 ) goto label$239;
	{
		double C$2;
		C$2 = __builtin_cos( *T$1 );
		double S$2;
		S$2 = __builtin_sin( *T$1 );
		double I$2;
		__builtin_memset( &I$2, 0, 8ll );
		double J$2;
		__builtin_memset( &J$2, 0, 8ll );
		I$2 = (C$2 * *X$1) - (S$2 * *Y$1);
		J$2 = (S$2 * *X$1) + (C$2 * *Y$1);
		*X$1 = I$2;
		*Y$1 = J$2;
	}
	label$239:;
	label$238:;
	label$237:;
}

double _ZN4MATH3SECERKd( double* T$1 )
{
	double TMP$37$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$240:;
	double C$1;
	C$1 = __builtin_cos( *T$1 );
	if( C$1 == 0x0p+0 ) goto label$242;
	TMP$37$1 = 0x1.p+0 / C$1;
	goto label$243;
	label$242:;
	TMP$37$1 = 0x0p+0;
	label$243:;
	fb$result$1 = TMP$37$1;
	goto label$241;
	label$241:;
	return fb$result$1;
}

double _ZN4MATH4SECHERKd( double* T$1 )
{
	double TMP$38$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$244:;
	double C$1;
	double vr$1 = _ZN4MATH4COSHERKd( T$1 );
	C$1 = vr$1;
	if( C$1 == 0x0p+0 ) goto label$246;
	TMP$38$1 = 0x1.p+0 / C$1;
	goto label$247;
	label$246:;
	TMP$38$1 = 0x0p+0;
	label$247:;
	fb$result$1 = TMP$38$1;
	goto label$245;
	label$245:;
	return fb$result$1;
}

double _ZN4MATH4SINHERKd( double* T$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$248:;
	fb$result$1 = (__builtin_exp( *T$1 ) - __builtin_exp( -(*T$1) )) * 0x1.p-1;
	goto label$249;
	label$249:;
	return fb$result$1;
}

double _ZN4MATH4TANHERKd( double* T$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$250:;
	double X$1;
	X$1 = __builtin_exp( (*T$1 * 0x1.p+1) );
	fb$result$1 = (X$1 + -0x1.p+0) / (X$1 + 0x1.p+0);
	goto label$251;
	label$251:;
	return fb$result$1;
}

double _ZN4MATH5THETAERKdS1_( double* X$1, double* Y$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$252:;
	if( *X$1 >= 0x0p+0 ) goto label$255;
	{
		if( *Y$1 >= 0x0p+0 ) goto label$257;
		{
			double vr$4 = _ZN4MATH5HYPOTERKdS1_( X$1, Y$1 );
			fb$result$1 = -(__builtin_acos( (*X$1 / vr$4) )) + 0x1.921FB54442D18p+2;
			goto label$253;
		}
		goto label$256;
		label$257:;
		if( *Y$1 <= 0x0p+0 ) goto label$258;
		{
			double vr$11 = _ZN4MATH5HYPOTERKdS1_( X$1, Y$1 );
			fb$result$1 = __builtin_acos( (*X$1 / vr$11) );
			goto label$253;
		}
		goto label$256;
		label$258:;
		{
			fb$result$1 = 0x1.921FB54442D18p+1;
			goto label$253;
		}
		label$256:;
	}
	goto label$254;
	label$255:;
	if( *X$1 <= 0x0p+0 ) goto label$259;
	{
		if( *Y$1 >= 0x0p+0 ) goto label$261;
		{
			double vr$17 = _ZN4MATH5HYPOTERKdS1_( X$1, Y$1 );
			fb$result$1 = -(__builtin_acos( (*X$1 / vr$17) )) + 0x1.921FB54442D18p+2;
			goto label$253;
		}
		goto label$260;
		label$261:;
		if( *Y$1 <= 0x0p+0 ) goto label$262;
		{
			double vr$24 = _ZN4MATH5HYPOTERKdS1_( X$1, Y$1 );
			fb$result$1 = __builtin_acos( (*X$1 / vr$24) );
			goto label$253;
		}
		goto label$260;
		label$262:;
		{
			fb$result$1 = 0x0p+0;
			goto label$253;
		}
		label$260:;
	}
	goto label$254;
	label$259:;
	{
		if( *Y$1 >= 0x0p+0 ) goto label$264;
		{
			fb$result$1 = 0x1.2D97C7F3321D2p+2;
			goto label$253;
		}
		goto label$263;
		label$264:;
		if( *Y$1 <= 0x0p+0 ) goto label$265;
		{
			fb$result$1 = 0x1.921FB54442D18p+0;
			goto label$253;
		}
		goto label$263;
		label$265:;
		{
			fb$result$1 = 0x0p+0;
			goto label$253;
		}
		label$263:;
	}
	label$254:;
	label$253:;
	return fb$result$1;
}

double _ZN4MATH4VCOSERKd( double* T$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$266:;
	fb$result$1 = __builtin_cos( *T$1 ) + 0x1.p+0;
	goto label$267;
	label$267:;
	return fb$result$1;
}

double _ZN4MATH4VSINERKd( double* T$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$268:;
	fb$result$1 = -(__builtin_cos( *T$1 )) + 0x1.p+0;
	goto label$269;
	label$269:;
	return fb$result$1;
}

double _ZN4MATH4WRAPERKd( double* N$1 )
{
	double TMP$39$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$270:;
	if( *N$1 >= 0x0p+0 ) goto label$272;
	double vr$3 = fb_FRACd( *N$1 );
	TMP$39$1 = vr$3 + 0x1.p+0;
	goto label$273;
	label$272:;
	double vr$6 = fb_FRACd( *N$1 );
	TMP$39$1 = vr$6;
	label$273:;
	fb$result$1 = TMP$39$1;
	goto label$271;
	label$271:;
	return fb$result$1;
}

double _ZN4MATH4WRAPERKdS1_( double* N$1, double* NMAX$1 )
{
	double TMP$40$1;
	double TMP$41$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$274:;
	if( *NMAX$1 == 0x0p+0 ) goto label$276;
	TMP$40$1 = *N$1 / *NMAX$1;
	double vr$6 = _ZN4MATH4WRAPERKd( &TMP$40$1 );
	TMP$41$1 = vr$6 * *NMAX$1;
	goto label$277;
	label$276:;
	TMP$41$1 = 0x0p+0;
	label$277:;
	fb$result$1 = TMP$41$1;
	goto label$275;
	label$275:;
	return fb$result$1;
}

void _ZN4MATH8RATIONALC1Ev( struct $N4MATH8RATIONALE* THIS$1 )
{
	label$278:;
	__builtin_memset( (int64*)THIS$1, 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	*(int64*)((uint8*)THIS$1 + 8ll) = 1ll;
	label$279:;
}

void _ZN4MATH8RATIONALC1ERKxS2_( struct $N4MATH8RATIONALE* THIS$1, int64* N1$1, int64* N2$1 )
{
	label$280:;
	__builtin_memset( (int64*)THIS$1, 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	if( *(int64*)N2$1 == 0ll ) goto label$283;
	{
		*(int64*)THIS$1 = *N1$1;
		*(int64*)((uint8*)THIS$1 + 8ll) = *N2$1;
	}
	goto label$282;
	label$283:;
	{
		*(int64*)((uint8*)THIS$1 + 8ll) = 1ll;
	}
	label$282:;
	label$281:;
}

void _ZN4MATH8RATIONALC1ERKS0_( struct $N4MATH8RATIONALE* THIS$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$284:;
	__builtin_memset( (int64*)THIS$1, 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	*(int64*)THIS$1 = *(int64*)R$1;
	*(int64*)((uint8*)THIS$1 + 8ll) = *(int64*)((uint8*)R$1 + 8ll);
	label$285:;
}

void _ZN4MATH8RATIONALpLERKx( struct $N4MATH8RATIONALE* THIS$1, int64* I$1 )
{
	label$286:;
	*(int64*)THIS$1 = *(int64*)THIS$1 + (*(int64*)((uint8*)THIS$1 + 8ll) * *(int64*)I$1);
	label$287:;
}

void _ZN4MATH8RATIONALpLERKS0_( struct $N4MATH8RATIONALE* THIS$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$288:;
	int64 I$1;
	I$1 = (*(int64*)THIS$1 * *(int64*)((uint8*)R$1 + 8ll)) + (*(int64*)((uint8*)THIS$1 + 8ll) * *(int64*)R$1);
	int64 J$1;
	J$1 = *(int64*)((uint8*)THIS$1 + 8ll) * *(int64*)((uint8*)R$1 + 8ll);
	*(int64*)THIS$1 = I$1;
	*(int64*)((uint8*)THIS$1 + 8ll) = J$1;
	label$289:;
}

void _ZN4MATH8RATIONALmIERKx( struct $N4MATH8RATIONALE* THIS$1, int64* I$1 )
{
	label$290:;
	*(int64*)THIS$1 = *(int64*)THIS$1 - (*(int64*)((uint8*)THIS$1 + 8ll) * *(int64*)I$1);
	label$291:;
}

void _ZN4MATH8RATIONALmIERKS0_( struct $N4MATH8RATIONALE* THIS$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$292:;
	int64 I$1;
	I$1 = (*(int64*)THIS$1 * *(int64*)((uint8*)R$1 + 8ll)) - (*(int64*)((uint8*)THIS$1 + 8ll) * *(int64*)R$1);
	int64 J$1;
	J$1 = *(int64*)((uint8*)THIS$1 + 8ll) * *(int64*)((uint8*)R$1 + 8ll);
	*(int64*)THIS$1 = I$1;
	*(int64*)((uint8*)THIS$1 + 8ll) = J$1;
	label$293:;
}

void _ZN4MATH8RATIONALmLERKx( struct $N4MATH8RATIONALE* THIS$1, int64* I$1 )
{
	label$294:;
	*(int64*)THIS$1 = *(int64*)THIS$1 * *(int64*)I$1;
	label$295:;
}

void _ZN4MATH8RATIONALmLERKS0_( struct $N4MATH8RATIONALE* THIS$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$296:;
	*(int64*)THIS$1 = *(int64*)THIS$1 * *(int64*)R$1;
	*(int64*)((uint8*)THIS$1 + 8ll) = *(int64*)((uint8*)THIS$1 + 8ll) * *(int64*)((uint8*)R$1 + 8ll);
	label$297:;
}

void _ZN4MATH8RATIONALdVERKx( struct $N4MATH8RATIONALE* THIS$1, int64* I$1 )
{
	label$298:;
	if( *(int64*)I$1 == 0ll ) goto label$301;
	{
		*(int64*)((uint8*)THIS$1 + 8ll) = *(int64*)((uint8*)THIS$1 + 8ll) * *(int64*)I$1;
	}
	goto label$300;
	label$301:;
	{
		*(int64*)THIS$1 = 0ll;
		*(int64*)((uint8*)THIS$1 + 8ll) = 1ll;
	}
	label$300:;
	label$299:;
}

void _ZN4MATH8RATIONALdVERKS0_( struct $N4MATH8RATIONALE* THIS$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$302:;
	if( (((int64)-(*(int64*)((uint8*)THIS$1 + 8ll) != 0ll) & (int64)-(*(int64*)R$1 != 0ll)) & (int64)-(*(int64*)((uint8*)R$1 + 8ll) != 0ll)) == 0ll ) goto label$305;
	{
		*(int64*)THIS$1 = *(int64*)THIS$1 * *(int64*)((uint8*)R$1 + 8ll);
		*(int64*)((uint8*)THIS$1 + 8ll) = *(int64*)((uint8*)THIS$1 + 8ll) * *(int64*)R$1;
	}
	goto label$304;
	label$305:;
	{
		*(int64*)THIS$1 = 0ll;
		*(int64*)((uint8*)THIS$1 + 8ll) = 1ll;
	}
	label$304:;
	label$303:;
}

void _ZN4MATH8RATIONALv27selfpowERKx( struct $N4MATH8RATIONALE* THIS$1, int64* I$1 )
{
	label$306:;
	if( *(int64*)I$1 <= 0ll ) goto label$309;
	{
		double vr$5 = pow( (double)*(int64*)THIS$1, (double)*(int64*)I$1 );
		*(int64*)THIS$1 = fb_D2L( vr$5 );
		double vr$12 = pow( (double)*(int64*)((uint8*)THIS$1 + 8ll), (double)*(int64*)I$1 );
		*(int64*)((uint8*)THIS$1 + 8ll) = fb_D2L( vr$12 );
	}
	goto label$308;
	label$309:;
	if( *(int64*)I$1 >= 0ll ) goto label$310;
	{
		if( *(int64*)THIS$1 == 0ll ) goto label$312;
		{
			int64 J$3;
			double vr$21 = pow( (double)*(int64*)THIS$1, (double)*(int64*)I$1 );
			J$3 = fb_D2L( vr$21 );
			double vr$27 = pow( (double)*(int64*)((uint8*)THIS$1 + 8ll), (double)*(int64*)I$1 );
			*(int64*)THIS$1 = fb_D2L( vr$27 );
			*(int64*)((uint8*)THIS$1 + 8ll) = J$3;
		}
		goto label$311;
		label$312:;
		{
			*(int64*)THIS$1 = 0ll;
			*(int64*)((uint8*)THIS$1 + 8ll) = 1ll;
		}
		label$311:;
	}
	goto label$308;
	label$310:;
	{
		*(int64*)THIS$1 = 1ll;
		*(int64*)((uint8*)THIS$1 + 8ll) = 1ll;
	}
	label$308:;
	label$307:;
}

double _ZNK4MATH8RATIONALcvdEv( struct $N4MATH8RATIONALE* THIS$1 )
{
	double TMP$42$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$313:;
	if( (double)*(int64*)((uint8*)THIS$1 + 8ll) == 0x1.p+0 ) goto label$315;
	TMP$42$1 = (double)*(int64*)THIS$1 / (double)*(int64*)((uint8*)THIS$1 + 8ll);
	goto label$316;
	label$315:;
	TMP$42$1 = (double)*(int64*)THIS$1;
	label$316:;
	fb$result$1 = TMP$42$1;
	goto label$314;
	label$314:;
	return fb$result$1;
}

FBSTRING* _ZNK4MATH8RATIONALcv8FBSTRINGEv( struct $N4MATH8RATIONALE* THIS$1 )
{
	FBSTRING TMP$46$1;
	FBSTRING TMP$47$1;
	FBSTRING TMP$48$1;
	FBSTRING TMP$49$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$317:;
	FBSTRING* vr$2 = fb_LongintToStr( *(int64*)((uint8*)THIS$1 + 8ll) );
	FBSTRING* vr$4 = fb_LongintToStr( *(int64*)THIS$1 );
	__builtin_memset( &TMP$46$1, 0, 24ll );
	FBSTRING* vr$7 = fb_StrConcat( &TMP$46$1, (void*)"<math.rational>{ n : ", 22ll, (void*)vr$4, -1ll );
	__builtin_memset( &TMP$47$1, 0, 24ll );
	FBSTRING* vr$10 = fb_StrConcat( &TMP$47$1, (void*)vr$7, -1ll, (void*)" , d : ", 8ll );
	__builtin_memset( &TMP$48$1, 0, 24ll );
	FBSTRING* vr$13 = fb_StrConcat( &TMP$48$1, (void*)vr$10, -1ll, (void*)vr$2, -1ll );
	__builtin_memset( &TMP$49$1, 0, 24ll );
	FBSTRING* vr$16 = fb_StrConcat( &TMP$49$1, (void*)vr$13, -1ll, (void*)" }", 3ll );
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$16, -1ll, 0 );
	goto label$318;
	label$318:;
	FBSTRING* vr$19 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$19;
}

void _ZN4MATH8RATIONALaSERKx( struct $N4MATH8RATIONALE* THIS$1, int64* I$1 )
{
	label$319:;
	*(int64*)THIS$1 = *I$1;
	*(int64*)((uint8*)THIS$1 + 8ll) = 1ll;
	label$320:;
}

void _ZN4MATH8RATIONALaSERKS0_( struct $N4MATH8RATIONALE* THIS$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$321:;
	*(int64*)THIS$1 = *(int64*)R$1;
	*(int64*)((uint8*)THIS$1 + 8ll) = *(int64*)((uint8*)R$1 + 8ll);
	label$322:;
}

int64 _ZNK4MATH8RATIONAL8D__get__Ev( struct $N4MATH8RATIONALE* THIS$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$323:;
	fb$result$1 = *(int64*)((uint8*)THIS$1 + 8ll);
	goto label$324;
	label$324:;
	return fb$result$1;
}

void _ZN4MATH8RATIONAL8D__set__ERKx( struct $N4MATH8RATIONALE* THIS$1, int64* I$1 )
{
	label$325:;
	if( *(int64*)I$1 == 0ll ) goto label$328;
	{
		*(int64*)((uint8*)THIS$1 + 8ll) = *I$1;
	}
	label$328:;
	label$327:;
	label$326:;
}

int64 _ZNK4MATH8RATIONAL8N__get__Ev( struct $N4MATH8RATIONALE* THIS$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$329:;
	fb$result$1 = *(int64*)THIS$1;
	goto label$330;
	label$330:;
	return fb$result$1;
}

void _ZN4MATH8RATIONAL8N__set__ERKx( struct $N4MATH8RATIONALE* THIS$1, int64* I$1 )
{
	label$331:;
	*(int64*)THIS$1 = *I$1;
	label$332:;
}

struct $N4MATH8RATIONALE _ZNK4MATH8RATIONAL15OPPOSITE__get__Ev( struct $N4MATH8RATIONALE* THIS$1 )
{
	int64 TMP$51$1;
	struct $N4MATH8RATIONALE fb$result$1;
	label$333:;
	TMP$51$1 = -(*(int64*)THIS$1);
	_ZN4MATH8RATIONALC1ERKxS2_( &fb$result$1, &TMP$51$1, (int64*)((uint8*)THIS$1 + 8ll) );
	goto label$334;
	label$334:;
	return fb$result$1;
}

struct $N4MATH8RATIONALE _ZNK4MATH8RATIONAL17RECIPROCAL__get__Ev( struct $N4MATH8RATIONALE* THIS$1 )
{
	struct $N4MATH8RATIONALE TMP$54$1;
	struct $N4MATH8RATIONALE fb$result$1;
	label$335:;
	if( *(int64*)THIS$1 == 0ll ) goto label$337;
	_ZN4MATH8RATIONALC1ERKxS2_( &TMP$54$1, (int64*)((uint8*)THIS$1 + 8ll), (int64*)THIS$1 );
	goto label$338;
	label$337:;
	_ZN4MATH8RATIONALC1Ev( &TMP$54$1 );
	label$338:;
	_ZN4MATH8RATIONALC1ERKS0_( &fb$result$1, (struct $N4MATH8RATIONALE*)&TMP$54$1 );
	goto label$336;
	label$336:;
	return fb$result$1;
}

void _ZN4MATH8RATIONAL6REDUCEEv( struct $N4MATH8RATIONALE* THIS$1 )
{
	label$339:;
	int64 I$1;
	int64 vr$4 = _ZN4MATH3GCDERKxS1_( (int64*)THIS$1, (int64*)((uint8*)THIS$1 + 8ll) );
	I$1 = vr$4;
	if( I$1 <= 1ll ) goto label$342;
	{
		*(int64*)THIS$1 = fb_D2L( (double)*(int64*)THIS$1 / (double)I$1 );
		*(int64*)((uint8*)THIS$1 + 8ll) = fb_D2L( (double)*(int64*)((uint8*)THIS$1 + 8ll) / (double)I$1 );
	}
	label$342:;
	label$341:;
	label$340:;
}

FBSTRING* _ZNK4MATH8RATIONAL6TOJSONERKb( struct $N4MATH8RATIONALE* THIS$1, boolean* A$1 )
{
	FBSTRING TMP$61$1;
	FBSTRING TMP$62$1;
	FBSTRING TMP$63$1;
	FBSTRING TMP$64$1;
	FBSTRING TMP$65$1;
	FBSTRING TMP$66$1;
	FBSTRING TMP$67$1;
	FBSTRING TMP$68$1;
	FBSTRING TMP$69$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$343:;
	if( *A$1 == (boolean)0ll ) goto label$345;
	FBSTRING* vr$3 = fb_LongintToStr( *(int64*)((uint8*)THIS$1 + 8ll) );
	FBSTRING* vr$5 = fb_LongintToStr( *(int64*)THIS$1 );
	__builtin_memset( &TMP$62$1, 0, 24ll );
	FBSTRING* vr$8 = fb_StrConcat( &TMP$62$1, (void*)"[", 2ll, (void*)vr$5, -1ll );
	__builtin_memset( &TMP$63$1, 0, 24ll );
	FBSTRING* vr$11 = fb_StrConcat( &TMP$63$1, (void*)vr$8, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$64$1, 0, 24ll );
	FBSTRING* vr$14 = fb_StrConcat( &TMP$64$1, (void*)vr$11, -1ll, (void*)vr$3, -1ll );
	__builtin_memset( &TMP$65$1, 0, 24ll );
	FBSTRING* vr$17 = fb_StrConcat( &TMP$65$1, (void*)vr$14, -1ll, (void*)"]", 2ll );
	fb_StrInit( (void*)&TMP$61$1, -1ll, (void*)vr$17, -1ll, 0 );
	goto label$346;
	label$345:;
	FBSTRING* vr$20 = fb_LongintToStr( *(int64*)((uint8*)THIS$1 + 8ll) );
	FBSTRING* vr$22 = fb_LongintToStr( *(int64*)THIS$1 );
	__builtin_memset( &TMP$66$1, 0, 24ll );
	FBSTRING* vr$25 = fb_StrConcat( &TMP$66$1, (void*)"{\x22n\x22:", 6ll, (void*)vr$22, -1ll );
	__builtin_memset( &TMP$67$1, 0, 24ll );
	FBSTRING* vr$28 = fb_StrConcat( &TMP$67$1, (void*)vr$25, -1ll, (void*)",\x22" "d\x22:", 6ll );
	__builtin_memset( &TMP$68$1, 0, 24ll );
	FBSTRING* vr$31 = fb_StrConcat( &TMP$68$1, (void*)vr$28, -1ll, (void*)vr$20, -1ll );
	__builtin_memset( &TMP$69$1, 0, 24ll );
	FBSTRING* vr$34 = fb_StrConcat( &TMP$69$1, (void*)vr$31, -1ll, (void*)"}", 2ll );
	fb_StrInit( (void*)&TMP$61$1, -1ll, (void*)vr$34, -1ll, 0 );
	label$346:;
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)&TMP$61$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&TMP$61$1 );
	goto label$344;
	label$344:;
	FBSTRING* vr$40 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$40;
}

struct $N4MATH8RATIONALE _ZN4MATHplERKxRKNS_8RATIONALE( int64* I$1, struct $N4MATH8RATIONALE* R$1 )
{
	int64 TMP$71$1;
	int64 TMP$72$1;
	struct $N4MATH8RATIONALE fb$result$1;
	label$347:;
	int64 vr$0 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	TMP$72$1 = vr$0;
	int64 vr$2 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$3 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	TMP$71$1 = vr$2 + (vr$3 * *(int64*)I$1);
	_ZN4MATH8RATIONALC1ERKxS2_( &fb$result$1, &TMP$71$1, (int64*)&TMP$72$1 );
	goto label$348;
	label$348:;
	return fb$result$1;
}

struct $N4MATH8RATIONALE _ZN4MATHplERKNS_8RATIONALERKx( struct $N4MATH8RATIONALE* R$1, int64* I$1 )
{
	int64 TMP$74$1;
	int64 TMP$75$1;
	struct $N4MATH8RATIONALE fb$result$1;
	label$349:;
	int64 vr$0 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	TMP$75$1 = vr$0;
	int64 vr$2 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$3 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	TMP$74$1 = vr$2 + (vr$3 * *(int64*)I$1);
	_ZN4MATH8RATIONALC1ERKxS2_( &fb$result$1, &TMP$74$1, (int64*)&TMP$75$1 );
	goto label$350;
	label$350:;
	return fb$result$1;
}

struct $N4MATH8RATIONALE _ZN4MATHplERKNS_8RATIONALES2_( struct $N4MATH8RATIONALE* R1$1, struct $N4MATH8RATIONALE* R2$1 )
{
	int64 TMP$77$1;
	int64 TMP$78$1;
	struct $N4MATH8RATIONALE fb$result$1;
	label$351:;
	int64 vr$0 = _ZNK4MATH8RATIONAL8D__get__Ev( R1$1 );
	int64 vr$1 = _ZNK4MATH8RATIONAL8D__get__Ev( R2$1 );
	TMP$78$1 = vr$0 * vr$1;
	int64 vr$4 = _ZNK4MATH8RATIONAL8N__get__Ev( R1$1 );
	int64 vr$5 = _ZNK4MATH8RATIONAL8D__get__Ev( R2$1 );
	int64 vr$7 = _ZNK4MATH8RATIONAL8D__get__Ev( R1$1 );
	int64 vr$8 = _ZNK4MATH8RATIONAL8N__get__Ev( R2$1 );
	TMP$77$1 = (vr$4 * vr$5) + (vr$7 * vr$8);
	_ZN4MATH8RATIONALC1ERKxS2_( &fb$result$1, &TMP$77$1, &TMP$78$1 );
	goto label$352;
	label$352:;
	return fb$result$1;
}

double _ZN4MATHplERKdRKNS_8RATIONALE( double* N$1, struct $N4MATH8RATIONALE* R$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$353:;
	int64 vr$2 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$4 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	fb$result$1 = *N$1 + ((double)vr$2 / (double)vr$4);
	goto label$354;
	label$354:;
	return fb$result$1;
}

double _ZN4MATHplERKNS_8RATIONALERKd( struct $N4MATH8RATIONALE* R$1, double* N$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$355:;
	int64 vr$1 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$3 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	fb$result$1 = ((double)vr$1 / (double)vr$3) + *N$1;
	goto label$356;
	label$356:;
	return fb$result$1;
}

struct $N4MATH8RATIONALE _ZN4MATHngERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	int64 TMP$80$1;
	int64 TMP$81$1;
	struct $N4MATH8RATIONALE fb$result$1;
	label$357:;
	int64 vr$0 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	TMP$81$1 = vr$0;
	int64 vr$2 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	TMP$80$1 = -vr$2;
	_ZN4MATH8RATIONALC1ERKxS2_( &fb$result$1, &TMP$80$1, (int64*)&TMP$81$1 );
	goto label$358;
	label$358:;
	return fb$result$1;
}

struct $N4MATH8RATIONALE _ZN4MATHmiERKxRKNS_8RATIONALE( int64* I$1, struct $N4MATH8RATIONALE* R$1 )
{
	int64 TMP$83$1;
	int64 TMP$84$1;
	struct $N4MATH8RATIONALE fb$result$1;
	label$359:;
	int64 vr$0 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	TMP$84$1 = vr$0;
	int64 vr$2 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$3 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	TMP$83$1 = vr$2 - (vr$3 * *(int64*)I$1);
	_ZN4MATH8RATIONALC1ERKxS2_( &fb$result$1, &TMP$83$1, (int64*)&TMP$84$1 );
	goto label$360;
	label$360:;
	return fb$result$1;
}

struct $N4MATH8RATIONALE _ZN4MATHmiERKNS_8RATIONALERKx( struct $N4MATH8RATIONALE* R$1, int64* I$1 )
{
	int64 TMP$86$1;
	int64 TMP$87$1;
	struct $N4MATH8RATIONALE fb$result$1;
	label$361:;
	int64 vr$0 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	TMP$87$1 = vr$0;
	int64 vr$2 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$3 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	TMP$86$1 = vr$2 - (vr$3 * *(int64*)I$1);
	_ZN4MATH8RATIONALC1ERKxS2_( &fb$result$1, &TMP$86$1, (int64*)&TMP$87$1 );
	goto label$362;
	label$362:;
	return fb$result$1;
}

struct $N4MATH8RATIONALE _ZN4MATHmiERKNS_8RATIONALES2_( struct $N4MATH8RATIONALE* R1$1, struct $N4MATH8RATIONALE* R2$1 )
{
	int64 TMP$89$1;
	int64 TMP$90$1;
	struct $N4MATH8RATIONALE fb$result$1;
	label$363:;
	int64 vr$0 = _ZNK4MATH8RATIONAL8D__get__Ev( R1$1 );
	int64 vr$1 = _ZNK4MATH8RATIONAL8D__get__Ev( R2$1 );
	TMP$90$1 = vr$0 * vr$1;
	int64 vr$4 = _ZNK4MATH8RATIONAL8N__get__Ev( R1$1 );
	int64 vr$5 = _ZNK4MATH8RATIONAL8D__get__Ev( R2$1 );
	int64 vr$7 = _ZNK4MATH8RATIONAL8D__get__Ev( R1$1 );
	int64 vr$8 = _ZNK4MATH8RATIONAL8N__get__Ev( R2$1 );
	TMP$89$1 = (vr$4 * vr$5) - (vr$7 * vr$8);
	_ZN4MATH8RATIONALC1ERKxS2_( &fb$result$1, &TMP$89$1, &TMP$90$1 );
	goto label$364;
	label$364:;
	return fb$result$1;
}

double _ZN4MATHmiERKdRKNS_8RATIONALE( double* N$1, struct $N4MATH8RATIONALE* R$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$365:;
	int64 vr$2 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$4 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	fb$result$1 = *N$1 - ((double)vr$2 / (double)vr$4);
	goto label$366;
	label$366:;
	return fb$result$1;
}

double _ZN4MATHmiERKNS_8RATIONALERKd( struct $N4MATH8RATIONALE* R$1, double* N$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$367:;
	int64 vr$1 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$3 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	fb$result$1 = ((double)vr$1 / (double)vr$3) - *N$1;
	goto label$368;
	label$368:;
	return fb$result$1;
}

struct $N4MATH8RATIONALE _ZN4MATHmlERKxRKNS_8RATIONALE( int64* I$1, struct $N4MATH8RATIONALE* R$1 )
{
	int64 TMP$92$1;
	int64 TMP$93$1;
	struct $N4MATH8RATIONALE fb$result$1;
	label$369:;
	int64 vr$0 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	TMP$93$1 = vr$0;
	int64 vr$3 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	TMP$92$1 = *(int64*)I$1 * vr$3;
	_ZN4MATH8RATIONALC1ERKxS2_( &fb$result$1, &TMP$92$1, (int64*)&TMP$93$1 );
	goto label$370;
	label$370:;
	return fb$result$1;
}

struct $N4MATH8RATIONALE _ZN4MATHmlERKNS_8RATIONALERKx( struct $N4MATH8RATIONALE* R$1, int64* I$1 )
{
	int64 TMP$95$1;
	int64 TMP$96$1;
	struct $N4MATH8RATIONALE fb$result$1;
	label$371:;
	int64 vr$0 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	TMP$96$1 = vr$0;
	int64 vr$2 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	TMP$95$1 = vr$2 * *(int64*)I$1;
	_ZN4MATH8RATIONALC1ERKxS2_( &fb$result$1, &TMP$95$1, (int64*)&TMP$96$1 );
	goto label$372;
	label$372:;
	return fb$result$1;
}

struct $N4MATH8RATIONALE _ZN4MATHmlERKNS_8RATIONALES2_( struct $N4MATH8RATIONALE* R1$1, struct $N4MATH8RATIONALE* R2$1 )
{
	int64 TMP$98$1;
	int64 TMP$99$1;
	struct $N4MATH8RATIONALE fb$result$1;
	label$373:;
	int64 vr$0 = _ZNK4MATH8RATIONAL8D__get__Ev( R1$1 );
	int64 vr$1 = _ZNK4MATH8RATIONAL8D__get__Ev( R2$1 );
	TMP$99$1 = vr$0 * vr$1;
	int64 vr$4 = _ZNK4MATH8RATIONAL8N__get__Ev( R1$1 );
	int64 vr$5 = _ZNK4MATH8RATIONAL8N__get__Ev( R2$1 );
	TMP$98$1 = vr$4 * vr$5;
	_ZN4MATH8RATIONALC1ERKxS2_( &fb$result$1, &TMP$98$1, &TMP$99$1 );
	goto label$374;
	label$374:;
	return fb$result$1;
}

double _ZN4MATHmlERKdRKNS_8RATIONALE( double* N$1, struct $N4MATH8RATIONALE* R$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$375:;
	int64 vr$2 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$4 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	fb$result$1 = *N$1 * ((double)vr$2 / (double)vr$4);
	goto label$376;
	label$376:;
	return fb$result$1;
}

double _ZN4MATHmlERKNS_8RATIONALERKd( struct $N4MATH8RATIONALE* R$1, double* N$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$377:;
	int64 vr$1 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$3 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	fb$result$1 = ((double)vr$1 / (double)vr$3) * *N$1;
	goto label$378;
	label$378:;
	return fb$result$1;
}

struct $N4MATH8RATIONALE _ZN4MATHdvERKxRKNS_8RATIONALE( int64* I$1, struct $N4MATH8RATIONALE* R$1 )
{
	int64 TMP$101$1;
	struct $N4MATH8RATIONALE TMP$103$1;
	struct $N4MATH8RATIONALE fb$result$1;
	label$379:;
	int64 A$1;
	int64 vr$0 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	A$1 = vr$0;
	if( A$1 == 0ll ) goto label$381;
	int64 vr$3 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	TMP$101$1 = *(int64*)I$1 * vr$3;
	_ZN4MATH8RATIONALC1ERKxS2_( &TMP$103$1, &TMP$101$1, (int64*)&A$1 );
	goto label$382;
	label$381:;
	_ZN4MATH8RATIONALC1Ev( &TMP$103$1 );
	label$382:;
	_ZN4MATH8RATIONALC1ERKS0_( &fb$result$1, (struct $N4MATH8RATIONALE*)&TMP$103$1 );
	goto label$380;
	label$380:;
	return fb$result$1;
}

double _ZN4MATHdvERKdRKNS_8RATIONALE( double* N$1, struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$104$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$383:;
	double M$1;
	int64 vr$1 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$3 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	M$1 = (double)vr$1 / (double)vr$3;
	if( M$1 == 0x0p+0 ) goto label$385;
	TMP$104$1 = *N$1 / M$1;
	goto label$386;
	label$385:;
	TMP$104$1 = 0x0p+0;
	label$386:;
	fb$result$1 = TMP$104$1;
	goto label$384;
	label$384:;
	return fb$result$1;
}

struct $N4MATH8RATIONALE _ZN4MATHdvERKNS_8RATIONALERKx( struct $N4MATH8RATIONALE* R$1, int64* I$1 )
{
	int64 TMP$106$1;
	int64 TMP$107$1;
	struct $N4MATH8RATIONALE TMP$109$1;
	struct $N4MATH8RATIONALE fb$result$1;
	label$387:;
	if( *(int64*)I$1 == 0ll ) goto label$389;
	int64 vr$1 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	TMP$107$1 = vr$1 * *(int64*)I$1;
	int64 vr$5 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	TMP$106$1 = vr$5;
	_ZN4MATH8RATIONALC1ERKxS2_( &TMP$109$1, (int64*)&TMP$106$1, &TMP$107$1 );
	goto label$390;
	label$389:;
	_ZN4MATH8RATIONALC1Ev( &TMP$109$1 );
	label$390:;
	_ZN4MATH8RATIONALC1ERKS0_( &fb$result$1, (struct $N4MATH8RATIONALE*)&TMP$109$1 );
	goto label$388;
	label$388:;
	return fb$result$1;
}

double _ZN4MATHdvERKNS_8RATIONALERKd( struct $N4MATH8RATIONALE* R$1, double* N$1 )
{
	double TMP$110$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$391:;
	if( *N$1 == 0x0p+0 ) goto label$393;
	int64 vr$2 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$4 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	TMP$110$1 = ((double)vr$2 / (double)vr$4) / *N$1;
	goto label$394;
	label$393:;
	TMP$110$1 = 0x0p+0;
	label$394:;
	fb$result$1 = TMP$110$1;
	goto label$392;
	label$392:;
	return fb$result$1;
}

struct $N4MATH8RATIONALE _ZN4MATHdvERKNS_8RATIONALES2_( struct $N4MATH8RATIONALE* R1$1, struct $N4MATH8RATIONALE* R2$1 )
{
	int64 TMP$112$1;
	int64 TMP$113$1;
	struct $N4MATH8RATIONALE TMP$115$1;
	struct $N4MATH8RATIONALE fb$result$1;
	label$395:;
	int64 B$1;
	int64 vr$0 = _ZNK4MATH8RATIONAL8D__get__Ev( R1$1 );
	B$1 = vr$0;
	int64 C$1;
	int64 vr$1 = _ZNK4MATH8RATIONAL8N__get__Ev( R2$1 );
	C$1 = vr$1;
	int64 D$1;
	int64 vr$2 = _ZNK4MATH8RATIONAL8D__get__Ev( R2$1 );
	D$1 = vr$2;
	if( (((int64)-(B$1 != 0ll) & (int64)-(C$1 != 0ll)) & (int64)-(D$1 != 0ll)) == 0ll ) goto label$397;
	TMP$113$1 = B$1 * C$1;
	int64 vr$10 = _ZNK4MATH8RATIONAL8N__get__Ev( R1$1 );
	TMP$112$1 = vr$10 * D$1;
	_ZN4MATH8RATIONALC1ERKxS2_( &TMP$115$1, &TMP$112$1, &TMP$113$1 );
	goto label$398;
	label$397:;
	_ZN4MATH8RATIONALC1Ev( &TMP$115$1 );
	label$398:;
	_ZN4MATH8RATIONALC1ERKS0_( &fb$result$1, (struct $N4MATH8RATIONALE*)&TMP$115$1 );
	goto label$396;
	label$396:;
	return fb$result$1;
}

struct $N4MATH8RATIONALE _ZN4MATHv23powERKNS_8RATIONALERKx( struct $N4MATH8RATIONALE* R$1, int64* I$1 )
{
	struct $N4MATH8RATIONALE fb$result$1;
	label$399:;
	if( *(int64*)I$1 <= 0ll ) goto label$402;
	{
		int64 TMP$117$2;
		int64 TMP$118$2;
		int64 vr$3 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
		double vr$5 = pow( (double)vr$3, (double)*(int64*)I$1 );
		TMP$118$2 = fb_D2L( vr$5 );
		int64 vr$10 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
		double vr$12 = pow( (double)vr$10, (double)*(int64*)I$1 );
		TMP$117$2 = fb_D2L( vr$12 );
		_ZN4MATH8RATIONALC1ERKxS2_( &fb$result$1, &TMP$117$2, &TMP$118$2 );
		goto label$400;
	}
	goto label$401;
	label$402:;
	if( *(int64*)I$1 >= 0ll ) goto label$403;
	{
		int64 TMP$120$2;
		int64 TMP$121$2;
		struct $N4MATH8RATIONALE TMP$123$2;
		int64 A$2;
		int64 vr$17 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
		A$2 = vr$17;
		if( A$2 == 0ll ) goto label$404;
		double vr$21 = pow( (double)A$2, (double)*(int64*)I$1 );
		TMP$121$2 = fb_D2L( vr$21 );
		int64 vr$26 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
		double vr$28 = pow( (double)vr$26, (double)*(int64*)I$1 );
		TMP$120$2 = fb_D2L( vr$28 );
		_ZN4MATH8RATIONALC1ERKxS2_( &TMP$123$2, &TMP$120$2, &TMP$121$2 );
		goto label$405;
		label$404:;
		_ZN4MATH8RATIONALC1Ev( &TMP$123$2 );
		label$405:;
		_ZN4MATH8RATIONALC1ERKS0_( &fb$result$1, (struct $N4MATH8RATIONALE*)&TMP$123$2 );
		goto label$400;
	}
	goto label$401;
	label$403:;
	{
		int64 TMP$125$2;
		int64 TMP$126$2;
		TMP$126$2 = 1ll;
		TMP$125$2 = 1ll;
		_ZN4MATH8RATIONALC1ERKxS2_( &fb$result$1, (int64*)&TMP$125$2, (int64*)&TMP$126$2 );
		goto label$400;
	}
	label$401:;
	label$400:;
	return fb$result$1;
}

double _ZN4MATHv23powERKdRKNS_8RATIONALE( double* N$1, struct $N4MATH8RATIONALE* R$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$406:;
	int64 vr$1 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$3 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	double vr$7 = pow( *N$1, (double)vr$1 / (double)vr$3 );
	fb$result$1 = vr$7;
	goto label$407;
	label$407:;
	return fb$result$1;
}

double _ZN4MATHv23powERKNS_8RATIONALERKd( struct $N4MATH8RATIONALE* R$1, double* N$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$408:;
	int64 vr$2 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$4 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	double vr$7 = pow( (double)vr$2 / (double)vr$4, *N$1 );
	fb$result$1 = vr$7;
	goto label$409;
	label$409:;
	return fb$result$1;
}

boolean _ZN4MATHltERKxRKNS_8RATIONALE( int64* I$1, struct $N4MATH8RATIONALE* R$1 )
{
	boolean TMP$127$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$410:;
	int64 vr$2 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	int64 vr$4 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	if( (*(int64*)I$1 * vr$2) >= vr$4 ) goto label$412;
	TMP$127$1 = (boolean)1ll;
	goto label$413;
	label$412:;
	TMP$127$1 = (boolean)0ll;
	label$413:;
	fb$result$1 = TMP$127$1;
	goto label$411;
	label$411:;
	return fb$result$1;
}

boolean _ZN4MATHltERKdRKNS_8RATIONALE( double* N$1, struct $N4MATH8RATIONALE* R$1 )
{
	boolean TMP$128$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$414:;
	int64 vr$2 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$4 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	if( *N$1 >= ((double)vr$2 / (double)vr$4) ) goto label$416;
	TMP$128$1 = (boolean)1ll;
	goto label$417;
	label$416:;
	TMP$128$1 = (boolean)0ll;
	label$417:;
	fb$result$1 = TMP$128$1;
	goto label$415;
	label$415:;
	return fb$result$1;
}

boolean _ZN4MATHltERKNS_8RATIONALERKx( struct $N4MATH8RATIONALE* R$1, int64* I$1 )
{
	boolean TMP$129$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$418:;
	int64 vr$1 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$2 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	if( vr$1 >= (vr$2 * *(int64*)I$1) ) goto label$420;
	TMP$129$1 = (boolean)1ll;
	goto label$421;
	label$420:;
	TMP$129$1 = (boolean)0ll;
	label$421:;
	fb$result$1 = TMP$129$1;
	goto label$419;
	label$419:;
	return fb$result$1;
}

boolean _ZN4MATHltERKNS_8RATIONALERKd( struct $N4MATH8RATIONALE* R$1, double* N$1 )
{
	boolean TMP$130$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$422:;
	int64 vr$1 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$3 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	if( ((double)vr$1 / (double)vr$3) >= *N$1 ) goto label$424;
	TMP$130$1 = (boolean)1ll;
	goto label$425;
	label$424:;
	TMP$130$1 = (boolean)0ll;
	label$425:;
	fb$result$1 = TMP$130$1;
	goto label$423;
	label$423:;
	return fb$result$1;
}

boolean _ZN4MATHltERKNS_8RATIONALES2_( struct $N4MATH8RATIONALE* R1$1, struct $N4MATH8RATIONALE* R2$1 )
{
	boolean TMP$131$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$426:;
	int64 vr$1 = _ZNK4MATH8RATIONAL8N__get__Ev( R1$1 );
	int64 vr$2 = _ZNK4MATH8RATIONAL8D__get__Ev( R2$1 );
	int64 vr$4 = _ZNK4MATH8RATIONAL8D__get__Ev( R1$1 );
	int64 vr$5 = _ZNK4MATH8RATIONAL8N__get__Ev( R2$1 );
	if( (vr$1 * vr$2) >= (vr$4 * vr$5) ) goto label$428;
	TMP$131$1 = (boolean)1ll;
	goto label$429;
	label$428:;
	TMP$131$1 = (boolean)0ll;
	label$429:;
	fb$result$1 = TMP$131$1;
	goto label$427;
	label$427:;
	return fb$result$1;
}

boolean _ZN4MATHleERKxRKNS_8RATIONALE( int64* I$1, struct $N4MATH8RATIONALE* R$1 )
{
	boolean TMP$132$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$430:;
	int64 vr$2 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	int64 vr$4 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	if( (*(int64*)I$1 * vr$2) > vr$4 ) goto label$432;
	TMP$132$1 = (boolean)1ll;
	goto label$433;
	label$432:;
	TMP$132$1 = (boolean)0ll;
	label$433:;
	fb$result$1 = TMP$132$1;
	goto label$431;
	label$431:;
	return fb$result$1;
}

boolean _ZN4MATHleERKdRKNS_8RATIONALE( double* N$1, struct $N4MATH8RATIONALE* R$1 )
{
	boolean TMP$133$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$434:;
	int64 vr$2 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$4 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	if( *N$1 > ((double)vr$2 / (double)vr$4) ) goto label$436;
	TMP$133$1 = (boolean)1ll;
	goto label$437;
	label$436:;
	TMP$133$1 = (boolean)0ll;
	label$437:;
	fb$result$1 = TMP$133$1;
	goto label$435;
	label$435:;
	return fb$result$1;
}

boolean _ZN4MATHleERKNS_8RATIONALERKx( struct $N4MATH8RATIONALE* R$1, int64* I$1 )
{
	boolean TMP$134$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$438:;
	int64 vr$1 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$2 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	if( vr$1 > (vr$2 * *(int64*)I$1) ) goto label$440;
	TMP$134$1 = (boolean)1ll;
	goto label$441;
	label$440:;
	TMP$134$1 = (boolean)0ll;
	label$441:;
	fb$result$1 = TMP$134$1;
	goto label$439;
	label$439:;
	return fb$result$1;
}

boolean _ZN4MATHleERKNS_8RATIONALERKd( struct $N4MATH8RATIONALE* R$1, double* N$1 )
{
	boolean TMP$135$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$442:;
	int64 vr$1 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$3 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	if( ((double)vr$1 / (double)vr$3) > *N$1 ) goto label$444;
	TMP$135$1 = (boolean)1ll;
	goto label$445;
	label$444:;
	TMP$135$1 = (boolean)0ll;
	label$445:;
	fb$result$1 = TMP$135$1;
	goto label$443;
	label$443:;
	return fb$result$1;
}

boolean _ZN4MATHleERKNS_8RATIONALES2_( struct $N4MATH8RATIONALE* R1$1, struct $N4MATH8RATIONALE* R2$1 )
{
	boolean TMP$136$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$446:;
	int64 vr$1 = _ZNK4MATH8RATIONAL8N__get__Ev( R1$1 );
	int64 vr$2 = _ZNK4MATH8RATIONAL8D__get__Ev( R2$1 );
	int64 vr$4 = _ZNK4MATH8RATIONAL8D__get__Ev( R1$1 );
	int64 vr$5 = _ZNK4MATH8RATIONAL8N__get__Ev( R2$1 );
	if( (vr$1 * vr$2) > (vr$4 * vr$5) ) goto label$448;
	TMP$136$1 = (boolean)1ll;
	goto label$449;
	label$448:;
	TMP$136$1 = (boolean)0ll;
	label$449:;
	fb$result$1 = TMP$136$1;
	goto label$447;
	label$447:;
	return fb$result$1;
}

boolean _ZN4MATHeqERKxRKNS_8RATIONALE( int64* I$1, struct $N4MATH8RATIONALE* R$1 )
{
	boolean TMP$137$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$450:;
	int64 vr$2 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	int64 vr$4 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	if( (*(int64*)I$1 * vr$2) != vr$4 ) goto label$452;
	TMP$137$1 = (boolean)1ll;
	goto label$453;
	label$452:;
	TMP$137$1 = (boolean)0ll;
	label$453:;
	fb$result$1 = TMP$137$1;
	goto label$451;
	label$451:;
	return fb$result$1;
}

boolean _ZN4MATHeqERKdRKNS_8RATIONALE( double* N$1, struct $N4MATH8RATIONALE* R$1 )
{
	boolean TMP$138$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$454:;
	int64 vr$2 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$4 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	if( *N$1 != ((double)vr$2 / (double)vr$4) ) goto label$456;
	TMP$138$1 = (boolean)1ll;
	goto label$457;
	label$456:;
	TMP$138$1 = (boolean)0ll;
	label$457:;
	fb$result$1 = TMP$138$1;
	goto label$455;
	label$455:;
	return fb$result$1;
}

boolean _ZN4MATHeqERKNS_8RATIONALERKx( struct $N4MATH8RATIONALE* R$1, int64* I$1 )
{
	boolean TMP$139$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$458:;
	int64 vr$1 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$2 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	if( vr$1 != (vr$2 * *(int64*)I$1) ) goto label$460;
	TMP$139$1 = (boolean)1ll;
	goto label$461;
	label$460:;
	TMP$139$1 = (boolean)0ll;
	label$461:;
	fb$result$1 = TMP$139$1;
	goto label$459;
	label$459:;
	return fb$result$1;
}

boolean _ZN4MATHeqERKNS_8RATIONALERKd( struct $N4MATH8RATIONALE* R$1, double* N$1 )
{
	boolean TMP$140$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$462:;
	int64 vr$1 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$3 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	if( ((double)vr$1 / (double)vr$3) != *N$1 ) goto label$464;
	TMP$140$1 = (boolean)1ll;
	goto label$465;
	label$464:;
	TMP$140$1 = (boolean)0ll;
	label$465:;
	fb$result$1 = TMP$140$1;
	goto label$463;
	label$463:;
	return fb$result$1;
}

boolean _ZN4MATHeqERKNS_8RATIONALES2_( struct $N4MATH8RATIONALE* R1$1, struct $N4MATH8RATIONALE* R2$1 )
{
	boolean TMP$141$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$466:;
	int64 vr$1 = _ZNK4MATH8RATIONAL8N__get__Ev( R1$1 );
	int64 vr$2 = _ZNK4MATH8RATIONAL8D__get__Ev( R2$1 );
	int64 vr$4 = _ZNK4MATH8RATIONAL8D__get__Ev( R1$1 );
	int64 vr$5 = _ZNK4MATH8RATIONAL8N__get__Ev( R2$1 );
	if( (vr$1 * vr$2) != (vr$4 * vr$5) ) goto label$468;
	TMP$141$1 = (boolean)1ll;
	goto label$469;
	label$468:;
	TMP$141$1 = (boolean)0ll;
	label$469:;
	fb$result$1 = TMP$141$1;
	goto label$467;
	label$467:;
	return fb$result$1;
}

boolean _ZN4MATHneERKxRKNS_8RATIONALE( int64* I$1, struct $N4MATH8RATIONALE* R$1 )
{
	boolean TMP$142$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$470:;
	int64 vr$2 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	int64 vr$4 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	if( (*(int64*)I$1 * vr$2) == vr$4 ) goto label$472;
	TMP$142$1 = (boolean)1ll;
	goto label$473;
	label$472:;
	TMP$142$1 = (boolean)0ll;
	label$473:;
	fb$result$1 = TMP$142$1;
	goto label$471;
	label$471:;
	return fb$result$1;
}

boolean _ZN4MATHneERKdRKNS_8RATIONALE( double* N$1, struct $N4MATH8RATIONALE* R$1 )
{
	boolean TMP$143$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$474:;
	int64 vr$2 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$4 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	if( *N$1 == ((double)vr$2 / (double)vr$4) ) goto label$476;
	TMP$143$1 = (boolean)1ll;
	goto label$477;
	label$476:;
	TMP$143$1 = (boolean)0ll;
	label$477:;
	fb$result$1 = TMP$143$1;
	goto label$475;
	label$475:;
	return fb$result$1;
}

boolean _ZN4MATHneERKNS_8RATIONALERKx( struct $N4MATH8RATIONALE* R$1, int64* I$1 )
{
	boolean TMP$144$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$478:;
	int64 vr$1 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$2 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	if( vr$1 == (vr$2 * *(int64*)I$1) ) goto label$480;
	TMP$144$1 = (boolean)1ll;
	goto label$481;
	label$480:;
	TMP$144$1 = (boolean)0ll;
	label$481:;
	fb$result$1 = TMP$144$1;
	goto label$479;
	label$479:;
	return fb$result$1;
}

boolean _ZN4MATHneERKNS_8RATIONALERKd( struct $N4MATH8RATIONALE* R$1, double* N$1 )
{
	boolean TMP$145$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$482:;
	int64 vr$1 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$3 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	if( ((double)vr$1 / (double)vr$3) == *N$1 ) goto label$484;
	TMP$145$1 = (boolean)1ll;
	goto label$485;
	label$484:;
	TMP$145$1 = (boolean)0ll;
	label$485:;
	fb$result$1 = TMP$145$1;
	goto label$483;
	label$483:;
	return fb$result$1;
}

boolean _ZN4MATHneERKNS_8RATIONALES2_( struct $N4MATH8RATIONALE* R1$1, struct $N4MATH8RATIONALE* R2$1 )
{
	boolean TMP$146$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$486:;
	int64 vr$1 = _ZNK4MATH8RATIONAL8N__get__Ev( R1$1 );
	int64 vr$2 = _ZNK4MATH8RATIONAL8D__get__Ev( R2$1 );
	int64 vr$4 = _ZNK4MATH8RATIONAL8D__get__Ev( R1$1 );
	int64 vr$5 = _ZNK4MATH8RATIONAL8N__get__Ev( R2$1 );
	if( (vr$1 * vr$2) == (vr$4 * vr$5) ) goto label$488;
	TMP$146$1 = (boolean)1ll;
	goto label$489;
	label$488:;
	TMP$146$1 = (boolean)0ll;
	label$489:;
	fb$result$1 = TMP$146$1;
	goto label$487;
	label$487:;
	return fb$result$1;
}

boolean _ZN4MATHgeERKxRKNS_8RATIONALE( int64* I$1, struct $N4MATH8RATIONALE* R$1 )
{
	boolean TMP$147$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$490:;
	int64 vr$2 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	int64 vr$4 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	if( (*(int64*)I$1 * vr$2) < vr$4 ) goto label$492;
	TMP$147$1 = (boolean)1ll;
	goto label$493;
	label$492:;
	TMP$147$1 = (boolean)0ll;
	label$493:;
	fb$result$1 = TMP$147$1;
	goto label$491;
	label$491:;
	return fb$result$1;
}

boolean _ZN4MATHgeERKdRKNS_8RATIONALE( double* N$1, struct $N4MATH8RATIONALE* R$1 )
{
	boolean TMP$148$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$494:;
	int64 vr$2 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$4 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	if( *N$1 < ((double)vr$2 / (double)vr$4) ) goto label$496;
	TMP$148$1 = (boolean)1ll;
	goto label$497;
	label$496:;
	TMP$148$1 = (boolean)0ll;
	label$497:;
	fb$result$1 = TMP$148$1;
	goto label$495;
	label$495:;
	return fb$result$1;
}

boolean _ZN4MATHgeERKNS_8RATIONALERKx( struct $N4MATH8RATIONALE* R$1, int64* I$1 )
{
	boolean TMP$149$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$498:;
	int64 vr$1 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$2 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	if( vr$1 < (vr$2 * *(int64*)I$1) ) goto label$500;
	TMP$149$1 = (boolean)1ll;
	goto label$501;
	label$500:;
	TMP$149$1 = (boolean)0ll;
	label$501:;
	fb$result$1 = TMP$149$1;
	goto label$499;
	label$499:;
	return fb$result$1;
}

boolean _ZN4MATHgeERKNS_8RATIONALERKd( struct $N4MATH8RATIONALE* R$1, double* N$1 )
{
	boolean TMP$150$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$502:;
	int64 vr$1 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$3 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	if( ((double)vr$1 / (double)vr$3) < *N$1 ) goto label$504;
	TMP$150$1 = (boolean)1ll;
	goto label$505;
	label$504:;
	TMP$150$1 = (boolean)0ll;
	label$505:;
	fb$result$1 = TMP$150$1;
	goto label$503;
	label$503:;
	return fb$result$1;
}

boolean _ZN4MATHgeERKNS_8RATIONALES2_( struct $N4MATH8RATIONALE* R1$1, struct $N4MATH8RATIONALE* R2$1 )
{
	boolean TMP$151$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$506:;
	int64 vr$1 = _ZNK4MATH8RATIONAL8N__get__Ev( R1$1 );
	int64 vr$2 = _ZNK4MATH8RATIONAL8D__get__Ev( R2$1 );
	int64 vr$4 = _ZNK4MATH8RATIONAL8D__get__Ev( R1$1 );
	int64 vr$5 = _ZNK4MATH8RATIONAL8N__get__Ev( R2$1 );
	if( (vr$1 * vr$2) < (vr$4 * vr$5) ) goto label$508;
	TMP$151$1 = (boolean)1ll;
	goto label$509;
	label$508:;
	TMP$151$1 = (boolean)0ll;
	label$509:;
	fb$result$1 = TMP$151$1;
	goto label$507;
	label$507:;
	return fb$result$1;
}

boolean _ZN4MATHgtERKxRKNS_8RATIONALE( int64* I$1, struct $N4MATH8RATIONALE* R$1 )
{
	boolean TMP$152$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$510:;
	int64 vr$2 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	int64 vr$4 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	if( (*(int64*)I$1 * vr$2) <= vr$4 ) goto label$512;
	TMP$152$1 = (boolean)1ll;
	goto label$513;
	label$512:;
	TMP$152$1 = (boolean)0ll;
	label$513:;
	fb$result$1 = TMP$152$1;
	goto label$511;
	label$511:;
	return fb$result$1;
}

boolean _ZN4MATHgtERKdRKNS_8RATIONALE( double* N$1, struct $N4MATH8RATIONALE* R$1 )
{
	boolean TMP$153$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$514:;
	int64 vr$2 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$4 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	if( *N$1 <= ((double)vr$2 / (double)vr$4) ) goto label$516;
	TMP$153$1 = (boolean)1ll;
	goto label$517;
	label$516:;
	TMP$153$1 = (boolean)0ll;
	label$517:;
	fb$result$1 = TMP$153$1;
	goto label$515;
	label$515:;
	return fb$result$1;
}

boolean _ZN4MATHgtERKNS_8RATIONALERKx( struct $N4MATH8RATIONALE* R$1, int64* I$1 )
{
	boolean TMP$154$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$518:;
	int64 vr$1 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$2 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	if( vr$1 <= (vr$2 * *(int64*)I$1) ) goto label$520;
	TMP$154$1 = (boolean)1ll;
	goto label$521;
	label$520:;
	TMP$154$1 = (boolean)0ll;
	label$521:;
	fb$result$1 = TMP$154$1;
	goto label$519;
	label$519:;
	return fb$result$1;
}

boolean _ZN4MATHgtERKNS_8RATIONALERKd( struct $N4MATH8RATIONALE* R$1, double* N$1 )
{
	boolean TMP$155$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$522:;
	int64 vr$1 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$3 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	if( ((double)vr$1 / (double)vr$3) <= *N$1 ) goto label$524;
	TMP$155$1 = (boolean)1ll;
	goto label$525;
	label$524:;
	TMP$155$1 = (boolean)0ll;
	label$525:;
	fb$result$1 = TMP$155$1;
	goto label$523;
	label$523:;
	return fb$result$1;
}

boolean _ZN4MATHgtERKNS_8RATIONALES2_( struct $N4MATH8RATIONALE* R1$1, struct $N4MATH8RATIONALE* R2$1 )
{
	boolean TMP$156$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$526:;
	int64 vr$1 = _ZNK4MATH8RATIONAL8N__get__Ev( R1$1 );
	int64 vr$2 = _ZNK4MATH8RATIONAL8D__get__Ev( R2$1 );
	int64 vr$4 = _ZNK4MATH8RATIONAL8D__get__Ev( R1$1 );
	int64 vr$5 = _ZNK4MATH8RATIONAL8N__get__Ev( R2$1 );
	if( (vr$1 * vr$2) <= (vr$4 * vr$5) ) goto label$528;
	TMP$156$1 = (boolean)1ll;
	goto label$529;
	label$528:;
	TMP$156$1 = (boolean)0ll;
	label$529:;
	fb$result$1 = TMP$156$1;
	goto label$527;
	label$527:;
	return fb$result$1;
}

struct $N4MATH8RATIONALE _ZN4MATHv13absERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	int64 TMP$158$1;
	int64 TMP$159$1;
	struct $N4MATH8RATIONALE fb$result$1;
	label$530:;
	int64 vr$0 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	TMP$159$1 = __builtin_llabs( vr$0 );
	int64 vr$3 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	TMP$158$1 = __builtin_llabs( vr$3 );
	_ZN4MATH8RATIONALC1ERKxS2_( &fb$result$1, &TMP$158$1, &TMP$159$1 );
	goto label$531;
	label$531:;
	return fb$result$1;
}

double _ZN4MATHv14acosERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$532:;
	int64 vr$1 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$3 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	fb$result$1 = __builtin_acos( ((double)vr$1 / (double)vr$3) );
	goto label$533;
	label$533:;
	return fb$result$1;
}

double _ZN4MATHv14asinERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$534:;
	int64 vr$1 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$3 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	fb$result$1 = __builtin_asin( ((double)vr$1 / (double)vr$3) );
	goto label$535;
	label$535:;
	return fb$result$1;
}

double _ZN4MATHv13atnERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$536:;
	int64 vr$1 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$3 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	fb$result$1 = __builtin_atan( ((double)vr$1 / (double)vr$3) );
	goto label$537;
	label$537:;
	return fb$result$1;
}

double _ZN4MATHv13cosERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$538:;
	int64 vr$1 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$3 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	fb$result$1 = __builtin_cos( ((double)vr$1 / (double)vr$3) );
	goto label$539;
	label$539:;
	return fb$result$1;
}

struct $N4MATH8RATIONALE _ZN4MATHv13sgnERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	int64 TMP$161$1;
	int64 TMP$162$1;
	struct $N4MATH8RATIONALE fb$result$1;
	label$540:;
	int64 N$1;
	int64 vr$0 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	N$1 = vr$0;
	int64 D$1;
	int64 vr$1 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	D$1 = vr$1;
	TMP$162$1 = fb_D2L( (double)D$1 / (double)__builtin_llabs( D$1 ) );
	TMP$161$1 = fb_D2L( (double)N$1 / (double)__builtin_llabs( N$1 ) );
	_ZN4MATH8RATIONALC1ERKxS2_( &fb$result$1, &TMP$161$1, &TMP$162$1 );
	goto label$541;
	label$541:;
	return fb$result$1;
}

double _ZN4MATHv13sinERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$542:;
	int64 vr$1 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$3 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	fb$result$1 = __builtin_sin( ((double)vr$1 / (double)vr$3) );
	goto label$543;
	label$543:;
	return fb$result$1;
}

double _ZN4MATHv13tanERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$544:;
	int64 vr$1 = _ZNK4MATH8RATIONAL8N__get__Ev( R$1 );
	int64 vr$3 = _ZNK4MATH8RATIONAL8D__get__Ev( R$1 );
	fb$result$1 = __builtin_tan( ((double)vr$1 / (double)vr$3) );
	goto label$545;
	label$545:;
	return fb$result$1;
}

double _ZN4MATH5ACOSHERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$163$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$546:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$163$1 = vr$1;
	double vr$3 = _ZN4MATH5ACOSHERKd( (double*)&TMP$163$1 );
	fb$result$1 = vr$3;
	goto label$547;
	label$547:;
	return fb$result$1;
}

double _ZN4MATH4ACOTERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$164$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$548:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$164$1 = vr$1;
	double vr$3 = _ZN4MATH4ACOTERKd( (double*)&TMP$164$1 );
	fb$result$1 = vr$3;
	goto label$549;
	label$549:;
	return fb$result$1;
}

double _ZN4MATH5ACOTHERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$165$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$550:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$165$1 = vr$1;
	double vr$3 = _ZN4MATH5ACOTHERKd( (double*)&TMP$165$1 );
	fb$result$1 = vr$3;
	goto label$551;
	label$551:;
	return fb$result$1;
}

double _ZN4MATH4ACRDERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$166$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$552:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$166$1 = vr$1;
	double vr$3 = _ZN4MATH4ACRDERKd( (double*)&TMP$166$1 );
	fb$result$1 = vr$3;
	goto label$553;
	label$553:;
	return fb$result$1;
}

double _ZN4MATH4ACSCERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$167$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$554:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$167$1 = vr$1;
	double vr$3 = _ZN4MATH4ACSCERKd( (double*)&TMP$167$1 );
	fb$result$1 = vr$3;
	goto label$555;
	label$555:;
	return fb$result$1;
}

double _ZN4MATH6ACVCOSERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$168$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$556:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$168$1 = vr$1;
	double vr$3 = _ZN4MATH6ACVCOSERKd( (double*)&TMP$168$1 );
	fb$result$1 = vr$3;
	goto label$557;
	label$557:;
	return fb$result$1;
}

double _ZN4MATH6ACVSINERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$169$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$558:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$169$1 = vr$1;
	double vr$3 = _ZN4MATH6ACVSINERKd( (double*)&TMP$169$1 );
	fb$result$1 = vr$3;
	goto label$559;
	label$559:;
	return fb$result$1;
}

double _ZN4MATH6AEXCSCERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$170$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$560:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$170$1 = vr$1;
	double vr$3 = _ZN4MATH6AEXCSCERKd( (double*)&TMP$170$1 );
	fb$result$1 = vr$3;
	goto label$561;
	label$561:;
	return fb$result$1;
}

double _ZN4MATH6AEXSECERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$171$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$562:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$171$1 = vr$1;
	double vr$3 = _ZN4MATH6AEXSECERKd( (double*)&TMP$171$1 );
	fb$result$1 = vr$3;
	goto label$563;
	label$563:;
	return fb$result$1;
}

double _ZN4MATH7AHCVCOSERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$172$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$564:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$172$1 = vr$1;
	double vr$3 = _ZN4MATH7AHCVCOSERKd( (double*)&TMP$172$1 );
	fb$result$1 = vr$3;
	goto label$565;
	label$565:;
	return fb$result$1;
}

double _ZN4MATH7AHCVSINERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$173$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$566:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$173$1 = vr$1;
	double vr$3 = _ZN4MATH7AHCVSINERKd( (double*)&TMP$173$1 );
	fb$result$1 = vr$3;
	goto label$567;
	label$567:;
	return fb$result$1;
}

double _ZN4MATH6AHVCOSERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$174$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$568:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$174$1 = vr$1;
	double vr$3 = _ZN4MATH6AHVCOSERKd( (double*)&TMP$174$1 );
	fb$result$1 = vr$3;
	goto label$569;
	label$569:;
	return fb$result$1;
}

double _ZN4MATH6AHVSINERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$175$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$570:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$175$1 = vr$1;
	double vr$3 = _ZN4MATH6AHVSINERKd( (double*)&TMP$175$1 );
	fb$result$1 = vr$3;
	goto label$571;
	label$571:;
	return fb$result$1;
}

double _ZN4MATH4ASECERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$176$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$572:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$176$1 = vr$1;
	double vr$3 = _ZN4MATH4ASECERKd( (double*)&TMP$176$1 );
	fb$result$1 = vr$3;
	goto label$573;
	label$573:;
	return fb$result$1;
}

double _ZN4MATH5ASINHERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$177$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$574:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$177$1 = vr$1;
	double vr$3 = _ZN4MATH5ASINHERKd( (double*)&TMP$177$1 );
	fb$result$1 = vr$3;
	goto label$575;
	label$575:;
	return fb$result$1;
}

double _ZN4MATH4ATANERKdRKNS_8RATIONALE( double* Y$1, struct $N4MATH8RATIONALE* X$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$576:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( X$1 );
	double vr$3 = atan2( *Y$1, vr$1 );
	fb$result$1 = vr$3;
	goto label$577;
	label$577:;
	return fb$result$1;
}

double _ZN4MATH4ATANERKNS_8RATIONALERKd( struct $N4MATH8RATIONALE* Y$1, double* X$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$578:;
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( Y$1 );
	double vr$3 = atan2( vr$2, *X$1 );
	fb$result$1 = vr$3;
	goto label$579;
	label$579:;
	return fb$result$1;
}

double _ZN4MATH4ATANERKNS_8RATIONALES2_( struct $N4MATH8RATIONALE* Y$1, struct $N4MATH8RATIONALE* X$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$580:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( X$1 );
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( Y$1 );
	double vr$3 = atan2( vr$2, vr$1 );
	fb$result$1 = vr$3;
	goto label$581;
	label$581:;
	return fb$result$1;
}

double _ZN4MATH5ATANHERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$178$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$582:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$178$1 = vr$1;
	double vr$3 = _ZN4MATH5ATANHERKd( (double*)&TMP$178$1 );
	fb$result$1 = vr$3;
	goto label$583;
	label$583:;
	return fb$result$1;
}

double _ZN4MATH5AVCOSERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$179$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$584:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$179$1 = vr$1;
	double vr$3 = _ZN4MATH5AVCOSERKd( (double*)&TMP$179$1 );
	fb$result$1 = vr$3;
	goto label$585;
	label$585:;
	return fb$result$1;
}

double _ZN4MATH3AVGERKdRKNS_8RATIONALE( double* N1$1, struct $N4MATH8RATIONALE* R2$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$586:;
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	fb$result$1 = (*N1$1 + vr$2) / 0x1.p+1;
	goto label$587;
	label$587:;
	return fb$result$1;
}

double _ZN4MATH3AVGERKNS_8RATIONALERKd( struct $N4MATH8RATIONALE* R1$1, double* N2$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$588:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	fb$result$1 = (vr$1 + *N2$1) / 0x1.p+1;
	goto label$589;
	label$589:;
	return fb$result$1;
}

double _ZN4MATH3AVGERKNS_8RATIONALES2_( struct $N4MATH8RATIONALE* R1$1, struct $N4MATH8RATIONALE* R2$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$590:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	fb$result$1 = (vr$1 + vr$2) / 0x1.p+1;
	goto label$591;
	label$591:;
	return fb$result$1;
}

double _ZN4MATH3AVGERKdS1_RKNS_8RATIONALE( double* N1$1, double* N2$1, struct $N4MATH8RATIONALE* R3$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$592:;
	double vr$4 = _ZNK4MATH8RATIONALcvdEv( R3$1 );
	fb$result$1 = ((*N1$1 + *N2$1) + vr$4) / 0x1.8p+1;
	goto label$593;
	label$593:;
	return fb$result$1;
}

double _ZN4MATH3AVGERKdRKNS_8RATIONALES1_( double* N1$1, struct $N4MATH8RATIONALE* R2$1, double* N3$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$594:;
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	fb$result$1 = ((*N1$1 + vr$2) + *N3$1) / 0x1.8p+1;
	goto label$595;
	label$595:;
	return fb$result$1;
}

double _ZN4MATH3AVGERKdRKNS_8RATIONALES4_( double* N1$1, struct $N4MATH8RATIONALE* R2$1, struct $N4MATH8RATIONALE* R3$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$596:;
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	double vr$4 = _ZNK4MATH8RATIONALcvdEv( R3$1 );
	fb$result$1 = ((*N1$1 + vr$2) + vr$4) / 0x1.8p+1;
	goto label$597;
	label$597:;
	return fb$result$1;
}

double _ZN4MATH3AVGERKNS_8RATIONALERKdS4_( struct $N4MATH8RATIONALE* R1$1, double* N2$1, double* N3$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$598:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	fb$result$1 = ((vr$1 + *N2$1) + *N3$1) / 0x1.8p+1;
	goto label$599;
	label$599:;
	return fb$result$1;
}

double _ZN4MATH3AVGERKNS_8RATIONALERKdS2_( struct $N4MATH8RATIONALE* R1$1, double* N2$1, struct $N4MATH8RATIONALE* R3$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$600:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	double vr$4 = _ZNK4MATH8RATIONALcvdEv( R3$1 );
	fb$result$1 = ((vr$1 + *N2$1) + vr$4) / 0x1.8p+1;
	goto label$601;
	label$601:;
	return fb$result$1;
}

double _ZN4MATH3AVGERKNS_8RATIONALES2_RKd( struct $N4MATH8RATIONALE* R1$1, struct $N4MATH8RATIONALE* R2$1, double* N3$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$602:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	fb$result$1 = ((vr$1 + vr$2) + *N3$1) / 0x1.8p+1;
	goto label$603;
	label$603:;
	return fb$result$1;
}

double _ZN4MATH3AVGERKNS_8RATIONALES2_S2_( struct $N4MATH8RATIONALE* R1$1, struct $N4MATH8RATIONALE* R2$1, struct $N4MATH8RATIONALE* R3$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$604:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	double vr$4 = _ZNK4MATH8RATIONALcvdEv( R3$1 );
	fb$result$1 = ((vr$1 + vr$2) + vr$4) / 0x1.8p+1;
	goto label$605;
	label$605:;
	return fb$result$1;
}

double _ZN4MATH3AVGERKdS1_S1_RKNS_8RATIONALE( double* N1$1, double* N2$1, double* N3$1, struct $N4MATH8RATIONALE* R4$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$606:;
	double vr$6 = _ZNK4MATH8RATIONALcvdEv( R4$1 );
	fb$result$1 = (((*N1$1 + *N2$1) + *N3$1) + vr$6) / 0x1.p+2;
	goto label$607;
	label$607:;
	return fb$result$1;
}

double _ZN4MATH3AVGERKdS1_RKNS_8RATIONALES1_( double* N1$1, double* N2$1, struct $N4MATH8RATIONALE* R3$1, double* N4$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$608:;
	double vr$4 = _ZNK4MATH8RATIONALcvdEv( R3$1 );
	fb$result$1 = (((*N1$1 + *N2$1) + vr$4) + *N4$1) / 0x1.p+2;
	goto label$609;
	label$609:;
	return fb$result$1;
}

double _ZN4MATH3AVGERKdS1_RKNS_8RATIONALES4_( double* N1$1, double* N2$1, struct $N4MATH8RATIONALE* R3$1, struct $N4MATH8RATIONALE* R4$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$610:;
	double vr$4 = _ZNK4MATH8RATIONALcvdEv( R3$1 );
	double vr$6 = _ZNK4MATH8RATIONALcvdEv( R4$1 );
	fb$result$1 = (((*N1$1 + *N2$1) + vr$4) + vr$6) / 0x1.p+2;
	goto label$611;
	label$611:;
	return fb$result$1;
}

double _ZN4MATH3AVGERKdRKNS_8RATIONALES1_S1_( double* N1$1, struct $N4MATH8RATIONALE* R2$1, double* N3$1, double* N4$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$612:;
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	fb$result$1 = (((*N1$1 + vr$2) + *N3$1) + *N4$1) / 0x1.p+2;
	goto label$613;
	label$613:;
	return fb$result$1;
}

double _ZN4MATH3AVGERKdRKNS_8RATIONALES1_S4_( double* N1$1, struct $N4MATH8RATIONALE* R2$1, double* N3$1, struct $N4MATH8RATIONALE* R4$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$614:;
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	double vr$6 = _ZNK4MATH8RATIONALcvdEv( R4$1 );
	fb$result$1 = (((*N1$1 + vr$2) + *N3$1) + vr$6) / 0x1.p+2;
	goto label$615;
	label$615:;
	return fb$result$1;
}

double _ZN4MATH3AVGERKdRKNS_8RATIONALES4_S1_( double* N1$1, struct $N4MATH8RATIONALE* R2$1, struct $N4MATH8RATIONALE* R3$1, double* N4$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$616:;
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	double vr$4 = _ZNK4MATH8RATIONALcvdEv( R3$1 );
	fb$result$1 = (((*N1$1 + vr$2) + vr$4) + *N4$1) / 0x1.p+2;
	goto label$617;
	label$617:;
	return fb$result$1;
}

double _ZN4MATH3AVGERKdRKNS_8RATIONALES4_S4_( double* N1$1, struct $N4MATH8RATIONALE* R2$1, struct $N4MATH8RATIONALE* R3$1, struct $N4MATH8RATIONALE* R4$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$618:;
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	double vr$4 = _ZNK4MATH8RATIONALcvdEv( R3$1 );
	double vr$6 = _ZNK4MATH8RATIONALcvdEv( R4$1 );
	fb$result$1 = (((*N1$1 + vr$2) + vr$4) + vr$6) / 0x1.p+2;
	goto label$619;
	label$619:;
	return fb$result$1;
}

double _ZN4MATH3AVGERKNS_8RATIONALERKdS4_S4_( struct $N4MATH8RATIONALE* R1$1, double* N2$1, double* N3$1, double* N4$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$620:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	fb$result$1 = (((vr$1 + *N2$1) + *N3$1) + *N4$1) / 0x1.p+2;
	goto label$621;
	label$621:;
	return fb$result$1;
}

double _ZN4MATH3AVGERKNS_8RATIONALERKdS4_S2_( struct $N4MATH8RATIONALE* R1$1, double* N2$1, double* N3$1, struct $N4MATH8RATIONALE* R4$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$622:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	double vr$6 = _ZNK4MATH8RATIONALcvdEv( R4$1 );
	fb$result$1 = (((vr$1 + *N2$1) + *N3$1) + vr$6) / 0x1.p+2;
	goto label$623;
	label$623:;
	return fb$result$1;
}

double _ZN4MATH3AVGERKNS_8RATIONALERKdS2_S4_( struct $N4MATH8RATIONALE* R1$1, double* N2$1, struct $N4MATH8RATIONALE* R3$1, double* N4$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$624:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	double vr$4 = _ZNK4MATH8RATIONALcvdEv( R3$1 );
	fb$result$1 = (((vr$1 + *N2$1) + vr$4) + *N4$1) / 0x1.p+2;
	goto label$625;
	label$625:;
	return fb$result$1;
}

double _ZN4MATH3AVGERKNS_8RATIONALERKdS2_S2_( struct $N4MATH8RATIONALE* R1$1, double* N2$1, struct $N4MATH8RATIONALE* R3$1, struct $N4MATH8RATIONALE* R4$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$626:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	double vr$4 = _ZNK4MATH8RATIONALcvdEv( R3$1 );
	double vr$6 = _ZNK4MATH8RATIONALcvdEv( R4$1 );
	fb$result$1 = (((vr$1 + *N2$1) + vr$4) + vr$6) / 0x1.p+2;
	goto label$627;
	label$627:;
	return fb$result$1;
}

double _ZN4MATH3AVGERKNS_8RATIONALES2_RKdS4_( struct $N4MATH8RATIONALE* R1$1, struct $N4MATH8RATIONALE* R2$1, double* N3$1, double* N4$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$628:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	fb$result$1 = (((vr$1 + vr$2) + *N3$1) + *N4$1) / 0x1.p+2;
	goto label$629;
	label$629:;
	return fb$result$1;
}

double _ZN4MATH3AVGERKNS_8RATIONALES2_RKdS2_( struct $N4MATH8RATIONALE* R1$1, struct $N4MATH8RATIONALE* R2$1, double* N3$1, struct $N4MATH8RATIONALE* R4$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$630:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	double vr$6 = _ZNK4MATH8RATIONALcvdEv( R4$1 );
	fb$result$1 = (((vr$1 + vr$2) + *N3$1) + vr$6) / 0x1.p+2;
	goto label$631;
	label$631:;
	return fb$result$1;
}

double _ZN4MATH3AVGERKNS_8RATIONALES2_S2_RKd( struct $N4MATH8RATIONALE* R1$1, struct $N4MATH8RATIONALE* R2$1, struct $N4MATH8RATIONALE* R3$1, double* N4$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$632:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	double vr$4 = _ZNK4MATH8RATIONALcvdEv( R3$1 );
	fb$result$1 = (((vr$1 + vr$2) + vr$4) + *N4$1) / 0x1.p+2;
	goto label$633;
	label$633:;
	return fb$result$1;
}

double _ZN4MATH3AVGERKNS_8RATIONALES2_S2_S2_( struct $N4MATH8RATIONALE* R1$1, struct $N4MATH8RATIONALE* R2$1, struct $N4MATH8RATIONALE* R3$1, struct $N4MATH8RATIONALE* R4$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$634:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	double vr$4 = _ZNK4MATH8RATIONALcvdEv( R3$1 );
	double vr$6 = _ZNK4MATH8RATIONALcvdEv( R4$1 );
	fb$result$1 = (((vr$1 + vr$2) + vr$4) + vr$6) / 0x1.p+2;
	goto label$635;
	label$635:;
	return fb$result$1;
}

double _ZN4MATH5AVSINERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$180$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$636:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$180$1 = vr$1;
	double vr$3 = _ZN4MATH5AVSINERKd( (double*)&TMP$180$1 );
	fb$result$1 = vr$3;
	goto label$637;
	label$637:;
	return fb$result$1;
}

boolean _ZN4MATH3CMPERKdRKNS_8RATIONALES1_( double* N$1, struct $N4MATH8RATIONALE* R$1, double* T$1 )
{
	boolean TMP$181$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$638:;
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	if( __builtin_fabs( (*N$1 - vr$2) ) > __builtin_fabs( *T$1 ) ) goto label$640;
	TMP$181$1 = (boolean)1ll;
	goto label$641;
	label$640:;
	TMP$181$1 = (boolean)0ll;
	label$641:;
	fb$result$1 = TMP$181$1;
	goto label$639;
	label$639:;
	return fb$result$1;
}

boolean _ZN4MATH3CMPERKNS_8RATIONALERKdS4_( struct $N4MATH8RATIONALE* R$1, double* N$1, double* T$1 )
{
	boolean TMP$182$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$642:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	if( __builtin_fabs( (vr$1 - *N$1) ) > __builtin_fabs( *T$1 ) ) goto label$644;
	TMP$182$1 = (boolean)1ll;
	goto label$645;
	label$644:;
	TMP$182$1 = (boolean)0ll;
	label$645:;
	fb$result$1 = TMP$182$1;
	goto label$643;
	label$643:;
	return fb$result$1;
}

boolean _ZN4MATH3CMPERKNS_8RATIONALES2_RKd( struct $N4MATH8RATIONALE* R1$1, struct $N4MATH8RATIONALE* R2$1, double* T$1 )
{
	boolean TMP$183$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$646:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	if( __builtin_fabs( (vr$1 - vr$2) ) > __builtin_fabs( *T$1 ) ) goto label$648;
	TMP$183$1 = (boolean)1ll;
	goto label$649;
	label$648:;
	TMP$183$1 = (boolean)0ll;
	label$649:;
	fb$result$1 = TMP$183$1;
	goto label$647;
	label$647:;
	return fb$result$1;
}

double _ZN4MATH4COSHERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$184$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$650:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$184$1 = vr$1;
	double vr$3 = _ZN4MATH4COSHERKd( (double*)&TMP$184$1 );
	fb$result$1 = vr$3;
	goto label$651;
	label$651:;
	return fb$result$1;
}

double _ZN4MATH3COTERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$185$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$652:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$185$1 = vr$1;
	double vr$3 = _ZN4MATH3COTERKd( (double*)&TMP$185$1 );
	fb$result$1 = vr$3;
	goto label$653;
	label$653:;
	return fb$result$1;
}

double _ZN4MATH4COTHERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$186$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$654:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$186$1 = vr$1;
	double vr$3 = _ZN4MATH4COTHERKd( (double*)&TMP$186$1 );
	fb$result$1 = vr$3;
	goto label$655;
	label$655:;
	return fb$result$1;
}

double _ZN4MATH3CRDERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$187$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$656:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$187$1 = vr$1;
	double vr$3 = _ZN4MATH3CRDERKd( (double*)&TMP$187$1 );
	fb$result$1 = vr$3;
	goto label$657;
	label$657:;
	return fb$result$1;
}

double _ZN4MATH3CSCERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$188$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$658:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$188$1 = vr$1;
	double vr$3 = _ZN4MATH3CSCERKd( (double*)&TMP$188$1 );
	fb$result$1 = vr$3;
	goto label$659;
	label$659:;
	return fb$result$1;
}

double _ZN4MATH4CSCHERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$189$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$660:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$189$1 = vr$1;
	double vr$3 = _ZN4MATH4CSCHERKd( (double*)&TMP$189$1 );
	fb$result$1 = vr$3;
	goto label$661;
	label$661:;
	return fb$result$1;
}

double _ZN4MATH5CVCOSERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$190$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$662:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$190$1 = vr$1;
	double vr$3 = _ZN4MATH5CVCOSERKd( (double*)&TMP$190$1 );
	fb$result$1 = vr$3;
	goto label$663;
	label$663:;
	return fb$result$1;
}

double _ZN4MATH5CVSINERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$191$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$664:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$191$1 = vr$1;
	double vr$3 = _ZN4MATH5CVSINERKd( (double*)&TMP$191$1 );
	fb$result$1 = vr$3;
	goto label$665;
	label$665:;
	return fb$result$1;
}

double _ZN4MATH5EXCSCERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$192$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$666:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$192$1 = vr$1;
	double vr$3 = _ZN4MATH5EXCSCERKd( (double*)&TMP$192$1 );
	fb$result$1 = vr$3;
	goto label$667;
	label$667:;
	return fb$result$1;
}

double _ZN4MATH5EXSECERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$193$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$668:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$193$1 = vr$1;
	double vr$3 = _ZN4MATH5EXSECERKd( (double*)&TMP$193$1 );
	fb$result$1 = vr$3;
	goto label$669;
	label$669:;
	return fb$result$1;
}

double _ZN4MATH6HCVCOSERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$194$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$670:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$194$1 = vr$1;
	double vr$3 = _ZN4MATH6HCVCOSERKd( (double*)&TMP$194$1 );
	fb$result$1 = vr$3;
	goto label$671;
	label$671:;
	return fb$result$1;
}

double _ZN4MATH6HCVSINERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$195$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$672:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$195$1 = vr$1;
	double vr$3 = _ZN4MATH6HCVSINERKd( (double*)&TMP$195$1 );
	fb$result$1 = vr$3;
	goto label$673;
	label$673:;
	return fb$result$1;
}

double _ZN4MATH5HVCOSERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$196$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$674:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$196$1 = vr$1;
	double vr$3 = _ZN4MATH5HVCOSERKd( (double*)&TMP$196$1 );
	fb$result$1 = vr$3;
	goto label$675;
	label$675:;
	return fb$result$1;
}

double _ZN4MATH5HVSINERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$197$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$676:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$197$1 = vr$1;
	double vr$3 = _ZN4MATH5HVSINERKd( (double*)&TMP$197$1 );
	fb$result$1 = vr$3;
	goto label$677;
	label$677:;
	return fb$result$1;
}

double _ZN4MATH5HYPOTERKdRKNS_8RATIONALE( double* X$1, struct $N4MATH8RATIONALE* Y$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$678:;
	double J$1;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( Y$1 );
	J$1 = vr$1;
	fb$result$1 = __builtin_sqrt( ((*X$1 + *X$1) + (J$1 * J$1)) );
	goto label$679;
	label$679:;
	return fb$result$1;
}

double _ZN4MATH5HYPOTERKNS_8RATIONALERKd( struct $N4MATH8RATIONALE* X$1, double* Y$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$680:;
	double I$1;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( X$1 );
	I$1 = vr$1;
	fb$result$1 = __builtin_sqrt( ((I$1 * I$1) + (*Y$1 * *Y$1)) );
	goto label$681;
	label$681:;
	return fb$result$1;
}

double _ZN4MATH5HYPOTERKNS_8RATIONALES2_( struct $N4MATH8RATIONALE* X$1, struct $N4MATH8RATIONALE* Y$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$682:;
	double I$1;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( X$1 );
	I$1 = vr$1;
	double J$1;
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( Y$1 );
	J$1 = vr$2;
	fb$result$1 = __builtin_sqrt( ((I$1 * I$1) + (J$1 * J$1)) );
	goto label$683;
	label$683:;
	return fb$result$1;
}

double _ZN4MATH5HYPOTERKdS1_RKNS_8RATIONALE( double* X$1, double* Y$1, struct $N4MATH8RATIONALE* Z$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$684:;
	double K$1;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( Z$1 );
	K$1 = vr$1;
	fb$result$1 = __builtin_sqrt( (((*X$1 * *X$1) + (*Y$1 * *Y$1)) + (K$1 * K$1)) );
	goto label$685;
	label$685:;
	return fb$result$1;
}

double _ZN4MATH5HYPOTERKdRKNS_8RATIONALES1_( double* X$1, struct $N4MATH8RATIONALE* Y$1, double* Z$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$686:;
	double J$1;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( Y$1 );
	J$1 = vr$1;
	fb$result$1 = __builtin_sqrt( (((*X$1 * *X$1) + (J$1 * J$1)) + (*Z$1 * *Z$1)) );
	goto label$687;
	label$687:;
	return fb$result$1;
}

double _ZN4MATH5HYPOTERKdRKNS_8RATIONALES4_( double* X$1, struct $N4MATH8RATIONALE* Y$1, struct $N4MATH8RATIONALE* Z$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$688:;
	double J$1;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( Y$1 );
	J$1 = vr$1;
	double K$1;
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( Z$1 );
	K$1 = vr$2;
	fb$result$1 = __builtin_sqrt( (((*X$1 * *X$1) + (J$1 * J$1)) + (K$1 * K$1)) );
	goto label$689;
	label$689:;
	return fb$result$1;
}

double _ZN4MATH5HYPOTERKNS_8RATIONALERKdS4_( struct $N4MATH8RATIONALE* X$1, double* Y$1, double* Z$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$690:;
	double I$1;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( X$1 );
	I$1 = vr$1;
	fb$result$1 = __builtin_sqrt( (((I$1 * I$1) + (*Y$1 * *Y$1)) + (*Z$1 * *Z$1)) );
	goto label$691;
	label$691:;
	return fb$result$1;
}

double _ZN4MATH5HYPOTERKNS_8RATIONALERKdS2_( struct $N4MATH8RATIONALE* X$1, double* Y$1, struct $N4MATH8RATIONALE* Z$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$692:;
	double I$1;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( X$1 );
	I$1 = vr$1;
	double K$1;
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( Z$1 );
	K$1 = vr$2;
	fb$result$1 = __builtin_sqrt( (((I$1 * I$1) + (*Y$1 * *Y$1)) + (K$1 * K$1)) );
	goto label$693;
	label$693:;
	return fb$result$1;
}

double _ZN4MATH5HYPOTERKNS_8RATIONALES2_RKd( struct $N4MATH8RATIONALE* X$1, struct $N4MATH8RATIONALE* Y$1, double* Z$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$694:;
	double I$1;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( X$1 );
	I$1 = vr$1;
	double J$1;
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( Y$1 );
	J$1 = vr$2;
	fb$result$1 = __builtin_sqrt( (((I$1 * I$1) + (J$1 * J$1)) + (*Z$1 * *Z$1)) );
	goto label$695;
	label$695:;
	return fb$result$1;
}

double _ZN4MATH5HYPOTERKNS_8RATIONALES2_S2_( struct $N4MATH8RATIONALE* X$1, struct $N4MATH8RATIONALE* Y$1, struct $N4MATH8RATIONALE* Z$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$696:;
	double I$1;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( X$1 );
	I$1 = vr$1;
	double J$1;
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( Y$1 );
	J$1 = vr$2;
	double K$1;
	double vr$3 = _ZNK4MATH8RATIONALcvdEv( Z$1 );
	K$1 = vr$3;
	fb$result$1 = __builtin_sqrt( (((I$1 * I$1) + (J$1 * J$1)) + (K$1 * K$1)) );
	goto label$697;
	label$697:;
	return fb$result$1;
}

double _ZN4MATH5HYPOTERKdS1_S1_RKNS_8RATIONALE( double* X$1, double* Y$1, double* Z$1, struct $N4MATH8RATIONALE* W$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$698:;
	double L$1;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( W$1 );
	L$1 = vr$1;
	fb$result$1 = __builtin_sqrt( ((((*X$1 * *X$1) + (*Y$1 * *Y$1)) + (*Z$1 * *Z$1)) + (L$1 * L$1)) );
	goto label$699;
	label$699:;
	return fb$result$1;
}

double _ZN4MATH5HYPOTERKdS1_RKNS_8RATIONALES1_( double* X$1, double* Y$1, struct $N4MATH8RATIONALE* Z$1, double* W$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$700:;
	double K$1;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( Z$1 );
	K$1 = vr$1;
	fb$result$1 = __builtin_sqrt( ((((*X$1 * *X$1) + (*Y$1 * *Y$1)) + (K$1 * K$1)) + (*W$1 * *W$1)) );
	goto label$701;
	label$701:;
	return fb$result$1;
}

double _ZN4MATH5HYPOTERKdS1_RKNS_8RATIONALES4_( double* X$1, double* Y$1, struct $N4MATH8RATIONALE* Z$1, struct $N4MATH8RATIONALE* W$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$702:;
	double K$1;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( Z$1 );
	K$1 = vr$1;
	double L$1;
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( W$1 );
	L$1 = vr$2;
	fb$result$1 = __builtin_sqrt( ((((*X$1 * *X$1) + (*Y$1 * *Y$1)) + (K$1 * K$1)) + (L$1 * L$1)) );
	goto label$703;
	label$703:;
	return fb$result$1;
}

double _ZN4MATH5HYPOTERKdRKNS_8RATIONALES1_S1_( double* X$1, struct $N4MATH8RATIONALE* Y$1, double* Z$1, double* W$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$704:;
	double J$1;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( Y$1 );
	J$1 = vr$1;
	fb$result$1 = __builtin_sqrt( ((((*X$1 * *X$1) + (J$1 * J$1)) + (*Z$1 * *Z$1)) + (*W$1 * *W$1)) );
	goto label$705;
	label$705:;
	return fb$result$1;
}

double _ZN4MATH5HYPOTERKdRKNS_8RATIONALES1_S4_( double* X$1, struct $N4MATH8RATIONALE* Y$1, double* Z$1, struct $N4MATH8RATIONALE* W$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$706:;
	double J$1;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( Y$1 );
	J$1 = vr$1;
	double L$1;
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( W$1 );
	L$1 = vr$2;
	fb$result$1 = __builtin_sqrt( ((((*X$1 * *X$1) + (J$1 * J$1)) + (*Z$1 * *Z$1)) + (L$1 * L$1)) );
	goto label$707;
	label$707:;
	return fb$result$1;
}

double _ZN4MATH5HYPOTERKdRKNS_8RATIONALES4_S1_( double* X$1, struct $N4MATH8RATIONALE* Y$1, struct $N4MATH8RATIONALE* Z$1, double* W$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$708:;
	double J$1;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( Y$1 );
	J$1 = vr$1;
	double K$1;
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( Z$1 );
	K$1 = vr$2;
	fb$result$1 = __builtin_sqrt( ((((*X$1 * *X$1) + (J$1 * J$1)) + (K$1 * K$1)) + (*W$1 * *W$1)) );
	goto label$709;
	label$709:;
	return fb$result$1;
}

double _ZN4MATH5HYPOTERKdRKNS_8RATIONALES4_S4_( double* X$1, struct $N4MATH8RATIONALE* Y$1, struct $N4MATH8RATIONALE* Z$1, struct $N4MATH8RATIONALE* W$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$710:;
	double J$1;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( Y$1 );
	J$1 = vr$1;
	double K$1;
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( Z$1 );
	K$1 = vr$2;
	double L$1;
	double vr$3 = _ZNK4MATH8RATIONALcvdEv( W$1 );
	L$1 = vr$3;
	fb$result$1 = __builtin_sqrt( ((((*X$1 * *X$1) + (J$1 * J$1)) + (K$1 * K$1)) + (L$1 * L$1)) );
	goto label$711;
	label$711:;
	return fb$result$1;
}

double _ZN4MATH5HYPOTERKNS_8RATIONALERKdS4_S4_( struct $N4MATH8RATIONALE* X$1, double* Y$1, double* Z$1, double* W$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$712:;
	double I$1;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( X$1 );
	I$1 = vr$1;
	fb$result$1 = __builtin_sqrt( ((((I$1 * I$1) + (*Y$1 * *Y$1)) + (*Z$1 * *Z$1)) + (*W$1 * *W$1)) );
	goto label$713;
	label$713:;
	return fb$result$1;
}

double _ZN4MATH5HYPOTERKNS_8RATIONALERKdS4_S2_( struct $N4MATH8RATIONALE* X$1, double* Y$1, double* Z$1, struct $N4MATH8RATIONALE* W$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$714:;
	double I$1;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( X$1 );
	I$1 = vr$1;
	double L$1;
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( W$1 );
	L$1 = vr$2;
	fb$result$1 = __builtin_sqrt( ((((I$1 * I$1) + (*Y$1 * *Y$1)) + (*Z$1 * *Z$1)) + (L$1 * L$1)) );
	goto label$715;
	label$715:;
	return fb$result$1;
}

double _ZN4MATH5HYPOTERKNS_8RATIONALERKdS2_S4_( struct $N4MATH8RATIONALE* X$1, double* Y$1, struct $N4MATH8RATIONALE* Z$1, double* W$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$716:;
	double I$1;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( X$1 );
	I$1 = vr$1;
	double K$1;
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( Z$1 );
	K$1 = vr$2;
	fb$result$1 = __builtin_sqrt( ((((I$1 * I$1) + (*Y$1 * *Y$1)) + (K$1 * K$1)) + (*W$1 * *W$1)) );
	goto label$717;
	label$717:;
	return fb$result$1;
}

double _ZN4MATH5HYPOTERKNS_8RATIONALERKdS2_S2_( struct $N4MATH8RATIONALE* X$1, double* Y$1, struct $N4MATH8RATIONALE* Z$1, struct $N4MATH8RATIONALE* W$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$718:;
	double I$1;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( X$1 );
	I$1 = vr$1;
	double K$1;
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( Z$1 );
	K$1 = vr$2;
	double L$1;
	double vr$3 = _ZNK4MATH8RATIONALcvdEv( W$1 );
	L$1 = vr$3;
	fb$result$1 = __builtin_sqrt( ((((I$1 * I$1) + (*Y$1 * *Y$1)) + (K$1 * K$1)) + (L$1 * L$1)) );
	goto label$719;
	label$719:;
	return fb$result$1;
}

double _ZN4MATH5HYPOTERKNS_8RATIONALES2_RKdS4_( struct $N4MATH8RATIONALE* X$1, struct $N4MATH8RATIONALE* Y$1, double* Z$1, double* W$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$720:;
	double I$1;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( X$1 );
	I$1 = vr$1;
	double J$1;
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( Y$1 );
	J$1 = vr$2;
	fb$result$1 = __builtin_sqrt( ((((I$1 * I$1) + (J$1 * J$1)) + (*Z$1 * *Z$1)) + (*W$1 * *W$1)) );
	goto label$721;
	label$721:;
	return fb$result$1;
}

double _ZN4MATH5HYPOTERKNS_8RATIONALES2_RKdS2_( struct $N4MATH8RATIONALE* X$1, struct $N4MATH8RATIONALE* Y$1, double* Z$1, struct $N4MATH8RATIONALE* W$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$722:;
	double I$1;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( X$1 );
	I$1 = vr$1;
	double J$1;
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( Y$1 );
	J$1 = vr$2;
	double L$1;
	double vr$3 = _ZNK4MATH8RATIONALcvdEv( W$1 );
	L$1 = vr$3;
	fb$result$1 = __builtin_sqrt( ((((I$1 * I$1) + (J$1 * J$1)) + (*Z$1 * *Z$1)) + (L$1 * L$1)) );
	goto label$723;
	label$723:;
	return fb$result$1;
}

double _ZN4MATH5HYPOTERKNS_8RATIONALES2_S2_RKd( struct $N4MATH8RATIONALE* X$1, struct $N4MATH8RATIONALE* Y$1, struct $N4MATH8RATIONALE* Z$1, double* W$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$724:;
	double I$1;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( X$1 );
	I$1 = vr$1;
	double J$1;
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( Y$1 );
	J$1 = vr$2;
	double K$1;
	double vr$3 = _ZNK4MATH8RATIONALcvdEv( Z$1 );
	K$1 = vr$3;
	fb$result$1 = __builtin_sqrt( ((((I$1 * I$1) + (J$1 * J$1)) + (K$1 * K$1)) + (*W$1 * *W$1)) );
	goto label$725;
	label$725:;
	return fb$result$1;
}

double _ZN4MATH5HYPOTERKNS_8RATIONALES2_S2_S2_( struct $N4MATH8RATIONALE* X$1, struct $N4MATH8RATIONALE* Y$1, struct $N4MATH8RATIONALE* Z$1, struct $N4MATH8RATIONALE* W$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$726:;
	double I$1;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( X$1 );
	I$1 = vr$1;
	double J$1;
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( Y$1 );
	J$1 = vr$2;
	double K$1;
	double vr$3 = _ZNK4MATH8RATIONALcvdEv( Z$1 );
	K$1 = vr$3;
	double L$1;
	double vr$4 = _ZNK4MATH8RATIONALcvdEv( W$1 );
	L$1 = vr$4;
	fb$result$1 = __builtin_sqrt( ((((I$1 * I$1) + (J$1 * J$1)) + (K$1 * K$1)) + (L$1 * L$1)) );
	goto label$727;
	label$727:;
	return fb$result$1;
}

double _ZN4MATH4LERPERKdRKNS_8RATIONALES1_( double* N$1, struct $N4MATH8RATIONALE* R$1, double* S$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$728:;
	double T$1;
	double vr$1 = _ZN4MATH5CLAMPERKd( S$1 );
	T$1 = vr$1;
	double vr$5 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	fb$result$1 = (*N$1 * (0x1.p+0 - T$1)) + (vr$5 * T$1);
	goto label$729;
	label$729:;
	return fb$result$1;
}

double _ZN4MATH4LERPERKNS_8RATIONALERKdS4_( struct $N4MATH8RATIONALE* R$1, double* N$1, double* S$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$730:;
	double T$1;
	double vr$1 = _ZN4MATH5CLAMPERKd( S$1 );
	T$1 = vr$1;
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	fb$result$1 = (vr$2 * (0x1.p+0 - T$1)) + (*N$1 * T$1);
	goto label$731;
	label$731:;
	return fb$result$1;
}

double _ZN4MATH4LERPERKNS_8RATIONALES2_RKd( struct $N4MATH8RATIONALE* R1$1, struct $N4MATH8RATIONALE* R2$1, double* S$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$732:;
	double T$1;
	double vr$1 = _ZN4MATH5CLAMPERKd( S$1 );
	T$1 = vr$1;
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	double vr$5 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	fb$result$1 = (vr$2 * (0x1.p+0 - T$1)) + (vr$5 * T$1);
	goto label$733;
	label$733:;
	return fb$result$1;
}

double _ZN4MATH5LOG10ERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$198$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$734:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$198$1 = vr$1;
	double vr$3 = _ZN4MATH5LOG10ERKd( (double*)&TMP$198$1 );
	fb$result$1 = vr$3;
	goto label$735;
	label$735:;
	return fb$result$1;
}

double _ZN4MATH5LOG1PERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$199$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$736:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$199$1 = vr$1;
	double vr$3 = _ZN4MATH5LOG1PERKd( (double*)&TMP$199$1 );
	fb$result$1 = vr$3;
	goto label$737;
	label$737:;
	return fb$result$1;
}

double _ZN4MATH4LOG2ERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$200$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$738:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$200$1 = vr$1;
	double vr$3 = _ZN4MATH4LOG2ERKd( (double*)&TMP$200$1 );
	fb$result$1 = vr$3;
	goto label$739;
	label$739:;
	return fb$result$1;
}

double _ZN4MATH4LOGBERKdRKNS_8RATIONALE( double* N$1, struct $N4MATH8RATIONALE* B$1 )
{
	double TMP$201$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$740:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( B$1 );
	TMP$201$1 = vr$1;
	double vr$3 = _ZN4MATH4LOGBERKdS1_( N$1, (double*)&TMP$201$1 );
	fb$result$1 = vr$3;
	goto label$741;
	label$741:;
	return fb$result$1;
}

double _ZN4MATH4LOGBERKNS_8RATIONALERKd( struct $N4MATH8RATIONALE* N$1, double* B$1 )
{
	double TMP$202$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$742:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( N$1 );
	TMP$202$1 = vr$1;
	double vr$3 = _ZN4MATH4LOGBERKdS1_( (double*)&TMP$202$1, B$1 );
	fb$result$1 = vr$3;
	goto label$743;
	label$743:;
	return fb$result$1;
}

double _ZN4MATH4LOGBERKNS_8RATIONALES2_( struct $N4MATH8RATIONALE* N$1, struct $N4MATH8RATIONALE* B$1 )
{
	double TMP$203$1;
	double TMP$204$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$744:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( B$1 );
	TMP$204$1 = vr$1;
	double vr$3 = _ZNK4MATH8RATIONALcvdEv( N$1 );
	TMP$203$1 = vr$3;
	double vr$5 = _ZN4MATH4LOGBERKdS1_( (double*)&TMP$203$1, (double*)&TMP$204$1 );
	fb$result$1 = vr$5;
	goto label$745;
	label$745:;
	return fb$result$1;
}

double _ZN4MATH3SECERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$205$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$746:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$205$1 = vr$1;
	double vr$3 = _ZN4MATH3SECERKd( (double*)&TMP$205$1 );
	fb$result$1 = vr$3;
	goto label$747;
	label$747:;
	return fb$result$1;
}

double _ZN4MATH4SECHERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$206$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$748:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$206$1 = vr$1;
	double vr$3 = _ZN4MATH4SECHERKd( (double*)&TMP$206$1 );
	fb$result$1 = vr$3;
	goto label$749;
	label$749:;
	return fb$result$1;
}

double _ZN4MATH4SINHERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$207$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$750:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$207$1 = vr$1;
	double vr$3 = _ZN4MATH4SINHERKd( (double*)&TMP$207$1 );
	fb$result$1 = vr$3;
	goto label$751;
	label$751:;
	return fb$result$1;
}

double _ZN4MATH4TANHERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$208$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$752:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$208$1 = vr$1;
	double vr$3 = _ZN4MATH4TANHERKd( (double*)&TMP$208$1 );
	fb$result$1 = vr$3;
	goto label$753;
	label$753:;
	return fb$result$1;
}

double _ZN4MATH5THETAERKdRKNS_8RATIONALE( double* X$1, struct $N4MATH8RATIONALE* Y$1 )
{
	double TMP$209$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$754:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( Y$1 );
	TMP$209$1 = vr$1;
	double vr$3 = _ZN4MATH5THETAERKdS1_( X$1, (double*)&TMP$209$1 );
	fb$result$1 = vr$3;
	goto label$755;
	label$755:;
	return fb$result$1;
}

double _ZN4MATH5THETAERKNS_8RATIONALERKd( struct $N4MATH8RATIONALE* X$1, double* Y$1 )
{
	double TMP$210$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$756:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( X$1 );
	TMP$210$1 = vr$1;
	double vr$3 = _ZN4MATH5THETAERKdS1_( (double*)&TMP$210$1, Y$1 );
	fb$result$1 = vr$3;
	goto label$757;
	label$757:;
	return fb$result$1;
}

double _ZN4MATH5THETAERKNS_8RATIONALES2_( struct $N4MATH8RATIONALE* X$1, struct $N4MATH8RATIONALE* Y$1 )
{
	double TMP$211$1;
	double TMP$212$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$758:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( Y$1 );
	TMP$212$1 = vr$1;
	double vr$3 = _ZNK4MATH8RATIONALcvdEv( X$1 );
	TMP$211$1 = vr$3;
	double vr$5 = _ZN4MATH5THETAERKdS1_( (double*)&TMP$211$1, (double*)&TMP$212$1 );
	fb$result$1 = vr$5;
	goto label$759;
	label$759:;
	return fb$result$1;
}

double _ZN4MATH4VCOSERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$213$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$760:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$213$1 = vr$1;
	double vr$3 = _ZN4MATH4VCOSERKd( (double*)&TMP$213$1 );
	fb$result$1 = vr$3;
	goto label$761;
	label$761:;
	return fb$result$1;
}

double _ZN4MATH4VSINERKNS_8RATIONALE( struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$214$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$762:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$214$1 = vr$1;
	double vr$3 = _ZN4MATH4VSINERKd( (double*)&TMP$214$1 );
	fb$result$1 = vr$3;
	goto label$763;
	label$763:;
	return fb$result$1;
}

void _ZN4MATH7COMPLEXC1Ev( struct $N4MATH7COMPLEXE* THIS$1 )
{
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	label$764:;
	label$765:;
}

void _ZN4MATH7COMPLEXC1ERKdS2_( struct $N4MATH7COMPLEXE* THIS$1, double* N1$1, double* N2$1 )
{
	label$766:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	*(double*)THIS$1 = *N1$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *N2$1;
	label$767:;
}

void _ZN4MATH7COMPLEXC1ERKdRKNS_8RATIONALE( struct $N4MATH7COMPLEXE* THIS$1, double* N1$1, struct $N4MATH8RATIONALE* N2$1 )
{
	label$768:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	*(double*)THIS$1 = *N1$1;
	double vr$6 = _ZNK4MATH8RATIONALcvdEv( N2$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$6;
	label$769:;
}

void _ZN4MATH7COMPLEXC1ERKNS_8RATIONALE( struct $N4MATH7COMPLEXE* THIS$1, struct $N4MATH8RATIONALE* N1$1 )
{
	label$770:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	double vr$4 = _ZNK4MATH8RATIONALcvdEv( N1$1 );
	*(double*)THIS$1 = vr$4;
	label$771:;
}

void _ZN4MATH7COMPLEXC1ERKNS_8RATIONALERKd( struct $N4MATH7COMPLEXE* THIS$1, struct $N4MATH8RATIONALE* N1$1, double* N2$1 )
{
	label$772:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	double vr$4 = _ZNK4MATH8RATIONALcvdEv( N1$1 );
	*(double*)THIS$1 = vr$4;
	*(double*)((uint8*)THIS$1 + 8ll) = *N2$1;
	label$773:;
}

void _ZN4MATH7COMPLEXC1ERKNS_8RATIONALES3_( struct $N4MATH7COMPLEXE* THIS$1, struct $N4MATH8RATIONALE* N1$1, struct $N4MATH8RATIONALE* N2$1 )
{
	label$774:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	double vr$4 = _ZNK4MATH8RATIONALcvdEv( N1$1 );
	*(double*)THIS$1 = vr$4;
	double vr$6 = _ZNK4MATH8RATIONALcvdEv( N2$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$6;
	label$775:;
}

void _ZN4MATH7COMPLEXC1ERKS0_( struct $N4MATH7COMPLEXE* THIS$1, struct $N4MATH7COMPLEXE* C$1 )
{
	label$776:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	*(double*)THIS$1 = *(double*)C$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)C$1 + 8ll);
	label$777:;
}

void _ZN4MATH7COMPLEXpLERKNS_8RATIONALE( struct $N4MATH7COMPLEXE* THIS$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$778:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	*(double*)THIS$1 = *(double*)THIS$1 + vr$1;
	label$779:;
}

void _ZN4MATH7COMPLEXpLERKd( struct $N4MATH7COMPLEXE* THIS$1, double* N$1 )
{
	label$780:;
	*(double*)THIS$1 = *(double*)THIS$1 + *N$1;
	label$781:;
}

void _ZN4MATH7COMPLEXpLERKS0_( struct $N4MATH7COMPLEXE* THIS$1, struct $N4MATH7COMPLEXE* C$1 )
{
	label$782:;
	*(double*)THIS$1 = *(double*)THIS$1 + *(double*)C$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) + *(double*)((uint8*)C$1 + 8ll);
	label$783:;
}

void _ZN4MATH7COMPLEXmIERKNS_8RATIONALE( struct $N4MATH7COMPLEXE* THIS$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$784:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	*(double*)THIS$1 = *(double*)THIS$1 - vr$1;
	label$785:;
}

void _ZN4MATH7COMPLEXmIERKd( struct $N4MATH7COMPLEXE* THIS$1, double* N$1 )
{
	label$786:;
	*(double*)THIS$1 = *(double*)THIS$1 - *N$1;
	label$787:;
}

void _ZN4MATH7COMPLEXmIERKS0_( struct $N4MATH7COMPLEXE* THIS$1, struct $N4MATH7COMPLEXE* C$1 )
{
	label$788:;
	*(double*)THIS$1 = *(double*)THIS$1 - *(double*)C$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) - *(double*)((uint8*)C$1 + 8ll);
	label$789:;
}

void _ZN4MATH7COMPLEXmLERKNS_8RATIONALE( struct $N4MATH7COMPLEXE* THIS$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$790:;
	double N$1;
	double vr$0 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	N$1 = vr$0;
	*(double*)THIS$1 = *(double*)THIS$1 * N$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) * N$1;
	label$791:;
}

void _ZN4MATH7COMPLEXmLERKd( struct $N4MATH7COMPLEXE* THIS$1, double* N$1 )
{
	label$792:;
	*(double*)THIS$1 = *(double*)THIS$1 * *N$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) * *N$1;
	label$793:;
}

void _ZN4MATH7COMPLEXmLERKS0_( struct $N4MATH7COMPLEXE* THIS$1, struct $N4MATH7COMPLEXE* C$1 )
{
	label$794:;
	double X$1;
	X$1 = (*(double*)THIS$1 * *(double*)C$1) - (*(double*)((uint8*)THIS$1 + 8ll) * *(double*)((uint8*)C$1 + 8ll));
	double Y$1;
	Y$1 = (*(double*)THIS$1 * *(double*)((uint8*)C$1 + 8ll)) + (*(double*)((uint8*)THIS$1 + 8ll) * *(double*)C$1);
	*(double*)THIS$1 = X$1;
	*(double*)((uint8*)THIS$1 + 8ll) = Y$1;
	label$795:;
}

void _ZN4MATH7COMPLEXdVERKNS_8RATIONALE( struct $N4MATH7COMPLEXE* THIS$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$796:;
	double N$1;
	double vr$0 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	N$1 = vr$0;
	if( N$1 == 0x0p+0 ) goto label$799;
	{
		*(double*)THIS$1 = *(double*)THIS$1 / N$1;
		*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) / N$1;
	}
	goto label$798;
	label$799:;
	{
		*(double*)THIS$1 = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 8ll) = 0x0p+0;
	}
	label$798:;
	label$797:;
}

void _ZN4MATH7COMPLEXdVERKd( struct $N4MATH7COMPLEXE* THIS$1, double* N$1 )
{
	label$800:;
	if( *N$1 == 0x0p+0 ) goto label$803;
	{
		*(double*)THIS$1 = *(double*)THIS$1 / *N$1;
		*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) / *N$1;
	}
	goto label$802;
	label$803:;
	{
		*(double*)THIS$1 = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 8ll) = 0x0p+0;
	}
	label$802:;
	label$801:;
}

void _ZN4MATH7COMPLEXdVERKS0_( struct $N4MATH7COMPLEXE* THIS$1, struct $N4MATH7COMPLEXE* C$1 )
{
	label$804:;
	if( ((int64)-(*(double*)C$1 != 0x0p+0) | (int64)-(*(double*)((uint8*)C$1 + 8ll) != 0x0p+0)) == 0ll ) goto label$807;
	{
		double D$2;
		D$2 = (*(double*)C$1 * *(double*)C$1) + (*(double*)((uint8*)C$1 + 8ll) * *(double*)((uint8*)C$1 + 8ll));
		double X$2;
		X$2 = ((*(double*)THIS$1 * *(double*)C$1) + (*(double*)((uint8*)THIS$1 + 8ll) * *(double*)((uint8*)C$1 + 8ll))) / D$2;
		double Y$2;
		Y$2 = ((*(double*)((uint8*)THIS$1 + 8ll) * *(double*)C$1) - (*(double*)THIS$1 * *(double*)((uint8*)C$1 + 8ll))) / D$2;
		*(double*)THIS$1 = X$2;
		*(double*)((uint8*)THIS$1 + 8ll) = Y$2;
	}
	goto label$806;
	label$807:;
	{
		*(double*)THIS$1 = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 8ll) = 0x0p+0;
	}
	label$806:;
	label$805:;
}

FBSTRING* _ZNK4MATH7COMPLEXcv8FBSTRINGEv( struct $N4MATH7COMPLEXE* THIS$1 )
{
	FBSTRING TMP$217$1;
	FBSTRING TMP$218$1;
	FBSTRING TMP$219$1;
	FBSTRING TMP$220$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$808:;
	FBSTRING* vr$2 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 8ll) );
	FBSTRING* vr$4 = fb_DoubleToStr( *(double*)THIS$1 );
	__builtin_memset( &TMP$217$1, 0, 24ll );
	FBSTRING* vr$7 = fb_StrConcat( &TMP$217$1, (void*)"<math.complex>{ r : ", 21ll, (void*)vr$4, -1ll );
	__builtin_memset( &TMP$218$1, 0, 24ll );
	FBSTRING* vr$10 = fb_StrConcat( &TMP$218$1, (void*)vr$7, -1ll, (void*)" , i : ", 8ll );
	__builtin_memset( &TMP$219$1, 0, 24ll );
	FBSTRING* vr$13 = fb_StrConcat( &TMP$219$1, (void*)vr$10, -1ll, (void*)vr$2, -1ll );
	__builtin_memset( &TMP$220$1, 0, 24ll );
	FBSTRING* vr$16 = fb_StrConcat( &TMP$220$1, (void*)vr$13, -1ll, (void*)" }", 3ll );
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$16, -1ll, 0 );
	goto label$809;
	label$809:;
	FBSTRING* vr$19 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$19;
}

void _ZN4MATH7COMPLEXaSERKNS_8RATIONALE( struct $N4MATH7COMPLEXE* THIS$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$810:;
	double vr$0 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	*(double*)THIS$1 = vr$0;
	*(double*)((uint8*)THIS$1 + 8ll) = 0x0p+0;
	label$811:;
}

void _ZN4MATH7COMPLEXaSERKd( struct $N4MATH7COMPLEXE* THIS$1, double* N$1 )
{
	label$812:;
	*(double*)THIS$1 = *N$1;
	*(double*)((uint8*)THIS$1 + 8ll) = 0x0p+0;
	label$813:;
}

void _ZN4MATH7COMPLEXaSERKS0_( struct $N4MATH7COMPLEXE* THIS$1, struct $N4MATH7COMPLEXE* C$1 )
{
	label$814:;
	*(double*)THIS$1 = *(double*)C$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)C$1 + 8ll);
	label$815:;
}

double _ZNK4MATH7COMPLEX15ARGUMENT__get__Ev( struct $N4MATH7COMPLEXE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$816:;
	if( *(double*)THIS$1 >= 0x0p+0 ) goto label$819;
	{
		if( *(double*)((uint8*)THIS$1 + 8ll) >= 0x0p+0 ) goto label$821;
		{
			double vr$4 = _ZN4MATHv13absERKNS_7COMPLEXE( THIS$1 );
			fb$result$1 = __builtin_acos( (*(double*)THIS$1 / vr$4) ) + 0x1.921FB54442D18p+0;
			goto label$817;
		}
		goto label$820;
		label$821:;
		if( *(double*)((uint8*)THIS$1 + 8ll) <= 0x0p+0 ) goto label$822;
		{
			double vr$10 = _ZN4MATHv13absERKNS_7COMPLEXE( THIS$1 );
			fb$result$1 = __builtin_acos( (*(double*)THIS$1 / vr$10) );
			goto label$817;
		}
		goto label$820;
		label$822:;
		{
			fb$result$1 = 0x1.921FB54442D18p+1;
			goto label$817;
		}
		label$820:;
	}
	goto label$818;
	label$819:;
	if( *(double*)THIS$1 <= 0x0p+0 ) goto label$823;
	{
		if( *(double*)((uint8*)THIS$1 + 8ll) >= 0x0p+0 ) goto label$825;
		{
			double vr$16 = _ZN4MATHv13absERKNS_7COMPLEXE( THIS$1 );
			fb$result$1 = -(__builtin_acos( (*(double*)THIS$1 / vr$16) )) + 0x1.921FB54442D18p+2;
			goto label$817;
		}
		goto label$824;
		label$825:;
		if( *(double*)((uint8*)THIS$1 + 8ll) <= 0x0p+0 ) goto label$826;
		{
			double vr$23 = _ZN4MATHv13absERKNS_7COMPLEXE( THIS$1 );
			fb$result$1 = __builtin_acos( (*(double*)THIS$1 / vr$23) );
			goto label$817;
		}
		goto label$824;
		label$826:;
		{
			fb$result$1 = 0x0p+0;
			goto label$817;
		}
		label$824:;
	}
	goto label$818;
	label$823:;
	{
		if( *(double*)((uint8*)THIS$1 + 8ll) >= 0x0p+0 ) goto label$828;
		{
			fb$result$1 = 0x1.2D97C7F3321D2p+2;
			goto label$817;
		}
		goto label$827;
		label$828:;
		if( *(double*)((uint8*)THIS$1 + 8ll) <= 0x0p+0 ) goto label$829;
		{
			fb$result$1 = 0x1.921FB54442D18p+0;
			goto label$817;
		}
		goto label$827;
		label$829:;
		{
			fb$result$1 = 0x0p+0;
			goto label$817;
		}
		label$827:;
	}
	label$818:;
	label$817:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZNK4MATH7COMPLEX16CONJUGATE__get__Ev( struct $N4MATH7COMPLEXE* THIS$1 )
{
	double TMP$222$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$830:;
	TMP$222$1 = -(*(double*)((uint8*)THIS$1 + 8ll));
	_ZN4MATH7COMPLEXC1ERKdS2_( &fb$result$1, (double*)THIS$1, &TMP$222$1 );
	goto label$831;
	label$831:;
	return fb$result$1;
}

boolean _ZNK4MATH7COMPLEX18ISIMAGINARY__get__Ev( struct $N4MATH7COMPLEXE* THIS$1 )
{
	boolean TMP$223$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$832:;
	if( *(double*)THIS$1 != 0x0p+0 ) goto label$834;
	TMP$223$1 = (boolean)1ll;
	goto label$835;
	label$834:;
	TMP$223$1 = (boolean)0ll;
	label$835:;
	fb$result$1 = TMP$223$1;
	goto label$833;
	label$833:;
	return fb$result$1;
}

boolean _ZNK4MATH7COMPLEX13ISREAL__get__Ev( struct $N4MATH7COMPLEXE* THIS$1 )
{
	boolean TMP$224$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$836:;
	if( *(double*)((uint8*)THIS$1 + 8ll) != 0x0p+0 ) goto label$838;
	TMP$224$1 = (boolean)1ll;
	goto label$839;
	label$838:;
	TMP$224$1 = (boolean)0ll;
	label$839:;
	fb$result$1 = TMP$224$1;
	goto label$837;
	label$837:;
	return fb$result$1;
}

double _ZNK4MATH7COMPLEX14MODULUS__get__Ev( struct $N4MATH7COMPLEXE* THIS$1 )
{
	double TMP$225$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$840:;
	if( *(double*)((uint8*)THIS$1 + 8ll) == 0x0p+0 ) goto label$842;
	TMP$225$1 = __builtin_sqrt( ((*(double*)THIS$1 * *(double*)THIS$1) + (*(double*)((uint8*)THIS$1 + 8ll) * *(double*)((uint8*)THIS$1 + 8ll))) );
	goto label$843;
	label$842:;
	TMP$225$1 = __builtin_fabs( *(double*)THIS$1 );
	label$843:;
	fb$result$1 = TMP$225$1;
	goto label$841;
	label$841:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZNK4MATH7COMPLEX17RECIPROCAL__get__Ev( struct $N4MATH7COMPLEXE* THIS$1 )
{
	struct $N4MATH7COMPLEXE fb$result$1;
	label$844:;
	if( ((int64)-(*(double*)THIS$1 != 0x0p+0) | (int64)-(*(double*)((uint8*)THIS$1 + 8ll) != 0x0p+0)) == 0ll ) goto label$847;
	{
		double TMP$227$2;
		double TMP$228$2;
		double D$2;
		D$2 = (*(double*)THIS$1 * *(double*)THIS$1) + (*(double*)((uint8*)THIS$1 + 8ll) * *(double*)((uint8*)THIS$1 + 8ll));
		TMP$228$2 = -(*(double*)((uint8*)THIS$1 + 8ll)) / D$2;
		TMP$227$2 = *(double*)THIS$1 / D$2;
		_ZN4MATH7COMPLEXC1ERKdS2_( &fb$result$1, &TMP$227$2, &TMP$228$2 );
		goto label$845;
	}
	label$847:;
	label$846:;
	_ZN4MATH7COMPLEXC1Ev( &fb$result$1 );
	goto label$845;
	label$845:;
	return fb$result$1;
}

FBSTRING* _ZNK4MATH7COMPLEX6TOJSONERKb( struct $N4MATH7COMPLEXE* THIS$1, boolean* A$1 )
{
	FBSTRING TMP$232$1;
	FBSTRING TMP$233$1;
	FBSTRING TMP$234$1;
	FBSTRING TMP$235$1;
	FBSTRING TMP$236$1;
	FBSTRING TMP$237$1;
	FBSTRING TMP$238$1;
	FBSTRING TMP$239$1;
	FBSTRING TMP$240$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$848:;
	if( *A$1 == (boolean)0ll ) goto label$850;
	FBSTRING* vr$3 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 8ll) );
	FBSTRING* vr$5 = fb_DoubleToStr( *(double*)THIS$1 );
	__builtin_memset( &TMP$233$1, 0, 24ll );
	FBSTRING* vr$8 = fb_StrConcat( &TMP$233$1, (void*)"[", 2ll, (void*)vr$5, -1ll );
	__builtin_memset( &TMP$234$1, 0, 24ll );
	FBSTRING* vr$11 = fb_StrConcat( &TMP$234$1, (void*)vr$8, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$235$1, 0, 24ll );
	FBSTRING* vr$14 = fb_StrConcat( &TMP$235$1, (void*)vr$11, -1ll, (void*)vr$3, -1ll );
	__builtin_memset( &TMP$236$1, 0, 24ll );
	FBSTRING* vr$17 = fb_StrConcat( &TMP$236$1, (void*)vr$14, -1ll, (void*)"]", 2ll );
	fb_StrInit( (void*)&TMP$232$1, -1ll, (void*)vr$17, -1ll, 0 );
	goto label$851;
	label$850:;
	FBSTRING* vr$20 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 8ll) );
	FBSTRING* vr$22 = fb_DoubleToStr( *(double*)THIS$1 );
	__builtin_memset( &TMP$237$1, 0, 24ll );
	FBSTRING* vr$25 = fb_StrConcat( &TMP$237$1, (void*)"{\x22r\x22:", 6ll, (void*)vr$22, -1ll );
	__builtin_memset( &TMP$238$1, 0, 24ll );
	FBSTRING* vr$28 = fb_StrConcat( &TMP$238$1, (void*)vr$25, -1ll, (void*)",\x22i\x22:", 6ll );
	__builtin_memset( &TMP$239$1, 0, 24ll );
	FBSTRING* vr$31 = fb_StrConcat( &TMP$239$1, (void*)vr$28, -1ll, (void*)vr$20, -1ll );
	__builtin_memset( &TMP$240$1, 0, 24ll );
	FBSTRING* vr$34 = fb_StrConcat( &TMP$240$1, (void*)vr$31, -1ll, (void*)"}", 2ll );
	fb_StrInit( (void*)&TMP$232$1, -1ll, (void*)vr$34, -1ll, 0 );
	label$851:;
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)&TMP$232$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&TMP$232$1 );
	goto label$849;
	label$849:;
	FBSTRING* vr$40 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$40;
}

struct $N4MATH7COMPLEXE _ZN4MATHplERKNS_8RATIONALERKNS_7COMPLEXE( struct $N4MATH8RATIONALE* R$1, struct $N4MATH7COMPLEXE* C$1 )
{
	double TMP$242$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$852:;
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$242$1 = vr$2 + *(double*)C$1;
	_ZN4MATH7COMPLEXC1ERKdS2_( &fb$result$1, (double*)&TMP$242$1, (double*)((uint8*)C$1 + 8ll) );
	goto label$853;
	label$853:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATHplERKdRKNS_7COMPLEXE( double* N$1, struct $N4MATH7COMPLEXE* C$1 )
{
	double TMP$244$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$854:;
	TMP$244$1 = *N$1 + *(double*)C$1;
	_ZN4MATH7COMPLEXC1ERKdS2_( &fb$result$1, &TMP$244$1, (double*)((uint8*)C$1 + 8ll) );
	goto label$855;
	label$855:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATHplERKNS_7COMPLEXERKNS_8RATIONALE( struct $N4MATH7COMPLEXE* C$1, struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$246$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$856:;
	double vr$3 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$246$1 = *(double*)C$1 + vr$3;
	_ZN4MATH7COMPLEXC1ERKdS2_( &fb$result$1, &TMP$246$1, (double*)((uint8*)C$1 + 8ll) );
	goto label$857;
	label$857:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATHplERKNS_7COMPLEXERKd( struct $N4MATH7COMPLEXE* C$1, double* N$1 )
{
	double TMP$248$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$858:;
	TMP$248$1 = *(double*)C$1 + *N$1;
	_ZN4MATH7COMPLEXC1ERKdS2_( &fb$result$1, &TMP$248$1, (double*)((uint8*)C$1 + 8ll) );
	goto label$859;
	label$859:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATHplERKNS_7COMPLEXES2_( struct $N4MATH7COMPLEXE* C1$1, struct $N4MATH7COMPLEXE* C2$1 )
{
	double TMP$250$1;
	double TMP$251$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$860:;
	TMP$251$1 = *(double*)((uint8*)C1$1 + 8ll) + *(double*)((uint8*)C2$1 + 8ll);
	TMP$250$1 = *(double*)C1$1 + *(double*)C2$1;
	_ZN4MATH7COMPLEXC1ERKdS2_( &fb$result$1, &TMP$250$1, &TMP$251$1 );
	goto label$861;
	label$861:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATHngERKNS_7COMPLEXE( struct $N4MATH7COMPLEXE* C$1 )
{
	double TMP$253$1;
	double TMP$254$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$862:;
	TMP$254$1 = -(*(double*)((uint8*)C$1 + 8ll));
	TMP$253$1 = -(*(double*)C$1);
	_ZN4MATH7COMPLEXC1ERKdS2_( &fb$result$1, &TMP$253$1, &TMP$254$1 );
	goto label$863;
	label$863:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATHmiERKNS_8RATIONALERKNS_7COMPLEXE( struct $N4MATH8RATIONALE* R$1, struct $N4MATH7COMPLEXE* C$1 )
{
	double TMP$256$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$864:;
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$256$1 = vr$2 - *(double*)C$1;
	_ZN4MATH7COMPLEXC1ERKdS2_( &fb$result$1, (double*)&TMP$256$1, (double*)((uint8*)C$1 + 8ll) );
	goto label$865;
	label$865:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATHmiERKdRKNS_7COMPLEXE( double* N$1, struct $N4MATH7COMPLEXE* C$1 )
{
	double TMP$258$1;
	double TMP$259$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$866:;
	TMP$259$1 = -(*(double*)((uint8*)C$1 + 8ll));
	TMP$258$1 = *N$1 - *(double*)C$1;
	_ZN4MATH7COMPLEXC1ERKdS2_( &fb$result$1, &TMP$258$1, &TMP$259$1 );
	goto label$867;
	label$867:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATHmiERKNS_7COMPLEXERKNS_8RATIONALE( struct $N4MATH7COMPLEXE* C$1, struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$261$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$868:;
	double vr$3 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$261$1 = *(double*)C$1 - vr$3;
	_ZN4MATH7COMPLEXC1ERKdS2_( &fb$result$1, &TMP$261$1, (double*)((uint8*)C$1 + 8ll) );
	goto label$869;
	label$869:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATHmiERKNS_7COMPLEXERKd( struct $N4MATH7COMPLEXE* C$1, double* N$1 )
{
	double TMP$263$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$870:;
	TMP$263$1 = *(double*)C$1 - *N$1;
	_ZN4MATH7COMPLEXC1ERKdS2_( &fb$result$1, &TMP$263$1, (double*)((uint8*)C$1 + 8ll) );
	goto label$871;
	label$871:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATHmiERKNS_7COMPLEXES2_( struct $N4MATH7COMPLEXE* C1$1, struct $N4MATH7COMPLEXE* C2$1 )
{
	double TMP$265$1;
	double TMP$266$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$872:;
	TMP$266$1 = *(double*)((uint8*)C1$1 + 8ll) - *(double*)((uint8*)C2$1 + 8ll);
	TMP$265$1 = *(double*)C1$1 - *(double*)C2$1;
	_ZN4MATH7COMPLEXC1ERKdS2_( &fb$result$1, &TMP$265$1, &TMP$266$1 );
	goto label$873;
	label$873:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATHmlERKNS_8RATIONALERKNS_7COMPLEXE( struct $N4MATH8RATIONALE* R$1, struct $N4MATH7COMPLEXE* C$1 )
{
	double TMP$268$1;
	double TMP$269$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$874:;
	double N$1;
	double vr$0 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	N$1 = vr$0;
	TMP$269$1 = N$1 * *(double*)((uint8*)C$1 + 8ll);
	TMP$268$1 = N$1 * *(double*)C$1;
	_ZN4MATH7COMPLEXC1ERKdS2_( &fb$result$1, (double*)&TMP$268$1, (double*)&TMP$269$1 );
	goto label$875;
	label$875:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATHmlERKdRKNS_7COMPLEXE( double* N$1, struct $N4MATH7COMPLEXE* C$1 )
{
	double TMP$271$1;
	double TMP$272$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$876:;
	TMP$272$1 = *N$1 * *(double*)((uint8*)C$1 + 8ll);
	TMP$271$1 = *N$1 * *(double*)C$1;
	_ZN4MATH7COMPLEXC1ERKdS2_( &fb$result$1, &TMP$271$1, &TMP$272$1 );
	goto label$877;
	label$877:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATHmlERKNS_7COMPLEXERKNS_8RATIONALE( struct $N4MATH7COMPLEXE* C$1, struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$274$1;
	double TMP$275$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$878:;
	double N$1;
	double vr$0 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	N$1 = vr$0;
	TMP$275$1 = *(double*)((uint8*)C$1 + 8ll) * N$1;
	TMP$274$1 = *(double*)C$1 * N$1;
	_ZN4MATH7COMPLEXC1ERKdS2_( &fb$result$1, &TMP$274$1, &TMP$275$1 );
	goto label$879;
	label$879:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATHmlERKNS_7COMPLEXERKd( struct $N4MATH7COMPLEXE* C$1, double* N$1 )
{
	double TMP$277$1;
	double TMP$278$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$880:;
	TMP$278$1 = *(double*)((uint8*)C$1 + 8ll) * *N$1;
	TMP$277$1 = *(double*)C$1 * *N$1;
	_ZN4MATH7COMPLEXC1ERKdS2_( &fb$result$1, &TMP$277$1, &TMP$278$1 );
	goto label$881;
	label$881:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATHmlERKNS_7COMPLEXES2_( struct $N4MATH7COMPLEXE* C1$1, struct $N4MATH7COMPLEXE* C2$1 )
{
	double TMP$280$1;
	double TMP$281$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$882:;
	TMP$281$1 = (*(double*)C1$1 * *(double*)((uint8*)C2$1 + 8ll)) + (*(double*)((uint8*)C1$1 + 8ll) * *(double*)C2$1);
	TMP$280$1 = (*(double*)C1$1 * *(double*)C2$1) - (*(double*)((uint8*)C1$1 + 8ll) * *(double*)((uint8*)C2$1 + 8ll));
	_ZN4MATH7COMPLEXC1ERKdS2_( &fb$result$1, &TMP$280$1, &TMP$281$1 );
	goto label$883;
	label$883:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATHdvERKNS_8RATIONALERKNS_7COMPLEXE( struct $N4MATH8RATIONALE* R$1, struct $N4MATH7COMPLEXE* C$1 )
{
	struct $N4MATH7COMPLEXE fb$result$1;
	label$884:;
	if( ((int64)-(*(double*)C$1 != 0x0p+0) | (int64)-(*(double*)((uint8*)C$1 + 8ll) != 0x0p+0)) == 0ll ) goto label$887;
	{
		double TMP$283$2;
		double TMP$284$2;
		double N$2;
		double vr$5 = _ZNK4MATH8RATIONALcvdEv( R$1 );
		N$2 = vr$5;
		double D$2;
		D$2 = (*(double*)C$1 * *(double*)C$1) + (*(double*)((uint8*)C$1 + 8ll) * *(double*)((uint8*)C$1 + 8ll));
		TMP$284$2 = (-N$2 * *(double*)((uint8*)C$1 + 8ll)) / D$2;
		TMP$283$2 = (N$2 * *(double*)C$1) / D$2;
		_ZN4MATH7COMPLEXC1ERKdS2_( &fb$result$1, (double*)&TMP$283$2, (double*)&TMP$284$2 );
		goto label$885;
	}
	label$887:;
	label$886:;
	_ZN4MATH7COMPLEXC1Ev( &fb$result$1 );
	goto label$885;
	label$885:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATHdvERKdRKNS_7COMPLEXE( double* N$1, struct $N4MATH7COMPLEXE* C$1 )
{
	struct $N4MATH7COMPLEXE fb$result$1;
	label$888:;
	if( ((int64)-(*(double*)C$1 != 0x0p+0) | (int64)-(*(double*)((uint8*)C$1 + 8ll) != 0x0p+0)) == 0ll ) goto label$891;
	{
		double TMP$287$2;
		double TMP$288$2;
		double D$2;
		D$2 = (*(double*)C$1 * *(double*)C$1) + (*(double*)((uint8*)C$1 + 8ll) * *(double*)((uint8*)C$1 + 8ll));
		TMP$288$2 = (-(*N$1) * *(double*)((uint8*)C$1 + 8ll)) / D$2;
		TMP$287$2 = (*N$1 * *(double*)C$1) / D$2;
		_ZN4MATH7COMPLEXC1ERKdS2_( &fb$result$1, &TMP$287$2, &TMP$288$2 );
		goto label$889;
	}
	label$891:;
	label$890:;
	_ZN4MATH7COMPLEXC1Ev( &fb$result$1 );
	goto label$889;
	label$889:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATHdvERKNS_7COMPLEXERKNS_8RATIONALE( struct $N4MATH7COMPLEXE* C$1, struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$291$1;
	double TMP$292$1;
	struct $N4MATH7COMPLEXE TMP$294$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$892:;
	double N$1;
	double vr$0 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	N$1 = vr$0;
	if( N$1 == 0x0p+0 ) goto label$894;
	TMP$292$1 = *(double*)((uint8*)C$1 + 8ll) / N$1;
	TMP$291$1 = *(double*)C$1 / N$1;
	_ZN4MATH7COMPLEXC1ERKdS2_( &TMP$294$1, &TMP$291$1, &TMP$292$1 );
	goto label$895;
	label$894:;
	_ZN4MATH7COMPLEXC1Ev( &TMP$294$1 );
	label$895:;
	_ZN4MATH7COMPLEXC1ERKS0_( &fb$result$1, (struct $N4MATH7COMPLEXE*)&TMP$294$1 );
	goto label$893;
	label$893:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATHdvERKNS_7COMPLEXERKd( struct $N4MATH7COMPLEXE* C$1, double* N$1 )
{
	double TMP$296$1;
	double TMP$297$1;
	struct $N4MATH7COMPLEXE TMP$299$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$896:;
	if( *N$1 == 0x0p+0 ) goto label$898;
	TMP$297$1 = *(double*)((uint8*)C$1 + 8ll) / *N$1;
	TMP$296$1 = *(double*)C$1 / *N$1;
	_ZN4MATH7COMPLEXC1ERKdS2_( &TMP$299$1, &TMP$296$1, &TMP$297$1 );
	goto label$899;
	label$898:;
	_ZN4MATH7COMPLEXC1Ev( &TMP$299$1 );
	label$899:;
	_ZN4MATH7COMPLEXC1ERKS0_( &fb$result$1, (struct $N4MATH7COMPLEXE*)&TMP$299$1 );
	goto label$897;
	label$897:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATHdvERKNS_7COMPLEXES2_( struct $N4MATH7COMPLEXE* C1$1, struct $N4MATH7COMPLEXE* C2$1 )
{
	struct $N4MATH7COMPLEXE fb$result$1;
	label$900:;
	if( ((int64)-(*(double*)C2$1 != 0x0p+0) | (int64)-(*(double*)((uint8*)C2$1 + 8ll) != 0x0p+0)) == 0ll ) goto label$903;
	{
		double TMP$301$2;
		double TMP$302$2;
		double D$2;
		D$2 = (*(double*)C2$1 * *(double*)C2$1) + (*(double*)((uint8*)C2$1 + 8ll) * *(double*)((uint8*)C2$1 + 8ll));
		TMP$302$2 = ((*(double*)((uint8*)C1$1 + 8ll) * *(double*)C2$1) - (*(double*)C1$1 * *(double*)((uint8*)C2$1 + 8ll))) / D$2;
		TMP$301$2 = ((*(double*)C1$1 * *(double*)C2$1) + (*(double*)((uint8*)C1$1 + 8ll) * *(double*)((uint8*)C2$1 + 8ll))) / D$2;
		_ZN4MATH7COMPLEXC1ERKdS2_( &fb$result$1, &TMP$301$2, &TMP$302$2 );
		goto label$901;
	}
	label$903:;
	label$902:;
	_ZN4MATH7COMPLEXC1Ev( &fb$result$1 );
	goto label$901;
	label$901:;
	return fb$result$1;
}

boolean _ZN4MATHeqERKNS_8RATIONALERKNS_7COMPLEXE( struct $N4MATH8RATIONALE* R$1, struct $N4MATH7COMPLEXE* C$1 )
{
	boolean TMP$304$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$904:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	if( ((int64)-(vr$1 == *(double*)C$1) & (int64)-(*(double*)((uint8*)C$1 + 8ll) == 0x0p+0)) == 0ll ) goto label$906;
	TMP$304$1 = (boolean)1ll;
	goto label$907;
	label$906:;
	TMP$304$1 = (boolean)0ll;
	label$907:;
	fb$result$1 = TMP$304$1;
	goto label$905;
	label$905:;
	return fb$result$1;
}

boolean _ZN4MATHeqERKdRKNS_7COMPLEXE( double* N$1, struct $N4MATH7COMPLEXE* C$1 )
{
	boolean TMP$305$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$908:;
	if( ((int64)-(*N$1 == *(double*)C$1) & (int64)-(*(double*)((uint8*)C$1 + 8ll) == 0x0p+0)) == 0ll ) goto label$910;
	TMP$305$1 = (boolean)1ll;
	goto label$911;
	label$910:;
	TMP$305$1 = (boolean)0ll;
	label$911:;
	fb$result$1 = TMP$305$1;
	goto label$909;
	label$909:;
	return fb$result$1;
}

boolean _ZN4MATHeqERKNS_7COMPLEXERKNS_8RATIONALE( struct $N4MATH7COMPLEXE* C$1, struct $N4MATH8RATIONALE* R$1 )
{
	boolean TMP$306$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$912:;
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	if( ((int64)-(*(double*)C$1 == vr$2) & (int64)-(*(double*)((uint8*)C$1 + 8ll) == 0x0p+0)) == 0ll ) goto label$914;
	TMP$306$1 = (boolean)1ll;
	goto label$915;
	label$914:;
	TMP$306$1 = (boolean)0ll;
	label$915:;
	fb$result$1 = TMP$306$1;
	goto label$913;
	label$913:;
	return fb$result$1;
}

boolean _ZN4MATHeqERKNS_7COMPLEXERKd( struct $N4MATH7COMPLEXE* C$1, double* N$1 )
{
	boolean TMP$307$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$916:;
	if( ((int64)-(*(double*)C$1 == *N$1) & (int64)-(*(double*)((uint8*)C$1 + 8ll) == 0x0p+0)) == 0ll ) goto label$918;
	TMP$307$1 = (boolean)1ll;
	goto label$919;
	label$918:;
	TMP$307$1 = (boolean)0ll;
	label$919:;
	fb$result$1 = TMP$307$1;
	goto label$917;
	label$917:;
	return fb$result$1;
}

boolean _ZN4MATHeqERKNS_7COMPLEXES2_( struct $N4MATH7COMPLEXE* C1$1, struct $N4MATH7COMPLEXE* C2$1 )
{
	boolean TMP$308$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$920:;
	if( ((int64)-(*(double*)C1$1 == *(double*)C2$1) & (int64)-(*(double*)((uint8*)C1$1 + 8ll) == *(double*)((uint8*)C2$1 + 8ll))) == 0ll ) goto label$922;
	TMP$308$1 = (boolean)1ll;
	goto label$923;
	label$922:;
	TMP$308$1 = (boolean)0ll;
	label$923:;
	fb$result$1 = TMP$308$1;
	goto label$921;
	label$921:;
	return fb$result$1;
}

boolean _ZN4MATHneERKNS_8RATIONALERKNS_7COMPLEXE( struct $N4MATH8RATIONALE* R$1, struct $N4MATH7COMPLEXE* C$1 )
{
	boolean TMP$309$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$924:;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	if( ((int64)-(vr$1 != *(double*)C$1) | (int64)-(*(double*)((uint8*)C$1 + 8ll) != 0x0p+0)) == 0ll ) goto label$926;
	TMP$309$1 = (boolean)1ll;
	goto label$927;
	label$926:;
	TMP$309$1 = (boolean)0ll;
	label$927:;
	fb$result$1 = TMP$309$1;
	goto label$925;
	label$925:;
	return fb$result$1;
}

boolean _ZN4MATHneERKdRKNS_7COMPLEXE( double* N$1, struct $N4MATH7COMPLEXE* C$1 )
{
	boolean TMP$310$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$928:;
	if( ((int64)-(*N$1 != *(double*)C$1) | (int64)-(*(double*)((uint8*)C$1 + 8ll) != 0x0p+0)) == 0ll ) goto label$930;
	TMP$310$1 = (boolean)1ll;
	goto label$931;
	label$930:;
	TMP$310$1 = (boolean)0ll;
	label$931:;
	fb$result$1 = TMP$310$1;
	goto label$929;
	label$929:;
	return fb$result$1;
}

boolean _ZN4MATHneERKNS_7COMPLEXERKNS_8RATIONALE( struct $N4MATH7COMPLEXE* C$1, struct $N4MATH8RATIONALE* R$1 )
{
	boolean TMP$311$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$932:;
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	if( ((int64)-(*(double*)C$1 != vr$2) | (int64)-(*(double*)((uint8*)C$1 + 8ll) != 0x0p+0)) == 0ll ) goto label$934;
	TMP$311$1 = (boolean)1ll;
	goto label$935;
	label$934:;
	TMP$311$1 = (boolean)0ll;
	label$935:;
	fb$result$1 = TMP$311$1;
	goto label$933;
	label$933:;
	return fb$result$1;
}

boolean _ZN4MATHneERKNS_7COMPLEXERKd( struct $N4MATH7COMPLEXE* C$1, double* N$1 )
{
	boolean TMP$312$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$936:;
	if( ((int64)-(*(double*)C$1 != *N$1) | (int64)-(*(double*)((uint8*)C$1 + 8ll) != 0x0p+0)) == 0ll ) goto label$938;
	TMP$312$1 = (boolean)1ll;
	goto label$939;
	label$938:;
	TMP$312$1 = (boolean)0ll;
	label$939:;
	fb$result$1 = TMP$312$1;
	goto label$937;
	label$937:;
	return fb$result$1;
}

boolean _ZN4MATHneERKNS_7COMPLEXES2_( struct $N4MATH7COMPLEXE* C1$1, struct $N4MATH7COMPLEXE* C2$1 )
{
	boolean TMP$313$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$940:;
	if( ((int64)-(*(double*)C1$1 != *(double*)C2$1) | (int64)-(*(double*)((uint8*)C1$1 + 8ll) != *(double*)((uint8*)C2$1 + 8ll))) == 0ll ) goto label$942;
	TMP$313$1 = (boolean)1ll;
	goto label$943;
	label$942:;
	TMP$313$1 = (boolean)0ll;
	label$943:;
	fb$result$1 = TMP$313$1;
	goto label$941;
	label$941:;
	return fb$result$1;
}

double _ZN4MATHv13absERKNS_7COMPLEXE( struct $N4MATH7COMPLEXE* C$1 )
{
	double TMP$314$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$944:;
	if( *(double*)((uint8*)C$1 + 8ll) == 0x0p+0 ) goto label$946;
	TMP$314$1 = __builtin_sqrt( ((*(double*)C$1 * *(double*)C$1) + (*(double*)((uint8*)C$1 + 8ll) * *(double*)((uint8*)C$1 + 8ll))) );
	goto label$947;
	label$946:;
	TMP$314$1 = __builtin_fabs( *(double*)C$1 );
	label$947:;
	fb$result$1 = TMP$314$1;
	goto label$945;
	label$945:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATHv13cosERKNS_7COMPLEXE( struct $N4MATH7COMPLEXE* C$1 )
{
	double TMP$316$1;
	double TMP$317$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$948:;
	double vr$4 = _ZN4MATH4SINHERKd( (double*)((uint8*)C$1 + 8ll) );
	TMP$317$1 = -(__builtin_sin( *(double*)C$1 ) * vr$4);
	double vr$12 = _ZN4MATH4COSHERKd( (double*)((uint8*)C$1 + 8ll) );
	TMP$316$1 = __builtin_cos( *(double*)C$1 ) * vr$12;
	_ZN4MATH7COMPLEXC1ERKdS2_( &fb$result$1, &TMP$316$1, &TMP$317$1 );
	goto label$949;
	label$949:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATHv13logERKNS_7COMPLEXE( struct $N4MATH7COMPLEXE* C$1 )
{
	double TMP$319$1;
	double TMP$320$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$950:;
	double vr$0 = _ZNK4MATH7COMPLEX15ARGUMENT__get__Ev( C$1 );
	TMP$320$1 = vr$0;
	double vr$2 = _ZNK4MATH7COMPLEX14MODULUS__get__Ev( C$1 );
	TMP$319$1 = __builtin_log( vr$2 );
	_ZN4MATH7COMPLEXC1ERKdS2_( &fb$result$1, (double*)&TMP$319$1, (double*)&TMP$320$1 );
	goto label$951;
	label$951:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATHv13sgnERKNS_7COMPLEXE( struct $N4MATH7COMPLEXE* C$1 )
{
	double TMP$321$1;
	struct $N4MATH7COMPLEXE TMP$322$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$952:;
	double vr$0 = _ZN4MATHv13absERKNS_7COMPLEXE( C$1 );
	TMP$321$1 = vr$0;
	struct $N4MATH7COMPLEXE vr$2 = _ZN4MATHdvERKNS_7COMPLEXERKd( C$1, (double*)&TMP$321$1 );
	TMP$322$1 = vr$2;
	_ZN4MATH7COMPLEXC1ERKS0_( &fb$result$1, (struct $N4MATH7COMPLEXE*)&TMP$322$1 );
	goto label$953;
	label$953:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATHv13sinERKNS_7COMPLEXE( struct $N4MATH7COMPLEXE* C$1 )
{
	double TMP$324$1;
	double TMP$325$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$954:;
	double vr$4 = _ZN4MATH4SINHERKd( (double*)((uint8*)C$1 + 8ll) );
	TMP$325$1 = __builtin_cos( *(double*)C$1 ) * vr$4;
	double vr$11 = _ZN4MATH4COSHERKd( (double*)((uint8*)C$1 + 8ll) );
	TMP$324$1 = __builtin_sin( *(double*)C$1 ) * vr$11;
	_ZN4MATH7COMPLEXC1ERKdS2_( &fb$result$1, &TMP$324$1, &TMP$325$1 );
	goto label$955;
	label$955:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATHv13sqrERKNS_7COMPLEXE( struct $N4MATH7COMPLEXE* C$1 )
{
	double TMP$327$1;
	double TMP$328$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$956:;
	double A$1;
	double vr$0 = _ZN4MATHv13absERKNS_7COMPLEXE( C$1 );
	A$1 = vr$0;
	int32 vr$2 = fb_SGNDouble( *(double*)((uint8*)C$1 + 8ll) );
	TMP$328$1 = ((double)(int64)vr$2 / 0x1.6A09E667F3BCDp+0) * __builtin_sqrt( (A$1 - *(double*)C$1) );
	TMP$327$1 = __builtin_sqrt( (A$1 + *(double*)C$1) ) * 0x1.6A09E667F3BCCp-1;
	_ZN4MATH7COMPLEXC1ERKdS2_( &fb$result$1, (double*)&TMP$327$1, (double*)&TMP$328$1 );
	goto label$957;
	label$957:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATHv13tanERKNS_7COMPLEXE( struct $N4MATH7COMPLEXE* C$1 )
{
	double TMP$330$1;
	double TMP$331$1;
	struct $N4MATH7COMPLEXE TMP$333$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$958:;
	double A$1;
	A$1 = __builtin_tan( *(double*)C$1 );
	double B$1;
	double vr$4 = _ZN4MATH4TANHERKd( (double*)((uint8*)C$1 + 8ll) );
	B$1 = vr$4;
	double D$1;
	D$1 = -(((A$1 * A$1) * B$1) * B$1) + 0x1.p+0;
	if( D$1 == 0x0p+0 ) goto label$960;
	TMP$331$1 = (B$1 + ((A$1 * A$1) * B$1)) / D$1;
	TMP$330$1 = (A$1 - ((A$1 * B$1) * B$1)) / D$1;
	_ZN4MATH7COMPLEXC1ERKdS2_( &TMP$333$1, (double*)&TMP$330$1, (double*)&TMP$331$1 );
	goto label$961;
	label$960:;
	_ZN4MATH7COMPLEXC1Ev( &TMP$333$1 );
	label$961:;
	_ZN4MATH7COMPLEXC1ERKS0_( &fb$result$1, (struct $N4MATH7COMPLEXE*)&TMP$333$1 );
	goto label$959;
	label$959:;
	return fb$result$1;
}

boolean _ZN4MATH3CMPERKNS_8RATIONALERKNS_7COMPLEXERKd( struct $N4MATH8RATIONALE* R$1, struct $N4MATH7COMPLEXE* C$1, double* S$1 )
{
	boolean TMP$334$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$962:;
	double T$1;
	T$1 = __builtin_fabs( *S$1 );
	double vr$3 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	if( ((int64)-(__builtin_fabs( (vr$3 - *(double*)C$1) ) <= T$1) & (int64)-(__builtin_fabs( *(double*)((uint8*)C$1 + 8ll) ) <= T$1)) == 0ll ) goto label$964;
	TMP$334$1 = (boolean)1ll;
	goto label$965;
	label$964:;
	TMP$334$1 = (boolean)0ll;
	label$965:;
	fb$result$1 = TMP$334$1;
	goto label$963;
	label$963:;
	return fb$result$1;
}

boolean _ZN4MATH3CMPERKdRKNS_7COMPLEXES1_( double* N$1, struct $N4MATH7COMPLEXE* C$1, double* S$1 )
{
	boolean TMP$335$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$966:;
	double T$1;
	T$1 = __builtin_fabs( *S$1 );
	if( ((int64)-(__builtin_fabs( (*N$1 - *(double*)C$1) ) <= T$1) & (int64)-(__builtin_fabs( *(double*)((uint8*)C$1 + 8ll) ) <= T$1)) == 0ll ) goto label$968;
	TMP$335$1 = (boolean)1ll;
	goto label$969;
	label$968:;
	TMP$335$1 = (boolean)0ll;
	label$969:;
	fb$result$1 = TMP$335$1;
	goto label$967;
	label$967:;
	return fb$result$1;
}

boolean _ZN4MATH3CMPERKNS_7COMPLEXERKNS_8RATIONALERKd( struct $N4MATH7COMPLEXE* C$1, struct $N4MATH8RATIONALE* R$1, double* S$1 )
{
	boolean TMP$336$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$970:;
	double T$1;
	T$1 = __builtin_fabs( *S$1 );
	double vr$4 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	if( ((int64)-(__builtin_fabs( (*(double*)C$1 - vr$4) ) <= T$1) & (int64)-(__builtin_fabs( *(double*)((uint8*)C$1 + 8ll) ) <= T$1)) == 0ll ) goto label$972;
	TMP$336$1 = (boolean)1ll;
	goto label$973;
	label$972:;
	TMP$336$1 = (boolean)0ll;
	label$973:;
	fb$result$1 = TMP$336$1;
	goto label$971;
	label$971:;
	return fb$result$1;
}

boolean _ZN4MATH3CMPERKNS_7COMPLEXERKdS4_( struct $N4MATH7COMPLEXE* C$1, double* N$1, double* S$1 )
{
	boolean TMP$337$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$974:;
	double T$1;
	T$1 = __builtin_fabs( *S$1 );
	if( ((int64)-(__builtin_fabs( (*(double*)C$1 - *N$1) ) <= T$1) & (int64)-(__builtin_fabs( *(double*)((uint8*)C$1 + 8ll) ) <= T$1)) == 0ll ) goto label$976;
	TMP$337$1 = (boolean)1ll;
	goto label$977;
	label$976:;
	TMP$337$1 = (boolean)0ll;
	label$977:;
	fb$result$1 = TMP$337$1;
	goto label$975;
	label$975:;
	return fb$result$1;
}

boolean _ZN4MATH3CMPERKNS_7COMPLEXES2_RKd( struct $N4MATH7COMPLEXE* C1$1, struct $N4MATH7COMPLEXE* C2$1, double* S$1 )
{
	boolean TMP$338$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$978:;
	double T$1;
	T$1 = __builtin_fabs( *S$1 );
	if( ((int64)-(__builtin_fabs( (*(double*)C1$1 - *(double*)C2$1) ) <= T$1) & (int64)-(__builtin_fabs( (*(double*)((uint8*)C1$1 + 8ll) - *(double*)((uint8*)C2$1 + 8ll)) ) <= T$1)) == 0ll ) goto label$980;
	TMP$338$1 = (boolean)1ll;
	goto label$981;
	label$980:;
	TMP$338$1 = (boolean)0ll;
	label$981:;
	fb$result$1 = TMP$338$1;
	goto label$979;
	label$979:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATH4COSHERKNS_7COMPLEXE( struct $N4MATH7COMPLEXE* C$1 )
{
	double TMP$340$1;
	double TMP$341$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$982:;
	double vr$2 = _ZN4MATH4SINHERKd( (double*)C$1 );
	TMP$341$1 = vr$2 * __builtin_sin( *(double*)((uint8*)C$1 + 8ll) );
	double vr$9 = _ZN4MATH4COSHERKd( (double*)C$1 );
	TMP$340$1 = vr$9 * __builtin_cos( *(double*)((uint8*)C$1 + 8ll) );
	_ZN4MATH7COMPLEXC1ERKdS2_( &fb$result$1, (double*)&TMP$340$1, (double*)&TMP$341$1 );
	goto label$983;
	label$983:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATH3COTERKNS_7COMPLEXE( struct $N4MATH7COMPLEXE* C$1 )
{
	double TMP$343$1;
	double TMP$344$1;
	struct $N4MATH7COMPLEXE TMP$346$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$984:;
	double A$1;
	double vr$2 = _ZN4MATH3COTERKd( (double*)C$1 );
	A$1 = vr$2;
	double B$1;
	double vr$5 = _ZN4MATH4COTHERKd( (double*)((uint8*)C$1 + 8ll) );
	B$1 = vr$5;
	double D$1;
	D$1 = (A$1 * A$1) + (B$1 * B$1);
	if( D$1 == 0x0p+0 ) goto label$986;
	TMP$344$1 = (((-A$1 * A$1) * B$1) - B$1) / D$1;
	TMP$343$1 = (((A$1 * B$1) * B$1) - A$1) / D$1;
	_ZN4MATH7COMPLEXC1ERKdS2_( &TMP$346$1, (double*)&TMP$343$1, (double*)&TMP$344$1 );
	goto label$987;
	label$986:;
	_ZN4MATH7COMPLEXC1Ev( &TMP$346$1 );
	label$987:;
	_ZN4MATH7COMPLEXC1ERKS0_( &fb$result$1, (struct $N4MATH7COMPLEXE*)&TMP$346$1 );
	goto label$985;
	label$985:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATH4COTHERKNS_7COMPLEXE( struct $N4MATH7COMPLEXE* C$1 )
{
	double TMP$348$1;
	double TMP$349$1;
	struct $N4MATH7COMPLEXE TMP$351$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$988:;
	double A$1;
	double vr$2 = _ZN4MATH4COTHERKd( (double*)C$1 );
	A$1 = vr$2;
	double B$1;
	double vr$5 = _ZN4MATH3COTERKd( (double*)((uint8*)C$1 + 8ll) );
	B$1 = vr$5;
	double D$1;
	D$1 = (A$1 * A$1) + (B$1 * B$1);
	if( D$1 == 0x0p+0 ) goto label$990;
	TMP$349$1 = (B$1 - ((A$1 * A$1) * B$1)) / D$1;
	TMP$348$1 = (A$1 + ((A$1 * B$1) * B$1)) / D$1;
	_ZN4MATH7COMPLEXC1ERKdS2_( &TMP$351$1, (double*)&TMP$348$1, (double*)&TMP$349$1 );
	goto label$991;
	label$990:;
	_ZN4MATH7COMPLEXC1Ev( &TMP$351$1 );
	label$991:;
	_ZN4MATH7COMPLEXC1ERKS0_( &fb$result$1, (struct $N4MATH7COMPLEXE*)&TMP$351$1 );
	goto label$989;
	label$989:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATH4CSCHERKNS_7COMPLEXE( struct $N4MATH7COMPLEXE* C$1 )
{
	double TMP$352$1;
	struct $N4MATH7COMPLEXE TMP$353$1;
	struct $N4MATH7COMPLEXE TMP$354$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$992:;
	struct $N4MATH7COMPLEXE vr$0 = _ZN4MATH4SINHERKNS_7COMPLEXE( C$1 );
	TMP$353$1 = vr$0;
	TMP$352$1 = 0x1.p+0;
	struct $N4MATH7COMPLEXE vr$3 = _ZN4MATHdvERKdRKNS_7COMPLEXE( (double*)&TMP$352$1, (struct $N4MATH7COMPLEXE*)&TMP$353$1 );
	TMP$354$1 = vr$3;
	_ZN4MATH7COMPLEXC1ERKS0_( &fb$result$1, (struct $N4MATH7COMPLEXE*)&TMP$354$1 );
	goto label$993;
	label$993:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATH4LERPERKNS_8RATIONALERKNS_7COMPLEXERKd( struct $N4MATH8RATIONALE* R$1, struct $N4MATH7COMPLEXE* C$1, double* S$1 )
{
	double TMP$356$1;
	double TMP$357$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$994:;
	double T$1;
	double vr$0 = _ZN4MATH5CLAMPERKd( S$1 );
	T$1 = vr$0;
	TMP$357$1 = *(double*)((uint8*)C$1 + 8ll) * T$1;
	double vr$4 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$356$1 = (vr$4 * (0x1.p+0 - T$1)) + (*(double*)C$1 * T$1);
	_ZN4MATH7COMPLEXC1ERKdS2_( &fb$result$1, (double*)&TMP$356$1, &TMP$357$1 );
	goto label$995;
	label$995:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATH4LERPERKNS_7COMPLEXERKNS_8RATIONALERKd( struct $N4MATH7COMPLEXE* C$1, struct $N4MATH8RATIONALE* R$1, double* S$1 )
{
	double TMP$359$1;
	double TMP$360$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$996:;
	double T$1;
	double vr$0 = _ZN4MATH5CLAMPERKd( S$1 );
	T$1 = vr$0;
	double U$1;
	U$1 = 0x1.p+0 - T$1;
	TMP$360$1 = *(double*)((uint8*)C$1 + 8ll) * U$1;
	double vr$7 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$359$1 = (*(double*)C$1 * U$1) + (vr$7 * T$1);
	_ZN4MATH7COMPLEXC1ERKdS2_( &fb$result$1, &TMP$359$1, &TMP$360$1 );
	goto label$997;
	label$997:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATH4LERPERKdRKNS_7COMPLEXES1_( double* N$1, struct $N4MATH7COMPLEXE* C$1, double* S$1 )
{
	double TMP$362$1;
	double TMP$363$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$998:;
	double T$1;
	double vr$0 = _ZN4MATH5CLAMPERKd( S$1 );
	T$1 = vr$0;
	TMP$363$1 = *(double*)((uint8*)C$1 + 8ll) * T$1;
	TMP$362$1 = (*N$1 * (0x1.p+0 - T$1)) + (*(double*)C$1 * T$1);
	_ZN4MATH7COMPLEXC1ERKdS2_( &fb$result$1, &TMP$362$1, &TMP$363$1 );
	goto label$999;
	label$999:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATH4LERPERKNS_7COMPLEXERKdS4_( struct $N4MATH7COMPLEXE* C$1, double* N$1, double* S$1 )
{
	double TMP$365$1;
	double TMP$366$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$1000:;
	double T$1;
	double vr$0 = _ZN4MATH5CLAMPERKd( S$1 );
	T$1 = vr$0;
	double U$1;
	U$1 = 0x1.p+0 - T$1;
	TMP$366$1 = *(double*)((uint8*)C$1 + 8ll) * U$1;
	TMP$365$1 = (*(double*)C$1 * U$1) + (*N$1 * T$1);
	_ZN4MATH7COMPLEXC1ERKdS2_( &fb$result$1, &TMP$365$1, &TMP$366$1 );
	goto label$1001;
	label$1001:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATH4LERPERKNS_7COMPLEXES2_RKd( struct $N4MATH7COMPLEXE* C1$1, struct $N4MATH7COMPLEXE* C2$1, double* S$1 )
{
	double TMP$368$1;
	double TMP$369$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$1002:;
	double T$1;
	double vr$0 = _ZN4MATH5CLAMPERKd( S$1 );
	T$1 = vr$0;
	double U$1;
	U$1 = 0x1.p+0 - T$1;
	TMP$369$1 = (*(double*)((uint8*)C1$1 + 8ll) * U$1) + (*(double*)((uint8*)C2$1 + 8ll) * T$1);
	TMP$368$1 = (*(double*)C1$1 * U$1) + (*(double*)C2$1 * T$1);
	_ZN4MATH7COMPLEXC1ERKdS2_( &fb$result$1, &TMP$368$1, &TMP$369$1 );
	goto label$1003;
	label$1003:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATH4LOG2ERKNS_7COMPLEXE( struct $N4MATH7COMPLEXE* C$1 )
{
	struct $N4MATH7COMPLEXE TMP$370$1;
	double TMP$371$1;
	struct $N4MATH7COMPLEXE TMP$372$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$1004:;
	TMP$371$1 = 0x1.62E42FEFA39EFp-1;
	struct $N4MATH7COMPLEXE vr$1 = _ZN4MATHv13logERKNS_7COMPLEXE( C$1 );
	TMP$370$1 = vr$1;
	struct $N4MATH7COMPLEXE vr$3 = _ZN4MATHdvERKNS_7COMPLEXERKd( (struct $N4MATH7COMPLEXE*)&TMP$370$1, (double*)&TMP$371$1 );
	TMP$372$1 = vr$3;
	_ZN4MATH7COMPLEXC1ERKS0_( &fb$result$1, (struct $N4MATH7COMPLEXE*)&TMP$372$1 );
	goto label$1005;
	label$1005:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATH5LOG10ERKNS_7COMPLEXE( struct $N4MATH7COMPLEXE* C$1 )
{
	struct $N4MATH7COMPLEXE TMP$373$1;
	double TMP$374$1;
	struct $N4MATH7COMPLEXE TMP$375$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$1006:;
	TMP$374$1 = 0x1.26BB1BBB55516p+1;
	struct $N4MATH7COMPLEXE vr$1 = _ZN4MATHv13logERKNS_7COMPLEXE( C$1 );
	TMP$373$1 = vr$1;
	struct $N4MATH7COMPLEXE vr$3 = _ZN4MATHdvERKNS_7COMPLEXERKd( (struct $N4MATH7COMPLEXE*)&TMP$373$1, (double*)&TMP$374$1 );
	TMP$375$1 = vr$3;
	_ZN4MATH7COMPLEXC1ERKS0_( &fb$result$1, (struct $N4MATH7COMPLEXE*)&TMP$375$1 );
	goto label$1007;
	label$1007:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATH5LOG1PERKNS_7COMPLEXE( struct $N4MATH7COMPLEXE* C$1 )
{
	double TMP$376$1;
	struct $N4MATH7COMPLEXE TMP$377$1;
	struct $N4MATH7COMPLEXE TMP$378$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$1008:;
	TMP$376$1 = 0x1.p+0;
	struct $N4MATH7COMPLEXE vr$1 = _ZN4MATHplERKdRKNS_7COMPLEXE( (double*)&TMP$376$1, C$1 );
	TMP$377$1 = vr$1;
	struct $N4MATH7COMPLEXE vr$3 = _ZN4MATHv13logERKNS_7COMPLEXE( (struct $N4MATH7COMPLEXE*)&TMP$377$1 );
	TMP$378$1 = vr$3;
	_ZN4MATH7COMPLEXC1ERKS0_( &fb$result$1, (struct $N4MATH7COMPLEXE*)&TMP$378$1 );
	goto label$1009;
	label$1009:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATH4LOGBERKdRKNS_7COMPLEXE( double* N$1, struct $N4MATH7COMPLEXE* B$1 )
{
	double TMP$379$1;
	struct $N4MATH7COMPLEXE TMP$380$1;
	struct $N4MATH7COMPLEXE TMP$381$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$1010:;
	struct $N4MATH7COMPLEXE vr$0 = _ZN4MATHv13logERKNS_7COMPLEXE( B$1 );
	TMP$380$1 = vr$0;
	TMP$379$1 = __builtin_log( *N$1 );
	struct $N4MATH7COMPLEXE vr$5 = _ZN4MATHdvERKdRKNS_7COMPLEXE( &TMP$379$1, (struct $N4MATH7COMPLEXE*)&TMP$380$1 );
	TMP$381$1 = vr$5;
	_ZN4MATH7COMPLEXC1ERKS0_( &fb$result$1, (struct $N4MATH7COMPLEXE*)&TMP$381$1 );
	goto label$1011;
	label$1011:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATH4LOGBERKNS_7COMPLEXERKd( struct $N4MATH7COMPLEXE* C$1, double* B$1 )
{
	struct $N4MATH7COMPLEXE TMP$382$1;
	double TMP$383$1;
	struct $N4MATH7COMPLEXE TMP$384$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$1012:;
	TMP$383$1 = __builtin_log( *B$1 );
	struct $N4MATH7COMPLEXE vr$3 = _ZN4MATHv13logERKNS_7COMPLEXE( C$1 );
	TMP$382$1 = vr$3;
	struct $N4MATH7COMPLEXE vr$5 = _ZN4MATHdvERKNS_7COMPLEXERKd( (struct $N4MATH7COMPLEXE*)&TMP$382$1, &TMP$383$1 );
	TMP$384$1 = vr$5;
	_ZN4MATH7COMPLEXC1ERKS0_( &fb$result$1, (struct $N4MATH7COMPLEXE*)&TMP$384$1 );
	goto label$1013;
	label$1013:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATH4LOGBERKNS_7COMPLEXES2_( struct $N4MATH7COMPLEXE* C1$1, struct $N4MATH7COMPLEXE* C2$1 )
{
	struct $N4MATH7COMPLEXE TMP$385$1;
	struct $N4MATH7COMPLEXE TMP$386$1;
	struct $N4MATH7COMPLEXE TMP$387$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$1014:;
	struct $N4MATH7COMPLEXE vr$0 = _ZN4MATHv13logERKNS_7COMPLEXE( C2$1 );
	TMP$386$1 = vr$0;
	struct $N4MATH7COMPLEXE vr$2 = _ZN4MATHv13logERKNS_7COMPLEXE( C1$1 );
	TMP$385$1 = vr$2;
	struct $N4MATH7COMPLEXE vr$4 = _ZN4MATHdvERKNS_7COMPLEXES2_( (struct $N4MATH7COMPLEXE*)&TMP$385$1, (struct $N4MATH7COMPLEXE*)&TMP$386$1 );
	TMP$387$1 = vr$4;
	_ZN4MATH7COMPLEXC1ERKS0_( &fb$result$1, (struct $N4MATH7COMPLEXE*)&TMP$387$1 );
	goto label$1015;
	label$1015:;
	return fb$result$1;
}

double _ZN4MATH3QDTERKNS_7COMPLEXE( struct $N4MATH7COMPLEXE* C$1 )
{
	double TMP$388$1;
	double TMP$389$1;
	double TMP$390$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1016:;
	if( *(double*)C$1 < 0x0p+0 ) goto label$1020;
	if( *(double*)((uint8*)C$1 + 8ll) < 0x0p+0 ) goto label$1018;
	TMP$388$1 = 0x0p+0;
	goto label$1022;
	label$1018:;
	TMP$388$1 = 0x1.8p+1;
	label$1022:;
	TMP$390$1 = TMP$388$1;
	goto label$1021;
	label$1020:;
	if( *(double*)((uint8*)C$1 + 8ll) < 0x0p+0 ) goto label$1019;
	TMP$389$1 = 0x1.p+0;
	goto label$1023;
	label$1019:;
	TMP$389$1 = 0x1.p+1;
	label$1023:;
	TMP$390$1 = TMP$389$1;
	label$1021:;
	fb$result$1 = TMP$390$1;
	goto label$1017;
	label$1017:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATH4SECHERKNS_7COMPLEXE( struct $N4MATH7COMPLEXE* C$1 )
{
	double TMP$391$1;
	struct $N4MATH7COMPLEXE TMP$392$1;
	struct $N4MATH7COMPLEXE TMP$393$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$1024:;
	struct $N4MATH7COMPLEXE vr$0 = _ZN4MATH4COSHERKNS_7COMPLEXE( C$1 );
	TMP$392$1 = vr$0;
	TMP$391$1 = 0x1.p+0;
	struct $N4MATH7COMPLEXE vr$3 = _ZN4MATHdvERKdRKNS_7COMPLEXE( (double*)&TMP$391$1, (struct $N4MATH7COMPLEXE*)&TMP$392$1 );
	TMP$393$1 = vr$3;
	_ZN4MATH7COMPLEXC1ERKS0_( &fb$result$1, (struct $N4MATH7COMPLEXE*)&TMP$393$1 );
	goto label$1025;
	label$1025:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATH4SINHERKNS_7COMPLEXE( struct $N4MATH7COMPLEXE* C$1 )
{
	double TMP$395$1;
	double TMP$396$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$1026:;
	double vr$2 = _ZN4MATH4COSHERKd( (double*)C$1 );
	TMP$396$1 = vr$2 * __builtin_sin( *(double*)((uint8*)C$1 + 8ll) );
	double vr$9 = _ZN4MATH4SINHERKd( (double*)C$1 );
	TMP$395$1 = vr$9 * __builtin_cos( *(double*)((uint8*)C$1 + 8ll) );
	_ZN4MATH7COMPLEXC1ERKdS2_( &fb$result$1, (double*)&TMP$395$1, (double*)&TMP$396$1 );
	goto label$1027;
	label$1027:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE _ZN4MATH4TANHERKNS_7COMPLEXE( struct $N4MATH7COMPLEXE* C$1 )
{
	double TMP$398$1;
	double TMP$399$1;
	struct $N4MATH7COMPLEXE TMP$401$1;
	struct $N4MATH7COMPLEXE fb$result$1;
	label$1028:;
	double A$1;
	double vr$2 = _ZN4MATH4TANHERKd( (double*)C$1 );
	A$1 = vr$2;
	double B$1;
	B$1 = __builtin_tan( *(double*)((uint8*)C$1 + 8ll) );
	double D$1;
	D$1 = (((A$1 * A$1) * B$1) * B$1) + 0x1.p+0;
	if( D$1 == 0x0p+0 ) goto label$1030;
	TMP$399$1 = (B$1 - ((A$1 * A$1) * B$1)) / D$1;
	TMP$398$1 = (A$1 + ((A$1 * B$1) * B$1)) / D$1;
	_ZN4MATH7COMPLEXC1ERKdS2_( &TMP$401$1, (double*)&TMP$398$1, (double*)&TMP$399$1 );
	goto label$1031;
	label$1030:;
	_ZN4MATH7COMPLEXC1Ev( &TMP$401$1 );
	label$1031:;
	_ZN4MATH7COMPLEXC1ERKS0_( &fb$result$1, (struct $N4MATH7COMPLEXE*)&TMP$401$1 );
	goto label$1029;
	label$1029:;
	return fb$result$1;
}

void _ZN4MATH4VEC2C1Ev( struct $N4MATH4VEC2E* THIS$1 )
{
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	label$1032:;
	label$1033:;
}

void _ZN4MATH4VEC2C1ERKNS_8RATIONALES3_( struct $N4MATH4VEC2E* THIS$1, struct $N4MATH8RATIONALE* N1$1, struct $N4MATH8RATIONALE* N2$1 )
{
	label$1034:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	double vr$4 = _ZNK4MATH8RATIONALcvdEv( N1$1 );
	*(double*)THIS$1 = vr$4;
	double vr$6 = _ZNK4MATH8RATIONALcvdEv( N2$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$6;
	label$1035:;
}

void _ZN4MATH4VEC2C1ERKNS_8RATIONALERKd( struct $N4MATH4VEC2E* THIS$1, struct $N4MATH8RATIONALE* N1$1, double* N2$1 )
{
	label$1036:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	double vr$4 = _ZNK4MATH8RATIONALcvdEv( N1$1 );
	*(double*)THIS$1 = vr$4;
	*(double*)((uint8*)THIS$1 + 8ll) = *N2$1;
	label$1037:;
}

void _ZN4MATH4VEC2C1ERKdRKNS_8RATIONALE( struct $N4MATH4VEC2E* THIS$1, double* N1$1, struct $N4MATH8RATIONALE* N2$1 )
{
	label$1038:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	*(double*)THIS$1 = *N1$1;
	double vr$6 = _ZNK4MATH8RATIONALcvdEv( N2$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$6;
	label$1039:;
}

void _ZN4MATH4VEC2C1ERKdS2_( struct $N4MATH4VEC2E* THIS$1, double* N1$1, double* N2$1 )
{
	label$1040:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	*(double*)THIS$1 = *N1$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *N2$1;
	label$1041:;
}

void _ZN4MATH4VEC2C1ERKS0_( struct $N4MATH4VEC2E* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	label$1042:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	label$1043:;
}

void _ZN4MATH4VEC2pLERKS0_( struct $N4MATH4VEC2E* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	label$1044:;
	*(double*)THIS$1 = *(double*)THIS$1 + *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) + *(double*)((uint8*)V$1 + 8ll);
	label$1045:;
}

void _ZN4MATH4VEC2mIERKS0_( struct $N4MATH4VEC2E* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	label$1046:;
	*(double*)THIS$1 = *(double*)THIS$1 - *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) - *(double*)((uint8*)V$1 + 8ll);
	label$1047:;
}

void _ZN4MATH4VEC2mLERKNS_8RATIONALE( struct $N4MATH4VEC2E* THIS$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$1048:;
	double N$1;
	double vr$0 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	N$1 = vr$0;
	*(double*)THIS$1 = *(double*)THIS$1 * N$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) * N$1;
	label$1049:;
}

void _ZN4MATH4VEC2mLERKd( struct $N4MATH4VEC2E* THIS$1, double* N$1 )
{
	label$1050:;
	*(double*)THIS$1 = *(double*)THIS$1 * *N$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) * *N$1;
	label$1051:;
}

void _ZN4MATH4VEC2mLERKS0_( struct $N4MATH4VEC2E* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	label$1052:;
	*(double*)THIS$1 = *(double*)THIS$1 * *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) * *(double*)((uint8*)V$1 + 8ll);
	label$1053:;
}

void _ZN4MATH4VEC2dVERKNS_8RATIONALE( struct $N4MATH4VEC2E* THIS$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$1054:;
	double N$1;
	double vr$0 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	N$1 = vr$0;
	if( N$1 == 0x0p+0 ) goto label$1057;
	{
		*(double*)THIS$1 = *(double*)THIS$1 / N$1;
		*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) / N$1;
	}
	goto label$1056;
	label$1057:;
	{
		*(double*)THIS$1 = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 8ll) = 0x0p+0;
	}
	label$1056:;
	label$1055:;
}

void _ZN4MATH4VEC2dVERKd( struct $N4MATH4VEC2E* THIS$1, double* N$1 )
{
	label$1058:;
	if( *N$1 == 0x0p+0 ) goto label$1061;
	{
		*(double*)THIS$1 = *(double*)THIS$1 / *N$1;
		*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) / *N$1;
	}
	goto label$1060;
	label$1061:;
	{
		*(double*)THIS$1 = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 8ll) = 0x0p+0;
	}
	label$1060:;
	label$1059:;
}

void _ZN4MATH4VEC2dVERKS0_( struct $N4MATH4VEC2E* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	double TMP$402$1;
	double TMP$403$1;
	label$1062:;
	if( *(double*)V$1 == 0x0p+0 ) goto label$1064;
	TMP$402$1 = *(double*)THIS$1 / *(double*)V$1;
	goto label$1066;
	label$1064:;
	TMP$402$1 = 0x0p+0;
	label$1066:;
	*(double*)THIS$1 = TMP$402$1;
	if( *(double*)((uint8*)V$1 + 8ll) == 0x0p+0 ) goto label$1065;
	TMP$403$1 = *(double*)((uint8*)THIS$1 + 8ll) / *(double*)((uint8*)V$1 + 8ll);
	goto label$1067;
	label$1065:;
	TMP$403$1 = 0x0p+0;
	label$1067:;
	*(double*)((uint8*)THIS$1 + 8ll) = TMP$403$1;
	label$1063:;
}

FBSTRING* _ZNK4MATH4VEC2cv8FBSTRINGEv( struct $N4MATH4VEC2E* THIS$1 )
{
	FBSTRING TMP$406$1;
	FBSTRING TMP$407$1;
	FBSTRING TMP$408$1;
	FBSTRING TMP$409$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$1068:;
	FBSTRING* vr$2 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 8ll) );
	FBSTRING* vr$4 = fb_DoubleToStr( *(double*)THIS$1 );
	__builtin_memset( &TMP$406$1, 0, 24ll );
	FBSTRING* vr$7 = fb_StrConcat( &TMP$406$1, (void*)"<math.vec2>{ x : ", 18ll, (void*)vr$4, -1ll );
	__builtin_memset( &TMP$407$1, 0, 24ll );
	FBSTRING* vr$10 = fb_StrConcat( &TMP$407$1, (void*)vr$7, -1ll, (void*)" , y : ", 8ll );
	__builtin_memset( &TMP$408$1, 0, 24ll );
	FBSTRING* vr$13 = fb_StrConcat( &TMP$408$1, (void*)vr$10, -1ll, (void*)vr$2, -1ll );
	__builtin_memset( &TMP$409$1, 0, 24ll );
	FBSTRING* vr$16 = fb_StrConcat( &TMP$409$1, (void*)vr$13, -1ll, (void*)" }", 3ll );
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$16, -1ll, 0 );
	goto label$1069;
	label$1069:;
	FBSTRING* vr$19 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$19;
}

void _ZN4MATH4VEC2aSERKS0_( struct $N4MATH4VEC2E* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	label$1070:;
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	label$1071:;
}

double _ZNK4MATH4VEC213CHNORM__get__Ev( struct $N4MATH4VEC2E* THIS$1 )
{
	double TMP$410$1;
	double TMP$411$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1072:;
	TMP$411$1 = __builtin_fabs( *(double*)((uint8*)THIS$1 + 8ll) );
	TMP$410$1 = __builtin_fabs( *(double*)THIS$1 );
	double vr$7 = _ZN4MATH3MAXERKdS1_( &TMP$410$1, &TMP$411$1 );
	fb$result$1 = vr$7;
	goto label$1073;
	label$1073:;
	return fb$result$1;
}

double _ZNK4MATH4VEC213MANORM__get__Ev( struct $N4MATH4VEC2E* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1074:;
	fb$result$1 = __builtin_fabs( *(double*)THIS$1 ) + __builtin_fabs( *(double*)((uint8*)THIS$1 + 8ll) );
	goto label$1075;
	label$1075:;
	return fb$result$1;
}

double _ZNK4MATH4VEC211NORM__get__Ev( struct $N4MATH4VEC2E* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1076:;
	fb$result$1 = __builtin_sqrt( ((*(double*)THIS$1 * *(double*)THIS$1) + (*(double*)((uint8*)THIS$1 + 8ll) * *(double*)((uint8*)THIS$1 + 8ll))) );
	goto label$1077;
	label$1077:;
	return fb$result$1;
}

void _ZN4MATH4VEC211NORM__set__ERKNS_8RATIONALE( struct $N4MATH4VEC2E* THIS$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$1078:;
	double N$1;
	double vr$0 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	N$1 = vr$0;
	if( N$1 == 0x0p+0 ) goto label$1081;
	{
		double H$2;
		H$2 = __builtin_sqrt( ((*(double*)THIS$1 * *(double*)THIS$1) + (*(double*)((uint8*)THIS$1 + 8ll) * *(double*)((uint8*)THIS$1 + 8ll))) );
		if( H$2 == 0x0p+0 ) goto label$1083;
		{
			*(double*)THIS$1 = (*(double*)THIS$1 / H$2) * N$1;
			*(double*)((uint8*)THIS$1 + 8ll) = (*(double*)((uint8*)THIS$1 + 8ll) / H$2) * N$1;
		}
		label$1083:;
		label$1082:;
	}
	goto label$1080;
	label$1081:;
	{
		*(double*)THIS$1 = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 8ll) = 0x0p+0;
	}
	label$1080:;
	label$1079:;
}

void _ZN4MATH4VEC211NORM__set__ERKd( struct $N4MATH4VEC2E* THIS$1, double* N$1 )
{
	label$1084:;
	if( *N$1 == 0x0p+0 ) goto label$1087;
	{
		double H$2;
		H$2 = __builtin_sqrt( ((*(double*)THIS$1 * *(double*)THIS$1) + (*(double*)((uint8*)THIS$1 + 8ll) * *(double*)((uint8*)THIS$1 + 8ll))) );
		if( H$2 == 0x0p+0 ) goto label$1089;
		{
			*(double*)THIS$1 = (*(double*)THIS$1 / H$2) * *N$1;
			*(double*)((uint8*)THIS$1 + 8ll) = (*(double*)((uint8*)THIS$1 + 8ll) / H$2) * *N$1;
		}
		label$1089:;
		label$1088:;
	}
	goto label$1086;
	label$1087:;
	{
		*(double*)THIS$1 = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 8ll) = 0x0p+0;
	}
	label$1086:;
	label$1085:;
}

double _ZNK4MATH4VEC213SQNORM__get__Ev( struct $N4MATH4VEC2E* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1090:;
	fb$result$1 = (*(double*)THIS$1 * *(double*)THIS$1) + (*(double*)((uint8*)THIS$1 + 8ll) * *(double*)((uint8*)THIS$1 + 8ll));
	goto label$1091;
	label$1091:;
	return fb$result$1;
}

double _ZNK4MATH4VEC212THETA__get__Ev( struct $N4MATH4VEC2E* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1092:;
	double vr$5 = _ZN4MATH5THETAERKdS1_( (double*)THIS$1, (double*)((uint8*)THIS$1 + 8ll) );
	fb$result$1 = vr$5;
	goto label$1093;
	label$1093:;
	return fb$result$1;
}

void _ZN4MATH4VEC212THETA__set__ERKNS_8RATIONALE( struct $N4MATH4VEC2E* THIS$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$1094:;
	double N$1;
	double vr$0 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	N$1 = vr$0;
	double H$1;
	double vr$1 = _ZNK4MATH4VEC211NORM__get__Ev( (struct $N4MATH4VEC2E*)THIS$1 );
	H$1 = vr$1;
	if( H$1 == 0x0p+0 ) goto label$1097;
	{
		*(double*)THIS$1 = __builtin_cos( N$1 ) * H$1;
		*(double*)((uint8*)THIS$1 + 8ll) = __builtin_sin( N$1 ) * H$1;
	}
	label$1097:;
	label$1096:;
	label$1095:;
}

void _ZN4MATH4VEC212THETA__set__ERKd( struct $N4MATH4VEC2E* THIS$1, double* N$1 )
{
	label$1098:;
	double H$1;
	double vr$0 = _ZNK4MATH4VEC211NORM__get__Ev( (struct $N4MATH4VEC2E*)THIS$1 );
	H$1 = vr$0;
	if( H$1 == 0x0p+0 ) goto label$1101;
	{
		*(double*)THIS$1 = __builtin_cos( *N$1 ) * H$1;
		*(double*)((uint8*)THIS$1 + 8ll) = __builtin_sin( *N$1 ) * H$1;
	}
	label$1101:;
	label$1100:;
	label$1099:;
}

struct $N4MATH4VEC2E _ZN4MATH4VEC29FROMPOLARERKNS_8RATIONALES3_( struct $N4MATH8RATIONALE* R1$1, struct $N4MATH8RATIONALE* R2$1 )
{
	double TMP$412$1;
	double TMP$413$1;
	struct $N4MATH4VEC2E TMP$414$1;
	struct $N4MATH4VEC2E fb$result$1;
	label$1102:;
	double vr$0 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	TMP$413$1 = vr$0;
	double vr$2 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	TMP$412$1 = vr$2;
	struct $N4MATH4VEC2E vr$4 = _ZN4MATH4VEC29FROMPOLARERKdS2_( (double*)&TMP$412$1, (double*)&TMP$413$1 );
	TMP$414$1 = vr$4;
	_ZN4MATH4VEC2C1ERKS0_( &fb$result$1, (struct $N4MATH4VEC2E*)&TMP$414$1 );
	goto label$1103;
	label$1103:;
	return fb$result$1;
}

struct $N4MATH4VEC2E _ZN4MATH4VEC29FROMPOLARERKNS_8RATIONALERKd( struct $N4MATH8RATIONALE* R1$1, double* N2$1 )
{
	double TMP$415$1;
	struct $N4MATH4VEC2E TMP$416$1;
	struct $N4MATH4VEC2E fb$result$1;
	label$1104:;
	double vr$0 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	TMP$415$1 = vr$0;
	struct $N4MATH4VEC2E vr$2 = _ZN4MATH4VEC29FROMPOLARERKdS2_( (double*)&TMP$415$1, N2$1 );
	TMP$416$1 = vr$2;
	_ZN4MATH4VEC2C1ERKS0_( &fb$result$1, (struct $N4MATH4VEC2E*)&TMP$416$1 );
	goto label$1105;
	label$1105:;
	return fb$result$1;
}

struct $N4MATH4VEC2E _ZN4MATH4VEC29FROMPOLARERKdRKNS_8RATIONALE( double* N1$1, struct $N4MATH8RATIONALE* R2$1 )
{
	double TMP$417$1;
	struct $N4MATH4VEC2E TMP$418$1;
	struct $N4MATH4VEC2E fb$result$1;
	label$1106:;
	double vr$0 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	TMP$417$1 = vr$0;
	struct $N4MATH4VEC2E vr$2 = _ZN4MATH4VEC29FROMPOLARERKdS2_( N1$1, (double*)&TMP$417$1 );
	TMP$418$1 = vr$2;
	_ZN4MATH4VEC2C1ERKS0_( &fb$result$1, (struct $N4MATH4VEC2E*)&TMP$418$1 );
	goto label$1107;
	label$1107:;
	return fb$result$1;
}

struct $N4MATH4VEC2E _ZN4MATH4VEC29FROMPOLARERKdS2_( double* N1$1, double* N2$1 )
{
	struct $N4MATH4VEC2E fb$result$1;
	label$1108:;
	if( *N2$1 < 0x0p+0 ) goto label$1111;
	{
		double TMP$420$2;
		double TMP$421$2;
		TMP$421$2 = __builtin_sin( *N1$1 ) * *N2$1;
		TMP$420$2 = __builtin_cos( *N1$1 ) * *N2$1;
		_ZN4MATH4VEC2C1ERKdS2_( &fb$result$1, &TMP$420$2, &TMP$421$2 );
		goto label$1109;
	}
	goto label$1110;
	label$1111:;
	{
		double TMP$423$2;
		double TMP$424$2;
		double T$2;
		T$2 = *N1$1 + 0x1.921FB54442D18p+1;
		double R$2;
		R$2 = -(*N2$1);
		TMP$424$2 = __builtin_sin( T$2 ) * R$2;
		TMP$423$2 = __builtin_cos( T$2 ) * R$2;
		_ZN4MATH4VEC2C1ERKdS2_( &fb$result$1, (double*)&TMP$423$2, (double*)&TMP$424$2 );
		goto label$1109;
	}
	label$1110:;
	label$1109:;
	return fb$result$1;
}

boolean _ZNK4MATH4VEC26ISNULLEv( struct $N4MATH4VEC2E* THIS$1 )
{
	boolean TMP$425$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1112:;
	if( ((int64)-(*(double*)THIS$1 == 0x0p+0) & (int64)-(*(double*)((uint8*)THIS$1 + 8ll) == 0x0p+0)) == 0ll ) goto label$1114;
	TMP$425$1 = (boolean)1ll;
	goto label$1115;
	label$1114:;
	TMP$425$1 = (boolean)0ll;
	label$1115:;
	fb$result$1 = TMP$425$1;
	goto label$1113;
	label$1113:;
	return fb$result$1;
}

boolean _ZNK4MATH4VEC26ISNULLERKd( struct $N4MATH4VEC2E* THIS$1, double* S$1 )
{
	boolean TMP$426$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1116:;
	double T$1;
	T$1 = __builtin_fabs( *S$1 );
	if( ((int64)-(__builtin_fabs( *(double*)THIS$1 ) <= T$1) & (int64)-(__builtin_fabs( *(double*)((uint8*)THIS$1 + 8ll) ) <= T$1)) == 0ll ) goto label$1118;
	TMP$426$1 = (boolean)1ll;
	goto label$1119;
	label$1118:;
	TMP$426$1 = (boolean)0ll;
	label$1119:;
	fb$result$1 = TMP$426$1;
	goto label$1117;
	label$1117:;
	return fb$result$1;
}

boolean _ZNK4MATH4VEC26ISUNITEv( struct $N4MATH4VEC2E* THIS$1 )
{
	boolean TMP$427$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1120:;
	double vr$1 = _ZNK4MATH4VEC211NORM__get__Ev( THIS$1 );
	if( vr$1 != 0x1.p+0 ) goto label$1122;
	TMP$427$1 = (boolean)1ll;
	goto label$1123;
	label$1122:;
	TMP$427$1 = (boolean)0ll;
	label$1123:;
	fb$result$1 = TMP$427$1;
	goto label$1121;
	label$1121:;
	return fb$result$1;
}

boolean _ZNK4MATH4VEC26ISUNITERKd( struct $N4MATH4VEC2E* THIS$1, double* T$1 )
{
	boolean TMP$428$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1124:;
	double vr$1 = _ZNK4MATH4VEC211NORM__get__Ev( THIS$1 );
	if( __builtin_fabs( (-vr$1 + 0x1.p+0) ) > __builtin_fabs( *T$1 ) ) goto label$1126;
	TMP$428$1 = (boolean)1ll;
	goto label$1127;
	label$1126:;
	TMP$428$1 = (boolean)0ll;
	label$1127:;
	fb$result$1 = TMP$428$1;
	goto label$1125;
	label$1125:;
	return fb$result$1;
}

double _ZNK4MATH4VEC26MINORMERKd( struct $N4MATH4VEC2E* THIS$1, double* E$1 )
{
	double TMP$429$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1128:;
	if( *E$1 == 0x0p+0 ) goto label$1130;
	double vr$7 = pow( __builtin_fabs( *(double*)THIS$1 ), *E$1 );
	double vr$11 = pow( __builtin_fabs( *(double*)((uint8*)THIS$1 + 8ll) ), *E$1 );
	double vr$13 = pow( vr$7 + vr$11, 0x1.p+0 / *E$1 );
	TMP$429$1 = vr$13;
	goto label$1131;
	label$1130:;
	TMP$429$1 = 0x0p+0;
	label$1131:;
	fb$result$1 = TMP$429$1;
	goto label$1129;
	label$1129:;
	return fb$result$1;
}

void _ZN4MATH4VEC29NORMALISEEv( struct $N4MATH4VEC2E* THIS$1 )
{
	label$1132:;
	double H$1;
	double vr$0 = _ZNK4MATH4VEC211NORM__get__Ev( (struct $N4MATH4VEC2E*)THIS$1 );
	H$1 = vr$0;
	if( ((int64)-(H$1 > 0x0p+0) & (int64)-(H$1 != 0x1.p+0)) == 0ll ) goto label$1135;
	{
		*(double*)THIS$1 = *(double*)THIS$1 / H$1;
		*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) / H$1;
	}
	label$1135:;
	label$1134:;
	label$1133:;
}

void _ZN4MATH4VEC26ROTATEERKNS_8RATIONALE( struct $N4MATH4VEC2E* THIS$1, struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$430$1;
	label$1136:;
	double vr$0 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$430$1 = vr$0;
	_ZN4MATH4ROTZERdS0_RKd( (double*)THIS$1, (double*)((uint8*)THIS$1 + 8ll), (double*)&TMP$430$1 );
	label$1137:;
}

void _ZN4MATH4VEC26ROTATEERKd( struct $N4MATH4VEC2E* THIS$1, double* N$1 )
{
	label$1138:;
	_ZN4MATH4ROTZERdS0_RKd( (double*)THIS$1, (double*)((uint8*)THIS$1 + 8ll), N$1 );
	label$1139:;
}

FBSTRING* _ZNK4MATH4VEC26TOJSONERKb( struct $N4MATH4VEC2E* THIS$1, boolean* A$1 )
{
	FBSTRING TMP$433$1;
	FBSTRING TMP$434$1;
	FBSTRING TMP$435$1;
	FBSTRING TMP$436$1;
	FBSTRING TMP$437$1;
	FBSTRING TMP$438$1;
	FBSTRING TMP$439$1;
	FBSTRING TMP$440$1;
	FBSTRING TMP$441$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$1140:;
	if( *A$1 == (boolean)0ll ) goto label$1142;
	FBSTRING* vr$3 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 8ll) );
	FBSTRING* vr$5 = fb_DoubleToStr( *(double*)THIS$1 );
	__builtin_memset( &TMP$434$1, 0, 24ll );
	FBSTRING* vr$8 = fb_StrConcat( &TMP$434$1, (void*)"[", 2ll, (void*)vr$5, -1ll );
	__builtin_memset( &TMP$435$1, 0, 24ll );
	FBSTRING* vr$11 = fb_StrConcat( &TMP$435$1, (void*)vr$8, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$436$1, 0, 24ll );
	FBSTRING* vr$14 = fb_StrConcat( &TMP$436$1, (void*)vr$11, -1ll, (void*)vr$3, -1ll );
	__builtin_memset( &TMP$437$1, 0, 24ll );
	FBSTRING* vr$17 = fb_StrConcat( &TMP$437$1, (void*)vr$14, -1ll, (void*)"]", 2ll );
	fb_StrInit( (void*)&TMP$433$1, -1ll, (void*)vr$17, -1ll, 0 );
	goto label$1143;
	label$1142:;
	FBSTRING* vr$20 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 8ll) );
	FBSTRING* vr$22 = fb_DoubleToStr( *(double*)THIS$1 );
	__builtin_memset( &TMP$438$1, 0, 24ll );
	FBSTRING* vr$25 = fb_StrConcat( &TMP$438$1, (void*)"{\x22x\x22:", 6ll, (void*)vr$22, -1ll );
	__builtin_memset( &TMP$439$1, 0, 24ll );
	FBSTRING* vr$28 = fb_StrConcat( &TMP$439$1, (void*)vr$25, -1ll, (void*)",\x22y\x22:", 6ll );
	__builtin_memset( &TMP$440$1, 0, 24ll );
	FBSTRING* vr$31 = fb_StrConcat( &TMP$440$1, (void*)vr$28, -1ll, (void*)vr$20, -1ll );
	__builtin_memset( &TMP$441$1, 0, 24ll );
	FBSTRING* vr$34 = fb_StrConcat( &TMP$441$1, (void*)vr$31, -1ll, (void*)"}", 2ll );
	fb_StrInit( (void*)&TMP$433$1, -1ll, (void*)vr$34, -1ll, 0 );
	label$1143:;
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)&TMP$433$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&TMP$433$1 );
	goto label$1141;
	label$1141:;
	FBSTRING* vr$40 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$40;
}

struct $N4MATH4VEC2E _ZN4MATH4VEC25UNITXEv( void )
{
	double TMP$443$1;
	double TMP$444$1;
	struct $N4MATH4VEC2E fb$result$1;
	label$1144:;
	TMP$444$1 = 0x0p+0;
	TMP$443$1 = 0x1.p+0;
	_ZN4MATH4VEC2C1ERKdS2_( &fb$result$1, (double*)&TMP$443$1, (double*)&TMP$444$1 );
	goto label$1145;
	label$1145:;
	return fb$result$1;
}

struct $N4MATH4VEC2E _ZN4MATH4VEC25UNITYEv( void )
{
	double TMP$446$1;
	double TMP$447$1;
	struct $N4MATH4VEC2E fb$result$1;
	label$1146:;
	TMP$447$1 = 0x1.p+0;
	TMP$446$1 = 0x0p+0;
	_ZN4MATH4VEC2C1ERKdS2_( &fb$result$1, (double*)&TMP$446$1, (double*)&TMP$447$1 );
	goto label$1147;
	label$1147:;
	return fb$result$1;
}

struct $N4MATH4VEC2E _ZN4MATHplERKNS_4VEC2ES2_( struct $N4MATH4VEC2E* V1$1, struct $N4MATH4VEC2E* V2$1 )
{
	double TMP$449$1;
	double TMP$450$1;
	struct $N4MATH4VEC2E fb$result$1;
	label$1148:;
	TMP$450$1 = *(double*)((uint8*)V1$1 + 8ll) + *(double*)((uint8*)V2$1 + 8ll);
	TMP$449$1 = *(double*)V1$1 + *(double*)V2$1;
	_ZN4MATH4VEC2C1ERKdS2_( &fb$result$1, &TMP$449$1, &TMP$450$1 );
	goto label$1149;
	label$1149:;
	return fb$result$1;
}

struct $N4MATH4VEC2E _ZN4MATHngERKNS_4VEC2E( struct $N4MATH4VEC2E* V$1 )
{
	double TMP$452$1;
	double TMP$453$1;
	struct $N4MATH4VEC2E fb$result$1;
	label$1150:;
	TMP$453$1 = -(*(double*)((uint8*)V$1 + 8ll));
	TMP$452$1 = -(*(double*)V$1);
	_ZN4MATH4VEC2C1ERKdS2_( &fb$result$1, &TMP$452$1, &TMP$453$1 );
	goto label$1151;
	label$1151:;
	return fb$result$1;
}

struct $N4MATH4VEC2E _ZN4MATHmiERKNS_4VEC2ES2_( struct $N4MATH4VEC2E* V1$1, struct $N4MATH4VEC2E* V2$1 )
{
	double TMP$455$1;
	double TMP$456$1;
	struct $N4MATH4VEC2E fb$result$1;
	label$1152:;
	TMP$456$1 = *(double*)((uint8*)V1$1 + 8ll) - *(double*)((uint8*)V2$1 + 8ll);
	TMP$455$1 = *(double*)V1$1 - *(double*)V2$1;
	_ZN4MATH4VEC2C1ERKdS2_( &fb$result$1, &TMP$455$1, &TMP$456$1 );
	goto label$1153;
	label$1153:;
	return fb$result$1;
}

struct $N4MATH4VEC2E _ZN4MATHmlERKNS_8RATIONALERKNS_4VEC2E( struct $N4MATH8RATIONALE* R$1, struct $N4MATH4VEC2E* V$1 )
{
	double TMP$458$1;
	double TMP$459$1;
	struct $N4MATH4VEC2E fb$result$1;
	label$1154:;
	double N$1;
	double vr$0 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	N$1 = vr$0;
	TMP$459$1 = N$1 * *(double*)((uint8*)V$1 + 8ll);
	TMP$458$1 = N$1 * *(double*)V$1;
	_ZN4MATH4VEC2C1ERKdS2_( &fb$result$1, (double*)&TMP$458$1, (double*)&TMP$459$1 );
	goto label$1155;
	label$1155:;
	return fb$result$1;
}

struct $N4MATH4VEC2E _ZN4MATHmlERKdRKNS_4VEC2E( double* N$1, struct $N4MATH4VEC2E* V$1 )
{
	double TMP$461$1;
	double TMP$462$1;
	struct $N4MATH4VEC2E fb$result$1;
	label$1156:;
	TMP$462$1 = *N$1 * *(double*)((uint8*)V$1 + 8ll);
	TMP$461$1 = *N$1 * *(double*)V$1;
	_ZN4MATH4VEC2C1ERKdS2_( &fb$result$1, &TMP$461$1, &TMP$462$1 );
	goto label$1157;
	label$1157:;
	return fb$result$1;
}

struct $N4MATH4VEC2E _ZN4MATHmlERKNS_4VEC2ERKNS_8RATIONALE( struct $N4MATH4VEC2E* V$1, struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$464$1;
	double TMP$465$1;
	struct $N4MATH4VEC2E fb$result$1;
	label$1158:;
	double N$1;
	double vr$0 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	N$1 = vr$0;
	TMP$465$1 = *(double*)((uint8*)V$1 + 8ll) * N$1;
	TMP$464$1 = *(double*)V$1 * N$1;
	_ZN4MATH4VEC2C1ERKdS2_( &fb$result$1, &TMP$464$1, &TMP$465$1 );
	goto label$1159;
	label$1159:;
	return fb$result$1;
}

struct $N4MATH4VEC2E _ZN4MATHmlERKNS_4VEC2ERKd( struct $N4MATH4VEC2E* V$1, double* N$1 )
{
	double TMP$467$1;
	double TMP$468$1;
	struct $N4MATH4VEC2E fb$result$1;
	label$1160:;
	TMP$468$1 = *(double*)((uint8*)V$1 + 8ll) * *N$1;
	TMP$467$1 = *(double*)V$1 * *N$1;
	_ZN4MATH4VEC2C1ERKdS2_( &fb$result$1, &TMP$467$1, &TMP$468$1 );
	goto label$1161;
	label$1161:;
	return fb$result$1;
}

struct $N4MATH4VEC2E _ZN4MATHmlERKNS_4VEC2ES2_( struct $N4MATH4VEC2E* V1$1, struct $N4MATH4VEC2E* V2$1 )
{
	double TMP$470$1;
	double TMP$471$1;
	struct $N4MATH4VEC2E fb$result$1;
	label$1162:;
	TMP$471$1 = *(double*)((uint8*)V1$1 + 8ll) * *(double*)((uint8*)V2$1 + 8ll);
	TMP$470$1 = *(double*)V1$1 * *(double*)V2$1;
	_ZN4MATH4VEC2C1ERKdS2_( &fb$result$1, &TMP$470$1, &TMP$471$1 );
	goto label$1163;
	label$1163:;
	return fb$result$1;
}

struct $N4MATH4VEC2E _ZN4MATHdvERKNS_4VEC2ERKNS_8RATIONALE( struct $N4MATH4VEC2E* V$1, struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$473$1;
	double TMP$474$1;
	struct $N4MATH4VEC2E TMP$476$1;
	struct $N4MATH4VEC2E fb$result$1;
	label$1164:;
	double N$1;
	double vr$0 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	N$1 = vr$0;
	if( N$1 == 0x0p+0 ) goto label$1166;
	TMP$474$1 = *(double*)((uint8*)V$1 + 8ll) / N$1;
	TMP$473$1 = *(double*)V$1 / N$1;
	_ZN4MATH4VEC2C1ERKdS2_( &TMP$476$1, &TMP$473$1, &TMP$474$1 );
	goto label$1167;
	label$1166:;
	_ZN4MATH4VEC2C1Ev( &TMP$476$1 );
	label$1167:;
	_ZN4MATH4VEC2C1ERKS0_( &fb$result$1, (struct $N4MATH4VEC2E*)&TMP$476$1 );
	goto label$1165;
	label$1165:;
	return fb$result$1;
}

struct $N4MATH4VEC2E _ZN4MATHdvERKNS_4VEC2ERKd( struct $N4MATH4VEC2E* V$1, double* N$1 )
{
	double TMP$478$1;
	double TMP$479$1;
	struct $N4MATH4VEC2E TMP$481$1;
	struct $N4MATH4VEC2E fb$result$1;
	label$1168:;
	if( *N$1 == 0x0p+0 ) goto label$1170;
	TMP$479$1 = *(double*)((uint8*)V$1 + 8ll) / *N$1;
	TMP$478$1 = *(double*)V$1 / *N$1;
	_ZN4MATH4VEC2C1ERKdS2_( &TMP$481$1, &TMP$478$1, &TMP$479$1 );
	goto label$1171;
	label$1170:;
	_ZN4MATH4VEC2C1Ev( &TMP$481$1 );
	label$1171:;
	_ZN4MATH4VEC2C1ERKS0_( &fb$result$1, (struct $N4MATH4VEC2E*)&TMP$481$1 );
	goto label$1169;
	label$1169:;
	return fb$result$1;
}

struct $N4MATH4VEC2E _ZN4MATHdvERKNS_4VEC2ES2_( struct $N4MATH4VEC2E* V1$1, struct $N4MATH4VEC2E* V2$1 )
{
	double TMP$483$1;
	double TMP$484$1;
	struct $N4MATH4VEC2E fb$result$1;
	label$1172:;
	if( *(double*)((uint8*)V2$1 + 8ll) == 0x0p+0 ) goto label$1175;
	TMP$484$1 = *(double*)((uint8*)V1$1 + 8ll) / *(double*)((uint8*)V2$1 + 8ll);
	goto label$1176;
	label$1175:;
	TMP$484$1 = 0x0p+0;
	label$1176:;
	if( *(double*)V2$1 == 0x0p+0 ) goto label$1174;
	TMP$483$1 = *(double*)V1$1 / *(double*)V2$1;
	goto label$1177;
	label$1174:;
	TMP$483$1 = 0x0p+0;
	label$1177:;
	_ZN4MATH4VEC2C1ERKdS2_( &fb$result$1, &TMP$483$1, &TMP$484$1 );
	goto label$1173;
	label$1173:;
	return fb$result$1;
}

boolean _ZN4MATHeqERKNS_4VEC2ES2_( struct $N4MATH4VEC2E* V1$1, struct $N4MATH4VEC2E* V2$1 )
{
	boolean TMP$485$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1178:;
	if( ((int64)-(*(double*)V1$1 == *(double*)V2$1) & (int64)-(*(double*)((uint8*)V1$1 + 8ll) == *(double*)((uint8*)V2$1 + 8ll))) == 0ll ) goto label$1180;
	TMP$485$1 = (boolean)1ll;
	goto label$1181;
	label$1180:;
	TMP$485$1 = (boolean)0ll;
	label$1181:;
	fb$result$1 = TMP$485$1;
	goto label$1179;
	label$1179:;
	return fb$result$1;
}

boolean _ZN4MATHneERKNS_4VEC2ES2_( struct $N4MATH4VEC2E* V1$1, struct $N4MATH4VEC2E* V2$1 )
{
	boolean TMP$486$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1182:;
	if( ((int64)-(*(double*)V1$1 != *(double*)V2$1) | (int64)-(*(double*)((uint8*)V1$1 + 8ll) != *(double*)((uint8*)V2$1 + 8ll))) == 0ll ) goto label$1184;
	TMP$486$1 = (boolean)1ll;
	goto label$1185;
	label$1184:;
	TMP$486$1 = (boolean)0ll;
	label$1185:;
	fb$result$1 = TMP$486$1;
	goto label$1183;
	label$1183:;
	return fb$result$1;
}

boolean _ZN4MATH3CMPERKNS_4VEC2ES2_RKd( struct $N4MATH4VEC2E* V1$1, struct $N4MATH4VEC2E* V2$1, double* S$1 )
{
	boolean TMP$487$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1186:;
	double T$1;
	T$1 = __builtin_fabs( *S$1 );
	if( ((int64)-(__builtin_fabs( (*(double*)V1$1 - *(double*)V2$1) ) <= T$1) & (int64)-(__builtin_fabs( (*(double*)((uint8*)V1$1 + 8ll) - *(double*)((uint8*)V2$1 + 8ll)) ) <= T$1)) == 0ll ) goto label$1188;
	TMP$487$1 = (boolean)1ll;
	goto label$1189;
	label$1188:;
	TMP$487$1 = (boolean)0ll;
	label$1189:;
	fb$result$1 = TMP$487$1;
	goto label$1187;
	label$1187:;
	return fb$result$1;
}

double _ZN4MATH5CROSSERKNS_4VEC2ES2_( struct $N4MATH4VEC2E* V1$1, struct $N4MATH4VEC2E* V2$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1190:;
	fb$result$1 = (*(double*)V1$1 * *(double*)((uint8*)V2$1 + 8ll)) - (*(double*)((uint8*)V1$1 + 8ll) * *(double*)V2$1);
	goto label$1191;
	label$1191:;
	return fb$result$1;
}

double _ZN4MATH3DOTERKNS_4VEC2ES2_( struct $N4MATH4VEC2E* V1$1, struct $N4MATH4VEC2E* V2$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1192:;
	fb$result$1 = (*(double*)V1$1 * *(double*)V2$1) + (*(double*)((uint8*)V1$1 + 8ll) * *(double*)((uint8*)V2$1 + 8ll));
	goto label$1193;
	label$1193:;
	return fb$result$1;
}

struct $N4MATH4VEC2E _ZN4MATH4LERPERKNS_4VEC2ES2_RKd( struct $N4MATH4VEC2E* V1$1, struct $N4MATH4VEC2E* V2$1, double* S$1 )
{
	double TMP$489$1;
	double TMP$490$1;
	struct $N4MATH4VEC2E fb$result$1;
	label$1194:;
	double T$1;
	double vr$0 = _ZN4MATH5CLAMPERKd( S$1 );
	T$1 = vr$0;
	double U$1;
	U$1 = 0x1.p+0 - T$1;
	TMP$490$1 = (*(double*)((uint8*)V1$1 + 8ll) * U$1) + (*(double*)((uint8*)V2$1 + 8ll) * T$1);
	TMP$489$1 = (*(double*)V1$1 * U$1) + (*(double*)V2$1 * T$1);
	_ZN4MATH4VEC2C1ERKdS2_( &fb$result$1, &TMP$489$1, &TMP$490$1 );
	goto label$1195;
	label$1195:;
	return fb$result$1;
}

void _ZN4MATH4PVECC1Ev( struct $N4MATH4PVECE* THIS$1 )
{
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	label$1196:;
	label$1197:;
}

void _ZN4MATH4PVECC1ERKNS_8RATIONALE( struct $N4MATH4PVECE* THIS$1, struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$491$1;
	double TMP$492$1;
	label$1198:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	TMP$492$1 = 0x1.921FB54442D18p+2;
	double vr$5 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$491$1 = vr$5;
	double vr$7 = _ZN4MATH4WRAPERKdS1_( (double*)&TMP$491$1, (double*)&TMP$492$1 );
	*(double*)THIS$1 = vr$7;
	label$1199:;
}

void _ZN4MATH4PVECC1ERKd( struct $N4MATH4PVECE* THIS$1, double* N$1 )
{
	double TMP$493$1;
	label$1200:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	TMP$493$1 = 0x1.921FB54442D18p+2;
	double vr$5 = _ZN4MATH4WRAPERKdS1_( N$1, (double*)&TMP$493$1 );
	*(double*)THIS$1 = vr$5;
	label$1201:;
}

void _ZN4MATH4PVECC1ERKNS_8RATIONALES3_( struct $N4MATH4PVECE* THIS$1, struct $N4MATH8RATIONALE* R1$1, struct $N4MATH8RATIONALE* R2$1 )
{
	label$1202:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	double N1$1;
	double vr$4 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	N1$1 = vr$4;
	double N2$1;
	double vr$5 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	N2$1 = vr$5;
	if( N2$1 < 0x0p+0 ) goto label$1205;
	{
		double TMP$494$2;
		TMP$494$2 = 0x1.921FB54442D18p+2;
		double vr$8 = _ZN4MATH4WRAPERKdS1_( (double*)&N1$1, (double*)&TMP$494$2 );
		*(double*)THIS$1 = vr$8;
		*(double*)((uint8*)THIS$1 + 8ll) = N2$1;
	}
	goto label$1204;
	label$1205:;
	{
		double TMP$495$2;
		double TMP$496$2;
		TMP$496$2 = 0x1.921FB54442D18p+2;
		TMP$495$2 = N1$1 + 0x1.921FB54442D18p+1;
		double vr$14 = _ZN4MATH4WRAPERKdS1_( (double*)&TMP$495$2, (double*)&TMP$496$2 );
		*(double*)THIS$1 = vr$14;
		*(double*)((uint8*)THIS$1 + 8ll) = -N2$1;
	}
	label$1204:;
	label$1203:;
}

void _ZN4MATH4PVECC1ERKNS_8RATIONALERKd( struct $N4MATH4PVECE* THIS$1, struct $N4MATH8RATIONALE* R1$1, double* N2$1 )
{
	label$1206:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	double N1$1;
	double vr$4 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	N1$1 = vr$4;
	if( *N2$1 < 0x0p+0 ) goto label$1209;
	{
		double TMP$497$2;
		TMP$497$2 = 0x1.921FB54442D18p+2;
		double vr$8 = _ZN4MATH4WRAPERKdS1_( (double*)&N1$1, (double*)&TMP$497$2 );
		*(double*)THIS$1 = vr$8;
		*(double*)((uint8*)THIS$1 + 8ll) = *N2$1;
	}
	goto label$1208;
	label$1209:;
	{
		double TMP$498$2;
		double TMP$499$2;
		TMP$499$2 = 0x1.921FB54442D18p+2;
		TMP$498$2 = N1$1 + 0x1.921FB54442D18p+1;
		double vr$15 = _ZN4MATH4WRAPERKdS1_( (double*)&TMP$498$2, (double*)&TMP$499$2 );
		*(double*)THIS$1 = vr$15;
		*(double*)((uint8*)THIS$1 + 8ll) = -(*N2$1);
	}
	label$1208:;
	label$1207:;
}

void _ZN4MATH4PVECC1ERKdRKNS_8RATIONALE( struct $N4MATH4PVECE* THIS$1, double* N1$1, struct $N4MATH8RATIONALE* R2$1 )
{
	label$1210:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	double N2$1;
	double vr$4 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	N2$1 = vr$4;
	if( N2$1 < 0x0p+0 ) goto label$1213;
	{
		double TMP$500$2;
		TMP$500$2 = 0x1.921FB54442D18p+2;
		double vr$6 = _ZN4MATH4WRAPERKdS1_( N1$1, (double*)&TMP$500$2 );
		*(double*)THIS$1 = vr$6;
		*(double*)((uint8*)THIS$1 + 8ll) = N2$1;
	}
	goto label$1212;
	label$1213:;
	{
		double TMP$501$2;
		double TMP$502$2;
		TMP$502$2 = 0x1.921FB54442D18p+2;
		TMP$501$2 = *N1$1 + 0x1.921FB54442D18p+1;
		double vr$13 = _ZN4MATH4WRAPERKdS1_( &TMP$501$2, (double*)&TMP$502$2 );
		*(double*)THIS$1 = vr$13;
		*(double*)((uint8*)THIS$1 + 8ll) = -N2$1;
	}
	label$1212:;
	label$1211:;
}

void _ZN4MATH4PVECC1ERKdS2_( struct $N4MATH4PVECE* THIS$1, double* N1$1, double* N2$1 )
{
	label$1214:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	if( *N2$1 < 0x0p+0 ) goto label$1217;
	{
		double TMP$503$2;
		TMP$503$2 = 0x1.921FB54442D18p+2;
		double vr$6 = _ZN4MATH4WRAPERKdS1_( N1$1, (double*)&TMP$503$2 );
		*(double*)THIS$1 = vr$6;
		*(double*)((uint8*)THIS$1 + 8ll) = *N2$1;
	}
	goto label$1216;
	label$1217:;
	{
		double TMP$504$2;
		double TMP$505$2;
		TMP$505$2 = 0x1.921FB54442D18p+2;
		TMP$504$2 = *N1$1 + 0x1.921FB54442D18p+1;
		double vr$14 = _ZN4MATH4WRAPERKdS1_( &TMP$504$2, (double*)&TMP$505$2 );
		*(double*)THIS$1 = vr$14;
		*(double*)((uint8*)THIS$1 + 8ll) = -(*N2$1);
	}
	label$1216:;
	label$1215:;
}

void _ZN4MATH4PVECC1ERKNS_4VEC2E( struct $N4MATH4PVECE* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	label$1218:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	double vr$4 = _ZNK4MATH4VEC212THETA__get__Ev( V$1 );
	*(double*)THIS$1 = vr$4;
	double vr$6 = _ZNK4MATH4VEC211NORM__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$6;
	label$1219:;
}

void _ZN4MATH4PVECC1ERKS0_( struct $N4MATH4PVECE* THIS$1, struct $N4MATH4PVECE* V$1 )
{
	label$1220:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	label$1221:;
}

void _ZN4MATH4PVECpLERKNS_4VEC2E( struct $N4MATH4PVECE* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	label$1222:;
	double I$1;
	double vr$0 = _ZNK4MATH4PVEC8X__get__Ev( (struct $N4MATH4PVECE*)THIS$1 );
	I$1 = vr$0 + *(double*)V$1;
	double J$1;
	double vr$3 = _ZNK4MATH4PVEC8Y__get__Ev( (struct $N4MATH4PVECE*)THIS$1 );
	J$1 = vr$3 + *(double*)((uint8*)V$1 + 8ll);
	double vr$8 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)THIS$1 = vr$8;
	double vr$12 = _ZN4MATH5HYPOTERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$12;
	label$1223:;
}

void _ZN4MATH4PVECpLERKS0_( struct $N4MATH4PVECE* THIS$1, struct $N4MATH4PVECE* V$1 )
{
	label$1224:;
	double I$1;
	double vr$0 = _ZNK4MATH4PVEC8X__get__Ev( (struct $N4MATH4PVECE*)THIS$1 );
	double vr$1 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
	I$1 = vr$0 + vr$1;
	double J$1;
	double vr$3 = _ZNK4MATH4PVEC8Y__get__Ev( (struct $N4MATH4PVECE*)THIS$1 );
	double vr$4 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
	J$1 = vr$3 + vr$4;
	double vr$8 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)THIS$1 = vr$8;
	double vr$12 = _ZN4MATH5HYPOTERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$12;
	label$1225:;
}

void _ZN4MATH4PVECmIERKNS_4VEC2E( struct $N4MATH4PVECE* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	label$1226:;
	double I$1;
	double vr$0 = _ZNK4MATH4PVEC8X__get__Ev( (struct $N4MATH4PVECE*)THIS$1 );
	I$1 = vr$0 - *(double*)V$1;
	double J$1;
	double vr$3 = _ZNK4MATH4PVEC8Y__get__Ev( (struct $N4MATH4PVECE*)THIS$1 );
	J$1 = vr$3 - *(double*)((uint8*)V$1 + 8ll);
	double vr$8 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)THIS$1 = vr$8;
	double vr$12 = _ZN4MATH5HYPOTERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$12;
	label$1227:;
}

void _ZN4MATH4PVECmIERKS0_( struct $N4MATH4PVECE* THIS$1, struct $N4MATH4PVECE* V$1 )
{
	label$1228:;
	double I$1;
	double vr$0 = _ZNK4MATH4PVEC8X__get__Ev( (struct $N4MATH4PVECE*)THIS$1 );
	double vr$1 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
	I$1 = vr$0 - vr$1;
	double J$1;
	double vr$3 = _ZNK4MATH4PVEC8Y__get__Ev( (struct $N4MATH4PVECE*)THIS$1 );
	double vr$4 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
	J$1 = vr$3 - vr$4;
	double vr$8 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)THIS$1 = vr$8;
	double vr$12 = _ZN4MATH5HYPOTERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$12;
	label$1229:;
}

void _ZN4MATH4PVECmLERKNS_8RATIONALE( struct $N4MATH4PVECE* THIS$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$1230:;
	double N$1;
	double vr$0 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	N$1 = vr$0;
	if( N$1 < 0x0p+0 ) goto label$1233;
	{
		*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) * N$1;
	}
	goto label$1232;
	label$1233:;
	{
		double TMP$506$2;
		double TMP$507$2;
		TMP$507$2 = 0x1.921FB54442D18p+2;
		TMP$506$2 = *(double*)THIS$1 + 0x1.921FB54442D18p+1;
		double vr$8 = _ZN4MATH4WRAPERKdS1_( (double*)&TMP$506$2, (double*)&TMP$507$2 );
		*(double*)THIS$1 = vr$8;
		*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) * -N$1;
	}
	label$1232:;
	label$1231:;
}

void _ZN4MATH4PVECmLERKd( struct $N4MATH4PVECE* THIS$1, double* N$1 )
{
	label$1234:;
	if( *N$1 < 0x0p+0 ) goto label$1237;
	{
		*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) * *N$1;
	}
	goto label$1236;
	label$1237:;
	{
		double TMP$508$2;
		double TMP$509$2;
		TMP$509$2 = 0x1.921FB54442D18p+2;
		TMP$508$2 = *(double*)THIS$1 + 0x1.921FB54442D18p+1;
		double vr$9 = _ZN4MATH4WRAPERKdS1_( (double*)&TMP$508$2, (double*)&TMP$509$2 );
		*(double*)THIS$1 = vr$9;
		*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) * -(*N$1);
	}
	label$1236:;
	label$1235:;
}

void _ZN4MATH4PVECmLERKNS_4VEC2E( struct $N4MATH4PVECE* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	label$1238:;
	double I$1;
	double vr$0 = _ZNK4MATH4PVEC8X__get__Ev( (struct $N4MATH4PVECE*)THIS$1 );
	I$1 = vr$0 * *(double*)V$1;
	double J$1;
	double vr$3 = _ZNK4MATH4PVEC8Y__get__Ev( (struct $N4MATH4PVECE*)THIS$1 );
	J$1 = vr$3 * *(double*)((uint8*)V$1 + 8ll);
	double vr$8 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)THIS$1 = vr$8;
	double vr$12 = _ZN4MATH5HYPOTERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$12;
	label$1239:;
}

void _ZN4MATH4PVECmLERKS0_( struct $N4MATH4PVECE* THIS$1, struct $N4MATH4PVECE* V$1 )
{
	label$1240:;
	double I$1;
	double vr$0 = _ZNK4MATH4PVEC8X__get__Ev( (struct $N4MATH4PVECE*)THIS$1 );
	double vr$1 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
	I$1 = vr$0 * vr$1;
	double J$1;
	double vr$3 = _ZNK4MATH4PVEC8Y__get__Ev( (struct $N4MATH4PVECE*)THIS$1 );
	double vr$4 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
	J$1 = vr$3 * vr$4;
	double vr$8 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)THIS$1 = vr$8;
	double vr$12 = _ZN4MATH5HYPOTERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$12;
	label$1241:;
}

void _ZN4MATH4PVECdVERKNS_8RATIONALE( struct $N4MATH4PVECE* THIS$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$1242:;
	double N$1;
	double vr$0 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	N$1 = vr$0;
	if( N$1 <= 0x0p+0 ) goto label$1245;
	{
		*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) / N$1;
	}
	goto label$1244;
	label$1245:;
	if( N$1 >= 0x0p+0 ) goto label$1246;
	{
		double TMP$510$2;
		double TMP$511$2;
		TMP$511$2 = 0x1.921FB54442D18p+2;
		TMP$510$2 = *(double*)THIS$1 + 0x1.921FB54442D18p+1;
		double vr$8 = _ZN4MATH4WRAPERKdS1_( (double*)&TMP$510$2, (double*)&TMP$511$2 );
		*(double*)THIS$1 = vr$8;
		*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) / -N$1;
	}
	goto label$1244;
	label$1246:;
	{
		*(double*)THIS$1 = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 8ll) = 0x0p+0;
	}
	label$1244:;
	label$1243:;
}

void _ZN4MATH4PVECdVERKd( struct $N4MATH4PVECE* THIS$1, double* N$1 )
{
	label$1247:;
	if( *N$1 <= 0x0p+0 ) goto label$1250;
	{
		*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) / *N$1;
	}
	goto label$1249;
	label$1250:;
	if( *N$1 >= 0x0p+0 ) goto label$1251;
	{
		double TMP$512$2;
		double TMP$513$2;
		TMP$513$2 = 0x1.921FB54442D18p+2;
		TMP$512$2 = *(double*)THIS$1 + 0x1.921FB54442D18p+1;
		double vr$10 = _ZN4MATH4WRAPERKdS1_( (double*)&TMP$512$2, (double*)&TMP$513$2 );
		*(double*)THIS$1 = vr$10;
		*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) / -(*N$1);
	}
	goto label$1249;
	label$1251:;
	{
		*(double*)THIS$1 = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 8ll) = 0x0p+0;
	}
	label$1249:;
	label$1248:;
}

void _ZN4MATH4PVECdVERKNS_4VEC2E( struct $N4MATH4PVECE* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	double TMP$514$1;
	double TMP$515$1;
	label$1252:;
	double I$1;
	if( *(double*)V$1 == 0x0p+0 ) goto label$1254;
	double vr$1 = _ZNK4MATH4PVEC8X__get__Ev( (struct $N4MATH4PVECE*)THIS$1 );
	TMP$514$1 = vr$1 / *(double*)V$1;
	goto label$1256;
	label$1254:;
	TMP$514$1 = 0x0p+0;
	label$1256:;
	I$1 = TMP$514$1;
	double J$1;
	if( *(double*)((uint8*)V$1 + 8ll) == 0x0p+0 ) goto label$1255;
	double vr$5 = _ZNK4MATH4PVEC8Y__get__Ev( (struct $N4MATH4PVECE*)THIS$1 );
	TMP$515$1 = vr$5 / *(double*)((uint8*)V$1 + 8ll);
	goto label$1257;
	label$1255:;
	TMP$515$1 = 0x0p+0;
	label$1257:;
	J$1 = TMP$515$1;
	double vr$10 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)THIS$1 = vr$10;
	double vr$14 = _ZN4MATH5HYPOTERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$14;
	label$1253:;
}

void _ZN4MATH4PVECdVERKS0_( struct $N4MATH4PVECE* THIS$1, struct $N4MATH4PVECE* V$1 )
{
	double TMP$516$1;
	double TMP$517$1;
	label$1258:;
	double I$1;
	double vr$0 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
	I$1 = vr$0;
	double J$1;
	double vr$1 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
	J$1 = vr$1;
	double K$1;
	if( I$1 == 0x0p+0 ) goto label$1260;
	double vr$2 = _ZNK4MATH4PVEC8X__get__Ev( (struct $N4MATH4PVECE*)THIS$1 );
	TMP$516$1 = vr$2 / I$1;
	goto label$1262;
	label$1260:;
	TMP$516$1 = 0x0p+0;
	label$1262:;
	K$1 = TMP$516$1;
	double L$1;
	if( J$1 == 0x0p+0 ) goto label$1261;
	double vr$4 = _ZNK4MATH4PVEC8Y__get__Ev( (struct $N4MATH4PVECE*)THIS$1 );
	TMP$517$1 = vr$4 / J$1;
	goto label$1263;
	label$1261:;
	TMP$517$1 = 0x0p+0;
	label$1263:;
	L$1 = TMP$517$1;
	double vr$8 = _ZN4MATH5THETAERKdS1_( (double*)&K$1, (double*)&L$1 );
	*(double*)THIS$1 = vr$8;
	double vr$12 = _ZN4MATH5HYPOTERKdS1_( (double*)&K$1, (double*)&L$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$12;
	label$1259:;
}

struct $N4MATH4VEC2E _ZNK4MATH4PVECcvNS_4VEC2EEv( struct $N4MATH4PVECE* THIS$1 )
{
	double TMP$519$1;
	double TMP$520$1;
	struct $N4MATH4VEC2E fb$result$1;
	label$1264:;
	double vr$0 = _ZNK4MATH4PVEC8Y__get__Ev( THIS$1 );
	TMP$520$1 = vr$0;
	double vr$2 = _ZNK4MATH4PVEC8X__get__Ev( THIS$1 );
	TMP$519$1 = vr$2;
	_ZN4MATH4VEC2C1ERKdS2_( &fb$result$1, (double*)&TMP$519$1, (double*)&TMP$520$1 );
	goto label$1265;
	label$1265:;
	return fb$result$1;
}

FBSTRING* _ZNK4MATH4PVECcv8FBSTRINGEv( struct $N4MATH4PVECE* THIS$1 )
{
	FBSTRING TMP$523$1;
	FBSTRING TMP$524$1;
	FBSTRING TMP$525$1;
	FBSTRING TMP$526$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$1266:;
	FBSTRING* vr$2 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 8ll) );
	FBSTRING* vr$4 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 8ll) );
	__builtin_memset( &TMP$523$1, 0, 24ll );
	FBSTRING* vr$7 = fb_StrConcat( &TMP$523$1, (void*)"<math.pvec>{ theta : ", 22ll, (void*)vr$4, -1ll );
	__builtin_memset( &TMP$524$1, 0, 24ll );
	FBSTRING* vr$10 = fb_StrConcat( &TMP$524$1, (void*)vr$7, -1ll, (void*)" , rho : ", 10ll );
	__builtin_memset( &TMP$525$1, 0, 24ll );
	FBSTRING* vr$13 = fb_StrConcat( &TMP$525$1, (void*)vr$10, -1ll, (void*)vr$2, -1ll );
	__builtin_memset( &TMP$526$1, 0, 24ll );
	FBSTRING* vr$16 = fb_StrConcat( &TMP$526$1, (void*)vr$13, -1ll, (void*)" }", 3ll );
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$16, -1ll, 0 );
	goto label$1267;
	label$1267:;
	FBSTRING* vr$19 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$19;
}

void _ZN4MATH4PVECaSERKNS_4VEC2E( struct $N4MATH4PVECE* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	label$1268:;
	double vr$0 = _ZNK4MATH4VEC212THETA__get__Ev( V$1 );
	*(double*)THIS$1 = vr$0;
	double vr$2 = _ZNK4MATH4VEC211NORM__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$2;
	label$1269:;
}

void _ZN4MATH4PVECaSERKS0_( struct $N4MATH4PVECE* THIS$1, struct $N4MATH4PVECE* V$1 )
{
	label$1270:;
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	label$1271:;
}

double _ZNK4MATH4PVEC13CHNORM__get__Ev( struct $N4MATH4PVECE* THIS$1 )
{
	double TMP$527$1;
	double TMP$528$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1272:;
	TMP$528$1 = __builtin_fabs( __builtin_sin( *(double*)THIS$1 ) ) * *(double*)((uint8*)THIS$1 + 8ll);
	TMP$527$1 = __builtin_fabs( __builtin_cos( *(double*)THIS$1 ) ) * *(double*)((uint8*)THIS$1 + 8ll);
	double vr$13 = _ZN4MATH3MAXERKdS1_( &TMP$527$1, &TMP$528$1 );
	fb$result$1 = vr$13;
	goto label$1273;
	label$1273:;
	return fb$result$1;
}

double _ZNK4MATH4PVEC13MANORM__get__Ev( struct $N4MATH4PVECE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1274:;
	fb$result$1 = (__builtin_fabs( __builtin_cos( *(double*)THIS$1 ) ) * *(double*)((uint8*)THIS$1 + 8ll)) + (__builtin_fabs( __builtin_sin( *(double*)THIS$1 ) ) * *(double*)((uint8*)THIS$1 + 8ll));
	goto label$1275;
	label$1275:;
	return fb$result$1;
}

double _ZNK4MATH4PVEC10RHO__get__Ev( struct $N4MATH4PVECE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1276:;
	fb$result$1 = *(double*)((uint8*)THIS$1 + 8ll);
	goto label$1277;
	label$1277:;
	return fb$result$1;
}

void _ZN4MATH4PVEC10RHO__set__ERKd( struct $N4MATH4PVECE* THIS$1, double* N$1 )
{
	label$1278:;
	if( *N$1 < 0x0p+0 ) goto label$1281;
	{
		*(double*)((uint8*)THIS$1 + 8ll) = *N$1;
	}
	goto label$1280;
	label$1281:;
	{
		double TMP$529$2;
		double TMP$530$2;
		TMP$530$2 = 0x1.921FB54442D18p+2;
		TMP$529$2 = *(double*)THIS$1 + 0x1.921FB54442D18p+1;
		double vr$7 = _ZN4MATH4WRAPERKdS1_( (double*)&TMP$529$2, (double*)&TMP$530$2 );
		*(double*)THIS$1 = vr$7;
		*(double*)((uint8*)THIS$1 + 8ll) = -(*N$1);
	}
	label$1280:;
	label$1279:;
}

double _ZNK4MATH4PVEC13SQNORM__get__Ev( struct $N4MATH4PVECE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1282:;
	fb$result$1 = *(double*)((uint8*)THIS$1 + 8ll) * *(double*)((uint8*)THIS$1 + 8ll);
	goto label$1283;
	label$1283:;
	return fb$result$1;
}

double _ZNK4MATH4PVEC12THETA__get__Ev( struct $N4MATH4PVECE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1284:;
	fb$result$1 = *(double*)THIS$1;
	goto label$1285;
	label$1285:;
	return fb$result$1;
}

void _ZN4MATH4PVEC12THETA__set__ERKNS_8RATIONALE( struct $N4MATH4PVECE* THIS$1, struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$531$1;
	double TMP$532$1;
	label$1286:;
	TMP$532$1 = 0x1.921FB54442D18p+2;
	double vr$1 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$531$1 = vr$1;
	double vr$3 = _ZN4MATH4WRAPERKdS1_( (double*)&TMP$531$1, (double*)&TMP$532$1 );
	*(double*)THIS$1 = vr$3;
	label$1287:;
}

void _ZN4MATH4PVEC12THETA__set__ERKd( struct $N4MATH4PVECE* THIS$1, double* N$1 )
{
	double TMP$533$1;
	label$1288:;
	TMP$533$1 = 0x1.921FB54442D18p+2;
	double vr$1 = _ZN4MATH4WRAPERKdS1_( N$1, (double*)&TMP$533$1 );
	*(double*)THIS$1 = vr$1;
	label$1289:;
}

double _ZNK4MATH4PVEC8X__get__Ev( struct $N4MATH4PVECE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1290:;
	fb$result$1 = __builtin_cos( *(double*)THIS$1 ) * *(double*)((uint8*)THIS$1 + 8ll);
	goto label$1291;
	label$1291:;
	return fb$result$1;
}

void _ZN4MATH4PVEC8X__set__ERKd( struct $N4MATH4PVECE* THIS$1, double* N$1 )
{
	label$1292:;
	double J$1;
	J$1 = __builtin_sin( *(double*)THIS$1 ) * *(double*)((uint8*)THIS$1 + 8ll);
	double vr$5 = _ZN4MATH5THETAERKdS1_( N$1, (double*)&J$1 );
	*(double*)THIS$1 = vr$5;
	double vr$8 = _ZN4MATH5HYPOTERKdS1_( N$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$8;
	label$1293:;
}

double _ZNK4MATH4PVEC8Y__get__Ev( struct $N4MATH4PVECE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1294:;
	fb$result$1 = __builtin_sin( *(double*)THIS$1 ) * *(double*)((uint8*)THIS$1 + 8ll);
	goto label$1295;
	label$1295:;
	return fb$result$1;
}

void _ZN4MATH4PVEC8Y__set__ERKd( struct $N4MATH4PVECE* THIS$1, double* N$1 )
{
	label$1296:;
	double I$1;
	I$1 = __builtin_cos( *(double*)THIS$1 ) * *(double*)((uint8*)THIS$1 + 8ll);
	double vr$5 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, N$1 );
	*(double*)THIS$1 = vr$5;
	double vr$8 = _ZN4MATH5HYPOTERKdS1_( (double*)&I$1, N$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$8;
	label$1297:;
}

struct $N4MATH4PVECE _ZN4MATH4PVEC13FROMCARTESIANERKdS2_( double* N1$1, double* N2$1 )
{
	double TMP$535$1;
	double TMP$536$1;
	struct $N4MATH4PVECE fb$result$1;
	label$1298:;
	double vr$0 = _ZN4MATH5HYPOTERKdS1_( N1$1, N2$1 );
	TMP$536$1 = vr$0;
	double vr$2 = _ZN4MATH5THETAERKdS1_( N1$1, N2$1 );
	TMP$535$1 = vr$2;
	_ZN4MATH4PVECC1ERKdS2_( &fb$result$1, (double*)&TMP$535$1, (double*)&TMP$536$1 );
	goto label$1299;
	label$1299:;
	return fb$result$1;
}

boolean _ZNK4MATH4PVEC6ISNULLEv( struct $N4MATH4PVECE* THIS$1 )
{
	boolean TMP$537$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1300:;
	if( *(double*)((uint8*)THIS$1 + 8ll) != 0x0p+0 ) goto label$1302;
	TMP$537$1 = (boolean)1ll;
	goto label$1303;
	label$1302:;
	TMP$537$1 = (boolean)0ll;
	label$1303:;
	fb$result$1 = TMP$537$1;
	goto label$1301;
	label$1301:;
	return fb$result$1;
}

boolean _ZNK4MATH4PVEC6ISNULLERKd( struct $N4MATH4PVECE* THIS$1, double* T$1 )
{
	boolean TMP$538$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1304:;
	if( *(double*)((uint8*)THIS$1 + 8ll) > __builtin_fabs( *T$1 ) ) goto label$1306;
	TMP$538$1 = (boolean)1ll;
	goto label$1307;
	label$1306:;
	TMP$538$1 = (boolean)0ll;
	label$1307:;
	fb$result$1 = TMP$538$1;
	goto label$1305;
	label$1305:;
	return fb$result$1;
}

boolean _ZNK4MATH4PVEC6ISUNITEv( struct $N4MATH4PVECE* THIS$1 )
{
	boolean TMP$539$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1308:;
	if( *(double*)((uint8*)THIS$1 + 8ll) != 0x1.p+0 ) goto label$1310;
	TMP$539$1 = (boolean)1ll;
	goto label$1311;
	label$1310:;
	TMP$539$1 = (boolean)0ll;
	label$1311:;
	fb$result$1 = TMP$539$1;
	goto label$1309;
	label$1309:;
	return fb$result$1;
}

boolean _ZNK4MATH4PVEC6ISUNITERKd( struct $N4MATH4PVECE* THIS$1, double* T$1 )
{
	boolean TMP$540$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1312:;
	if( __builtin_fabs( (-(*(double*)((uint8*)THIS$1 + 8ll)) + 0x1.p+0) ) > __builtin_fabs( *T$1 ) ) goto label$1314;
	TMP$540$1 = (boolean)1ll;
	goto label$1315;
	label$1314:;
	TMP$540$1 = (boolean)0ll;
	label$1315:;
	fb$result$1 = TMP$540$1;
	goto label$1313;
	label$1313:;
	return fb$result$1;
}

double _ZNK4MATH4PVEC6MINORMERKd( struct $N4MATH4PVECE* THIS$1, double* E$1 )
{
	double TMP$541$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1316:;
	if( *E$1 == 0x0p+0 ) goto label$1318;
	double vr$5 = _ZNK4MATH4PVEC8X__get__Ev( THIS$1 );
	double vr$7 = pow( __builtin_fabs( vr$5 ), *E$1 );
	double vr$9 = _ZNK4MATH4PVEC8Y__get__Ev( THIS$1 );
	double vr$11 = pow( __builtin_fabs( vr$9 ), *E$1 );
	double vr$13 = pow( vr$7 + vr$11, 0x1.p+0 / *E$1 );
	TMP$541$1 = vr$13;
	goto label$1319;
	label$1318:;
	TMP$541$1 = 0x0p+0;
	label$1319:;
	fb$result$1 = TMP$541$1;
	goto label$1317;
	label$1317:;
	return fb$result$1;
}

void _ZN4MATH4PVEC9NORMALISEEv( struct $N4MATH4PVECE* THIS$1 )
{
	label$1320:;
	*(double*)((uint8*)THIS$1 + 8ll) = 0x1.p+0;
	label$1321:;
}

FBSTRING* _ZNK4MATH4PVEC6TOJSONERKb( struct $N4MATH4PVECE* THIS$1, boolean* A$1 )
{
	FBSTRING TMP$544$1;
	FBSTRING TMP$545$1;
	FBSTRING TMP$546$1;
	FBSTRING TMP$547$1;
	FBSTRING TMP$548$1;
	FBSTRING TMP$549$1;
	FBSTRING TMP$550$1;
	FBSTRING TMP$551$1;
	FBSTRING TMP$552$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$1322:;
	if( *A$1 == (boolean)0ll ) goto label$1324;
	FBSTRING* vr$3 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 8ll) );
	FBSTRING* vr$5 = fb_DoubleToStr( *(double*)THIS$1 );
	__builtin_memset( &TMP$545$1, 0, 24ll );
	FBSTRING* vr$8 = fb_StrConcat( &TMP$545$1, (void*)"[", 2ll, (void*)vr$5, -1ll );
	__builtin_memset( &TMP$546$1, 0, 24ll );
	FBSTRING* vr$11 = fb_StrConcat( &TMP$546$1, (void*)vr$8, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$547$1, 0, 24ll );
	FBSTRING* vr$14 = fb_StrConcat( &TMP$547$1, (void*)vr$11, -1ll, (void*)vr$3, -1ll );
	__builtin_memset( &TMP$548$1, 0, 24ll );
	FBSTRING* vr$17 = fb_StrConcat( &TMP$548$1, (void*)vr$14, -1ll, (void*)"]", 2ll );
	fb_StrInit( (void*)&TMP$544$1, -1ll, (void*)vr$17, -1ll, 0 );
	goto label$1325;
	label$1324:;
	FBSTRING* vr$20 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 8ll) );
	FBSTRING* vr$22 = fb_DoubleToStr( *(double*)THIS$1 );
	__builtin_memset( &TMP$549$1, 0, 24ll );
	FBSTRING* vr$25 = fb_StrConcat( &TMP$549$1, (void*)"{\x22theta\x22:", 10ll, (void*)vr$22, -1ll );
	__builtin_memset( &TMP$550$1, 0, 24ll );
	FBSTRING* vr$28 = fb_StrConcat( &TMP$550$1, (void*)vr$25, -1ll, (void*)",\x22rho\x22:", 8ll );
	__builtin_memset( &TMP$551$1, 0, 24ll );
	FBSTRING* vr$31 = fb_StrConcat( &TMP$551$1, (void*)vr$28, -1ll, (void*)vr$20, -1ll );
	__builtin_memset( &TMP$552$1, 0, 24ll );
	FBSTRING* vr$34 = fb_StrConcat( &TMP$552$1, (void*)vr$31, -1ll, (void*)"}", 2ll );
	fb_StrInit( (void*)&TMP$544$1, -1ll, (void*)vr$34, -1ll, 0 );
	label$1325:;
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)&TMP$544$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&TMP$544$1 );
	goto label$1323;
	label$1323:;
	FBSTRING* vr$40 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$40;
}

struct $N4MATH4PVECE _ZNK4MATH4PVEC5UNITXEv( struct $N4MATH4PVECE* THIS$1 )
{
	double TMP$554$1;
	double TMP$555$1;
	struct $N4MATH4PVECE fb$result$1;
	label$1326:;
	TMP$555$1 = 0x1.p+0;
	TMP$554$1 = 0x0p+0;
	_ZN4MATH4PVECC1ERKdS2_( &fb$result$1, (double*)&TMP$554$1, (double*)&TMP$555$1 );
	goto label$1327;
	label$1327:;
	return fb$result$1;
}

struct $N4MATH4PVECE _ZNK4MATH4PVEC5UNITYEv( struct $N4MATH4PVECE* THIS$1 )
{
	double TMP$557$1;
	double TMP$558$1;
	struct $N4MATH4PVECE fb$result$1;
	label$1328:;
	TMP$558$1 = 0x1.p+0;
	TMP$557$1 = 0x1.2D97C7F3321D2p+2;
	_ZN4MATH4PVECC1ERKdS2_( &fb$result$1, (double*)&TMP$557$1, (double*)&TMP$558$1 );
	goto label$1329;
	label$1329:;
	return fb$result$1;
}

struct $N4MATH4PVECE _ZN4MATHplERKNS_4VEC2ERKNS_4PVECE( struct $N4MATH4VEC2E* V1$1, struct $N4MATH4PVECE* V2$1 )
{
	double TMP$560$1;
	double TMP$561$1;
	struct $N4MATH4PVECE fb$result$1;
	label$1330:;
	double I$1;
	double vr$1 = _ZNK4MATH4PVEC8X__get__Ev( V2$1 );
	I$1 = *(double*)V1$1 + vr$1;
	double J$1;
	double vr$4 = _ZNK4MATH4PVEC8Y__get__Ev( V2$1 );
	J$1 = *(double*)((uint8*)V1$1 + 8ll) + vr$4;
	double vr$8 = _ZN4MATH5HYPOTERKdS1_( (double*)&I$1, (double*)&J$1 );
	TMP$561$1 = vr$8;
	double vr$12 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, (double*)&J$1 );
	TMP$560$1 = vr$12;
	_ZN4MATH4PVECC1ERKdS2_( &fb$result$1, (double*)&TMP$560$1, (double*)&TMP$561$1 );
	goto label$1331;
	label$1331:;
	return fb$result$1;
}

struct $N4MATH4PVECE _ZN4MATHplERKNS_4PVECERKNS_4VEC2E( struct $N4MATH4PVECE* V1$1, struct $N4MATH4VEC2E* V2$1 )
{
	double TMP$563$1;
	double TMP$564$1;
	struct $N4MATH4PVECE fb$result$1;
	label$1332:;
	double I$1;
	double vr$0 = _ZNK4MATH4PVEC8X__get__Ev( V1$1 );
	I$1 = vr$0 + *(double*)V2$1;
	double J$1;
	double vr$3 = _ZNK4MATH4PVEC8Y__get__Ev( V1$1 );
	J$1 = vr$3 + *(double*)((uint8*)V2$1 + 8ll);
	double vr$8 = _ZN4MATH5HYPOTERKdS1_( (double*)&I$1, (double*)&J$1 );
	TMP$564$1 = vr$8;
	double vr$12 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, (double*)&J$1 );
	TMP$563$1 = vr$12;
	_ZN4MATH4PVECC1ERKdS2_( &fb$result$1, (double*)&TMP$563$1, (double*)&TMP$564$1 );
	goto label$1333;
	label$1333:;
	return fb$result$1;
}

struct $N4MATH4PVECE _ZN4MATHplERKNS_4PVECES2_( struct $N4MATH4PVECE* V1$1, struct $N4MATH4PVECE* V2$1 )
{
	double TMP$566$1;
	double TMP$567$1;
	struct $N4MATH4PVECE fb$result$1;
	label$1334:;
	double I$1;
	double vr$0 = _ZNK4MATH4PVEC8X__get__Ev( V1$1 );
	double vr$1 = _ZNK4MATH4PVEC8X__get__Ev( V2$1 );
	I$1 = vr$0 + vr$1;
	double J$1;
	double vr$3 = _ZNK4MATH4PVEC8Y__get__Ev( V1$1 );
	double vr$4 = _ZNK4MATH4PVEC8Y__get__Ev( V2$1 );
	J$1 = vr$3 + vr$4;
	double vr$8 = _ZN4MATH5HYPOTERKdS1_( (double*)&I$1, (double*)&J$1 );
	TMP$567$1 = vr$8;
	double vr$12 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, (double*)&J$1 );
	TMP$566$1 = vr$12;
	_ZN4MATH4PVECC1ERKdS2_( &fb$result$1, (double*)&TMP$566$1, (double*)&TMP$567$1 );
	goto label$1335;
	label$1335:;
	return fb$result$1;
}

struct $N4MATH4PVECE _ZN4MATHmiERKNS_4VEC2ERKNS_4PVECE( struct $N4MATH4VEC2E* V1$1, struct $N4MATH4PVECE* V2$1 )
{
	double TMP$569$1;
	double TMP$570$1;
	struct $N4MATH4PVECE fb$result$1;
	label$1336:;
	double I$1;
	double vr$1 = _ZNK4MATH4PVEC8X__get__Ev( V2$1 );
	I$1 = *(double*)V1$1 - vr$1;
	double J$1;
	double vr$4 = _ZNK4MATH4PVEC8Y__get__Ev( V2$1 );
	J$1 = *(double*)((uint8*)V1$1 + 8ll) - vr$4;
	double vr$8 = _ZN4MATH5HYPOTERKdS1_( (double*)&I$1, (double*)&J$1 );
	TMP$570$1 = vr$8;
	double vr$12 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, (double*)&J$1 );
	TMP$569$1 = vr$12;
	_ZN4MATH4PVECC1ERKdS2_( &fb$result$1, (double*)&TMP$569$1, (double*)&TMP$570$1 );
	goto label$1337;
	label$1337:;
	return fb$result$1;
}

struct $N4MATH4PVECE _ZN4MATHmiERKNS_4PVECERKNS_4VEC2E( struct $N4MATH4PVECE* V1$1, struct $N4MATH4VEC2E* V2$1 )
{
	double TMP$572$1;
	double TMP$573$1;
	struct $N4MATH4PVECE fb$result$1;
	label$1338:;
	double I$1;
	double vr$0 = _ZNK4MATH4PVEC8X__get__Ev( V1$1 );
	I$1 = vr$0 - *(double*)V2$1;
	double J$1;
	double vr$3 = _ZNK4MATH4PVEC8Y__get__Ev( V1$1 );
	J$1 = vr$3 - *(double*)((uint8*)V2$1 + 8ll);
	double vr$8 = _ZN4MATH5HYPOTERKdS1_( (double*)&I$1, (double*)&J$1 );
	TMP$573$1 = vr$8;
	double vr$12 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, (double*)&J$1 );
	TMP$572$1 = vr$12;
	_ZN4MATH4PVECC1ERKdS2_( &fb$result$1, (double*)&TMP$572$1, (double*)&TMP$573$1 );
	goto label$1339;
	label$1339:;
	return fb$result$1;
}

struct $N4MATH4PVECE _ZN4MATHmiERKNS_4PVECES2_( struct $N4MATH4PVECE* V1$1, struct $N4MATH4PVECE* V2$1 )
{
	double TMP$575$1;
	double TMP$576$1;
	struct $N4MATH4PVECE fb$result$1;
	label$1340:;
	double I$1;
	double vr$0 = _ZNK4MATH4PVEC8X__get__Ev( V1$1 );
	double vr$1 = _ZNK4MATH4PVEC8X__get__Ev( V2$1 );
	I$1 = vr$0 - vr$1;
	double J$1;
	double vr$3 = _ZNK4MATH4PVEC8Y__get__Ev( V1$1 );
	double vr$4 = _ZNK4MATH4PVEC8Y__get__Ev( V2$1 );
	J$1 = vr$3 - vr$4;
	double vr$8 = _ZN4MATH5HYPOTERKdS1_( (double*)&I$1, (double*)&J$1 );
	TMP$576$1 = vr$8;
	double vr$12 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, (double*)&J$1 );
	TMP$575$1 = vr$12;
	_ZN4MATH4PVECC1ERKdS2_( &fb$result$1, (double*)&TMP$575$1, (double*)&TMP$576$1 );
	goto label$1341;
	label$1341:;
	return fb$result$1;
}

struct $N4MATH4PVECE _ZN4MATHmlERKNS_8RATIONALERKNS_4PVECE( struct $N4MATH8RATIONALE* R$1, struct $N4MATH4PVECE* V$1 )
{
	struct $N4MATH4PVECE fb$result$1;
	label$1342:;
	double N$1;
	double vr$0 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	N$1 = vr$0;
	if( N$1 <= 0x0p+0 ) goto label$1345;
	{
		double TMP$578$2;
		double TMP$579$2;
		double vr$1 = _ZNK4MATH4PVEC10RHO__get__Ev( V$1 );
		TMP$579$2 = N$1 * vr$1;
		double vr$4 = _ZNK4MATH4PVEC12THETA__get__Ev( V$1 );
		TMP$578$2 = vr$4;
		_ZN4MATH4PVECC1ERKdS2_( &fb$result$1, (double*)&TMP$578$2, (double*)&TMP$579$2 );
		goto label$1343;
	}
	goto label$1344;
	label$1345:;
	if( N$1 >= 0x0p+0 ) goto label$1346;
	{
		double TMP$581$2;
		double TMP$582$2;
		double vr$8 = _ZNK4MATH4PVEC10RHO__get__Ev( V$1 );
		TMP$582$2 = -N$1 * vr$8;
		double vr$11 = _ZNK4MATH4PVEC12THETA__get__Ev( V$1 );
		TMP$581$2 = vr$11 + 0x1.921FB54442D18p+1;
		_ZN4MATH4PVECC1ERKdS2_( &fb$result$1, (double*)&TMP$581$2, (double*)&TMP$582$2 );
		goto label$1343;
	}
	label$1346:;
	label$1344:;
	_ZN4MATH4PVECC1Ev( &fb$result$1 );
	goto label$1343;
	label$1343:;
	return fb$result$1;
}

struct $N4MATH4PVECE _ZN4MATHmlERKdRKNS_4PVECE( double* N$1, struct $N4MATH4PVECE* V$1 )
{
	struct $N4MATH4PVECE fb$result$1;
	label$1347:;
	if( *N$1 <= 0x0p+0 ) goto label$1350;
	{
		double TMP$585$2;
		double TMP$586$2;
		double vr$2 = _ZNK4MATH4PVEC10RHO__get__Ev( V$1 );
		TMP$586$2 = *N$1 * vr$2;
		double vr$5 = _ZNK4MATH4PVEC12THETA__get__Ev( V$1 );
		TMP$585$2 = vr$5;
		_ZN4MATH4PVECC1ERKdS2_( &fb$result$1, (double*)&TMP$585$2, &TMP$586$2 );
		goto label$1348;
	}
	goto label$1349;
	label$1350:;
	if( *N$1 >= 0x0p+0 ) goto label$1351;
	{
		double TMP$588$2;
		double TMP$589$2;
		double vr$11 = _ZNK4MATH4PVEC10RHO__get__Ev( V$1 );
		TMP$589$2 = __builtin_fabs( *N$1 ) * vr$11;
		double vr$14 = _ZNK4MATH4PVEC12THETA__get__Ev( V$1 );
		TMP$588$2 = vr$14 + 0x1.921FB54442D18p+1;
		_ZN4MATH4PVECC1ERKdS2_( &fb$result$1, (double*)&TMP$588$2, &TMP$589$2 );
		goto label$1348;
	}
	label$1351:;
	label$1349:;
	_ZN4MATH4PVECC1Ev( &fb$result$1 );
	goto label$1348;
	label$1348:;
	return fb$result$1;
}

struct $N4MATH4PVECE _ZN4MATHmlERKNS_4PVECERKNS_8RATIONALE( struct $N4MATH4PVECE* V$1, struct $N4MATH8RATIONALE* R$1 )
{
	struct $N4MATH4PVECE fb$result$1;
	label$1352:;
	double N$1;
	double vr$0 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	N$1 = vr$0;
	if( N$1 <= 0x0p+0 ) goto label$1355;
	{
		double TMP$592$2;
		double TMP$593$2;
		double vr$1 = _ZNK4MATH4PVEC10RHO__get__Ev( V$1 );
		TMP$593$2 = vr$1 * N$1;
		double vr$4 = _ZNK4MATH4PVEC12THETA__get__Ev( V$1 );
		TMP$592$2 = vr$4;
		_ZN4MATH4PVECC1ERKdS2_( &fb$result$1, (double*)&TMP$592$2, (double*)&TMP$593$2 );
		goto label$1353;
	}
	goto label$1354;
	label$1355:;
	if( N$1 >= 0x0p+0 ) goto label$1356;
	{
		double TMP$595$2;
		double TMP$596$2;
		double vr$7 = _ZNK4MATH4PVEC10RHO__get__Ev( V$1 );
		TMP$596$2 = vr$7 * -N$1;
		double vr$11 = _ZNK4MATH4PVEC12THETA__get__Ev( V$1 );
		TMP$595$2 = vr$11 + 0x1.921FB54442D18p+1;
		_ZN4MATH4PVECC1ERKdS2_( &fb$result$1, (double*)&TMP$595$2, (double*)&TMP$596$2 );
		goto label$1353;
	}
	label$1356:;
	label$1354:;
	_ZN4MATH4PVECC1Ev( &fb$result$1 );
	goto label$1353;
	label$1353:;
	return fb$result$1;
}

struct $N4MATH4PVECE _ZN4MATHmlERKNS_4PVECERKd( struct $N4MATH4PVECE* V$1, double* N$1 )
{
	struct $N4MATH4PVECE fb$result$1;
	label$1357:;
	if( *N$1 <= 0x0p+0 ) goto label$1360;
	{
		double TMP$599$2;
		double TMP$600$2;
		double vr$1 = _ZNK4MATH4PVEC10RHO__get__Ev( V$1 );
		TMP$600$2 = vr$1 * *N$1;
		double vr$5 = _ZNK4MATH4PVEC12THETA__get__Ev( V$1 );
		TMP$599$2 = vr$5;
		_ZN4MATH4PVECC1ERKdS2_( &fb$result$1, (double*)&TMP$599$2, (double*)&TMP$600$2 );
		goto label$1358;
	}
	goto label$1359;
	label$1360:;
	if( *N$1 >= 0x0p+0 ) goto label$1361;
	{
		double TMP$602$2;
		double TMP$603$2;
		double vr$9 = _ZNK4MATH4PVEC10RHO__get__Ev( V$1 );
		TMP$603$2 = vr$9 * -(*N$1);
		double vr$14 = _ZNK4MATH4PVEC12THETA__get__Ev( V$1 );
		TMP$602$2 = vr$14 + 0x1.921FB54442D18p+1;
		_ZN4MATH4PVECC1ERKdS2_( &fb$result$1, (double*)&TMP$602$2, (double*)&TMP$603$2 );
		goto label$1358;
	}
	label$1361:;
	label$1359:;
	_ZN4MATH4PVECC1Ev( &fb$result$1 );
	goto label$1358;
	label$1358:;
	return fb$result$1;
}

struct $N4MATH4PVECE _ZN4MATHmlERKNS_4VEC2ERKNS_4PVECE( struct $N4MATH4VEC2E* V1$1, struct $N4MATH4PVECE* V2$1 )
{
	double TMP$606$1;
	double TMP$607$1;
	struct $N4MATH4PVECE fb$result$1;
	label$1362:;
	double I$1;
	double vr$1 = _ZNK4MATH4PVEC8X__get__Ev( V2$1 );
	I$1 = *(double*)V1$1 * vr$1;
	double J$1;
	double vr$4 = _ZNK4MATH4PVEC8Y__get__Ev( V2$1 );
	J$1 = *(double*)((uint8*)V1$1 + 8ll) * vr$4;
	double vr$8 = _ZN4MATH5HYPOTERKdS1_( (double*)&I$1, (double*)&J$1 );
	TMP$607$1 = vr$8;
	double vr$12 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, (double*)&J$1 );
	TMP$606$1 = vr$12;
	_ZN4MATH4PVECC1ERKdS2_( &fb$result$1, (double*)&TMP$606$1, (double*)&TMP$607$1 );
	goto label$1363;
	label$1363:;
	return fb$result$1;
}

struct $N4MATH4PVECE _ZN4MATHmlERKNS_4PVECERKNS_4VEC2E( struct $N4MATH4PVECE* V1$1, struct $N4MATH4VEC2E* V2$1 )
{
	double TMP$609$1;
	double TMP$610$1;
	struct $N4MATH4PVECE fb$result$1;
	label$1364:;
	double I$1;
	double vr$0 = _ZNK4MATH4PVEC8X__get__Ev( V1$1 );
	I$1 = vr$0 * *(double*)V2$1;
	double J$1;
	double vr$3 = _ZNK4MATH4PVEC8Y__get__Ev( V1$1 );
	J$1 = vr$3 * *(double*)((uint8*)V2$1 + 8ll);
	double vr$8 = _ZN4MATH5HYPOTERKdS1_( (double*)&I$1, (double*)&J$1 );
	TMP$610$1 = vr$8;
	double vr$12 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, (double*)&J$1 );
	TMP$609$1 = vr$12;
	_ZN4MATH4PVECC1ERKdS2_( &fb$result$1, (double*)&TMP$609$1, (double*)&TMP$610$1 );
	goto label$1365;
	label$1365:;
	return fb$result$1;
}

struct $N4MATH4PVECE _ZN4MATHmlERKNS_4PVECES2_( struct $N4MATH4PVECE* V1$1, struct $N4MATH4PVECE* V2$1 )
{
	double TMP$612$1;
	double TMP$613$1;
	struct $N4MATH4PVECE fb$result$1;
	label$1366:;
	double I$1;
	double vr$0 = _ZNK4MATH4PVEC8X__get__Ev( V1$1 );
	double vr$1 = _ZNK4MATH4PVEC8X__get__Ev( V2$1 );
	I$1 = vr$0 * vr$1;
	double J$1;
	double vr$3 = _ZNK4MATH4PVEC8Y__get__Ev( V1$1 );
	double vr$4 = _ZNK4MATH4PVEC8Y__get__Ev( V2$1 );
	J$1 = vr$3 * vr$4;
	double vr$8 = _ZN4MATH5HYPOTERKdS1_( (double*)&I$1, (double*)&J$1 );
	TMP$613$1 = vr$8;
	double vr$12 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, (double*)&J$1 );
	TMP$612$1 = vr$12;
	_ZN4MATH4PVECC1ERKdS2_( &fb$result$1, (double*)&TMP$612$1, (double*)&TMP$613$1 );
	goto label$1367;
	label$1367:;
	return fb$result$1;
}

struct $N4MATH4PVECE _ZN4MATHdvERKNS_4PVECERKNS_8RATIONALE( struct $N4MATH4PVECE* V$1, struct $N4MATH8RATIONALE* R$1 )
{
	struct $N4MATH4PVECE fb$result$1;
	label$1368:;
	double N$1;
	double vr$0 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	N$1 = vr$0;
	if( N$1 <= 0x0p+0 ) goto label$1371;
	{
		double TMP$615$2;
		double TMP$616$2;
		double vr$1 = _ZNK4MATH4PVEC10RHO__get__Ev( V$1 );
		TMP$616$2 = vr$1 / N$1;
		double vr$4 = _ZNK4MATH4PVEC12THETA__get__Ev( V$1 );
		TMP$615$2 = vr$4;
		_ZN4MATH4PVECC1ERKdS2_( &fb$result$1, (double*)&TMP$615$2, (double*)&TMP$616$2 );
		goto label$1369;
	}
	goto label$1370;
	label$1371:;
	if( N$1 >= 0x0p+0 ) goto label$1372;
	{
		double TMP$618$2;
		double TMP$619$2;
		double vr$7 = _ZNK4MATH4PVEC10RHO__get__Ev( V$1 );
		TMP$619$2 = vr$7 / -N$1;
		double vr$11 = _ZNK4MATH4PVEC12THETA__get__Ev( V$1 );
		TMP$618$2 = vr$11 + 0x1.921FB54442D18p+1;
		_ZN4MATH4PVECC1ERKdS2_( &fb$result$1, (double*)&TMP$618$2, (double*)&TMP$619$2 );
		goto label$1369;
	}
	label$1372:;
	label$1370:;
	_ZN4MATH4PVECC1Ev( &fb$result$1 );
	goto label$1369;
	label$1369:;
	return fb$result$1;
}

struct $N4MATH4PVECE _ZN4MATHdvERKNS_4PVECERKd( struct $N4MATH4PVECE* V$1, double* N$1 )
{
	struct $N4MATH4PVECE fb$result$1;
	label$1373:;
	if( *N$1 <= 0x0p+0 ) goto label$1376;
	{
		double TMP$622$2;
		double TMP$623$2;
		double vr$1 = _ZNK4MATH4PVEC10RHO__get__Ev( V$1 );
		TMP$623$2 = vr$1 / *N$1;
		double vr$5 = _ZNK4MATH4PVEC12THETA__get__Ev( V$1 );
		TMP$622$2 = vr$5;
		_ZN4MATH4PVECC1ERKdS2_( &fb$result$1, (double*)&TMP$622$2, (double*)&TMP$623$2 );
		goto label$1374;
	}
	goto label$1375;
	label$1376:;
	if( *N$1 >= 0x0p+0 ) goto label$1377;
	{
		double TMP$625$2;
		double TMP$626$2;
		double vr$9 = _ZNK4MATH4PVEC10RHO__get__Ev( V$1 );
		TMP$626$2 = vr$9 / -(*N$1);
		double vr$14 = _ZNK4MATH4PVEC12THETA__get__Ev( V$1 );
		TMP$625$2 = vr$14 + 0x1.921FB54442D18p+1;
		_ZN4MATH4PVECC1ERKdS2_( &fb$result$1, (double*)&TMP$625$2, (double*)&TMP$626$2 );
		goto label$1374;
	}
	label$1377:;
	label$1375:;
	_ZN4MATH4PVECC1Ev( &fb$result$1 );
	goto label$1374;
	label$1374:;
	return fb$result$1;
}

struct $N4MATH4PVECE _ZN4MATHdvERKNS_4VEC2ERKNS_4PVECE( struct $N4MATH4VEC2E* V1$1, struct $N4MATH4PVECE* V2$1 )
{
	struct $N4MATH4PVECE fb$result$1;
	label$1378:;
	double vr$0 = _ZNK4MATH4PVEC10RHO__get__Ev( V2$1 );
	if( vr$0 == 0x0p+0 ) goto label$1381;
	{
		double TMP$629$2;
		double TMP$630$2;
		double I$2;
		double vr$2 = _ZNK4MATH4PVEC8X__get__Ev( V2$1 );
		I$2 = *(double*)V1$1 / vr$2;
		double J$2;
		double vr$5 = _ZNK4MATH4PVEC8Y__get__Ev( V2$1 );
		J$2 = *(double*)((uint8*)V1$1 + 8ll) / vr$5;
		double vr$9 = _ZN4MATH5HYPOTERKdS1_( (double*)&I$2, (double*)&J$2 );
		TMP$630$2 = vr$9;
		double vr$13 = _ZN4MATH5THETAERKdS1_( (double*)&I$2, (double*)&J$2 );
		TMP$629$2 = vr$13;
		_ZN4MATH4PVECC1ERKdS2_( &fb$result$1, (double*)&TMP$629$2, (double*)&TMP$630$2 );
		goto label$1379;
	}
	label$1381:;
	label$1380:;
	_ZN4MATH4PVECC1Ev( &fb$result$1 );
	goto label$1379;
	label$1379:;
	return fb$result$1;
}

boolean _ZN4MATHeqERKNS_4PVECES2_( struct $N4MATH4PVECE* V1$1, struct $N4MATH4PVECE* V2$1 )
{
	boolean TMP$632$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1382:;
	double vr$1 = _ZNK4MATH4PVEC12THETA__get__Ev( V1$1 );
	double vr$2 = _ZNK4MATH4PVEC12THETA__get__Ev( V2$1 );
	double vr$4 = _ZNK4MATH4PVEC10RHO__get__Ev( V1$1 );
	double vr$5 = _ZNK4MATH4PVEC10RHO__get__Ev( V2$1 );
	if( ((int64)-(vr$1 == vr$2) & (int64)-(vr$4 == vr$5)) == 0ll ) goto label$1384;
	TMP$632$1 = (boolean)1ll;
	goto label$1385;
	label$1384:;
	TMP$632$1 = (boolean)0ll;
	label$1385:;
	fb$result$1 = TMP$632$1;
	goto label$1383;
	label$1383:;
	return fb$result$1;
}

boolean _ZN4MATHneERKNS_4PVECES2_( struct $N4MATH4PVECE* V1$1, struct $N4MATH4PVECE* V2$1 )
{
	boolean TMP$633$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1386:;
	double vr$1 = _ZNK4MATH4PVEC12THETA__get__Ev( V1$1 );
	double vr$2 = _ZNK4MATH4PVEC12THETA__get__Ev( V2$1 );
	double vr$4 = _ZNK4MATH4PVEC10RHO__get__Ev( V1$1 );
	double vr$5 = _ZNK4MATH4PVEC10RHO__get__Ev( V2$1 );
	if( ((int64)-(vr$1 != vr$2) | (int64)-(vr$4 != vr$5)) == 0ll ) goto label$1388;
	TMP$633$1 = (boolean)1ll;
	goto label$1389;
	label$1388:;
	TMP$633$1 = (boolean)0ll;
	label$1389:;
	fb$result$1 = TMP$633$1;
	goto label$1387;
	label$1387:;
	return fb$result$1;
}

boolean _ZN4MATH3CMPERKNS_4VEC2ERKNS_4PVECERKd( struct $N4MATH4VEC2E* V1$1, struct $N4MATH4PVECE* V2$1, double* S$1 )
{
	boolean TMP$634$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1390:;
	double T$1;
	T$1 = __builtin_fabs( *S$1 );
	double vr$4 = _ZNK4MATH4PVEC8X__get__Ev( V2$1 );
	double vr$9 = _ZNK4MATH4PVEC8X__get__Ev( V2$1 );
	if( ((int64)-(__builtin_fabs( (*(double*)V1$1 - vr$4) ) <= T$1) & (int64)-(__builtin_fabs( (*(double*)V1$1 - vr$9) ) <= T$1)) == 0ll ) goto label$1392;
	TMP$634$1 = (boolean)1ll;
	goto label$1393;
	label$1392:;
	TMP$634$1 = (boolean)0ll;
	label$1393:;
	fb$result$1 = TMP$634$1;
	goto label$1391;
	label$1391:;
	return fb$result$1;
}

boolean _ZN4MATH3CMPERKNS_4PVECERKNS_4VEC2ERKd( struct $N4MATH4PVECE* V1$1, struct $N4MATH4VEC2E* V2$1, double* S$1 )
{
	boolean TMP$635$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1394:;
	double T$1;
	T$1 = __builtin_fabs( *S$1 );
	double vr$3 = _ZNK4MATH4PVEC8X__get__Ev( V1$1 );
	double vr$8 = _ZNK4MATH4PVEC8X__get__Ev( V1$1 );
	if( ((int64)-(__builtin_fabs( (vr$3 - *(double*)V2$1) ) <= T$1) & (int64)-(__builtin_fabs( (vr$8 - *(double*)V2$1) ) <= T$1)) == 0ll ) goto label$1396;
	TMP$635$1 = (boolean)1ll;
	goto label$1397;
	label$1396:;
	TMP$635$1 = (boolean)0ll;
	label$1397:;
	fb$result$1 = TMP$635$1;
	goto label$1395;
	label$1395:;
	return fb$result$1;
}

boolean _ZN4MATH3CMPERKNS_4PVECES2_RKd( struct $N4MATH4PVECE* V1$1, struct $N4MATH4PVECE* V2$1, double* S$1 )
{
	boolean TMP$636$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1398:;
	double T$1;
	T$1 = __builtin_fabs( *S$1 );
	double vr$3 = _ZNK4MATH4PVEC12THETA__get__Ev( V1$1 );
	double vr$4 = _ZNK4MATH4PVEC12THETA__get__Ev( V2$1 );
	double vr$8 = _ZNK4MATH4PVEC10RHO__get__Ev( V1$1 );
	double vr$9 = _ZNK4MATH4PVEC10RHO__get__Ev( V2$1 );
	if( ((int64)-(__builtin_fabs( (vr$3 - vr$4) ) <= T$1) & (int64)-(__builtin_fabs( (vr$8 - vr$9) ) <= T$1)) == 0ll ) goto label$1400;
	TMP$636$1 = (boolean)1ll;
	goto label$1401;
	label$1400:;
	TMP$636$1 = (boolean)0ll;
	label$1401:;
	fb$result$1 = TMP$636$1;
	goto label$1399;
	label$1399:;
	return fb$result$1;
}

double _ZN4MATH5CROSSERKNS_4VEC2ERKNS_4PVECE( struct $N4MATH4VEC2E* V1$1, struct $N4MATH4PVECE* V2$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1402:;
	double vr$2 = _ZNK4MATH4PVEC8Y__get__Ev( V2$1 );
	double vr$5 = _ZNK4MATH4PVEC8X__get__Ev( V2$1 );
	fb$result$1 = (*(double*)V1$1 * vr$2) - (*(double*)((uint8*)V1$1 + 8ll) * vr$5);
	goto label$1403;
	label$1403:;
	return fb$result$1;
}

double _ZN4MATH5CROSSERKNS_4PVECERKNS_4VEC2E( struct $N4MATH4PVECE* V1$1, struct $N4MATH4VEC2E* V2$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1404:;
	double vr$1 = _ZNK4MATH4PVEC8X__get__Ev( V1$1 );
	double vr$4 = _ZNK4MATH4PVEC8Y__get__Ev( V1$1 );
	fb$result$1 = (vr$1 * *(double*)((uint8*)V2$1 + 8ll)) - (vr$4 * *(double*)V2$1);
	goto label$1405;
	label$1405:;
	return fb$result$1;
}

double _ZN4MATH5CROSSERKNS_4PVECES2_( struct $N4MATH4PVECE* V1$1, struct $N4MATH4PVECE* V2$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1406:;
	double vr$1 = _ZNK4MATH4PVEC8X__get__Ev( V1$1 );
	double vr$2 = _ZNK4MATH4PVEC8Y__get__Ev( V2$1 );
	double vr$4 = _ZNK4MATH4PVEC8Y__get__Ev( V1$1 );
	double vr$5 = _ZNK4MATH4PVEC8X__get__Ev( V2$1 );
	fb$result$1 = (vr$1 * vr$2) - (vr$4 * vr$5);
	goto label$1407;
	label$1407:;
	return fb$result$1;
}

double _ZN4MATH3DOTERKNS_4VEC2ERKNS_4PVECE( struct $N4MATH4VEC2E* V1$1, struct $N4MATH4PVECE* V2$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1408:;
	double vr$2 = _ZNK4MATH4PVEC8X__get__Ev( V2$1 );
	double vr$5 = _ZNK4MATH4PVEC8Y__get__Ev( V2$1 );
	fb$result$1 = (*(double*)V1$1 * vr$2) + (*(double*)((uint8*)V1$1 + 8ll) * vr$5);
	goto label$1409;
	label$1409:;
	return fb$result$1;
}

double _ZN4MATH3DOTERKNS_4PVECERKNS_4VEC2E( struct $N4MATH4PVECE* V1$1, struct $N4MATH4VEC2E* V2$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1410:;
	double vr$1 = _ZNK4MATH4PVEC8X__get__Ev( V1$1 );
	double vr$4 = _ZNK4MATH4PVEC8Y__get__Ev( V1$1 );
	fb$result$1 = (vr$1 * *(double*)V2$1) + (vr$4 * *(double*)((uint8*)V2$1 + 8ll));
	goto label$1411;
	label$1411:;
	return fb$result$1;
}

double _ZN4MATH3DOTERKNS_4PVECES2_( struct $N4MATH4PVECE* V1$1, struct $N4MATH4PVECE* V2$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1412:;
	double vr$1 = _ZNK4MATH4PVEC8X__get__Ev( V1$1 );
	double vr$2 = _ZNK4MATH4PVEC8X__get__Ev( V2$1 );
	double vr$4 = _ZNK4MATH4PVEC8Y__get__Ev( V1$1 );
	double vr$5 = _ZNK4MATH4PVEC8Y__get__Ev( V2$1 );
	fb$result$1 = (vr$1 * vr$2) + (vr$4 * vr$5);
	goto label$1413;
	label$1413:;
	return fb$result$1;
}

struct $N4MATH4PVECE _ZN4MATH4LERPERKNS_4VEC2ERKNS_4PVECERKd( struct $N4MATH4VEC2E* V1$1, struct $N4MATH4PVECE* V2$1, double* S$1 )
{
	double TMP$638$1;
	double TMP$639$1;
	struct $N4MATH4PVECE fb$result$1;
	label$1414:;
	double T$1;
	double vr$0 = _ZN4MATH5CLAMPERKd( S$1 );
	T$1 = vr$0;
	double U$1;
	U$1 = 0x1.p+0 - T$1;
	double vr$2 = _ZNK4MATH4VEC211NORM__get__Ev( V1$1 );
	double vr$4 = _ZNK4MATH4PVEC10RHO__get__Ev( V2$1 );
	TMP$639$1 = (vr$2 * U$1) + (vr$4 * T$1);
	double vr$8 = _ZNK4MATH4VEC212THETA__get__Ev( V1$1 );
	double vr$10 = _ZNK4MATH4PVEC12THETA__get__Ev( V2$1 );
	TMP$638$1 = (vr$8 * U$1) + (vr$10 * T$1);
	_ZN4MATH4PVECC1ERKdS2_( &fb$result$1, (double*)&TMP$638$1, (double*)&TMP$639$1 );
	goto label$1415;
	label$1415:;
	return fb$result$1;
}

struct $N4MATH4PVECE _ZN4MATH4LERPERKNS_4PVECERKNS_4VEC2ERKd( struct $N4MATH4PVECE* V1$1, struct $N4MATH4VEC2E* V2$1, double* S$1 )
{
	double TMP$641$1;
	double TMP$642$1;
	struct $N4MATH4PVECE fb$result$1;
	label$1416:;
	double T$1;
	double vr$0 = _ZN4MATH5CLAMPERKd( S$1 );
	T$1 = vr$0;
	double U$1;
	U$1 = 0x1.p+0 - T$1;
	double vr$2 = _ZNK4MATH4PVEC10RHO__get__Ev( V1$1 );
	double vr$4 = _ZNK4MATH4VEC211NORM__get__Ev( V2$1 );
	TMP$642$1 = (vr$2 * U$1) + (vr$4 * T$1);
	double vr$8 = _ZNK4MATH4PVEC12THETA__get__Ev( V1$1 );
	double vr$10 = _ZNK4MATH4VEC212THETA__get__Ev( V2$1 );
	TMP$641$1 = (vr$8 * U$1) + (vr$10 * T$1);
	_ZN4MATH4PVECC1ERKdS2_( &fb$result$1, (double*)&TMP$641$1, (double*)&TMP$642$1 );
	goto label$1417;
	label$1417:;
	return fb$result$1;
}

struct $N4MATH4PVECE _ZN4MATH4LERPERKNS_4PVECES2_RKd( struct $N4MATH4PVECE* V1$1, struct $N4MATH4PVECE* V2$1, double* S$1 )
{
	double TMP$644$1;
	double TMP$645$1;
	struct $N4MATH4PVECE fb$result$1;
	label$1418:;
	double T$1;
	double vr$1 = _ZN4MATH5CLAMPERKd( (double*)&T$1 );
	T$1 = vr$1;
	double U$1;
	U$1 = 0x1.p+0 - T$1;
	double vr$3 = _ZNK4MATH4PVEC10RHO__get__Ev( V1$1 );
	double vr$5 = _ZNK4MATH4PVEC10RHO__get__Ev( V2$1 );
	TMP$645$1 = (vr$3 * U$1) + (vr$5 * T$1);
	double vr$9 = _ZNK4MATH4PVEC12THETA__get__Ev( V1$1 );
	double vr$11 = _ZNK4MATH4PVEC12THETA__get__Ev( V2$1 );
	TMP$644$1 = (vr$9 * U$1) + (vr$11 * T$1);
	_ZN4MATH4PVECC1ERKdS2_( &fb$result$1, (double*)&TMP$644$1, (double*)&TMP$645$1 );
	goto label$1419;
	label$1419:;
	return fb$result$1;
}

void _ZN4MATH4VEC3C1Ev( struct $N4MATH4VEC3E* THIS$1 )
{
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	label$1420:;
	label$1421:;
}

void _ZN4MATH4VEC3C1ERKNS_8RATIONALES3_S3_( struct $N4MATH4VEC3E* THIS$1, struct $N4MATH8RATIONALE* N1$1, struct $N4MATH8RATIONALE* N2$1, struct $N4MATH8RATIONALE* N3$1 )
{
	label$1422:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	double vr$6 = _ZNK4MATH8RATIONALcvdEv( N1$1 );
	*(double*)THIS$1 = vr$6;
	double vr$8 = _ZNK4MATH8RATIONALcvdEv( N2$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$8;
	double vr$10 = _ZNK4MATH8RATIONALcvdEv( N3$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$10;
	label$1423:;
}

void _ZN4MATH4VEC3C1ERKNS_8RATIONALES3_RKd( struct $N4MATH4VEC3E* THIS$1, struct $N4MATH8RATIONALE* N1$1, struct $N4MATH8RATIONALE* N2$1, double* N3$1 )
{
	label$1424:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	double vr$6 = _ZNK4MATH8RATIONALcvdEv( N1$1 );
	*(double*)THIS$1 = vr$6;
	double vr$8 = _ZNK4MATH8RATIONALcvdEv( N2$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$8;
	*(double*)((uint8*)THIS$1 + 16ll) = *N3$1;
	label$1425:;
}

void _ZN4MATH4VEC3C1ERKNS_8RATIONALERKdS3_( struct $N4MATH4VEC3E* THIS$1, struct $N4MATH8RATIONALE* N1$1, double* N2$1, struct $N4MATH8RATIONALE* N3$1 )
{
	label$1426:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	double vr$6 = _ZNK4MATH8RATIONALcvdEv( N1$1 );
	*(double*)THIS$1 = vr$6;
	*(double*)((uint8*)THIS$1 + 8ll) = *N2$1;
	double vr$10 = _ZNK4MATH8RATIONALcvdEv( N3$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$10;
	label$1427:;
}

void _ZN4MATH4VEC3C1ERKNS_8RATIONALERKdS5_( struct $N4MATH4VEC3E* THIS$1, struct $N4MATH8RATIONALE* N1$1, double* N2$1, double* N3$1 )
{
	label$1428:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	double vr$6 = _ZNK4MATH8RATIONALcvdEv( N1$1 );
	*(double*)THIS$1 = vr$6;
	*(double*)((uint8*)THIS$1 + 8ll) = *N2$1;
	*(double*)((uint8*)THIS$1 + 16ll) = *N3$1;
	label$1429:;
}

void _ZN4MATH4VEC3C1ERKdRKNS_8RATIONALES5_( struct $N4MATH4VEC3E* THIS$1, double* N1$1, struct $N4MATH8RATIONALE* N2$1, struct $N4MATH8RATIONALE* N3$1 )
{
	label$1430:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	*(double*)THIS$1 = *N1$1;
	double vr$8 = _ZNK4MATH8RATIONALcvdEv( N2$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$8;
	double vr$10 = _ZNK4MATH8RATIONALcvdEv( N3$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$10;
	label$1431:;
}

void _ZN4MATH4VEC3C1ERKdRKNS_8RATIONALES2_( struct $N4MATH4VEC3E* THIS$1, double* N1$1, struct $N4MATH8RATIONALE* N2$1, double* N3$1 )
{
	label$1432:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	*(double*)THIS$1 = *N1$1;
	double vr$8 = _ZNK4MATH8RATIONALcvdEv( N2$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$8;
	*(double*)((uint8*)THIS$1 + 16ll) = *N3$1;
	label$1433:;
}

void _ZN4MATH4VEC3C1ERKdS2_RKNS_8RATIONALE( struct $N4MATH4VEC3E* THIS$1, double* N1$1, double* N2$1, struct $N4MATH8RATIONALE* N3$1 )
{
	label$1434:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	*(double*)THIS$1 = *N1$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *N2$1;
	double vr$10 = _ZNK4MATH8RATIONALcvdEv( N3$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$10;
	label$1435:;
}

void _ZN4MATH4VEC3C1ERKdS2_S2_( struct $N4MATH4VEC3E* THIS$1, double* N1$1, double* N2$1, double* N3$1 )
{
	label$1436:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	*(double*)THIS$1 = *N1$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *N2$1;
	*(double*)((uint8*)THIS$1 + 16ll) = *N3$1;
	label$1437:;
}

void _ZN4MATH4VEC3C1ERKNS_4VEC2ERKNS_8RATIONALE( struct $N4MATH4VEC3E* THIS$1, struct $N4MATH4VEC2E* V$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$1438:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	double vr$10 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$10;
	label$1439:;
}

void _ZN4MATH4VEC3C1ERKNS_4VEC2ERKd( struct $N4MATH4VEC3E* THIS$1, struct $N4MATH4VEC2E* V$1, double* N$1 )
{
	label$1440:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *N$1;
	label$1441:;
}

void _ZN4MATH4VEC3C1ERKNS_4PVECERKNS_8RATIONALE( struct $N4MATH4VEC3E* THIS$1, struct $N4MATH4PVECE* V$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$1442:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	double vr$6 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
	*(double*)THIS$1 = vr$6;
	double vr$8 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$8;
	double vr$10 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$10;
	label$1443:;
}

void _ZN4MATH4VEC3C1ERKNS_4PVECERKd( struct $N4MATH4VEC3E* THIS$1, struct $N4MATH4PVECE* V$1, double* N$1 )
{
	label$1444:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	double vr$6 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
	*(double*)THIS$1 = vr$6;
	double vr$8 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$8;
	*(double*)((uint8*)THIS$1 + 16ll) = *N$1;
	label$1445:;
}

void _ZN4MATH4VEC3C1ERKS0_( struct $N4MATH4VEC3E* THIS$1, struct $N4MATH4VEC3E* V$1 )
{
	label$1446:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)V$1 + 16ll);
	label$1447:;
}

void _ZN4MATH4VEC3pLERKS0_( struct $N4MATH4VEC3E* THIS$1, struct $N4MATH4VEC3E* V$1 )
{
	label$1448:;
	*(double*)THIS$1 = *(double*)THIS$1 + *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) + *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) + *(double*)((uint8*)V$1 + 16ll);
	label$1449:;
}

void _ZN4MATH4VEC3mIERKS0_( struct $N4MATH4VEC3E* THIS$1, struct $N4MATH4VEC3E* V$1 )
{
	label$1450:;
	*(double*)THIS$1 = *(double*)THIS$1 - *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) - *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) - *(double*)((uint8*)V$1 + 16ll);
	label$1451:;
}

void _ZN4MATH4VEC3mLERKNS_8RATIONALE( struct $N4MATH4VEC3E* THIS$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$1452:;
	double N$1;
	double vr$0 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	N$1 = vr$0;
	*(double*)THIS$1 = *(double*)THIS$1 * N$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) * N$1;
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) * N$1;
	label$1453:;
}

void _ZN4MATH4VEC3mLERKd( struct $N4MATH4VEC3E* THIS$1, double* N$1 )
{
	label$1454:;
	*(double*)THIS$1 = *(double*)THIS$1 * *N$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) * *N$1;
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) * *N$1;
	label$1455:;
}

void _ZN4MATH4VEC3mLERKS0_( struct $N4MATH4VEC3E* THIS$1, struct $N4MATH4VEC3E* V$1 )
{
	label$1456:;
	*(double*)THIS$1 = *(double*)THIS$1 * *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) * *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) * *(double*)((uint8*)V$1 + 16ll);
	label$1457:;
}

void _ZN4MATH4VEC3dVERKNS_8RATIONALE( struct $N4MATH4VEC3E* THIS$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$1458:;
	double N$1;
	double vr$0 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	N$1 = vr$0;
	if( N$1 == 0x0p+0 ) goto label$1461;
	{
		*(double*)THIS$1 = *(double*)THIS$1 / N$1;
		*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) / N$1;
		*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) / N$1;
	}
	goto label$1460;
	label$1461:;
	{
		*(double*)THIS$1 = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 8ll) = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 16ll) = 0x0p+0;
	}
	label$1460:;
	label$1459:;
}

void _ZN4MATH4VEC3dVERKd( struct $N4MATH4VEC3E* THIS$1, double* N$1 )
{
	label$1462:;
	if( *N$1 == 0x0p+0 ) goto label$1465;
	{
		*(double*)THIS$1 = *(double*)THIS$1 / *N$1;
		*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) / *N$1;
		*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) / *N$1;
	}
	goto label$1464;
	label$1465:;
	{
		*(double*)THIS$1 = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 8ll) = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 16ll) = 0x0p+0;
	}
	label$1464:;
	label$1463:;
}

void _ZN4MATH4VEC3dVERKS0_( struct $N4MATH4VEC3E* THIS$1, struct $N4MATH4VEC3E* V$1 )
{
	double TMP$646$1;
	double TMP$647$1;
	double TMP$648$1;
	label$1466:;
	if( *(double*)V$1 == 0x0p+0 ) goto label$1468;
	TMP$646$1 = *(double*)THIS$1 / *(double*)V$1;
	goto label$1471;
	label$1468:;
	TMP$646$1 = 0x0p+0;
	label$1471:;
	*(double*)THIS$1 = TMP$646$1;
	if( *(double*)((uint8*)V$1 + 8ll) == 0x0p+0 ) goto label$1469;
	TMP$647$1 = *(double*)((uint8*)THIS$1 + 8ll) / *(double*)((uint8*)V$1 + 8ll);
	goto label$1472;
	label$1469:;
	TMP$647$1 = 0x0p+0;
	label$1472:;
	*(double*)((uint8*)THIS$1 + 8ll) = TMP$647$1;
	if( *(double*)((uint8*)V$1 + 16ll) == 0x0p+0 ) goto label$1470;
	TMP$648$1 = *(double*)((uint8*)THIS$1 + 16ll) / *(double*)((uint8*)V$1 + 16ll);
	goto label$1473;
	label$1470:;
	TMP$648$1 = 0x0p+0;
	label$1473:;
	*(double*)((uint8*)THIS$1 + 16ll) = TMP$648$1;
	label$1467:;
}

FBSTRING* _ZNK4MATH4VEC3cv8FBSTRINGEv( struct $N4MATH4VEC3E* THIS$1 )
{
	FBSTRING TMP$651$1;
	FBSTRING TMP$652$1;
	FBSTRING TMP$653$1;
	FBSTRING TMP$654$1;
	FBSTRING TMP$655$1;
	FBSTRING TMP$656$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$1474:;
	FBSTRING* vr$2 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 16ll) );
	FBSTRING* vr$4 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 8ll) );
	FBSTRING* vr$6 = fb_DoubleToStr( *(double*)THIS$1 );
	__builtin_memset( &TMP$651$1, 0, 24ll );
	FBSTRING* vr$9 = fb_StrConcat( &TMP$651$1, (void*)"<math.vec3>{ x : ", 18ll, (void*)vr$6, -1ll );
	__builtin_memset( &TMP$652$1, 0, 24ll );
	FBSTRING* vr$12 = fb_StrConcat( &TMP$652$1, (void*)vr$9, -1ll, (void*)" , y : ", 8ll );
	__builtin_memset( &TMP$653$1, 0, 24ll );
	FBSTRING* vr$15 = fb_StrConcat( &TMP$653$1, (void*)vr$12, -1ll, (void*)vr$4, -1ll );
	__builtin_memset( &TMP$654$1, 0, 24ll );
	FBSTRING* vr$18 = fb_StrConcat( &TMP$654$1, (void*)vr$15, -1ll, (void*)" , z : ", 8ll );
	__builtin_memset( &TMP$655$1, 0, 24ll );
	FBSTRING* vr$21 = fb_StrConcat( &TMP$655$1, (void*)vr$18, -1ll, (void*)vr$2, -1ll );
	__builtin_memset( &TMP$656$1, 0, 24ll );
	FBSTRING* vr$24 = fb_StrConcat( &TMP$656$1, (void*)vr$21, -1ll, (void*)" }", 3ll );
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$24, -1ll, 0 );
	goto label$1475;
	label$1475:;
	FBSTRING* vr$27 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$27;
}

void _ZN4MATH4VEC3aSERKNS_4VEC2E( struct $N4MATH4VEC3E* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	label$1476:;
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = 0x0p+0;
	label$1477:;
}

void _ZN4MATH4VEC3aSERKNS_4PVECE( struct $N4MATH4VEC3E* THIS$1, struct $N4MATH4PVECE* V$1 )
{
	label$1478:;
	double vr$0 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
	*(double*)THIS$1 = vr$0;
	double vr$2 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$2;
	*(double*)((uint8*)THIS$1 + 16ll) = 0x0p+0;
	label$1479:;
}

void _ZN4MATH4VEC3aSERKS0_( struct $N4MATH4VEC3E* THIS$1, struct $N4MATH4VEC3E* V$1 )
{
	label$1480:;
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)V$1 + 16ll);
	label$1481:;
}

double _ZNK4MATH4VEC313CHNORM__get__Ev( struct $N4MATH4VEC3E* THIS$1 )
{
	double TMP$657$1;
	double TMP$658$1;
	double TMP$659$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1482:;
	TMP$659$1 = __builtin_fabs( *(double*)((uint8*)THIS$1 + 16ll) );
	TMP$658$1 = __builtin_fabs( *(double*)((uint8*)THIS$1 + 8ll) );
	TMP$657$1 = __builtin_fabs( *(double*)THIS$1 );
	double vr$10 = _ZN4MATH3MAXERKdS1_S1_( &TMP$657$1, &TMP$658$1, &TMP$659$1 );
	fb$result$1 = vr$10;
	goto label$1483;
	label$1483:;
	return fb$result$1;
}

double _ZNK4MATH4VEC313MANORM__get__Ev( struct $N4MATH4VEC3E* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1484:;
	fb$result$1 = (__builtin_fabs( *(double*)THIS$1 ) + __builtin_fabs( *(double*)((uint8*)THIS$1 + 8ll) )) + __builtin_fabs( *(double*)((uint8*)THIS$1 + 16ll) );
	goto label$1485;
	label$1485:;
	return fb$result$1;
}

double _ZNK4MATH4VEC311NORM__get__Ev( struct $N4MATH4VEC3E* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1486:;
	fb$result$1 = __builtin_sqrt( (((*(double*)THIS$1 * *(double*)THIS$1) + (*(double*)((uint8*)THIS$1 + 8ll) * *(double*)((uint8*)THIS$1 + 8ll))) + (*(double*)((uint8*)THIS$1 + 16ll) * *(double*)((uint8*)THIS$1 + 16ll))) );
	goto label$1487;
	label$1487:;
	return fb$result$1;
}

void _ZN4MATH4VEC311NORM__set__ERKNS_8RATIONALE( struct $N4MATH4VEC3E* THIS$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$1488:;
	double N$1;
	double vr$0 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	N$1 = vr$0;
	if( N$1 == 0x0p+0 ) goto label$1491;
	{
		double H$2;
		double vr$1 = _ZNK4MATH4VEC311NORM__get__Ev( (struct $N4MATH4VEC3E*)THIS$1 );
		H$2 = vr$1;
		if( H$2 == 0x0p+0 ) goto label$1493;
		{
			*(double*)THIS$1 = (*(double*)THIS$1 / H$2) * N$1;
			*(double*)((uint8*)THIS$1 + 8ll) = (*(double*)((uint8*)THIS$1 + 8ll) / H$2) * N$1;
			*(double*)((uint8*)THIS$1 + 16ll) = (*(double*)((uint8*)THIS$1 + 16ll) / H$2) * N$1;
		}
		label$1493:;
		label$1492:;
	}
	goto label$1490;
	label$1491:;
	{
		*(double*)THIS$1 = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 8ll) = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 16ll) = 0x0p+0;
	}
	label$1490:;
	label$1489:;
}

void _ZN4MATH4VEC311NORM__set__ERKd( struct $N4MATH4VEC3E* THIS$1, double* N$1 )
{
	label$1494:;
	if( *N$1 == 0x0p+0 ) goto label$1497;
	{
		double H$2;
		double vr$1 = _ZNK4MATH4VEC311NORM__get__Ev( (struct $N4MATH4VEC3E*)THIS$1 );
		H$2 = vr$1;
		if( H$2 == 0x0p+0 ) goto label$1499;
		{
			*(double*)THIS$1 = (*(double*)THIS$1 / H$2) * *N$1;
			*(double*)((uint8*)THIS$1 + 8ll) = (*(double*)((uint8*)THIS$1 + 8ll) / H$2) * *N$1;
			*(double*)((uint8*)THIS$1 + 16ll) = (*(double*)((uint8*)THIS$1 + 16ll) / H$2) * *N$1;
		}
		label$1499:;
		label$1498:;
	}
	goto label$1496;
	label$1497:;
	{
		*(double*)THIS$1 = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 8ll) = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 16ll) = 0x0p+0;
	}
	label$1496:;
	label$1495:;
}

double _ZNK4MATH4VEC313SQNORM__get__Ev( struct $N4MATH4VEC3E* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1500:;
	fb$result$1 = ((*(double*)THIS$1 * *(double*)THIS$1) + (*(double*)((uint8*)THIS$1 + 8ll) * *(double*)((uint8*)THIS$1 + 8ll))) + (*(double*)((uint8*)THIS$1 + 16ll) * *(double*)((uint8*)THIS$1 + 16ll));
	goto label$1501;
	label$1501:;
	return fb$result$1;
}

double _ZNK4MATH4VEC312THETA__get__Ev( struct $N4MATH4VEC3E* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1502:;
	double vr$5 = _ZN4MATH5THETAERKdS1_( (double*)THIS$1, (double*)((uint8*)THIS$1 + 8ll) );
	fb$result$1 = vr$5;
	goto label$1503;
	label$1503:;
	return fb$result$1;
}

void _ZN4MATH4VEC312THETA__set__ERKNS_8RATIONALE( struct $N4MATH4VEC3E* THIS$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$1504:;
	double H$1;
	double vr$4 = _ZN4MATH5HYPOTERKdS1_( (double*)THIS$1, (double*)((uint8*)THIS$1 + 8ll) );
	H$1 = vr$4;
	if( H$1 == 0x0p+0 ) goto label$1507;
	{
		double N$2;
		double vr$5 = _ZNK4MATH8RATIONALcvdEv( R$1 );
		N$2 = vr$5;
		*(double*)THIS$1 = __builtin_cos( N$2 ) * H$1;
		*(double*)((uint8*)THIS$1 + 8ll) = __builtin_sin( N$2 ) * H$1;
	}
	label$1507:;
	label$1506:;
	label$1505:;
}

void _ZN4MATH4VEC312THETA__set__ERKd( struct $N4MATH4VEC3E* THIS$1, double* N$1 )
{
	label$1508:;
	double H$1;
	double vr$4 = _ZN4MATH5HYPOTERKdS1_( (double*)THIS$1, (double*)((uint8*)THIS$1 + 8ll) );
	H$1 = vr$4;
	if( H$1 == 0x0p+0 ) goto label$1511;
	{
		*(double*)THIS$1 = __builtin_cos( *N$1 ) * H$1;
		*(double*)((uint8*)THIS$1 + 8ll) = __builtin_sin( *N$1 ) * H$1;
	}
	label$1511:;
	label$1510:;
	label$1509:;
}

struct $N4MATH4VEC2E _ZNK4MATH4VEC39XY__get__Ev( struct $N4MATH4VEC3E* THIS$1 )
{
	struct $N4MATH4VEC2E fb$result$1;
	label$1512:;
	_ZN4MATH4VEC2C1ERKdS2_( &fb$result$1, (double*)THIS$1, (double*)((uint8*)THIS$1 + 8ll) );
	goto label$1513;
	label$1513:;
	return fb$result$1;
}

void _ZN4MATH4VEC39XY__set__ERKNS_4VEC2E( struct $N4MATH4VEC3E* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	label$1514:;
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	label$1515:;
}

void _ZN4MATH4VEC39XY__set__ERKNS_4PVECE( struct $N4MATH4VEC3E* THIS$1, struct $N4MATH4PVECE* V$1 )
{
	label$1516:;
	double vr$0 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
	*(double*)THIS$1 = vr$0;
	double vr$2 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$2;
	label$1517:;
}

boolean _ZNK4MATH4VEC36ISNULLEv( struct $N4MATH4VEC3E* THIS$1 )
{
	boolean TMP$661$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1518:;
	if( (((int64)-(*(double*)THIS$1 == 0x0p+0) & (int64)-(*(double*)((uint8*)THIS$1 + 8ll) == 0x0p+0)) & (int64)-(*(double*)((uint8*)THIS$1 + 16ll) == 0x0p+0)) == 0ll ) goto label$1520;
	TMP$661$1 = (boolean)1ll;
	goto label$1521;
	label$1520:;
	TMP$661$1 = (boolean)0ll;
	label$1521:;
	fb$result$1 = TMP$661$1;
	goto label$1519;
	label$1519:;
	return fb$result$1;
}

boolean _ZNK4MATH4VEC36ISNULLERKd( struct $N4MATH4VEC3E* THIS$1, double* S$1 )
{
	boolean TMP$662$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1522:;
	double T$1;
	T$1 = __builtin_fabs( *S$1 );
	if( (((int64)-(__builtin_fabs( *(double*)THIS$1 ) <= T$1) & (int64)-(__builtin_fabs( *(double*)((uint8*)THIS$1 + 8ll) ) <= T$1)) & (int64)-(__builtin_fabs( *(double*)((uint8*)THIS$1 + 16ll) ) <= T$1)) == 0ll ) goto label$1524;
	TMP$662$1 = (boolean)1ll;
	goto label$1525;
	label$1524:;
	TMP$662$1 = (boolean)0ll;
	label$1525:;
	fb$result$1 = TMP$662$1;
	goto label$1523;
	label$1523:;
	return fb$result$1;
}

boolean _ZNK4MATH4VEC36ISUNITEv( struct $N4MATH4VEC3E* THIS$1 )
{
	boolean TMP$663$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1526:;
	double vr$1 = _ZNK4MATH4VEC311NORM__get__Ev( THIS$1 );
	if( vr$1 != 0x1.p+0 ) goto label$1528;
	TMP$663$1 = (boolean)1ll;
	goto label$1529;
	label$1528:;
	TMP$663$1 = (boolean)0ll;
	label$1529:;
	fb$result$1 = TMP$663$1;
	goto label$1527;
	label$1527:;
	return fb$result$1;
}

boolean _ZNK4MATH4VEC36ISUNITERKd( struct $N4MATH4VEC3E* THIS$1, double* T$1 )
{
	boolean TMP$664$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1530:;
	double vr$1 = _ZNK4MATH4VEC311NORM__get__Ev( THIS$1 );
	if( __builtin_fabs( (-vr$1 + 0x1.p+0) ) > __builtin_fabs( *T$1 ) ) goto label$1532;
	TMP$664$1 = (boolean)1ll;
	goto label$1533;
	label$1532:;
	TMP$664$1 = (boolean)0ll;
	label$1533:;
	fb$result$1 = TMP$664$1;
	goto label$1531;
	label$1531:;
	return fb$result$1;
}

double _ZNK4MATH4VEC36MINORMERKd( struct $N4MATH4VEC3E* THIS$1, double* E$1 )
{
	double TMP$665$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1534:;
	if( *E$1 == 0x0p+0 ) goto label$1536;
	double vr$7 = pow( __builtin_fabs( *(double*)THIS$1 ), *E$1 );
	double vr$11 = pow( __builtin_fabs( *(double*)((uint8*)THIS$1 + 8ll) ), *E$1 );
	double vr$16 = pow( __builtin_fabs( *(double*)((uint8*)THIS$1 + 16ll) ), *E$1 );
	double vr$18 = pow( (vr$7 + vr$11) + vr$16, 0x1.p+0 / *E$1 );
	TMP$665$1 = vr$18;
	goto label$1537;
	label$1536:;
	TMP$665$1 = 0x0p+0;
	label$1537:;
	fb$result$1 = TMP$665$1;
	goto label$1535;
	label$1535:;
	return fb$result$1;
}

void _ZN4MATH4VEC39NORMALISEEv( struct $N4MATH4VEC3E* THIS$1 )
{
	label$1538:;
	double H$1;
	double vr$0 = _ZNK4MATH4VEC311NORM__get__Ev( (struct $N4MATH4VEC3E*)THIS$1 );
	H$1 = vr$0;
	if( ((int64)-(H$1 > 0x0p+0) & (int64)-(H$1 != 0x1.p+0)) == 0ll ) goto label$1541;
	{
		*(double*)THIS$1 = *(double*)THIS$1 / H$1;
		*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) / H$1;
		*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) / H$1;
	}
	label$1541:;
	label$1540:;
	label$1539:;
}

FBSTRING* _ZNK4MATH4VEC36TOJSONERKb( struct $N4MATH4VEC3E* THIS$1, boolean* A$1 )
{
	FBSTRING TMP$667$1;
	FBSTRING TMP$668$1;
	FBSTRING TMP$669$1;
	FBSTRING TMP$670$1;
	FBSTRING TMP$671$1;
	FBSTRING TMP$672$1;
	FBSTRING TMP$673$1;
	FBSTRING TMP$674$1;
	FBSTRING TMP$675$1;
	FBSTRING TMP$676$1;
	FBSTRING TMP$677$1;
	FBSTRING TMP$678$1;
	FBSTRING TMP$679$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$1542:;
	if( *A$1 == (boolean)0ll ) goto label$1544;
	FBSTRING* vr$3 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 16ll) );
	FBSTRING* vr$5 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 8ll) );
	FBSTRING* vr$7 = fb_DoubleToStr( *(double*)THIS$1 );
	__builtin_memset( &TMP$668$1, 0, 24ll );
	FBSTRING* vr$10 = fb_StrConcat( &TMP$668$1, (void*)"[", 2ll, (void*)vr$7, -1ll );
	__builtin_memset( &TMP$669$1, 0, 24ll );
	FBSTRING* vr$13 = fb_StrConcat( &TMP$669$1, (void*)vr$10, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$670$1, 0, 24ll );
	FBSTRING* vr$16 = fb_StrConcat( &TMP$670$1, (void*)vr$13, -1ll, (void*)vr$5, -1ll );
	__builtin_memset( &TMP$671$1, 0, 24ll );
	FBSTRING* vr$19 = fb_StrConcat( &TMP$671$1, (void*)vr$16, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$672$1, 0, 24ll );
	FBSTRING* vr$22 = fb_StrConcat( &TMP$672$1, (void*)vr$19, -1ll, (void*)vr$3, -1ll );
	__builtin_memset( &TMP$673$1, 0, 24ll );
	FBSTRING* vr$25 = fb_StrConcat( &TMP$673$1, (void*)vr$22, -1ll, (void*)"]", 2ll );
	fb_StrInit( (void*)&TMP$667$1, -1ll, (void*)vr$25, -1ll, 0 );
	goto label$1545;
	label$1544:;
	FBSTRING* vr$28 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 16ll) );
	FBSTRING* vr$30 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 8ll) );
	FBSTRING* vr$32 = fb_DoubleToStr( *(double*)THIS$1 );
	__builtin_memset( &TMP$674$1, 0, 24ll );
	FBSTRING* vr$35 = fb_StrConcat( &TMP$674$1, (void*)"{\x22x\x22:", 6ll, (void*)vr$32, -1ll );
	__builtin_memset( &TMP$675$1, 0, 24ll );
	FBSTRING* vr$38 = fb_StrConcat( &TMP$675$1, (void*)vr$35, -1ll, (void*)",\x22y\x22:", 6ll );
	__builtin_memset( &TMP$676$1, 0, 24ll );
	FBSTRING* vr$41 = fb_StrConcat( &TMP$676$1, (void*)vr$38, -1ll, (void*)vr$30, -1ll );
	__builtin_memset( &TMP$677$1, 0, 24ll );
	FBSTRING* vr$44 = fb_StrConcat( &TMP$677$1, (void*)vr$41, -1ll, (void*)",\x22z\x22:", 6ll );
	__builtin_memset( &TMP$678$1, 0, 24ll );
	FBSTRING* vr$47 = fb_StrConcat( &TMP$678$1, (void*)vr$44, -1ll, (void*)vr$28, -1ll );
	__builtin_memset( &TMP$679$1, 0, 24ll );
	FBSTRING* vr$50 = fb_StrConcat( &TMP$679$1, (void*)vr$47, -1ll, (void*)"}", 2ll );
	fb_StrInit( (void*)&TMP$667$1, -1ll, (void*)vr$50, -1ll, 0 );
	label$1545:;
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)&TMP$667$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&TMP$667$1 );
	goto label$1543;
	label$1543:;
	FBSTRING* vr$56 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$56;
}

struct $N4MATH4VEC3E _ZN4MATH4VEC35UNITXEv( void )
{
	double TMP$681$1;
	double TMP$682$1;
	double TMP$683$1;
	struct $N4MATH4VEC3E fb$result$1;
	label$1546:;
	TMP$683$1 = 0x0p+0;
	TMP$682$1 = 0x0p+0;
	TMP$681$1 = 0x1.p+0;
	_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, (double*)&TMP$681$1, (double*)&TMP$682$1, (double*)&TMP$683$1 );
	goto label$1547;
	label$1547:;
	return fb$result$1;
}

struct $N4MATH4VEC3E _ZN4MATH4VEC35UNITYEv( void )
{
	double TMP$685$1;
	double TMP$686$1;
	double TMP$687$1;
	struct $N4MATH4VEC3E fb$result$1;
	label$1548:;
	TMP$687$1 = 0x0p+0;
	TMP$686$1 = 0x1.p+0;
	TMP$685$1 = 0x0p+0;
	_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, (double*)&TMP$685$1, (double*)&TMP$686$1, (double*)&TMP$687$1 );
	goto label$1549;
	label$1549:;
	return fb$result$1;
}

struct $N4MATH4VEC3E _ZN4MATH4VEC35UNITZEv( void )
{
	double TMP$689$1;
	double TMP$690$1;
	double TMP$691$1;
	struct $N4MATH4VEC3E fb$result$1;
	label$1550:;
	TMP$691$1 = 0x1.p+0;
	TMP$690$1 = 0x0p+0;
	TMP$689$1 = 0x0p+0;
	_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, (double*)&TMP$689$1, (double*)&TMP$690$1, (double*)&TMP$691$1 );
	goto label$1551;
	label$1551:;
	return fb$result$1;
}

struct $N4MATH4VEC3E _ZN4MATHplERKNS_4VEC3ES2_( struct $N4MATH4VEC3E* V1$1, struct $N4MATH4VEC3E* V2$1 )
{
	double TMP$693$1;
	double TMP$694$1;
	double TMP$695$1;
	struct $N4MATH4VEC3E fb$result$1;
	label$1552:;
	TMP$695$1 = *(double*)((uint8*)V1$1 + 16ll) + *(double*)((uint8*)V2$1 + 16ll);
	TMP$694$1 = *(double*)((uint8*)V1$1 + 8ll) + *(double*)((uint8*)V2$1 + 8ll);
	TMP$693$1 = *(double*)V1$1 + *(double*)V2$1;
	_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, &TMP$693$1, &TMP$694$1, &TMP$695$1 );
	goto label$1553;
	label$1553:;
	return fb$result$1;
}

struct $N4MATH4VEC3E _ZN4MATHngERKNS_4VEC3E( struct $N4MATH4VEC3E* V$1 )
{
	double TMP$697$1;
	double TMP$698$1;
	double TMP$699$1;
	struct $N4MATH4VEC3E fb$result$1;
	label$1554:;
	TMP$699$1 = -(*(double*)((uint8*)V$1 + 16ll));
	TMP$698$1 = -(*(double*)((uint8*)V$1 + 8ll));
	TMP$697$1 = -(*(double*)V$1);
	_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, &TMP$697$1, &TMP$698$1, &TMP$699$1 );
	goto label$1555;
	label$1555:;
	return fb$result$1;
}

struct $N4MATH4VEC3E _ZN4MATHmiERKNS_4VEC3ES2_( struct $N4MATH4VEC3E* V1$1, struct $N4MATH4VEC3E* V2$1 )
{
	double TMP$701$1;
	double TMP$702$1;
	double TMP$703$1;
	struct $N4MATH4VEC3E fb$result$1;
	label$1556:;
	TMP$703$1 = *(double*)((uint8*)V1$1 + 16ll) - *(double*)((uint8*)V2$1 + 16ll);
	TMP$702$1 = *(double*)((uint8*)V1$1 + 8ll) - *(double*)((uint8*)V2$1 + 8ll);
	TMP$701$1 = *(double*)V1$1 - *(double*)V2$1;
	_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, &TMP$701$1, &TMP$702$1, &TMP$703$1 );
	goto label$1557;
	label$1557:;
	return fb$result$1;
}

struct $N4MATH4VEC3E _ZN4MATHmlERKNS_4VEC3ERKd( struct $N4MATH4VEC3E* V$1, double* N$1 )
{
	double TMP$705$1;
	double TMP$706$1;
	double TMP$707$1;
	struct $N4MATH4VEC3E fb$result$1;
	label$1558:;
	TMP$707$1 = *(double*)((uint8*)V$1 + 16ll) * *N$1;
	TMP$706$1 = *(double*)((uint8*)V$1 + 8ll) * *N$1;
	TMP$705$1 = *(double*)V$1 * *N$1;
	_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, &TMP$705$1, &TMP$706$1, &TMP$707$1 );
	goto label$1559;
	label$1559:;
	return fb$result$1;
}

struct $N4MATH4VEC3E _ZN4MATHmlERKdRKNS_4VEC3E( double* N$1, struct $N4MATH4VEC3E* V$1 )
{
	double TMP$709$1;
	double TMP$710$1;
	double TMP$711$1;
	struct $N4MATH4VEC3E fb$result$1;
	label$1560:;
	TMP$711$1 = *N$1 * *(double*)((uint8*)V$1 + 16ll);
	TMP$710$1 = *N$1 * *(double*)((uint8*)V$1 + 8ll);
	TMP$709$1 = *N$1 * *(double*)V$1;
	_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, &TMP$709$1, &TMP$710$1, &TMP$711$1 );
	goto label$1561;
	label$1561:;
	return fb$result$1;
}

struct $N4MATH4VEC3E _ZN4MATHmlERKNS_4VEC3ES2_( struct $N4MATH4VEC3E* V1$1, struct $N4MATH4VEC3E* V2$1 )
{
	double TMP$713$1;
	double TMP$714$1;
	double TMP$715$1;
	struct $N4MATH4VEC3E fb$result$1;
	label$1562:;
	TMP$715$1 = *(double*)((uint8*)V1$1 + 16ll) * *(double*)((uint8*)V2$1 + 16ll);
	TMP$714$1 = *(double*)((uint8*)V1$1 + 8ll) * *(double*)((uint8*)V2$1 + 8ll);
	TMP$713$1 = *(double*)V1$1 * *(double*)V2$1;
	_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, &TMP$713$1, &TMP$714$1, &TMP$715$1 );
	goto label$1563;
	label$1563:;
	return fb$result$1;
}

struct $N4MATH4VEC3E _ZN4MATHdvERKNS_4VEC3ERKd( struct $N4MATH4VEC3E* V$1, double* N$1 )
{
	double TMP$717$1;
	double TMP$718$1;
	double TMP$719$1;
	struct $N4MATH4VEC3E TMP$721$1;
	struct $N4MATH4VEC3E fb$result$1;
	label$1564:;
	if( *N$1 == 0x0p+0 ) goto label$1566;
	TMP$719$1 = *(double*)((uint8*)V$1 + 16ll) / *N$1;
	TMP$718$1 = *(double*)((uint8*)V$1 + 8ll) / *N$1;
	TMP$717$1 = *(double*)V$1 / *N$1;
	_ZN4MATH4VEC3C1ERKdS2_S2_( &TMP$721$1, &TMP$717$1, &TMP$718$1, &TMP$719$1 );
	goto label$1567;
	label$1566:;
	_ZN4MATH4VEC3C1Ev( &TMP$721$1 );
	label$1567:;
	_ZN4MATH4VEC3C1ERKS0_( &fb$result$1, (struct $N4MATH4VEC3E*)&TMP$721$1 );
	goto label$1565;
	label$1565:;
	return fb$result$1;
}

struct $N4MATH4VEC3E _ZN4MATHdvERKNS_4VEC3ES2_( struct $N4MATH4VEC3E* V1$1, struct $N4MATH4VEC3E* V2$1 )
{
	double TMP$723$1;
	double TMP$724$1;
	double TMP$725$1;
	struct $N4MATH4VEC3E fb$result$1;
	label$1568:;
	if( *(double*)((uint8*)V2$1 + 16ll) == 0x0p+0 ) goto label$1572;
	TMP$725$1 = *(double*)((uint8*)V1$1 + 16ll) / *(double*)((uint8*)V2$1 + 16ll);
	goto label$1573;
	label$1572:;
	TMP$725$1 = 0x0p+0;
	label$1573:;
	if( *(double*)((uint8*)V2$1 + 8ll) == 0x0p+0 ) goto label$1571;
	TMP$724$1 = *(double*)((uint8*)V1$1 + 8ll) / *(double*)((uint8*)V2$1 + 8ll);
	goto label$1574;
	label$1571:;
	TMP$724$1 = 0x0p+0;
	label$1574:;
	if( *(double*)V2$1 == 0x0p+0 ) goto label$1570;
	TMP$723$1 = *(double*)V1$1 / *(double*)V2$1;
	goto label$1575;
	label$1570:;
	TMP$723$1 = 0x0p+0;
	label$1575:;
	_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, &TMP$723$1, &TMP$724$1, &TMP$725$1 );
	goto label$1569;
	label$1569:;
	return fb$result$1;
}

boolean _ZN4MATHeqERKNS_4VEC3ES2_( struct $N4MATH4VEC3E* V1$1, struct $N4MATH4VEC3E* V2$1 )
{
	boolean TMP$726$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1576:;
	if( (((int64)-(*(double*)V1$1 == *(double*)V2$1) & (int64)-(*(double*)((uint8*)V1$1 + 8ll) == *(double*)((uint8*)V2$1 + 8ll))) & (int64)-(*(double*)((uint8*)V1$1 + 16ll) == *(double*)((uint8*)V2$1 + 16ll))) == 0ll ) goto label$1578;
	TMP$726$1 = (boolean)1ll;
	goto label$1579;
	label$1578:;
	TMP$726$1 = (boolean)0ll;
	label$1579:;
	fb$result$1 = TMP$726$1;
	goto label$1577;
	label$1577:;
	return fb$result$1;
}

boolean _ZN4MATHneERKNS_4VEC3ES2_( struct $N4MATH4VEC3E* V1$1, struct $N4MATH4VEC3E* V2$1 )
{
	boolean TMP$727$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1580:;
	if( (((int64)-(*(double*)V1$1 != *(double*)V2$1) | (int64)-(*(double*)((uint8*)V1$1 + 8ll) != *(double*)((uint8*)V2$1 + 8ll))) | (int64)-(*(double*)((uint8*)V1$1 + 16ll) != *(double*)((uint8*)V2$1 + 16ll))) == 0ll ) goto label$1582;
	TMP$727$1 = (boolean)1ll;
	goto label$1583;
	label$1582:;
	TMP$727$1 = (boolean)0ll;
	label$1583:;
	fb$result$1 = TMP$727$1;
	goto label$1581;
	label$1581:;
	return fb$result$1;
}

boolean _ZN4MATH3CMPERKNS_4VEC3ES2_RKd( struct $N4MATH4VEC3E* V1$1, struct $N4MATH4VEC3E* V2$1, double* S$1 )
{
	boolean TMP$728$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1584:;
	double T$1;
	T$1 = __builtin_fabs( *S$1 );
	if( (((int64)-(__builtin_fabs( (*(double*)V1$1 - *(double*)V2$1) ) <= T$1) & (int64)-(__builtin_fabs( (*(double*)((uint8*)V1$1 + 8ll) - *(double*)((uint8*)V2$1 + 8ll)) ) <= T$1)) & (int64)-(__builtin_fabs( (*(double*)((uint8*)V1$1 + 16ll) - *(double*)((uint8*)V2$1 + 16ll)) ) <= T$1)) == 0ll ) goto label$1586;
	TMP$728$1 = (boolean)1ll;
	goto label$1587;
	label$1586:;
	TMP$728$1 = (boolean)0ll;
	label$1587:;
	fb$result$1 = TMP$728$1;
	goto label$1585;
	label$1585:;
	return fb$result$1;
}

struct $N4MATH4VEC3E _ZN4MATH5CROSSERKNS_4VEC3ES2_( struct $N4MATH4VEC3E* V1$1, struct $N4MATH4VEC3E* V2$1 )
{
	double TMP$730$1;
	double TMP$731$1;
	double TMP$732$1;
	struct $N4MATH4VEC3E fb$result$1;
	label$1588:;
	TMP$732$1 = (*(double*)V1$1 * *(double*)((uint8*)V2$1 + 8ll)) - (*(double*)((uint8*)V1$1 + 8ll) * *(double*)V2$1);
	TMP$731$1 = (*(double*)((uint8*)V1$1 + 16ll) * *(double*)V2$1) - (*(double*)V1$1 * *(double*)((uint8*)V2$1 + 16ll));
	TMP$730$1 = (*(double*)((uint8*)V1$1 + 8ll) * *(double*)((uint8*)V2$1 + 16ll)) - (*(double*)((uint8*)V1$1 + 16ll) * *(double*)((uint8*)V2$1 + 8ll));
	_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, &TMP$730$1, &TMP$731$1, &TMP$732$1 );
	goto label$1589;
	label$1589:;
	return fb$result$1;
}

double _ZN4MATH3DOTERKNS_4VEC3ES2_( struct $N4MATH4VEC3E* V1$1, struct $N4MATH4VEC3E* V2$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1590:;
	fb$result$1 = ((*(double*)V1$1 * *(double*)V2$1) + (*(double*)((uint8*)V1$1 + 8ll) * *(double*)((uint8*)V2$1 + 8ll))) + (*(double*)((uint8*)V1$1 + 16ll) * *(double*)((uint8*)V2$1 + 16ll));
	goto label$1591;
	label$1591:;
	return fb$result$1;
}

struct $N4MATH4VEC3E _ZN4MATH4LERPERKNS_4VEC3ES2_RKd( struct $N4MATH4VEC3E* V1$1, struct $N4MATH4VEC3E* V2$1, double* S$1 )
{
	double TMP$734$1;
	double TMP$735$1;
	double TMP$736$1;
	struct $N4MATH4VEC3E fb$result$1;
	label$1592:;
	double T$1;
	double vr$0 = _ZN4MATH5CLAMPERKd( S$1 );
	T$1 = vr$0;
	double U$1;
	U$1 = 0x1.p+0 - T$1;
	TMP$736$1 = (*(double*)((uint8*)V1$1 + 16ll) * U$1) + (*(double*)((uint8*)V2$1 + 16ll) * T$1);
	TMP$735$1 = (*(double*)((uint8*)V1$1 + 8ll) * U$1) + (*(double*)((uint8*)V2$1 + 8ll) * T$1);
	TMP$734$1 = (*(double*)V1$1 * U$1) + (*(double*)V2$1 * T$1);
	_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, &TMP$734$1, &TMP$735$1, &TMP$736$1 );
	goto label$1593;
	label$1593:;
	return fb$result$1;
}

void _ZN4MATH4CVECC1Ev( struct $N4MATH4CVECE* THIS$1 )
{
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	label$1594:;
	label$1595:;
}

void _ZN4MATH4CVECC1ERKdS2_S2_( struct $N4MATH4CVECE* THIS$1, double* N1$1, double* N2$1, double* N3$1 )
{
	label$1596:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	if( *N2$1 < 0x0p+0 ) goto label$1599;
	{
		double TMP$737$2;
		TMP$737$2 = 0x1.921FB54442D18p+2;
		double vr$8 = _ZN4MATH4WRAPERKdS1_( N1$1, (double*)&TMP$737$2 );
		*(double*)((uint8*)THIS$1 + 8ll) = vr$8;
		*(double*)((uint8*)THIS$1 + 16ll) = *N2$1;
	}
	goto label$1598;
	label$1599:;
	{
		double TMP$738$2;
		double TMP$739$2;
		TMP$739$2 = 0x1.921FB54442D18p+2;
		TMP$738$2 = *N1$1 + 0x1.921FB54442D18p+1;
		double vr$16 = _ZN4MATH4WRAPERKdS1_( &TMP$738$2, (double*)&TMP$739$2 );
		*(double*)((uint8*)THIS$1 + 8ll) = vr$16;
		*(double*)((uint8*)THIS$1 + 16ll) = -(*N2$1);
	}
	label$1598:;
	*(double*)THIS$1 = *N3$1;
	label$1597:;
}

void _ZN4MATH4CVECC1ERKNS_4VEC2ERKd( struct $N4MATH4CVECE* THIS$1, struct $N4MATH4VEC2E* V$1, double* N$1 )
{
	label$1600:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	double vr$6 = _ZNK4MATH4VEC212THETA__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$6;
	double vr$8 = _ZNK4MATH4VEC211NORM__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$8;
	*(double*)THIS$1 = *N$1;
	label$1601:;
}

void _ZN4MATH4CVECC1ERKNS_4PVECERKd( struct $N4MATH4CVECE* THIS$1, struct $N4MATH4PVECE* V$1, double* N$1 )
{
	label$1602:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	double vr$6 = _ZNK4MATH4PVEC12THETA__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$6;
	double vr$8 = _ZNK4MATH4PVEC10RHO__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$8;
	*(double*)THIS$1 = *N$1;
	label$1603:;
}

void _ZN4MATH4CVECC1ERKNS_4VEC3E( struct $N4MATH4CVECE* THIS$1, struct $N4MATH4VEC3E* V$1 )
{
	label$1604:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	double vr$6 = _ZNK4MATH4VEC312THETA__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$6;
	double vr$12 = _ZN4MATH5HYPOTERKdS1_( (double*)V$1, (double*)((uint8*)V$1 + 8ll) );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$12;
	*(double*)THIS$1 = *(double*)((uint8*)V$1 + 16ll);
	label$1605:;
}

void _ZN4MATH4CVECC1ERKS0_( struct $N4MATH4CVECE* THIS$1, struct $N4MATH4CVECE* V$1 )
{
	label$1606:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)V$1 + 16ll);
	*(double*)THIS$1 = *(double*)V$1;
	label$1607:;
}

void _ZN4MATH4CVECpLERKNS_4VEC3E( struct $N4MATH4CVECE* THIS$1, struct $N4MATH4VEC3E* V$1 )
{
	label$1608:;
	double I$1;
	I$1 = (__builtin_cos( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll)) + *(double*)V$1;
	double J$1;
	J$1 = (-(__builtin_sin( *(double*)((uint8*)THIS$1 + 8ll) )) * *(double*)((uint8*)THIS$1 + 16ll)) + *(double*)((uint8*)V$1 + 8ll);
	double vr$15 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$15;
	double vr$19 = _ZN4MATH5HYPOTERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$19;
	*(double*)THIS$1 = *(double*)THIS$1 + *(double*)((uint8*)V$1 + 16ll);
	label$1609:;
}

void _ZN4MATH4CVECpLERKS0_( struct $N4MATH4CVECE* THIS$1, struct $N4MATH4CVECE* V$1 )
{
	label$1610:;
	double I$1;
	I$1 = (__builtin_cos( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll)) + (__builtin_cos( *(double*)((uint8*)V$1 + 8ll) ) * *(double*)((uint8*)V$1 + 16ll));
	double J$1;
	J$1 = (-(__builtin_sin( *(double*)((uint8*)THIS$1 + 8ll) )) * *(double*)((uint8*)THIS$1 + 16ll)) - (__builtin_sin( *(double*)((uint8*)V$1 + 8ll) ) * *(double*)((uint8*)V$1 + 16ll));
	double vr$21 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$21;
	double vr$25 = _ZN4MATH5HYPOTERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$25;
	*(double*)THIS$1 = *(double*)THIS$1 + *(double*)V$1;
	label$1611:;
}

void _ZN4MATH4CVECmIERKNS_4VEC3E( struct $N4MATH4CVECE* THIS$1, struct $N4MATH4VEC3E* V$1 )
{
	label$1612:;
	double I$1;
	I$1 = (__builtin_cos( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll)) - *(double*)V$1;
	double J$1;
	J$1 = (-(__builtin_sin( *(double*)((uint8*)THIS$1 + 8ll) )) * *(double*)((uint8*)THIS$1 + 16ll)) - *(double*)((uint8*)V$1 + 8ll);
	double vr$15 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$15;
	double vr$19 = _ZN4MATH5HYPOTERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$19;
	*(double*)THIS$1 = *(double*)THIS$1 - *(double*)((uint8*)V$1 + 16ll);
	label$1613:;
}

void _ZN4MATH4CVECmIERKS0_( struct $N4MATH4CVECE* THIS$1, struct $N4MATH4CVECE* V$1 )
{
	label$1614:;
	double I$1;
	I$1 = (__builtin_cos( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll)) - (__builtin_cos( *(double*)((uint8*)V$1 + 8ll) ) * *(double*)((uint8*)V$1 + 16ll));
	double J$1;
	J$1 = (-(__builtin_sin( *(double*)((uint8*)THIS$1 + 8ll) )) * *(double*)((uint8*)THIS$1 + 16ll)) + (__builtin_sin( *(double*)((uint8*)V$1 + 8ll) ) * *(double*)((uint8*)V$1 + 16ll));
	double vr$21 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$21;
	double vr$25 = _ZN4MATH5HYPOTERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$25;
	*(double*)THIS$1 = *(double*)THIS$1 - *(double*)V$1;
	label$1615:;
}

void _ZN4MATH4CVECmLERKd( struct $N4MATH4CVECE* THIS$1, double* N$1 )
{
	label$1616:;
	if( *N$1 < 0x0p+0 ) goto label$1619;
	{
		*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) * *N$1;
		*(double*)THIS$1 = *(double*)THIS$1 * *N$1;
	}
	goto label$1618;
	label$1619:;
	{
		double TMP$740$2;
		double TMP$741$2;
		TMP$741$2 = 0x1.921FB54442D18p+2;
		TMP$740$2 = *(double*)((uint8*)THIS$1 + 8ll) + 0x1.921FB54442D18p+1;
		double vr$13 = _ZN4MATH4WRAPERKdS1_( (double*)&TMP$740$2, (double*)&TMP$741$2 );
		*(double*)((uint8*)THIS$1 + 8ll) = vr$13;
		*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) * -(*N$1);
		*(double*)THIS$1 = *(double*)THIS$1 * -(*N$1);
	}
	label$1618:;
	label$1617:;
}

void _ZN4MATH4CVECmLERKNS_4VEC3E( struct $N4MATH4CVECE* THIS$1, struct $N4MATH4VEC3E* V$1 )
{
	label$1620:;
	double I$1;
	I$1 = (__builtin_cos( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll)) * *(double*)V$1;
	double J$1;
	J$1 = (-(__builtin_sin( *(double*)((uint8*)THIS$1 + 8ll) )) * *(double*)((uint8*)THIS$1 + 16ll)) * *(double*)((uint8*)V$1 + 8ll);
	double vr$15 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$15;
	double vr$19 = _ZN4MATH5HYPOTERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$19;
	*(double*)THIS$1 = *(double*)THIS$1 * *(double*)((uint8*)V$1 + 16ll);
	label$1621:;
}

void _ZN4MATH4CVECmLERKS0_( struct $N4MATH4CVECE* THIS$1, struct $N4MATH4CVECE* V$1 )
{
	label$1622:;
	double I$1;
	I$1 = ((__builtin_cos( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll)) * __builtin_cos( *(double*)((uint8*)V$1 + 8ll) )) * *(double*)((uint8*)V$1 + 16ll);
	double J$1;
	J$1 = ((-(__builtin_sin( *(double*)((uint8*)THIS$1 + 8ll) )) * *(double*)((uint8*)THIS$1 + 16ll)) * -(__builtin_sin( *(double*)((uint8*)V$1 + 8ll) ))) * *(double*)((uint8*)V$1 + 16ll);
	double vr$22 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$22;
	double vr$26 = _ZN4MATH5HYPOTERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$26;
	*(double*)THIS$1 = *(double*)THIS$1 * *(double*)V$1;
	label$1623:;
}

void _ZN4MATH4CVECdVERKd( struct $N4MATH4CVECE* THIS$1, double* N$1 )
{
	label$1624:;
	if( *N$1 <= 0x0p+0 ) goto label$1627;
	{
		*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) / *N$1;
		*(double*)THIS$1 = *(double*)THIS$1 / *N$1;
	}
	goto label$1626;
	label$1627:;
	if( *N$1 > 0x0p+0 ) goto label$1628;
	{
		double TMP$742$2;
		double TMP$743$2;
		TMP$743$2 = 0x1.921FB54442D18p+2;
		TMP$742$2 = *(double*)((uint8*)THIS$1 + 8ll) + 0x1.921FB54442D18p+1;
		double vr$14 = _ZN4MATH4WRAPERKdS1_( (double*)&TMP$742$2, (double*)&TMP$743$2 );
		*(double*)((uint8*)THIS$1 + 8ll) = vr$14;
		*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) / -(*N$1);
		*(double*)THIS$1 = *(double*)THIS$1 / *N$1;
	}
	goto label$1626;
	label$1628:;
	{
		*(double*)((uint8*)THIS$1 + 8ll) = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 16ll) = 0x0p+0;
		*(double*)THIS$1 = 0x0p+0;
	}
	label$1626:;
	label$1625:;
}

struct $N4MATH4VEC3E _ZNK4MATH4CVECcvNS_4VEC3EEv( struct $N4MATH4CVECE* THIS$1 )
{
	double TMP$745$1;
	double TMP$746$1;
	struct $N4MATH4VEC3E fb$result$1;
	label$1629:;
	TMP$746$1 = -(__builtin_sin( *(double*)((uint8*)THIS$1 + 8ll) )) * *(double*)((uint8*)THIS$1 + 16ll);
	TMP$745$1 = __builtin_cos( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll);
	_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, &TMP$745$1, &TMP$746$1, (double*)THIS$1 );
	goto label$1630;
	label$1630:;
	return fb$result$1;
}

FBSTRING* _ZNK4MATH4CVECcv8FBSTRINGEv( struct $N4MATH4CVECE* THIS$1 )
{
	FBSTRING TMP$748$1;
	FBSTRING TMP$749$1;
	FBSTRING TMP$750$1;
	FBSTRING TMP$751$1;
	FBSTRING TMP$752$1;
	FBSTRING TMP$753$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$1631:;
	FBSTRING* vr$2 = fb_DoubleToStr( *(double*)THIS$1 );
	FBSTRING* vr$4 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 16ll) );
	FBSTRING* vr$6 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 8ll) );
	__builtin_memset( &TMP$748$1, 0, 24ll );
	FBSTRING* vr$9 = fb_StrConcat( &TMP$748$1, (void*)"<math.cvec>{ theta : ", 22ll, (void*)vr$6, -1ll );
	__builtin_memset( &TMP$749$1, 0, 24ll );
	FBSTRING* vr$12 = fb_StrConcat( &TMP$749$1, (void*)vr$9, -1ll, (void*)" , rho : ", 10ll );
	__builtin_memset( &TMP$750$1, 0, 24ll );
	FBSTRING* vr$15 = fb_StrConcat( &TMP$750$1, (void*)vr$12, -1ll, (void*)vr$4, -1ll );
	__builtin_memset( &TMP$751$1, 0, 24ll );
	FBSTRING* vr$18 = fb_StrConcat( &TMP$751$1, (void*)vr$15, -1ll, (void*)" , z : ", 8ll );
	__builtin_memset( &TMP$752$1, 0, 24ll );
	FBSTRING* vr$21 = fb_StrConcat( &TMP$752$1, (void*)vr$18, -1ll, (void*)vr$2, -1ll );
	__builtin_memset( &TMP$753$1, 0, 24ll );
	FBSTRING* vr$24 = fb_StrConcat( &TMP$753$1, (void*)vr$21, -1ll, (void*)" }", 3ll );
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$24, -1ll, 0 );
	goto label$1632;
	label$1632:;
	FBSTRING* vr$27 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$27;
}

void _ZN4MATH4CVECaSERKNS_4VEC2E( struct $N4MATH4CVECE* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	label$1633:;
	double vr$0 = _ZNK4MATH4VEC212THETA__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$0;
	double vr$2 = _ZNK4MATH4VEC211NORM__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$2;
	*(double*)THIS$1 = 0x0p+0;
	label$1634:;
}

void _ZN4MATH4CVECaSERKNS_4PVECE( struct $N4MATH4CVECE* THIS$1, struct $N4MATH4PVECE* V$1 )
{
	label$1635:;
	double vr$0 = _ZNK4MATH4PVEC12THETA__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$0;
	double vr$2 = _ZNK4MATH4PVEC10RHO__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$2;
	*(double*)THIS$1 = 0x0p+0;
	label$1636:;
}

void _ZN4MATH4CVECaSERKNS_4VEC3E( struct $N4MATH4CVECE* THIS$1, struct $N4MATH4VEC3E* V$1 )
{
	label$1637:;
	double vr$0 = _ZNK4MATH4VEC312THETA__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$0;
	double vr$6 = _ZN4MATH5HYPOTERKdS1_( (double*)V$1, (double*)((uint8*)V$1 + 8ll) );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$6;
	*(double*)THIS$1 = *(double*)((uint8*)V$1 + 16ll);
	label$1638:;
}

void _ZN4MATH4CVECaSERKS0_( struct $N4MATH4CVECE* THIS$1, struct $N4MATH4CVECE* V$1 )
{
	label$1639:;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)V$1 + 16ll);
	*(double*)THIS$1 = *(double*)V$1;
	label$1640:;
}

double _ZNK4MATH4CVEC13CHNORM__get__Ev( struct $N4MATH4CVECE* THIS$1 )
{
	double TMP$754$1;
	double TMP$755$1;
	double TMP$756$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1641:;
	TMP$756$1 = __builtin_fabs( *(double*)THIS$1 );
	TMP$755$1 = __builtin_fabs( (__builtin_sin( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll)) );
	TMP$754$1 = __builtin_fabs( (__builtin_cos( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll)) );
	double vr$16 = _ZN4MATH3MAXERKdS1_S1_( &TMP$754$1, &TMP$755$1, &TMP$756$1 );
	fb$result$1 = vr$16;
	goto label$1642;
	label$1642:;
	return fb$result$1;
}

double _ZNK4MATH4CVEC13MANORM__get__Ev( struct $N4MATH4CVECE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1643:;
	fb$result$1 = (__builtin_fabs( (__builtin_cos( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll)) ) + __builtin_fabs( (__builtin_sin( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll)) )) + __builtin_fabs( *(double*)THIS$1 );
	goto label$1644;
	label$1644:;
	return fb$result$1;
}

double _ZNK4MATH4CVEC11NORM__get__Ev( struct $N4MATH4CVECE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1645:;
	double I$1;
	I$1 = __builtin_cos( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll);
	double J$1;
	J$1 = -(__builtin_sin( *(double*)((uint8*)THIS$1 + 8ll) )) * *(double*)((uint8*)THIS$1 + 16ll);
	fb$result$1 = __builtin_sqrt( (((I$1 * I$1) + (J$1 * J$1)) + (*(double*)THIS$1 * *(double*)THIS$1)) );
	goto label$1646;
	label$1646:;
	return fb$result$1;
}

double _ZNK4MATH4CVEC10RHO__get__Ev( struct $N4MATH4CVECE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1647:;
	fb$result$1 = *(double*)((uint8*)THIS$1 + 16ll);
	goto label$1648;
	label$1648:;
	return fb$result$1;
}

void _ZN4MATH4CVEC10RHO__set__ERKd( struct $N4MATH4CVECE* THIS$1, double* N$1 )
{
	label$1649:;
	if( *N$1 < 0x0p+0 ) goto label$1652;
	{
		*(double*)((uint8*)THIS$1 + 16ll) = *N$1;
	}
	goto label$1651;
	label$1652:;
	{
		double TMP$757$2;
		double TMP$758$2;
		TMP$758$2 = 0x1.921FB54442D18p+2;
		TMP$757$2 = *(double*)((uint8*)THIS$1 + 16ll) + 0x1.921FB54442D18p+1;
		double vr$7 = _ZN4MATH4WRAPERKdS1_( (double*)&TMP$757$2, (double*)&TMP$758$2 );
		*(double*)((uint8*)THIS$1 + 8ll) = vr$7;
		*(double*)((uint8*)THIS$1 + 16ll) = -(*N$1);
	}
	label$1651:;
	label$1650:;
}

double _ZNK4MATH4CVEC13SQNORM__get__Ev( struct $N4MATH4CVECE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1653:;
	double I$1;
	I$1 = __builtin_cos( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll);
	double J$1;
	J$1 = -(__builtin_sin( *(double*)((uint8*)THIS$1 + 8ll) )) * *(double*)((uint8*)THIS$1 + 16ll);
	fb$result$1 = ((I$1 * I$1) + (J$1 * J$1)) + (*(double*)THIS$1 * *(double*)THIS$1);
	goto label$1654;
	label$1654:;
	return fb$result$1;
}

double _ZNK4MATH4CVEC12THETA__get__Ev( struct $N4MATH4CVECE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1655:;
	fb$result$1 = *(double*)((uint8*)THIS$1 + 8ll);
	goto label$1656;
	label$1656:;
	return fb$result$1;
}

void _ZN4MATH4CVEC12THETA__set__ERKd( struct $N4MATH4CVECE* THIS$1, double* N$1 )
{
	double TMP$759$1;
	label$1657:;
	TMP$759$1 = 0x1.921FB54442D18p+2;
	double vr$1 = _ZN4MATH4WRAPERKdS1_( N$1, (double*)&TMP$759$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$1;
	label$1658:;
}

double _ZNK4MATH4CVEC8X__get__Ev( struct $N4MATH4CVECE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1659:;
	fb$result$1 = __builtin_cos( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll);
	goto label$1660;
	label$1660:;
	return fb$result$1;
}

void _ZN4MATH4CVEC8X__set__ERKd( struct $N4MATH4CVECE* THIS$1, double* N$1 )
{
	label$1661:;
	double J$1;
	J$1 = -(__builtin_sin( *(double*)((uint8*)THIS$1 + 8ll) )) * *(double*)((uint8*)THIS$1 + 16ll);
	double vr$6 = _ZN4MATH5THETAERKdS1_( N$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$6;
	double vr$9 = _ZN4MATH5HYPOTERKdS1_( N$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$9;
	label$1662:;
}

struct $N4MATH4VEC2E _ZNK4MATH4CVEC9XY__get__Ev( struct $N4MATH4CVECE* THIS$1 )
{
	double TMP$761$1;
	double TMP$762$1;
	struct $N4MATH4VEC2E fb$result$1;
	label$1663:;
	TMP$762$1 = -(__builtin_sin( *(double*)((uint8*)THIS$1 + 8ll) )) * *(double*)((uint8*)THIS$1 + 16ll);
	TMP$761$1 = __builtin_cos( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll);
	_ZN4MATH4VEC2C1ERKdS2_( &fb$result$1, &TMP$761$1, &TMP$762$1 );
	goto label$1664;
	label$1664:;
	return fb$result$1;
}

void _ZN4MATH4CVEC9XY__set__ERKNS_4VEC2E( struct $N4MATH4CVECE* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	label$1665:;
	double vr$0 = _ZNK4MATH4VEC212THETA__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$0;
	double vr$2 = _ZNK4MATH4VEC211NORM__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$2;
	label$1666:;
}

void _ZN4MATH4CVEC9XY__set__ERKNS_4PVECE( struct $N4MATH4CVECE* THIS$1, struct $N4MATH4PVECE* V$1 )
{
	label$1667:;
	double vr$0 = _ZNK4MATH4PVEC12THETA__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$0;
	double vr$2 = _ZNK4MATH4PVEC10RHO__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$2;
	label$1668:;
}

double _ZNK4MATH4CVEC8Y__get__Ev( struct $N4MATH4CVECE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1669:;
	fb$result$1 = -(__builtin_sin( *(double*)((uint8*)THIS$1 + 8ll) )) * *(double*)((uint8*)THIS$1 + 16ll);
	goto label$1670;
	label$1670:;
	return fb$result$1;
}

void _ZN4MATH4CVEC8Y__set__ERKd( struct $N4MATH4CVECE* THIS$1, double* N$1 )
{
	label$1671:;
	double I$1;
	I$1 = __builtin_cos( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll);
	double vr$5 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, N$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$5;
	double vr$8 = _ZN4MATH5HYPOTERKdS1_( (double*)&I$1, N$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$8;
	label$1672:;
}

struct $N4MATH4CVECE _ZN4MATH4CVEC13FROMCARTESIANERKdS2_S2_( double* N1$1, double* N2$1, double* N3$1 )
{
	double TMP$764$1;
	double TMP$765$1;
	struct $N4MATH4CVECE fb$result$1;
	label$1673:;
	double vr$0 = _ZN4MATH5HYPOTERKdS1_( N1$1, N2$1 );
	TMP$765$1 = vr$0;
	double vr$2 = _ZN4MATH5THETAERKdS1_( N1$1, N2$1 );
	TMP$764$1 = vr$2;
	_ZN4MATH4CVECC1ERKdS2_S2_( &fb$result$1, (double*)&TMP$764$1, (double*)&TMP$765$1, N3$1 );
	goto label$1674;
	label$1674:;
	return fb$result$1;
}

boolean _ZNK4MATH4CVEC6ISNULLEv( struct $N4MATH4CVECE* THIS$1 )
{
	boolean TMP$766$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1675:;
	double vr$1 = _ZNK4MATH4CVEC11NORM__get__Ev( THIS$1 );
	if( vr$1 != 0x0p+0 ) goto label$1677;
	TMP$766$1 = (boolean)1ll;
	goto label$1678;
	label$1677:;
	TMP$766$1 = (boolean)0ll;
	label$1678:;
	fb$result$1 = TMP$766$1;
	goto label$1676;
	label$1676:;
	return fb$result$1;
}

boolean _ZNK4MATH4CVEC6ISNULLERKd( struct $N4MATH4CVECE* THIS$1, double* T$1 )
{
	boolean TMP$767$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1679:;
	double vr$1 = _ZNK4MATH4CVEC11NORM__get__Ev( THIS$1 );
	if( vr$1 > __builtin_fabs( *T$1 ) ) goto label$1681;
	TMP$767$1 = (boolean)1ll;
	goto label$1682;
	label$1681:;
	TMP$767$1 = (boolean)0ll;
	label$1682:;
	fb$result$1 = TMP$767$1;
	goto label$1680;
	label$1680:;
	return fb$result$1;
}

boolean _ZNK4MATH4CVEC6ISUNITEv( struct $N4MATH4CVECE* THIS$1 )
{
	boolean TMP$768$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1683:;
	double vr$1 = _ZNK4MATH4CVEC11NORM__get__Ev( THIS$1 );
	if( vr$1 != 0x1.p+0 ) goto label$1685;
	TMP$768$1 = (boolean)1ll;
	goto label$1686;
	label$1685:;
	TMP$768$1 = (boolean)0ll;
	label$1686:;
	fb$result$1 = TMP$768$1;
	goto label$1684;
	label$1684:;
	return fb$result$1;
}

boolean _ZNK4MATH4CVEC6ISUNITERKd( struct $N4MATH4CVECE* THIS$1, double* T$1 )
{
	boolean TMP$769$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1687:;
	double vr$1 = _ZNK4MATH4CVEC11NORM__get__Ev( THIS$1 );
	if( __builtin_fabs( (-vr$1 + 0x1.p+0) ) > __builtin_fabs( *T$1 ) ) goto label$1689;
	TMP$769$1 = (boolean)1ll;
	goto label$1690;
	label$1689:;
	TMP$769$1 = (boolean)0ll;
	label$1690:;
	fb$result$1 = TMP$769$1;
	goto label$1688;
	label$1688:;
	return fb$result$1;
}

double _ZNK4MATH4CVEC6MINORMERKd( struct $N4MATH4CVECE* THIS$1, double* E$1 )
{
	double TMP$770$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1691:;
	if( *E$1 == 0x0p+0 ) goto label$1693;
	double vr$10 = pow( __builtin_fabs( (__builtin_cos( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll)) ), *E$1 );
	double vr$17 = pow( __builtin_fabs( (__builtin_sin( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll)) ), *E$1 );
	double vr$22 = pow( __builtin_fabs( *(double*)THIS$1 ), *E$1 );
	double vr$24 = pow( (vr$10 + vr$17) + vr$22, 0x1.p+0 / *E$1 );
	TMP$770$1 = vr$24;
	goto label$1694;
	label$1693:;
	TMP$770$1 = 0x0p+0;
	label$1694:;
	fb$result$1 = TMP$770$1;
	goto label$1692;
	label$1692:;
	return fb$result$1;
}

FBSTRING* _ZNK4MATH4CVEC6TOJSONERKb( struct $N4MATH4CVECE* THIS$1, boolean* A$1 )
{
	FBSTRING TMP$772$1;
	FBSTRING TMP$773$1;
	FBSTRING TMP$774$1;
	FBSTRING TMP$775$1;
	FBSTRING TMP$776$1;
	FBSTRING TMP$777$1;
	FBSTRING TMP$778$1;
	FBSTRING TMP$779$1;
	FBSTRING TMP$780$1;
	FBSTRING TMP$781$1;
	FBSTRING TMP$782$1;
	FBSTRING TMP$783$1;
	FBSTRING TMP$784$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$1695:;
	if( *A$1 == (boolean)0ll ) goto label$1697;
	FBSTRING* vr$3 = fb_DoubleToStr( *(double*)THIS$1 );
	FBSTRING* vr$5 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 16ll) );
	FBSTRING* vr$7 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 8ll) );
	__builtin_memset( &TMP$773$1, 0, 24ll );
	FBSTRING* vr$10 = fb_StrConcat( &TMP$773$1, (void*)"[", 2ll, (void*)vr$7, -1ll );
	__builtin_memset( &TMP$774$1, 0, 24ll );
	FBSTRING* vr$13 = fb_StrConcat( &TMP$774$1, (void*)vr$10, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$775$1, 0, 24ll );
	FBSTRING* vr$16 = fb_StrConcat( &TMP$775$1, (void*)vr$13, -1ll, (void*)vr$5, -1ll );
	__builtin_memset( &TMP$776$1, 0, 24ll );
	FBSTRING* vr$19 = fb_StrConcat( &TMP$776$1, (void*)vr$16, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$777$1, 0, 24ll );
	FBSTRING* vr$22 = fb_StrConcat( &TMP$777$1, (void*)vr$19, -1ll, (void*)vr$3, -1ll );
	__builtin_memset( &TMP$778$1, 0, 24ll );
	FBSTRING* vr$25 = fb_StrConcat( &TMP$778$1, (void*)vr$22, -1ll, (void*)"]", 2ll );
	fb_StrInit( (void*)&TMP$772$1, -1ll, (void*)vr$25, -1ll, 0 );
	goto label$1698;
	label$1697:;
	FBSTRING* vr$28 = fb_DoubleToStr( *(double*)THIS$1 );
	FBSTRING* vr$30 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 16ll) );
	FBSTRING* vr$32 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 8ll) );
	__builtin_memset( &TMP$779$1, 0, 24ll );
	FBSTRING* vr$35 = fb_StrConcat( &TMP$779$1, (void*)"{\x22phi\x22:", 8ll, (void*)vr$32, -1ll );
	__builtin_memset( &TMP$780$1, 0, 24ll );
	FBSTRING* vr$38 = fb_StrConcat( &TMP$780$1, (void*)vr$35, -1ll, (void*)",\x22rho\x22:", 8ll );
	__builtin_memset( &TMP$781$1, 0, 24ll );
	FBSTRING* vr$41 = fb_StrConcat( &TMP$781$1, (void*)vr$38, -1ll, (void*)vr$30, -1ll );
	__builtin_memset( &TMP$782$1, 0, 24ll );
	FBSTRING* vr$44 = fb_StrConcat( &TMP$782$1, (void*)vr$41, -1ll, (void*)",\x22z\x22:", 6ll );
	__builtin_memset( &TMP$783$1, 0, 24ll );
	FBSTRING* vr$47 = fb_StrConcat( &TMP$783$1, (void*)vr$44, -1ll, (void*)vr$28, -1ll );
	__builtin_memset( &TMP$784$1, 0, 24ll );
	FBSTRING* vr$50 = fb_StrConcat( &TMP$784$1, (void*)vr$47, -1ll, (void*)"}", 2ll );
	fb_StrInit( (void*)&TMP$772$1, -1ll, (void*)vr$50, -1ll, 0 );
	label$1698:;
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)&TMP$772$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&TMP$772$1 );
	goto label$1696;
	label$1696:;
	FBSTRING* vr$56 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$56;
}

struct $N4MATH4CVECE _ZN4MATH4CVEC5UNITXEv( void )
{
	double TMP$786$1;
	double TMP$787$1;
	double TMP$788$1;
	struct $N4MATH4CVECE fb$result$1;
	label$1699:;
	TMP$788$1 = 0x0p+0;
	TMP$787$1 = 0x1.p+0;
	TMP$786$1 = 0x0p+0;
	_ZN4MATH4CVECC1ERKdS2_S2_( &fb$result$1, (double*)&TMP$786$1, (double*)&TMP$787$1, (double*)&TMP$788$1 );
	goto label$1700;
	label$1700:;
	return fb$result$1;
}

struct $N4MATH4CVECE _ZN4MATH4CVEC5UNITYEv( void )
{
	double TMP$790$1;
	double TMP$791$1;
	double TMP$792$1;
	struct $N4MATH4CVECE fb$result$1;
	label$1701:;
	TMP$792$1 = 0x0p+0;
	TMP$791$1 = 0x1.p+0;
	TMP$790$1 = 0x1.2D97C7F3321D2p+2;
	_ZN4MATH4CVECC1ERKdS2_S2_( &fb$result$1, (double*)&TMP$790$1, (double*)&TMP$791$1, (double*)&TMP$792$1 );
	goto label$1702;
	label$1702:;
	return fb$result$1;
}

struct $N4MATH4CVECE _ZN4MATH4CVEC5UNITZEv( void )
{
	double TMP$794$1;
	double TMP$795$1;
	double TMP$796$1;
	struct $N4MATH4CVECE fb$result$1;
	label$1703:;
	TMP$796$1 = 0x1.p+0;
	TMP$795$1 = 0x0p+0;
	TMP$794$1 = 0x0p+0;
	_ZN4MATH4CVECC1ERKdS2_S2_( &fb$result$1, (double*)&TMP$794$1, (double*)&TMP$795$1, (double*)&TMP$796$1 );
	goto label$1704;
	label$1704:;
	return fb$result$1;
}

void _ZN4MATH4VEC4C1Ev( struct $N4MATH4VEC4E* THIS$1 )
{
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	label$1705:;
	label$1706:;
}

void _ZN4MATH4VEC4C1ERKNS_8RATIONALES3_S3_S3_( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH8RATIONALE* R1$1, struct $N4MATH8RATIONALE* R2$1, struct $N4MATH8RATIONALE* R3$1, struct $N4MATH8RATIONALE* R4$1 )
{
	label$1707:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	double vr$8 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	*(double*)THIS$1 = vr$8;
	double vr$10 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$10;
	double vr$12 = _ZNK4MATH8RATIONALcvdEv( R3$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$12;
	double vr$14 = _ZNK4MATH8RATIONALcvdEv( R4$1 );
	*(double*)((uint8*)THIS$1 + 24ll) = vr$14;
	label$1708:;
}

void _ZN4MATH4VEC4C1ERKNS_8RATIONALES3_S3_RKd( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH8RATIONALE* R1$1, struct $N4MATH8RATIONALE* R2$1, struct $N4MATH8RATIONALE* R3$1, double* N4$1 )
{
	label$1709:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	double vr$8 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	*(double*)THIS$1 = vr$8;
	double vr$10 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$10;
	double vr$12 = _ZNK4MATH8RATIONALcvdEv( R3$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$12;
	*(double*)((uint8*)THIS$1 + 24ll) = *N4$1;
	label$1710:;
}

void _ZN4MATH4VEC4C1ERKNS_8RATIONALES3_RKdS3_( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH8RATIONALE* R1$1, struct $N4MATH8RATIONALE* R2$1, double* N3$1, struct $N4MATH8RATIONALE* R4$1 )
{
	label$1711:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	double vr$8 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	*(double*)THIS$1 = vr$8;
	double vr$10 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$10;
	*(double*)((uint8*)THIS$1 + 16ll) = *N3$1;
	double vr$14 = _ZNK4MATH8RATIONALcvdEv( R4$1 );
	*(double*)((uint8*)THIS$1 + 24ll) = vr$14;
	label$1712:;
}

void _ZN4MATH4VEC4C1ERKNS_8RATIONALES3_RKdS5_( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH8RATIONALE* R1$1, struct $N4MATH8RATIONALE* R2$1, double* N3$1, double* N4$1 )
{
	label$1713:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	double vr$8 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	*(double*)THIS$1 = vr$8;
	double vr$10 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$10;
	*(double*)((uint8*)THIS$1 + 16ll) = *N3$1;
	*(double*)((uint8*)THIS$1 + 24ll) = *N4$1;
	label$1714:;
}

void _ZN4MATH4VEC4C1ERKNS_8RATIONALERKdS3_S3_( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH8RATIONALE* R1$1, double* N2$1, struct $N4MATH8RATIONALE* R3$1, struct $N4MATH8RATIONALE* R4$1 )
{
	label$1715:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	double vr$8 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	*(double*)THIS$1 = vr$8;
	*(double*)((uint8*)THIS$1 + 8ll) = *N2$1;
	double vr$12 = _ZNK4MATH8RATIONALcvdEv( R3$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$12;
	double vr$14 = _ZNK4MATH8RATIONALcvdEv( R4$1 );
	*(double*)((uint8*)THIS$1 + 24ll) = vr$14;
	label$1716:;
}

void _ZN4MATH4VEC4C1ERKNS_8RATIONALERKdS3_S5_( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH8RATIONALE* R1$1, double* N2$1, struct $N4MATH8RATIONALE* R3$1, double* N4$1 )
{
	label$1717:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	double vr$8 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	*(double*)THIS$1 = vr$8;
	*(double*)((uint8*)THIS$1 + 8ll) = *N2$1;
	double vr$12 = _ZNK4MATH8RATIONALcvdEv( R3$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$12;
	*(double*)((uint8*)THIS$1 + 24ll) = *N4$1;
	label$1718:;
}

void _ZN4MATH4VEC4C1ERKNS_8RATIONALERKdS5_S3_( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH8RATIONALE* R1$1, double* N2$1, double* N3$1, struct $N4MATH8RATIONALE* R4$1 )
{
	label$1719:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	double vr$8 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	*(double*)THIS$1 = vr$8;
	*(double*)((uint8*)THIS$1 + 8ll) = *N2$1;
	*(double*)((uint8*)THIS$1 + 16ll) = *N3$1;
	double vr$14 = _ZNK4MATH8RATIONALcvdEv( R4$1 );
	*(double*)((uint8*)THIS$1 + 24ll) = vr$14;
	label$1720:;
}

void _ZN4MATH4VEC4C1ERKNS_8RATIONALERKdS5_S5_( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH8RATIONALE* R1$1, double* N2$1, double* N3$1, double* N4$1 )
{
	label$1721:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	double vr$8 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	*(double*)THIS$1 = vr$8;
	*(double*)((uint8*)THIS$1 + 8ll) = *N2$1;
	*(double*)((uint8*)THIS$1 + 16ll) = *N3$1;
	*(double*)((uint8*)THIS$1 + 24ll) = *N4$1;
	label$1722:;
}

void _ZN4MATH4VEC4C1ERKdRKNS_8RATIONALES5_S5_( struct $N4MATH4VEC4E* THIS$1, double* N1$1, struct $N4MATH8RATIONALE* R2$1, struct $N4MATH8RATIONALE* R3$1, struct $N4MATH8RATIONALE* R4$1 )
{
	label$1723:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *N1$1;
	double vr$10 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$10;
	double vr$12 = _ZNK4MATH8RATIONALcvdEv( R3$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$12;
	double vr$14 = _ZNK4MATH8RATIONALcvdEv( R4$1 );
	*(double*)((uint8*)THIS$1 + 24ll) = vr$14;
	label$1724:;
}

void _ZN4MATH4VEC4C1ERKdRKNS_8RATIONALES5_S2_( struct $N4MATH4VEC4E* THIS$1, double* N1$1, struct $N4MATH8RATIONALE* R2$1, struct $N4MATH8RATIONALE* R3$1, double* N4$1 )
{
	label$1725:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *N1$1;
	double vr$10 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$10;
	double vr$12 = _ZNK4MATH8RATIONALcvdEv( R3$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$12;
	*(double*)((uint8*)THIS$1 + 24ll) = *N4$1;
	label$1726:;
}

void _ZN4MATH4VEC4C1ERKdRKNS_8RATIONALES2_S5_( struct $N4MATH4VEC4E* THIS$1, double* N1$1, struct $N4MATH8RATIONALE* R2$1, double* N3$1, struct $N4MATH8RATIONALE* R4$1 )
{
	label$1727:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *N1$1;
	double vr$10 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$10;
	*(double*)((uint8*)THIS$1 + 16ll) = *N3$1;
	double vr$14 = _ZNK4MATH8RATIONALcvdEv( R4$1 );
	*(double*)((uint8*)THIS$1 + 24ll) = vr$14;
	label$1728:;
}

void _ZN4MATH4VEC4C1ERKdRKNS_8RATIONALES2_S2_( struct $N4MATH4VEC4E* THIS$1, double* N1$1, struct $N4MATH8RATIONALE* R2$1, double* N3$1, double* N4$1 )
{
	label$1729:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *N1$1;
	double vr$10 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$10;
	*(double*)((uint8*)THIS$1 + 16ll) = *N3$1;
	*(double*)((uint8*)THIS$1 + 24ll) = *N4$1;
	label$1730:;
}

void _ZN4MATH4VEC4C1ERKdS2_RKNS_8RATIONALES5_( struct $N4MATH4VEC4E* THIS$1, double* N1$1, double* N2$1, struct $N4MATH8RATIONALE* R3$1, struct $N4MATH8RATIONALE* R4$1 )
{
	label$1731:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *N1$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *N2$1;
	double vr$12 = _ZNK4MATH8RATIONALcvdEv( R3$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$12;
	double vr$14 = _ZNK4MATH8RATIONALcvdEv( R4$1 );
	*(double*)((uint8*)THIS$1 + 24ll) = vr$14;
	label$1732:;
}

void _ZN4MATH4VEC4C1ERKdS2_RKNS_8RATIONALES2_( struct $N4MATH4VEC4E* THIS$1, double* N1$1, double* N2$1, struct $N4MATH8RATIONALE* R3$1, double* N4$1 )
{
	label$1733:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *N1$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *N2$1;
	double vr$12 = _ZNK4MATH8RATIONALcvdEv( R3$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$12;
	*(double*)((uint8*)THIS$1 + 24ll) = *N4$1;
	label$1734:;
}

void _ZN4MATH4VEC4C1ERKdS2_S2_RKNS_8RATIONALE( struct $N4MATH4VEC4E* THIS$1, double* N1$1, double* N2$1, double* N3$1, struct $N4MATH8RATIONALE* R4$1 )
{
	label$1735:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *N1$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *N2$1;
	*(double*)((uint8*)THIS$1 + 16ll) = *N3$1;
	double vr$14 = _ZNK4MATH8RATIONALcvdEv( R4$1 );
	*(double*)((uint8*)THIS$1 + 24ll) = vr$14;
	label$1736:;
}

void _ZN4MATH4VEC4C1ERKdS2_S2_S2_( struct $N4MATH4VEC4E* THIS$1, double* N1$1, double* N2$1, double* N3$1, double* N4$1 )
{
	label$1737:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *N1$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *N2$1;
	*(double*)((uint8*)THIS$1 + 16ll) = *N3$1;
	*(double*)((uint8*)THIS$1 + 24ll) = *N4$1;
	label$1738:;
}

void _ZN4MATH4VEC4C1ERKNS_4VEC2ERKNS_8RATIONALES6_( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4VEC2E* V$1, struct $N4MATH8RATIONALE* R1$1, struct $N4MATH8RATIONALE* R2$1 )
{
	label$1739:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	double vr$12 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$12;
	double vr$14 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	*(double*)((uint8*)THIS$1 + 24ll) = vr$14;
	label$1740:;
}

void _ZN4MATH4VEC4C1ERKNS_4VEC2ERKNS_8RATIONALERKd( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4VEC2E* V$1, struct $N4MATH8RATIONALE* R1$1, double* N2$1 )
{
	label$1741:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	double vr$12 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$12;
	*(double*)((uint8*)THIS$1 + 24ll) = *N2$1;
	label$1742:;
}

void _ZN4MATH4VEC4C1ERKNS_4VEC2ERKdRKNS_8RATIONALE( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4VEC2E* V$1, double* N1$1, struct $N4MATH8RATIONALE* R2$1 )
{
	label$1743:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *N1$1;
	double vr$14 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	*(double*)((uint8*)THIS$1 + 24ll) = vr$14;
	label$1744:;
}

void _ZN4MATH4VEC4C1ERKNS_4VEC2ERKdS5_( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4VEC2E* V$1, double* N1$1, double* N2$1 )
{
	label$1745:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *N1$1;
	*(double*)((uint8*)THIS$1 + 24ll) = *N2$1;
	label$1746:;
}

void _ZN4MATH4VEC4C1ERKNS_4PVECERKNS_8RATIONALES6_( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4PVECE* V$1, struct $N4MATH8RATIONALE* R1$1, struct $N4MATH8RATIONALE* R2$1 )
{
	label$1747:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	double vr$8 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
	*(double*)THIS$1 = vr$8;
	double vr$10 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$10;
	double vr$12 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$12;
	double vr$14 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	*(double*)((uint8*)THIS$1 + 24ll) = vr$14;
	label$1748:;
}

void _ZN4MATH4VEC4C1ERKNS_4PVECERKNS_8RATIONALERKd( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4PVECE* V$1, struct $N4MATH8RATIONALE* R1$1, double* N2$1 )
{
	label$1749:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	double vr$8 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
	*(double*)THIS$1 = vr$8;
	double vr$10 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$10;
	double vr$12 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$12;
	*(double*)((uint8*)THIS$1 + 24ll) = *N2$1;
	label$1750:;
}

void _ZN4MATH4VEC4C1ERKNS_4PVECERKdRKNS_8RATIONALE( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4PVECE* V$1, double* N1$1, struct $N4MATH8RATIONALE* R2$1 )
{
	label$1751:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	double vr$8 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
	*(double*)THIS$1 = vr$8;
	double vr$10 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$10;
	*(double*)((uint8*)THIS$1 + 16ll) = *N1$1;
	double vr$14 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	*(double*)((uint8*)THIS$1 + 24ll) = vr$14;
	label$1752:;
}

void _ZN4MATH4VEC4C1ERKNS_4PVECERKdS5_( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4PVECE* V$1, double* N1$1, double* N2$1 )
{
	label$1753:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	double vr$8 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
	*(double*)THIS$1 = vr$8;
	double vr$10 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$10;
	*(double*)((uint8*)THIS$1 + 16ll) = *N1$1;
	*(double*)((uint8*)THIS$1 + 24ll) = *N2$1;
	label$1754:;
}

void _ZN4MATH4VEC4C1ERKNS_4VEC3ERKNS_8RATIONALE( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4VEC3E* V$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$1755:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)V$1 + 16ll);
	double vr$14 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	*(double*)((uint8*)THIS$1 + 24ll) = vr$14;
	label$1756:;
}

void _ZN4MATH4VEC4C1ERKNS_4VEC3ERKd( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4VEC3E* V$1, double* N$1 )
{
	label$1757:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)V$1 + 16ll);
	*(double*)((uint8*)THIS$1 + 24ll) = *N$1;
	label$1758:;
}

void _ZN4MATH4VEC4C1ERKNS_4CVECERKNS_8RATIONALE( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4CVECE* V$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$1759:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	double vr$8 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
	*(double*)THIS$1 = vr$8;
	double vr$10 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$10;
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)V$1;
	double vr$14 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	*(double*)((uint8*)THIS$1 + 24ll) = vr$14;
	label$1760:;
}

void _ZN4MATH4VEC4C1ERKNS_4CVECERKd( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4CVECE* V$1, double* N$1 )
{
	label$1761:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	double vr$8 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
	*(double*)THIS$1 = vr$8;
	double vr$10 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$10;
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 24ll) = *N$1;
	label$1762:;
}

void _ZN4MATH4VEC4C1ERKS0_( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4VEC4E* V$1 )
{
	label$1763:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)V$1 + 16ll);
	*(double*)((uint8*)THIS$1 + 24ll) = *(double*)((uint8*)V$1 + 24ll);
	label$1764:;
}

void _ZN4MATH4VEC4pLERKS0_( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4VEC4E* V$1 )
{
	label$1765:;
	*(double*)THIS$1 = *(double*)THIS$1 + *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) + *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) + *(double*)((uint8*)V$1 + 16ll);
	*(double*)((uint8*)THIS$1 + 24ll) = *(double*)((uint8*)THIS$1 + 24ll) + *(double*)((uint8*)V$1 + 24ll);
	label$1766:;
}

void _ZN4MATH4VEC4mIERKS0_( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4VEC4E* V$1 )
{
	label$1767:;
	*(double*)THIS$1 = *(double*)THIS$1 - *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) - *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) - *(double*)((uint8*)V$1 + 16ll);
	*(double*)((uint8*)THIS$1 + 24ll) = *(double*)((uint8*)THIS$1 + 24ll) - *(double*)((uint8*)V$1 + 24ll);
	label$1768:;
}

void _ZN4MATH4VEC4mLERKNS_8RATIONALE( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$1769:;
	double N$1;
	double vr$0 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	N$1 = vr$0;
	*(double*)THIS$1 = *(double*)THIS$1 * N$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) * N$1;
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) * N$1;
	*(double*)((uint8*)THIS$1 + 24ll) = *(double*)((uint8*)THIS$1 + 24ll) * N$1;
	label$1770:;
}

void _ZN4MATH4VEC4mLERKd( struct $N4MATH4VEC4E* THIS$1, double* N$1 )
{
	label$1771:;
	*(double*)THIS$1 = *(double*)THIS$1 * *N$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) * *N$1;
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) * *N$1;
	*(double*)((uint8*)THIS$1 + 24ll) = *(double*)((uint8*)THIS$1 + 24ll) * *N$1;
	label$1772:;
}

void _ZN4MATH4VEC4mLERKS0_( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4VEC4E* V$1 )
{
	label$1773:;
	*(double*)THIS$1 = *(double*)THIS$1 * *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) * *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) * *(double*)((uint8*)V$1 + 16ll);
	*(double*)((uint8*)THIS$1 + 24ll) = *(double*)((uint8*)THIS$1 + 24ll) * *(double*)((uint8*)V$1 + 24ll);
	label$1774:;
}

void _ZN4MATH4VEC4dVERKNS_8RATIONALE( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$1775:;
	double N$1;
	double vr$0 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	N$1 = vr$0;
	if( N$1 == 0x0p+0 ) goto label$1778;
	{
		*(double*)THIS$1 = *(double*)THIS$1 / N$1;
		*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) / N$1;
		*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) / N$1;
		*(double*)((uint8*)THIS$1 + 24ll) = *(double*)((uint8*)THIS$1 + 24ll) / N$1;
	}
	goto label$1777;
	label$1778:;
	{
		*(double*)THIS$1 = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 8ll) = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 16ll) = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 24ll) = 0x0p+0;
	}
	label$1777:;
	label$1776:;
}

void _ZN4MATH4VEC4dVERKd( struct $N4MATH4VEC4E* THIS$1, double* N$1 )
{
	label$1779:;
	if( *N$1 == 0x0p+0 ) goto label$1782;
	{
		*(double*)THIS$1 = *(double*)THIS$1 / *N$1;
		*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) / *N$1;
		*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) / *N$1;
		*(double*)((uint8*)THIS$1 + 24ll) = *(double*)((uint8*)THIS$1 + 24ll) / *N$1;
	}
	goto label$1781;
	label$1782:;
	{
		*(double*)THIS$1 = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 8ll) = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 16ll) = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 24ll) = 0x0p+0;
	}
	label$1781:;
	label$1780:;
}

void _ZN4MATH4VEC4dVERKS0_( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4VEC4E* V$1 )
{
	double TMP$797$1;
	double TMP$798$1;
	double TMP$799$1;
	double TMP$800$1;
	label$1783:;
	if( *(double*)V$1 == 0x0p+0 ) goto label$1785;
	TMP$797$1 = *(double*)THIS$1 / *(double*)V$1;
	goto label$1789;
	label$1785:;
	TMP$797$1 = 0x0p+0;
	label$1789:;
	*(double*)THIS$1 = TMP$797$1;
	if( *(double*)((uint8*)V$1 + 8ll) == 0x0p+0 ) goto label$1786;
	TMP$798$1 = *(double*)((uint8*)THIS$1 + 8ll) / *(double*)((uint8*)V$1 + 8ll);
	goto label$1790;
	label$1786:;
	TMP$798$1 = 0x0p+0;
	label$1790:;
	*(double*)((uint8*)THIS$1 + 8ll) = TMP$798$1;
	if( *(double*)((uint8*)V$1 + 16ll) == 0x0p+0 ) goto label$1787;
	TMP$799$1 = *(double*)((uint8*)THIS$1 + 16ll) / *(double*)((uint8*)V$1 + 16ll);
	goto label$1791;
	label$1787:;
	TMP$799$1 = 0x0p+0;
	label$1791:;
	*(double*)((uint8*)THIS$1 + 16ll) = TMP$799$1;
	if( *(double*)((uint8*)V$1 + 24ll) == 0x0p+0 ) goto label$1788;
	TMP$800$1 = *(double*)((uint8*)THIS$1 + 24ll) / *(double*)((uint8*)V$1 + 24ll);
	goto label$1792;
	label$1788:;
	TMP$800$1 = 0x0p+0;
	label$1792:;
	*(double*)((uint8*)THIS$1 + 24ll) = TMP$800$1;
	label$1784:;
}

FBSTRING* _ZNK4MATH4VEC4cv8FBSTRINGEv( struct $N4MATH4VEC4E* THIS$1 )
{
	FBSTRING TMP$803$1;
	FBSTRING TMP$804$1;
	FBSTRING TMP$805$1;
	FBSTRING TMP$806$1;
	FBSTRING TMP$807$1;
	FBSTRING TMP$808$1;
	FBSTRING TMP$809$1;
	FBSTRING TMP$810$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$1793:;
	FBSTRING* vr$2 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 24ll) );
	FBSTRING* vr$4 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 16ll) );
	FBSTRING* vr$6 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 8ll) );
	FBSTRING* vr$8 = fb_DoubleToStr( *(double*)THIS$1 );
	__builtin_memset( &TMP$803$1, 0, 24ll );
	FBSTRING* vr$11 = fb_StrConcat( &TMP$803$1, (void*)"<math.vec4>{ x : ", 18ll, (void*)vr$8, -1ll );
	__builtin_memset( &TMP$804$1, 0, 24ll );
	FBSTRING* vr$14 = fb_StrConcat( &TMP$804$1, (void*)vr$11, -1ll, (void*)" , y : ", 8ll );
	__builtin_memset( &TMP$805$1, 0, 24ll );
	FBSTRING* vr$17 = fb_StrConcat( &TMP$805$1, (void*)vr$14, -1ll, (void*)vr$6, -1ll );
	__builtin_memset( &TMP$806$1, 0, 24ll );
	FBSTRING* vr$20 = fb_StrConcat( &TMP$806$1, (void*)vr$17, -1ll, (void*)" , z : ", 8ll );
	__builtin_memset( &TMP$807$1, 0, 24ll );
	FBSTRING* vr$23 = fb_StrConcat( &TMP$807$1, (void*)vr$20, -1ll, (void*)vr$4, -1ll );
	__builtin_memset( &TMP$808$1, 0, 24ll );
	FBSTRING* vr$26 = fb_StrConcat( &TMP$808$1, (void*)vr$23, -1ll, (void*)" , w : ", 8ll );
	__builtin_memset( &TMP$809$1, 0, 24ll );
	FBSTRING* vr$29 = fb_StrConcat( &TMP$809$1, (void*)vr$26, -1ll, (void*)vr$2, -1ll );
	__builtin_memset( &TMP$810$1, 0, 24ll );
	FBSTRING* vr$32 = fb_StrConcat( &TMP$810$1, (void*)vr$29, -1ll, (void*)" }", 3ll );
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$32, -1ll, 0 );
	goto label$1794;
	label$1794:;
	FBSTRING* vr$35 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$35;
}

void _ZN4MATH4VEC4aSERKNS_4VEC2E( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	label$1795:;
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = 0x0p+0;
	*(double*)((uint8*)THIS$1 + 24ll) = 0x0p+0;
	label$1796:;
}

void _ZN4MATH4VEC4aSERKNS_4PVECE( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4PVECE* V$1 )
{
	label$1797:;
	double vr$0 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
	*(double*)THIS$1 = vr$0;
	double vr$2 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$2;
	*(double*)((uint8*)THIS$1 + 16ll) = 0x0p+0;
	*(double*)((uint8*)THIS$1 + 24ll) = 0x0p+0;
	label$1798:;
}

void _ZN4MATH4VEC4aSERKNS_4VEC3E( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4VEC3E* V$1 )
{
	label$1799:;
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)V$1 + 16ll);
	*(double*)((uint8*)THIS$1 + 24ll) = 0x0p+0;
	label$1800:;
}

void _ZN4MATH4VEC4aSERKNS_4CVECE( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4CVECE* V$1 )
{
	label$1801:;
	double vr$0 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
	*(double*)THIS$1 = vr$0;
	double vr$2 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$2;
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 24ll) = 0x0p+0;
	label$1802:;
}

void _ZN4MATH4VEC4aSERKS0_( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4VEC4E* V$1 )
{
	label$1803:;
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)V$1 + 16ll);
	*(double*)((uint8*)THIS$1 + 24ll) = *(double*)((uint8*)V$1 + 24ll);
	label$1804:;
}

double _ZNK4MATH4VEC413CHNORM__get__Ev( struct $N4MATH4VEC4E* THIS$1 )
{
	double TMP$811$1;
	double TMP$812$1;
	double TMP$813$1;
	double TMP$814$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1805:;
	TMP$814$1 = __builtin_fabs( *(double*)((uint8*)THIS$1 + 24ll) );
	TMP$813$1 = __builtin_fabs( *(double*)((uint8*)THIS$1 + 16ll) );
	TMP$812$1 = __builtin_fabs( *(double*)((uint8*)THIS$1 + 8ll) );
	TMP$811$1 = __builtin_fabs( *(double*)THIS$1 );
	double vr$13 = _ZN4MATH3MAXERKdS1_S1_S1_( &TMP$811$1, &TMP$812$1, &TMP$813$1, &TMP$814$1 );
	fb$result$1 = vr$13;
	goto label$1806;
	label$1806:;
	return fb$result$1;
}

double _ZNK4MATH4VEC413MANORM__get__Ev( struct $N4MATH4VEC4E* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1807:;
	fb$result$1 = ((__builtin_fabs( *(double*)THIS$1 ) + __builtin_fabs( *(double*)((uint8*)THIS$1 + 8ll) )) + __builtin_fabs( *(double*)((uint8*)THIS$1 + 16ll) )) + __builtin_fabs( *(double*)((uint8*)THIS$1 + 24ll) );
	goto label$1808;
	label$1808:;
	return fb$result$1;
}

double _ZNK4MATH4VEC411NORM__get__Ev( struct $N4MATH4VEC4E* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1809:;
	fb$result$1 = __builtin_sqrt( (((*(double*)THIS$1 * *(double*)THIS$1) + (*(double*)((uint8*)THIS$1 + 8ll) * *(double*)((uint8*)THIS$1 + 8ll))) + (((*(double*)((uint8*)THIS$1 + 16ll) * *(double*)((uint8*)THIS$1 + 16ll)) * *(double*)((uint8*)THIS$1 + 24ll)) * *(double*)((uint8*)THIS$1 + 24ll))) );
	goto label$1810;
	label$1810:;
	return fb$result$1;
}

void _ZN4MATH4VEC411NORM__set__ERKNS_8RATIONALE( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$1811:;
	double N$1;
	double vr$0 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	N$1 = vr$0;
	if( N$1 == 0x0p+0 ) goto label$1814;
	{
		double H$2;
		double vr$1 = _ZNK4MATH4VEC411NORM__get__Ev( (struct $N4MATH4VEC4E*)THIS$1 );
		H$2 = vr$1;
		if( H$2 == 0x0p+0 ) goto label$1816;
		{
			*(double*)THIS$1 = (*(double*)THIS$1 / H$2) * N$1;
			*(double*)((uint8*)THIS$1 + 8ll) = (*(double*)((uint8*)THIS$1 + 8ll) / H$2) * N$1;
			*(double*)((uint8*)THIS$1 + 16ll) = (*(double*)((uint8*)THIS$1 + 16ll) / H$2) * N$1;
			*(double*)((uint8*)THIS$1 + 24ll) = (*(double*)((uint8*)THIS$1 + 24ll) / H$2) * N$1;
		}
		label$1816:;
		label$1815:;
	}
	goto label$1813;
	label$1814:;
	{
		*(double*)THIS$1 = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 8ll) = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 16ll) = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 24ll) = 0x0p+0;
	}
	label$1813:;
	label$1812:;
}

void _ZN4MATH4VEC411NORM__set__ERKd( struct $N4MATH4VEC4E* THIS$1, double* N$1 )
{
	label$1817:;
	if( *N$1 == 0x0p+0 ) goto label$1820;
	{
		double H$2;
		double vr$1 = _ZNK4MATH4VEC411NORM__get__Ev( (struct $N4MATH4VEC4E*)THIS$1 );
		H$2 = vr$1;
		if( H$2 == 0x0p+0 ) goto label$1822;
		{
			*(double*)THIS$1 = (*(double*)THIS$1 / H$2) * *N$1;
			*(double*)((uint8*)THIS$1 + 8ll) = (*(double*)((uint8*)THIS$1 + 8ll) / H$2) * *N$1;
			*(double*)((uint8*)THIS$1 + 16ll) = (*(double*)((uint8*)THIS$1 + 16ll) / H$2) * *N$1;
			*(double*)((uint8*)THIS$1 + 24ll) = (*(double*)((uint8*)THIS$1 + 24ll) / H$2) * *N$1;
		}
		label$1822:;
		label$1821:;
	}
	goto label$1819;
	label$1820:;
	{
		*(double*)THIS$1 = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 8ll) = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 16ll) = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 24ll) = 0x0p+0;
	}
	label$1819:;
	label$1818:;
}

double _ZNK4MATH4VEC413SQNORM__get__Ev( struct $N4MATH4VEC4E* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1823:;
	fb$result$1 = ((*(double*)THIS$1 * *(double*)THIS$1) + (*(double*)((uint8*)THIS$1 + 8ll) * *(double*)((uint8*)THIS$1 + 8ll))) + (((*(double*)((uint8*)THIS$1 + 16ll) * *(double*)((uint8*)THIS$1 + 16ll)) * *(double*)((uint8*)THIS$1 + 24ll)) * *(double*)((uint8*)THIS$1 + 24ll));
	goto label$1824;
	label$1824:;
	return fb$result$1;
}

double _ZNK4MATH4VEC412THETA__get__Ev( struct $N4MATH4VEC4E* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1825:;
	double vr$5 = _ZN4MATH5THETAERKdS1_( (double*)THIS$1, (double*)((uint8*)THIS$1 + 8ll) );
	fb$result$1 = vr$5;
	goto label$1826;
	label$1826:;
	return fb$result$1;
}

void _ZN4MATH4VEC412THETA__set__ERKNS_8RATIONALE( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$1827:;
	double H$1;
	double vr$4 = _ZN4MATH5HYPOTERKdS1_( (double*)THIS$1, (double*)((uint8*)THIS$1 + 8ll) );
	H$1 = vr$4;
	if( H$1 == 0x0p+0 ) goto label$1830;
	{
		double N$2;
		double vr$5 = _ZNK4MATH8RATIONALcvdEv( R$1 );
		N$2 = vr$5;
		*(double*)THIS$1 = __builtin_cos( N$2 ) * H$1;
		*(double*)((uint8*)THIS$1 + 8ll) = __builtin_sin( N$2 ) * H$1;
	}
	label$1830:;
	label$1829:;
	label$1828:;
}

void _ZN4MATH4VEC412THETA__set__ERKd( struct $N4MATH4VEC4E* THIS$1, double* N$1 )
{
	label$1831:;
	double H$1;
	double vr$4 = _ZN4MATH5HYPOTERKdS1_( (double*)THIS$1, (double*)((uint8*)THIS$1 + 8ll) );
	H$1 = vr$4;
	if( H$1 == 0x0p+0 ) goto label$1834;
	{
		*(double*)THIS$1 = __builtin_cos( *N$1 ) * H$1;
		*(double*)((uint8*)THIS$1 + 8ll) = __builtin_sin( *N$1 ) * H$1;
	}
	label$1834:;
	label$1833:;
	label$1832:;
}

struct $N4MATH4VEC2E _ZNK4MATH4VEC49XY__get__Ev( struct $N4MATH4VEC4E* THIS$1 )
{
	struct $N4MATH4VEC2E fb$result$1;
	label$1835:;
	_ZN4MATH4VEC2C1ERKdS2_( &fb$result$1, (double*)THIS$1, (double*)((uint8*)THIS$1 + 8ll) );
	goto label$1836;
	label$1836:;
	return fb$result$1;
}

void _ZN4MATH4VEC49XY__set__ERKNS_4VEC2E( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	label$1837:;
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	label$1838:;
}

void _ZN4MATH4VEC49XY__set__ERKNS_4PVECE( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4PVECE* V$1 )
{
	label$1839:;
	double vr$0 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
	*(double*)THIS$1 = vr$0;
	double vr$2 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$2;
	label$1840:;
}

struct $N4MATH4VEC3E _ZNK4MATH4VEC410XYZ__get__Ev( struct $N4MATH4VEC4E* THIS$1 )
{
	struct $N4MATH4VEC3E fb$result$1;
	label$1841:;
	_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, (double*)THIS$1, (double*)((uint8*)THIS$1 + 8ll), (double*)((uint8*)THIS$1 + 16ll) );
	goto label$1842;
	label$1842:;
	return fb$result$1;
}

void _ZN4MATH4VEC410XYZ__set__ERKNS_4VEC3E( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4VEC3E* V$1 )
{
	label$1843:;
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)V$1 + 16ll);
	label$1844:;
}

void _ZN4MATH4VEC410XYZ__set__ERKNS_4CVECE( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4CVECE* V$1 )
{
	label$1845:;
	double vr$0 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
	*(double*)THIS$1 = vr$0;
	double vr$2 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$2;
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)V$1;
	label$1846:;
}

boolean _ZNK4MATH4VEC46ISNULLEv( struct $N4MATH4VEC4E* THIS$1 )
{
	boolean TMP$817$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1847:;
	double vr$1 = _ZNK4MATH4VEC411NORM__get__Ev( THIS$1 );
	if( vr$1 != 0x0p+0 ) goto label$1849;
	TMP$817$1 = (boolean)1ll;
	goto label$1850;
	label$1849:;
	TMP$817$1 = (boolean)0ll;
	label$1850:;
	fb$result$1 = TMP$817$1;
	goto label$1848;
	label$1848:;
	return fb$result$1;
}

boolean _ZNK4MATH4VEC46ISNULLERKd( struct $N4MATH4VEC4E* THIS$1, double* T$1 )
{
	boolean TMP$818$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1851:;
	double vr$1 = _ZNK4MATH4VEC411NORM__get__Ev( THIS$1 );
	if( vr$1 > __builtin_fabs( *T$1 ) ) goto label$1853;
	TMP$818$1 = (boolean)1ll;
	goto label$1854;
	label$1853:;
	TMP$818$1 = (boolean)0ll;
	label$1854:;
	fb$result$1 = TMP$818$1;
	goto label$1852;
	label$1852:;
	return fb$result$1;
}

boolean _ZNK4MATH4VEC46ISUNITEv( struct $N4MATH4VEC4E* THIS$1 )
{
	boolean TMP$819$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1855:;
	double vr$1 = _ZNK4MATH4VEC411NORM__get__Ev( THIS$1 );
	if( vr$1 != 0x1.p+0 ) goto label$1857;
	TMP$819$1 = (boolean)1ll;
	goto label$1858;
	label$1857:;
	TMP$819$1 = (boolean)0ll;
	label$1858:;
	fb$result$1 = TMP$819$1;
	goto label$1856;
	label$1856:;
	return fb$result$1;
}

boolean _ZNK4MATH4VEC46ISUNITERKd( struct $N4MATH4VEC4E* THIS$1, double* T$1 )
{
	boolean TMP$820$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1859:;
	double vr$1 = _ZNK4MATH4VEC411NORM__get__Ev( THIS$1 );
	if( __builtin_fabs( (-vr$1 + 0x1.p+0) ) > __builtin_fabs( *T$1 ) ) goto label$1861;
	TMP$820$1 = (boolean)1ll;
	goto label$1862;
	label$1861:;
	TMP$820$1 = (boolean)0ll;
	label$1862:;
	fb$result$1 = TMP$820$1;
	goto label$1860;
	label$1860:;
	return fb$result$1;
}

double _ZNK4MATH4VEC46MINORMERKd( struct $N4MATH4VEC4E* THIS$1, double* E$1 )
{
	double TMP$821$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1863:;
	if( *E$1 == 0x0p+0 ) goto label$1865;
	double vr$7 = pow( __builtin_fabs( *(double*)THIS$1 ), *E$1 );
	double vr$11 = pow( __builtin_fabs( *(double*)((uint8*)THIS$1 + 8ll) ), *E$1 );
	double vr$16 = pow( __builtin_fabs( *(double*)((uint8*)THIS$1 + 16ll) ), *E$1 );
	double vr$21 = pow( __builtin_fabs( *(double*)((uint8*)THIS$1 + 24ll) ), *E$1 );
	double vr$23 = pow( ((vr$7 + vr$11) + vr$16) + vr$21, 0x1.p+0 / *E$1 );
	TMP$821$1 = vr$23;
	goto label$1866;
	label$1865:;
	TMP$821$1 = 0x0p+0;
	label$1866:;
	fb$result$1 = TMP$821$1;
	goto label$1864;
	label$1864:;
	return fb$result$1;
}

void _ZN4MATH4VEC49NORMALISEEv( struct $N4MATH4VEC4E* THIS$1 )
{
	label$1867:;
	double H$1;
	double vr$0 = _ZNK4MATH4VEC411NORM__get__Ev( (struct $N4MATH4VEC4E*)THIS$1 );
	H$1 = vr$0;
	if( ((int64)-(H$1 > 0x0p+0) & (int64)-(H$1 != 0x1.p+0)) == 0ll ) goto label$1870;
	{
		*(double*)THIS$1 = *(double*)THIS$1 / H$1;
		*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) / H$1;
		*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) / H$1;
		*(double*)((uint8*)THIS$1 + 24ll) = *(double*)((uint8*)THIS$1 + 24ll) / H$1;
	}
	label$1870:;
	label$1869:;
	label$1868:;
}

FBSTRING* _ZNK4MATH4VEC46TOJSONERKb( struct $N4MATH4VEC4E* THIS$1, boolean* A$1 )
{
	FBSTRING TMP$823$1;
	FBSTRING TMP$824$1;
	FBSTRING TMP$825$1;
	FBSTRING TMP$826$1;
	FBSTRING TMP$827$1;
	FBSTRING TMP$828$1;
	FBSTRING TMP$829$1;
	FBSTRING TMP$830$1;
	FBSTRING TMP$831$1;
	FBSTRING TMP$832$1;
	FBSTRING TMP$833$1;
	FBSTRING TMP$834$1;
	FBSTRING TMP$835$1;
	FBSTRING TMP$836$1;
	FBSTRING TMP$837$1;
	FBSTRING TMP$838$1;
	FBSTRING TMP$839$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$1871:;
	if( *A$1 == (boolean)0ll ) goto label$1873;
	FBSTRING* vr$3 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 24ll) );
	FBSTRING* vr$5 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 16ll) );
	FBSTRING* vr$7 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 8ll) );
	FBSTRING* vr$9 = fb_DoubleToStr( *(double*)THIS$1 );
	__builtin_memset( &TMP$824$1, 0, 24ll );
	FBSTRING* vr$12 = fb_StrConcat( &TMP$824$1, (void*)"[", 2ll, (void*)vr$9, -1ll );
	__builtin_memset( &TMP$825$1, 0, 24ll );
	FBSTRING* vr$15 = fb_StrConcat( &TMP$825$1, (void*)vr$12, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$826$1, 0, 24ll );
	FBSTRING* vr$18 = fb_StrConcat( &TMP$826$1, (void*)vr$15, -1ll, (void*)vr$7, -1ll );
	__builtin_memset( &TMP$827$1, 0, 24ll );
	FBSTRING* vr$21 = fb_StrConcat( &TMP$827$1, (void*)vr$18, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$828$1, 0, 24ll );
	FBSTRING* vr$24 = fb_StrConcat( &TMP$828$1, (void*)vr$21, -1ll, (void*)vr$5, -1ll );
	__builtin_memset( &TMP$829$1, 0, 24ll );
	FBSTRING* vr$27 = fb_StrConcat( &TMP$829$1, (void*)vr$24, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$830$1, 0, 24ll );
	FBSTRING* vr$30 = fb_StrConcat( &TMP$830$1, (void*)vr$27, -1ll, (void*)vr$3, -1ll );
	__builtin_memset( &TMP$831$1, 0, 24ll );
	FBSTRING* vr$33 = fb_StrConcat( &TMP$831$1, (void*)vr$30, -1ll, (void*)"]", 2ll );
	fb_StrInit( (void*)&TMP$823$1, -1ll, (void*)vr$33, -1ll, 0 );
	goto label$1874;
	label$1873:;
	FBSTRING* vr$36 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 24ll) );
	FBSTRING* vr$38 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 16ll) );
	FBSTRING* vr$40 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 8ll) );
	FBSTRING* vr$42 = fb_DoubleToStr( *(double*)THIS$1 );
	__builtin_memset( &TMP$832$1, 0, 24ll );
	FBSTRING* vr$45 = fb_StrConcat( &TMP$832$1, (void*)"{\x22x\x22:", 6ll, (void*)vr$42, -1ll );
	__builtin_memset( &TMP$833$1, 0, 24ll );
	FBSTRING* vr$48 = fb_StrConcat( &TMP$833$1, (void*)vr$45, -1ll, (void*)",\x22y\x22:", 6ll );
	__builtin_memset( &TMP$834$1, 0, 24ll );
	FBSTRING* vr$51 = fb_StrConcat( &TMP$834$1, (void*)vr$48, -1ll, (void*)vr$40, -1ll );
	__builtin_memset( &TMP$835$1, 0, 24ll );
	FBSTRING* vr$54 = fb_StrConcat( &TMP$835$1, (void*)vr$51, -1ll, (void*)",\x22z\x22:", 6ll );
	__builtin_memset( &TMP$836$1, 0, 24ll );
	FBSTRING* vr$57 = fb_StrConcat( &TMP$836$1, (void*)vr$54, -1ll, (void*)vr$38, -1ll );
	__builtin_memset( &TMP$837$1, 0, 24ll );
	FBSTRING* vr$60 = fb_StrConcat( &TMP$837$1, (void*)vr$57, -1ll, (void*)",\x22w\x22:", 6ll );
	__builtin_memset( &TMP$838$1, 0, 24ll );
	FBSTRING* vr$63 = fb_StrConcat( &TMP$838$1, (void*)vr$60, -1ll, (void*)vr$36, -1ll );
	__builtin_memset( &TMP$839$1, 0, 24ll );
	FBSTRING* vr$66 = fb_StrConcat( &TMP$839$1, (void*)vr$63, -1ll, (void*)"}", 2ll );
	fb_StrInit( (void*)&TMP$823$1, -1ll, (void*)vr$66, -1ll, 0 );
	label$1874:;
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)&TMP$823$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&TMP$823$1 );
	goto label$1872;
	label$1872:;
	FBSTRING* vr$72 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$72;
}

struct $N4MATH4VEC4E _ZN4MATH4VEC45UNITXEv( void )
{
	double TMP$841$1;
	double TMP$842$1;
	double TMP$843$1;
	double TMP$844$1;
	struct $N4MATH4VEC4E fb$result$1;
	label$1875:;
	TMP$844$1 = 0x0p+0;
	TMP$843$1 = 0x0p+0;
	TMP$842$1 = 0x0p+0;
	TMP$841$1 = 0x1.p+0;
	_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, (double*)&TMP$841$1, (double*)&TMP$842$1, (double*)&TMP$843$1, (double*)&TMP$844$1 );
	goto label$1876;
	label$1876:;
	return fb$result$1;
}

struct $N4MATH4VEC4E _ZN4MATH4VEC45UNITYEv( void )
{
	double TMP$846$1;
	double TMP$847$1;
	double TMP$848$1;
	double TMP$849$1;
	struct $N4MATH4VEC4E fb$result$1;
	label$1877:;
	TMP$849$1 = 0x0p+0;
	TMP$848$1 = 0x0p+0;
	TMP$847$1 = 0x1.p+0;
	TMP$846$1 = 0x0p+0;
	_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, (double*)&TMP$846$1, (double*)&TMP$847$1, (double*)&TMP$848$1, (double*)&TMP$849$1 );
	goto label$1878;
	label$1878:;
	return fb$result$1;
}

struct $N4MATH4VEC4E _ZN4MATH4VEC45UNITZEv( void )
{
	double TMP$851$1;
	double TMP$852$1;
	double TMP$853$1;
	double TMP$854$1;
	struct $N4MATH4VEC4E fb$result$1;
	label$1879:;
	TMP$854$1 = 0x0p+0;
	TMP$853$1 = 0x1.p+0;
	TMP$852$1 = 0x0p+0;
	TMP$851$1 = 0x0p+0;
	_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, (double*)&TMP$851$1, (double*)&TMP$852$1, (double*)&TMP$853$1, (double*)&TMP$854$1 );
	goto label$1880;
	label$1880:;
	return fb$result$1;
}

struct $N4MATH4VEC4E _ZN4MATH4VEC45UNITWEv( void )
{
	double TMP$856$1;
	double TMP$857$1;
	double TMP$858$1;
	double TMP$859$1;
	struct $N4MATH4VEC4E fb$result$1;
	label$1881:;
	TMP$859$1 = 0x1.p+0;
	TMP$858$1 = 0x0p+0;
	TMP$857$1 = 0x0p+0;
	TMP$856$1 = 0x0p+0;
	_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, (double*)&TMP$856$1, (double*)&TMP$857$1, (double*)&TMP$858$1, (double*)&TMP$859$1 );
	goto label$1882;
	label$1882:;
	return fb$result$1;
}

struct $N4MATH4VEC4E _ZN4MATHplERKNS_4VEC4ES2_( struct $N4MATH4VEC4E* V1$1, struct $N4MATH4VEC4E* V2$1 )
{
	double TMP$861$1;
	double TMP$862$1;
	double TMP$863$1;
	double TMP$864$1;
	struct $N4MATH4VEC4E fb$result$1;
	label$1883:;
	TMP$864$1 = *(double*)((uint8*)V1$1 + 24ll) + *(double*)((uint8*)V2$1 + 24ll);
	TMP$863$1 = *(double*)((uint8*)V1$1 + 16ll) + *(double*)((uint8*)V2$1 + 16ll);
	TMP$862$1 = *(double*)((uint8*)V1$1 + 8ll) + *(double*)((uint8*)V2$1 + 8ll);
	TMP$861$1 = *(double*)V1$1 + *(double*)V2$1;
	_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, &TMP$861$1, &TMP$862$1, &TMP$863$1, &TMP$864$1 );
	goto label$1884;
	label$1884:;
	return fb$result$1;
}

struct $N4MATH4VEC4E _ZN4MATHmiERKNS_4VEC4ES2_( struct $N4MATH4VEC4E* V1$1, struct $N4MATH4VEC4E* V2$1 )
{
	double TMP$866$1;
	double TMP$867$1;
	double TMP$868$1;
	double TMP$869$1;
	struct $N4MATH4VEC4E fb$result$1;
	label$1885:;
	TMP$869$1 = *(double*)((uint8*)V1$1 + 24ll) - *(double*)((uint8*)V2$1 + 24ll);
	TMP$868$1 = *(double*)((uint8*)V1$1 + 16ll) - *(double*)((uint8*)V2$1 + 16ll);
	TMP$867$1 = *(double*)((uint8*)V1$1 + 8ll) - *(double*)((uint8*)V2$1 + 8ll);
	TMP$866$1 = *(double*)V1$1 - *(double*)V2$1;
	_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, &TMP$866$1, &TMP$867$1, &TMP$868$1, &TMP$869$1 );
	goto label$1886;
	label$1886:;
	return fb$result$1;
}

struct $N4MATH4VEC4E _ZN4MATHmlERKNS_4VEC4ERKd( struct $N4MATH4VEC4E* V$1, double* N$1 )
{
	double TMP$871$1;
	double TMP$872$1;
	double TMP$873$1;
	double TMP$874$1;
	struct $N4MATH4VEC4E fb$result$1;
	label$1887:;
	TMP$874$1 = *(double*)((uint8*)V$1 + 24ll) * *N$1;
	TMP$873$1 = *(double*)((uint8*)V$1 + 16ll) * *N$1;
	TMP$872$1 = *(double*)((uint8*)V$1 + 8ll) * *N$1;
	TMP$871$1 = *(double*)V$1 * *N$1;
	_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, &TMP$871$1, &TMP$872$1, &TMP$873$1, &TMP$874$1 );
	goto label$1888;
	label$1888:;
	return fb$result$1;
}

struct $N4MATH4VEC4E _ZN4MATHmlERKdRKNS_4VEC4E( double* N$1, struct $N4MATH4VEC4E* V$1 )
{
	double TMP$876$1;
	double TMP$877$1;
	double TMP$878$1;
	double TMP$879$1;
	struct $N4MATH4VEC4E fb$result$1;
	label$1889:;
	TMP$879$1 = *N$1 * *(double*)((uint8*)V$1 + 24ll);
	TMP$878$1 = *N$1 * *(double*)((uint8*)V$1 + 16ll);
	TMP$877$1 = *N$1 * *(double*)((uint8*)V$1 + 8ll);
	TMP$876$1 = *N$1 * *(double*)V$1;
	_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, &TMP$876$1, &TMP$877$1, &TMP$878$1, &TMP$879$1 );
	goto label$1890;
	label$1890:;
	return fb$result$1;
}

struct $N4MATH4VEC4E _ZN4MATHmlERKNS_4VEC4ES2_( struct $N4MATH4VEC4E* V1$1, struct $N4MATH4VEC4E* V2$1 )
{
	double TMP$881$1;
	double TMP$882$1;
	double TMP$883$1;
	double TMP$884$1;
	struct $N4MATH4VEC4E fb$result$1;
	label$1891:;
	TMP$884$1 = *(double*)((uint8*)V1$1 + 24ll) * *(double*)((uint8*)V2$1 + 24ll);
	TMP$883$1 = *(double*)((uint8*)V1$1 + 16ll) * *(double*)((uint8*)V2$1 + 16ll);
	TMP$882$1 = *(double*)((uint8*)V1$1 + 8ll) * *(double*)((uint8*)V2$1 + 8ll);
	TMP$881$1 = *(double*)V1$1 * *(double*)V2$1;
	_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, &TMP$881$1, &TMP$882$1, &TMP$883$1, &TMP$884$1 );
	goto label$1892;
	label$1892:;
	return fb$result$1;
}

struct $N4MATH4VEC4E _ZN4MATHdvERKNS_4VEC4ERKd( struct $N4MATH4VEC4E* V$1, double* N$1 )
{
	double TMP$886$1;
	double TMP$887$1;
	double TMP$888$1;
	double TMP$889$1;
	struct $N4MATH4VEC4E TMP$891$1;
	struct $N4MATH4VEC4E fb$result$1;
	label$1893:;
	if( *N$1 == 0x0p+0 ) goto label$1895;
	TMP$889$1 = *(double*)((uint8*)V$1 + 24ll) / *N$1;
	TMP$888$1 = *(double*)((uint8*)V$1 + 16ll) / *N$1;
	TMP$887$1 = *(double*)((uint8*)V$1 + 8ll) / *N$1;
	TMP$886$1 = *(double*)V$1 / *N$1;
	_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &TMP$891$1, &TMP$886$1, &TMP$887$1, &TMP$888$1, &TMP$889$1 );
	goto label$1896;
	label$1895:;
	_ZN4MATH4VEC4C1Ev( &TMP$891$1 );
	label$1896:;
	_ZN4MATH4VEC4C1ERKS0_( &fb$result$1, (struct $N4MATH4VEC4E*)&TMP$891$1 );
	goto label$1894;
	label$1894:;
	return fb$result$1;
}

struct $N4MATH4VEC4E _ZN4MATHdvERKNS_4VEC4ES2_( struct $N4MATH4VEC4E* V1$1, struct $N4MATH4VEC4E* V2$1 )
{
	double TMP$893$1;
	double TMP$894$1;
	double TMP$895$1;
	double TMP$896$1;
	struct $N4MATH4VEC4E fb$result$1;
	label$1897:;
	if( *(double*)((uint8*)V2$1 + 24ll) == 0x0p+0 ) goto label$1902;
	TMP$896$1 = *(double*)((uint8*)V1$1 + 24ll) / *(double*)((uint8*)V2$1 + 24ll);
	goto label$1903;
	label$1902:;
	TMP$896$1 = 0x0p+0;
	label$1903:;
	if( *(double*)((uint8*)V2$1 + 16ll) == 0x0p+0 ) goto label$1901;
	TMP$895$1 = *(double*)((uint8*)V1$1 + 16ll) / *(double*)((uint8*)V2$1 + 16ll);
	goto label$1904;
	label$1901:;
	TMP$895$1 = 0x0p+0;
	label$1904:;
	if( *(double*)((uint8*)V2$1 + 8ll) == 0x0p+0 ) goto label$1900;
	TMP$894$1 = *(double*)((uint8*)V1$1 + 8ll) / *(double*)((uint8*)V2$1 + 8ll);
	goto label$1905;
	label$1900:;
	TMP$894$1 = 0x0p+0;
	label$1905:;
	if( *(double*)V2$1 == 0x0p+0 ) goto label$1899;
	TMP$893$1 = *(double*)V1$1 / *(double*)V2$1;
	goto label$1906;
	label$1899:;
	TMP$893$1 = 0x0p+0;
	label$1906:;
	_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, &TMP$893$1, &TMP$894$1, &TMP$895$1, &TMP$896$1 );
	goto label$1898;
	label$1898:;
	return fb$result$1;
}

boolean _ZN4MATHeqERKNS_4VEC4ES2_( struct $N4MATH4VEC4E* V1$1, struct $N4MATH4VEC4E* V2$1 )
{
	boolean TMP$897$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1907:;
	if( ((((int64)-(*(double*)V1$1 == *(double*)V2$1) & (int64)-(*(double*)((uint8*)V1$1 + 8ll) == *(double*)((uint8*)V2$1 + 8ll))) & (int64)-(*(double*)((uint8*)V1$1 + 16ll) == *(double*)((uint8*)V2$1 + 16ll))) & (int64)-(*(double*)((uint8*)V1$1 + 24ll) == *(double*)((uint8*)V2$1 + 24ll))) == 0ll ) goto label$1909;
	TMP$897$1 = (boolean)1ll;
	goto label$1910;
	label$1909:;
	TMP$897$1 = (boolean)0ll;
	label$1910:;
	fb$result$1 = TMP$897$1;
	goto label$1908;
	label$1908:;
	return fb$result$1;
}

boolean _ZN4MATHneERKNS_4VEC4ES2_( struct $N4MATH4VEC4E* V1$1, struct $N4MATH4VEC4E* V2$1 )
{
	boolean TMP$898$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1911:;
	if( ((((int64)-(*(double*)V1$1 != *(double*)V2$1) | (int64)-(*(double*)((uint8*)V1$1 + 8ll) != *(double*)((uint8*)V2$1 + 8ll))) | (int64)-(*(double*)((uint8*)V1$1 + 16ll) != *(double*)((uint8*)V2$1 + 16ll))) | (int64)-(*(double*)((uint8*)V1$1 + 24ll) != *(double*)((uint8*)V2$1 + 24ll))) == 0ll ) goto label$1913;
	TMP$898$1 = (boolean)1ll;
	goto label$1914;
	label$1913:;
	TMP$898$1 = (boolean)0ll;
	label$1914:;
	fb$result$1 = TMP$898$1;
	goto label$1912;
	label$1912:;
	return fb$result$1;
}

boolean _ZN4MATH3CMPERKNS_4VEC4ES2_RKd( struct $N4MATH4VEC4E* V1$1, struct $N4MATH4VEC4E* V2$1, double* S$1 )
{
	boolean TMP$899$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1915:;
	double T$1;
	T$1 = __builtin_fabs( *S$1 );
	if( ((((int64)-(__builtin_fabs( (*(double*)V1$1 - *(double*)V2$1) ) <= T$1) & (int64)-(__builtin_fabs( (*(double*)((uint8*)V1$1 + 8ll) - *(double*)((uint8*)V2$1 + 8ll)) ) <= T$1)) & (int64)-(__builtin_fabs( (*(double*)((uint8*)V1$1 + 16ll) - *(double*)((uint8*)V2$1 + 16ll)) ) <= T$1)) & (int64)-(__builtin_fabs( (*(double*)((uint8*)V1$1 + 24ll) - *(double*)((uint8*)V2$1 + 24ll)) ) <= T$1)) == 0ll ) goto label$1917;
	TMP$899$1 = (boolean)1ll;
	goto label$1918;
	label$1917:;
	TMP$899$1 = (boolean)0ll;
	label$1918:;
	fb$result$1 = TMP$899$1;
	goto label$1916;
	label$1916:;
	return fb$result$1;
}

double _ZN4MATH3DOTERKNS_4VEC4ES2_( struct $N4MATH4VEC4E* V1$1, struct $N4MATH4VEC4E* V2$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1919:;
	fb$result$1 = (((*(double*)V1$1 * *(double*)V2$1) + (*(double*)((uint8*)V1$1 + 8ll) * *(double*)((uint8*)V2$1 + 8ll))) + (*(double*)((uint8*)V1$1 + 16ll) * *(double*)((uint8*)V2$1 + 16ll))) + (*(double*)((uint8*)V1$1 + 24ll) * *(double*)((uint8*)V2$1 + 24ll));
	goto label$1920;
	label$1920:;
	return fb$result$1;
}

struct $N4MATH4VEC4E _ZN4MATH4LERPERKNS_4VEC4ES2_RKd( struct $N4MATH4VEC4E* V1$1, struct $N4MATH4VEC4E* V2$1, double* S$1 )
{
	double TMP$901$1;
	double TMP$902$1;
	double TMP$903$1;
	double TMP$904$1;
	struct $N4MATH4VEC4E fb$result$1;
	label$1921:;
	double T$1;
	double vr$0 = _ZN4MATH5CLAMPERKd( S$1 );
	T$1 = vr$0;
	double U$1;
	U$1 = 0x1.p+0 - T$1;
	TMP$904$1 = (*(double*)((uint8*)V1$1 + 24ll) * U$1) + (*(double*)((uint8*)V2$1 + 24ll) * T$1);
	TMP$903$1 = (*(double*)((uint8*)V1$1 + 16ll) * U$1) + (*(double*)((uint8*)V2$1 + 16ll) * T$1);
	TMP$902$1 = (*(double*)((uint8*)V1$1 + 8ll) * U$1) + (*(double*)((uint8*)V2$1 + 8ll) * T$1);
	TMP$901$1 = (*(double*)V1$1 * U$1) + (*(double*)V2$1 * T$1);
	_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, &TMP$901$1, &TMP$902$1, &TMP$903$1, &TMP$904$1 );
	goto label$1922;
	label$1922:;
	return fb$result$1;
}

void _ZN4MATH10QUATERNIONC1Ev( struct $N4MATH10QUATERNIONE* THIS$1 )
{
	label$1923:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)((uint8*)THIS$1 + 24ll) = 0x1.p+0;
	label$1924:;
}

void _ZN4MATH10QUATERNIONC1ERKdS2_S2_S2_( struct $N4MATH10QUATERNIONE* THIS$1, double* N1$1, double* N2$1, double* N3$1, double* N4$1 )
{
	label$1925:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *N1$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *N2$1;
	*(double*)((uint8*)THIS$1 + 16ll) = *N3$1;
	*(double*)((uint8*)THIS$1 + 24ll) = *N4$1;
	label$1926:;
}

void _ZN4MATH10QUATERNIONC1ERKNS_4VEC2ERKdS5_( struct $N4MATH10QUATERNIONE* THIS$1, struct $N4MATH4VEC2E* V$1, double* N1$1, double* N2$1 )
{
	label$1927:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *N1$1;
	*(double*)((uint8*)THIS$1 + 24ll) = *N2$1;
	label$1928:;
}

void _ZN4MATH10QUATERNIONC1ERKNS_4PVECERKdS5_( struct $N4MATH10QUATERNIONE* THIS$1, struct $N4MATH4PVECE* V$1, double* N1$1, double* N2$1 )
{
	label$1929:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	double vr$8 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
	*(double*)THIS$1 = vr$8;
	double vr$10 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$10;
	*(double*)((uint8*)THIS$1 + 16ll) = *N1$1;
	*(double*)((uint8*)THIS$1 + 24ll) = *N2$1;
	label$1930:;
}

void _ZN4MATH10QUATERNIONC1ERKNS_4VEC3ERKd( struct $N4MATH10QUATERNIONE* THIS$1, struct $N4MATH4VEC3E* V$1, double* N$1 )
{
	label$1931:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)V$1 + 16ll);
	*(double*)((uint8*)THIS$1 + 24ll) = *N$1;
	label$1932:;
}

void _ZN4MATH10QUATERNIONC1ERKNS_4CVECERKd( struct $N4MATH10QUATERNIONE* THIS$1, struct $N4MATH4CVECE* V$1, double* N$1 )
{
	label$1933:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	double vr$8 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
	*(double*)THIS$1 = vr$8;
	double vr$10 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$10;
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 24ll) = *N$1;
	label$1934:;
}

void _ZN4MATH10QUATERNIONC1ERKNS_4VEC4E( struct $N4MATH10QUATERNIONE* THIS$1, struct $N4MATH4VEC4E* V$1 )
{
	label$1935:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)V$1 + 16ll);
	*(double*)((uint8*)THIS$1 + 24ll) = *(double*)((uint8*)V$1 + 24ll);
	label$1936:;
}

void _ZN4MATH10QUATERNIONC1ERKS0_( struct $N4MATH10QUATERNIONE* THIS$1, struct $N4MATH10QUATERNIONE* V$1 )
{
	label$1937:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)V$1 + 16ll);
	*(double*)((uint8*)THIS$1 + 24ll) = *(double*)((uint8*)V$1 + 24ll);
	label$1938:;
}

void _ZN4MATH10QUATERNIONmLERKd( struct $N4MATH10QUATERNIONE* THIS$1, double* N$1 )
{
	label$1939:;
	*(double*)THIS$1 = *(double*)THIS$1 * *N$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) * *N$1;
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) * *N$1;
	*(double*)((uint8*)THIS$1 + 24ll) = *(double*)((uint8*)THIS$1 + 24ll) * *N$1;
	label$1940:;
}

void _ZN4MATH10QUATERNIONmLERKS0_( struct $N4MATH10QUATERNIONE* THIS$1, struct $N4MATH10QUATERNIONE* Q$1 )
{
	label$1941:;
	double I$1;
	I$1 = (((*(double*)((uint8*)THIS$1 + 24ll) * *(double*)Q$1) + (*(double*)THIS$1 * *(double*)((uint8*)Q$1 + 24ll))) + (*(double*)((uint8*)THIS$1 + 8ll) * *(double*)((uint8*)Q$1 + 16ll))) - (*(double*)((uint8*)THIS$1 + 16ll) * *(double*)((uint8*)Q$1 + 8ll));
	double J$1;
	J$1 = (((*(double*)((uint8*)THIS$1 + 24ll) * *(double*)((uint8*)Q$1 + 8ll)) - (*(double*)THIS$1 * *(double*)((uint8*)Q$1 + 16ll))) + (*(double*)((uint8*)THIS$1 + 8ll) * *(double*)((uint8*)Q$1 + 24ll))) + (*(double*)((uint8*)THIS$1 + 16ll) * *(double*)Q$1);
	double K$1;
	K$1 = (((*(double*)((uint8*)THIS$1 + 24ll) * *(double*)((uint8*)Q$1 + 16ll)) + (*(double*)THIS$1 * *(double*)((uint8*)Q$1 + 8ll))) - (*(double*)((uint8*)THIS$1 + 8ll) * *(double*)Q$1)) + (*(double*)((uint8*)THIS$1 + 16ll) * *(double*)((uint8*)Q$1 + 24ll));
	double L$1;
	L$1 = (((*(double*)((uint8*)THIS$1 + 24ll) * *(double*)((uint8*)Q$1 + 24ll)) - (*(double*)THIS$1 * *(double*)Q$1)) - (*(double*)((uint8*)THIS$1 + 8ll) * *(double*)((uint8*)Q$1 + 8ll))) - (*(double*)((uint8*)THIS$1 + 16ll) * *(double*)((uint8*)Q$1 + 16ll));
	*(double*)THIS$1 = I$1;
	*(double*)((uint8*)THIS$1 + 8ll) = J$1;
	*(double*)((uint8*)THIS$1 + 16ll) = K$1;
	*(double*)((uint8*)THIS$1 + 24ll) = L$1;
	label$1942:;
}

void _ZN4MATH10QUATERNIONdVERKd( struct $N4MATH10QUATERNIONE* THIS$1, double* N$1 )
{
	label$1943:;
	if( *N$1 == 0x0p+0 ) goto label$1946;
	{
		*(double*)THIS$1 = *(double*)THIS$1 / *N$1;
		*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) / *N$1;
		*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) / *N$1;
		*(double*)((uint8*)THIS$1 + 24ll) = *(double*)((uint8*)THIS$1 + 24ll) / *N$1;
	}
	goto label$1945;
	label$1946:;
	{
		*(double*)THIS$1 = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 8ll) = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 16ll) = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 24ll) = 0x0p+0;
	}
	label$1945:;
	label$1944:;
}

FBSTRING* _ZNK4MATH10QUATERNIONcv8FBSTRINGEv( struct $N4MATH10QUATERNIONE* THIS$1 )
{
	FBSTRING TMP$906$1;
	FBSTRING TMP$907$1;
	FBSTRING TMP$908$1;
	FBSTRING TMP$909$1;
	FBSTRING TMP$910$1;
	FBSTRING TMP$911$1;
	FBSTRING TMP$912$1;
	FBSTRING TMP$913$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$1947:;
	FBSTRING* vr$2 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 24ll) );
	FBSTRING* vr$4 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 16ll) );
	FBSTRING* vr$6 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 8ll) );
	FBSTRING* vr$8 = fb_DoubleToStr( *(double*)THIS$1 );
	__builtin_memset( &TMP$906$1, 0, 24ll );
	FBSTRING* vr$11 = fb_StrConcat( &TMP$906$1, (void*)"<math.quaternion>{ x : ", 24ll, (void*)vr$8, -1ll );
	__builtin_memset( &TMP$907$1, 0, 24ll );
	FBSTRING* vr$14 = fb_StrConcat( &TMP$907$1, (void*)vr$11, -1ll, (void*)" , y : ", 8ll );
	__builtin_memset( &TMP$908$1, 0, 24ll );
	FBSTRING* vr$17 = fb_StrConcat( &TMP$908$1, (void*)vr$14, -1ll, (void*)vr$6, -1ll );
	__builtin_memset( &TMP$909$1, 0, 24ll );
	FBSTRING* vr$20 = fb_StrConcat( &TMP$909$1, (void*)vr$17, -1ll, (void*)" , z : ", 8ll );
	__builtin_memset( &TMP$910$1, 0, 24ll );
	FBSTRING* vr$23 = fb_StrConcat( &TMP$910$1, (void*)vr$20, -1ll, (void*)vr$4, -1ll );
	__builtin_memset( &TMP$911$1, 0, 24ll );
	FBSTRING* vr$26 = fb_StrConcat( &TMP$911$1, (void*)vr$23, -1ll, (void*)" , w : ", 8ll );
	__builtin_memset( &TMP$912$1, 0, 24ll );
	FBSTRING* vr$29 = fb_StrConcat( &TMP$912$1, (void*)vr$26, -1ll, (void*)vr$2, -1ll );
	__builtin_memset( &TMP$913$1, 0, 24ll );
	FBSTRING* vr$32 = fb_StrConcat( &TMP$913$1, (void*)vr$29, -1ll, (void*)" }", 3ll );
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$32, -1ll, 0 );
	goto label$1948;
	label$1948:;
	FBSTRING* vr$35 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$35;
}

void _ZN4MATH10QUATERNIONaSERKS0_( struct $N4MATH10QUATERNIONE* THIS$1, struct $N4MATH10QUATERNIONE* Q$1 )
{
	label$1949:;
	*(double*)THIS$1 = *(double*)Q$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)Q$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)Q$1 + 16ll);
	*(double*)((uint8*)THIS$1 + 24ll) = *(double*)((uint8*)Q$1 + 24ll);
	label$1950:;
}

struct $N4MATH10QUATERNIONE _ZNK4MATH10QUATERNION16CONJUGATE__get__Ev( struct $N4MATH10QUATERNIONE* THIS$1 )
{
	double TMP$915$1;
	double TMP$916$1;
	double TMP$917$1;
	struct $N4MATH10QUATERNIONE fb$result$1;
	label$1951:;
	TMP$917$1 = -(*(double*)((uint8*)THIS$1 + 16ll));
	TMP$916$1 = -(*(double*)((uint8*)THIS$1 + 8ll));
	TMP$915$1 = -(*(double*)THIS$1);
	_ZN4MATH10QUATERNIONC1ERKdS2_S2_S2_( &fb$result$1, &TMP$915$1, &TMP$916$1, &TMP$917$1, (double*)((uint8*)THIS$1 + 24ll) );
	goto label$1952;
	label$1952:;
	return fb$result$1;
}

struct $N4MATH10QUATERNIONE _ZNK4MATH10QUATERNION14INVERSE__get__Ev( struct $N4MATH10QUATERNIONE* THIS$1 )
{
	double TMP$919$1;
	double TMP$920$1;
	double TMP$921$1;
	double TMP$922$1;
	struct $N4MATH10QUATERNIONE TMP$924$1;
	struct $N4MATH10QUATERNIONE fb$result$1;
	label$1953:;
	double H$1;
	double vr$0 = _ZNK4MATH10QUATERNION11NORM__get__Ev( THIS$1 );
	H$1 = vr$0;
	if( H$1 <= 0x0p+0 ) goto label$1955;
	TMP$922$1 = *(double*)((uint8*)THIS$1 + 24ll) / H$1;
	TMP$921$1 = -(*(double*)((uint8*)THIS$1 + 16ll)) / H$1;
	TMP$920$1 = -(*(double*)((uint8*)THIS$1 + 8ll)) / H$1;
	TMP$919$1 = -(*(double*)THIS$1) / H$1;
	_ZN4MATH10QUATERNIONC1ERKdS2_S2_S2_( &TMP$924$1, &TMP$919$1, &TMP$920$1, &TMP$921$1, &TMP$922$1 );
	goto label$1956;
	label$1955:;
	_ZN4MATH10QUATERNIONC1Ev( &TMP$924$1 );
	label$1956:;
	_ZN4MATH10QUATERNIONC1ERKS0_( &fb$result$1, (struct $N4MATH10QUATERNIONE*)&TMP$924$1 );
	goto label$1954;
	label$1954:;
	return fb$result$1;
}

double _ZNK4MATH10QUATERNION11NORM__get__Ev( struct $N4MATH10QUATERNIONE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1957:;
	fb$result$1 = __builtin_sqrt( ((((*(double*)THIS$1 * *(double*)THIS$1) + (*(double*)((uint8*)THIS$1 + 8ll) * *(double*)((uint8*)THIS$1 + 8ll))) + (*(double*)((uint8*)THIS$1 + 16ll) * *(double*)((uint8*)THIS$1 + 16ll))) + (*(double*)((uint8*)THIS$1 + 24ll) * *(double*)((uint8*)THIS$1 + 24ll))) );
	goto label$1958;
	label$1958:;
	return fb$result$1;
}

void _ZN4MATH10QUATERNION11NORM__set__ERKd( struct $N4MATH10QUATERNIONE* THIS$1, double* N$1 )
{
	label$1959:;
	if( *N$1 <= 0x0p+0 ) goto label$1962;
	{
		double H$2;
		H$2 = __builtin_sqrt( ((((*(double*)THIS$1 * *(double*)THIS$1) + (*(double*)((uint8*)THIS$1 + 8ll) * *(double*)((uint8*)THIS$1 + 8ll))) + (*(double*)((uint8*)THIS$1 + 16ll) * *(double*)((uint8*)THIS$1 + 16ll))) + (*(double*)((uint8*)THIS$1 + 24ll) * *(double*)((uint8*)THIS$1 + 24ll))) );
		if( H$2 == 0x0p+0 ) goto label$1964;
		{
			*(double*)THIS$1 = (*(double*)THIS$1 / H$2) * *N$1;
			*(double*)((uint8*)THIS$1 + 8ll) = (*(double*)((uint8*)THIS$1 + 8ll) / H$2) * *N$1;
			*(double*)((uint8*)THIS$1 + 16ll) = (*(double*)((uint8*)THIS$1 + 16ll) / H$2) * *N$1;
			*(double*)((uint8*)THIS$1 + 24ll) = (*(double*)((uint8*)THIS$1 + 24ll) / H$2) * *N$1;
		}
		label$1964:;
		label$1963:;
	}
	goto label$1961;
	label$1962:;
	{
		*(double*)THIS$1 = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 8ll) = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 16ll) = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 24ll) = 0x0p+0;
	}
	label$1961:;
	label$1960:;
}

struct $N4MATH10QUATERNIONE _ZNK4MATH10QUATERNION13VERSOR__get__Ev( struct $N4MATH10QUATERNIONE* THIS$1 )
{
	double TMP$926$1;
	double TMP$927$1;
	double TMP$928$1;
	double TMP$929$1;
	struct $N4MATH10QUATERNIONE TMP$931$1;
	struct $N4MATH10QUATERNIONE fb$result$1;
	label$1965:;
	double H$1;
	double vr$0 = _ZNK4MATH10QUATERNION11NORM__get__Ev( THIS$1 );
	H$1 = vr$0;
	if( H$1 == 0x0p+0 ) goto label$1967;
	TMP$929$1 = *(double*)((uint8*)THIS$1 + 24ll) / H$1;
	TMP$928$1 = *(double*)((uint8*)THIS$1 + 16ll) / H$1;
	TMP$927$1 = *(double*)((uint8*)THIS$1 + 8ll) / H$1;
	TMP$926$1 = *(double*)THIS$1 / H$1;
	_ZN4MATH10QUATERNIONC1ERKdS2_S2_S2_( &TMP$931$1, &TMP$926$1, &TMP$927$1, &TMP$928$1, &TMP$929$1 );
	goto label$1968;
	label$1967:;
	_ZN4MATH10QUATERNIONC1Ev( &TMP$931$1 );
	label$1968:;
	_ZN4MATH10QUATERNIONC1ERKS0_( &fb$result$1, (struct $N4MATH10QUATERNIONE*)&TMP$931$1 );
	goto label$1966;
	label$1966:;
	return fb$result$1;
}

struct $N4MATH4VEC2E _ZNK4MATH10QUATERNION9XY__get__Ev( struct $N4MATH10QUATERNIONE* THIS$1 )
{
	struct $N4MATH4VEC2E fb$result$1;
	label$1969:;
	_ZN4MATH4VEC2C1ERKdS2_( &fb$result$1, (double*)THIS$1, (double*)((uint8*)THIS$1 + 8ll) );
	goto label$1970;
	label$1970:;
	return fb$result$1;
}

void _ZN4MATH10QUATERNION9XY__set__ERKNS_4VEC2E( struct $N4MATH10QUATERNIONE* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	label$1971:;
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	label$1972:;
}

void _ZN4MATH10QUATERNION9XY__set__ERKNS_4PVECE( struct $N4MATH10QUATERNIONE* THIS$1, struct $N4MATH4PVECE* V$1 )
{
	label$1973:;
	double vr$0 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
	*(double*)THIS$1 = vr$0;
	double vr$2 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$2;
	label$1974:;
}

struct $N4MATH4VEC3E _ZNK4MATH10QUATERNION10XYZ__get__Ev( struct $N4MATH10QUATERNIONE* THIS$1 )
{
	struct $N4MATH4VEC3E fb$result$1;
	label$1975:;
	_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, (double*)THIS$1, (double*)((uint8*)THIS$1 + 8ll), (double*)((uint8*)THIS$1 + 16ll) );
	goto label$1976;
	label$1976:;
	return fb$result$1;
}

void _ZN4MATH10QUATERNION10XYZ__set__ERKNS_4VEC3E( struct $N4MATH10QUATERNIONE* THIS$1, struct $N4MATH4VEC3E* V$1 )
{
	label$1977:;
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)V$1 + 16ll);
	label$1978:;
}

void _ZN4MATH10QUATERNION10XYZ__set__ERKNS_4CVECE( struct $N4MATH10QUATERNIONE* THIS$1, struct $N4MATH4CVECE* V$1 )
{
	label$1979:;
	double vr$0 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
	*(double*)THIS$1 = vr$0;
	double vr$2 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$2;
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)V$1;
	label$1980:;
}

boolean _ZNK4MATH10QUATERNION6ISUNITEv( struct $N4MATH10QUATERNIONE* THIS$1 )
{
	boolean TMP$934$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1981:;
	double vr$1 = _ZNK4MATH10QUATERNION11NORM__get__Ev( THIS$1 );
	if( vr$1 != 0x1.p+0 ) goto label$1983;
	TMP$934$1 = (boolean)1ll;
	goto label$1984;
	label$1983:;
	TMP$934$1 = (boolean)0ll;
	label$1984:;
	fb$result$1 = TMP$934$1;
	goto label$1982;
	label$1982:;
	return fb$result$1;
}

boolean _ZNK4MATH10QUATERNION6ISUNITERKd( struct $N4MATH10QUATERNIONE* THIS$1, double* T$1 )
{
	boolean TMP$935$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1985:;
	double vr$1 = _ZNK4MATH10QUATERNION11NORM__get__Ev( THIS$1 );
	if( __builtin_fabs( (-vr$1 + 0x1.p+0) ) > __builtin_fabs( *T$1 ) ) goto label$1987;
	TMP$935$1 = (boolean)1ll;
	goto label$1988;
	label$1987:;
	TMP$935$1 = (boolean)0ll;
	label$1988:;
	fb$result$1 = TMP$935$1;
	goto label$1986;
	label$1986:;
	return fb$result$1;
}

void _ZN4MATH10QUATERNION9NORMALISEEv( struct $N4MATH10QUATERNIONE* THIS$1 )
{
	label$1989:;
	double H$1;
	double vr$0 = _ZNK4MATH10QUATERNION11NORM__get__Ev( (struct $N4MATH10QUATERNIONE*)THIS$1 );
	H$1 = vr$0;
	if( ((int64)-(H$1 > 0x0p+0) & (int64)-(H$1 != 0x1.p+0)) == 0ll ) goto label$1992;
	{
		*(double*)THIS$1 = *(double*)THIS$1 / H$1;
		*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) / H$1;
		*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) / H$1;
		*(double*)((uint8*)THIS$1 + 24ll) = *(double*)((uint8*)THIS$1 + 24ll) / H$1;
	}
	label$1992:;
	label$1991:;
	label$1990:;
}

FBSTRING* _ZNK4MATH10QUATERNION6TOJSONERKb( struct $N4MATH10QUATERNIONE* THIS$1, boolean* A$1 )
{
	FBSTRING TMP$936$1;
	FBSTRING TMP$937$1;
	FBSTRING TMP$938$1;
	FBSTRING TMP$939$1;
	FBSTRING TMP$940$1;
	FBSTRING TMP$941$1;
	FBSTRING TMP$942$1;
	FBSTRING TMP$943$1;
	FBSTRING TMP$944$1;
	FBSTRING TMP$945$1;
	FBSTRING TMP$946$1;
	FBSTRING TMP$947$1;
	FBSTRING TMP$948$1;
	FBSTRING TMP$949$1;
	FBSTRING TMP$950$1;
	FBSTRING TMP$951$1;
	FBSTRING TMP$952$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$1993:;
	if( *A$1 == (boolean)0ll ) goto label$1995;
	FBSTRING* vr$3 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 24ll) );
	FBSTRING* vr$5 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 16ll) );
	FBSTRING* vr$7 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 8ll) );
	FBSTRING* vr$9 = fb_DoubleToStr( *(double*)THIS$1 );
	__builtin_memset( &TMP$937$1, 0, 24ll );
	FBSTRING* vr$12 = fb_StrConcat( &TMP$937$1, (void*)"[", 2ll, (void*)vr$9, -1ll );
	__builtin_memset( &TMP$938$1, 0, 24ll );
	FBSTRING* vr$15 = fb_StrConcat( &TMP$938$1, (void*)vr$12, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$939$1, 0, 24ll );
	FBSTRING* vr$18 = fb_StrConcat( &TMP$939$1, (void*)vr$15, -1ll, (void*)vr$7, -1ll );
	__builtin_memset( &TMP$940$1, 0, 24ll );
	FBSTRING* vr$21 = fb_StrConcat( &TMP$940$1, (void*)vr$18, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$941$1, 0, 24ll );
	FBSTRING* vr$24 = fb_StrConcat( &TMP$941$1, (void*)vr$21, -1ll, (void*)vr$5, -1ll );
	__builtin_memset( &TMP$942$1, 0, 24ll );
	FBSTRING* vr$27 = fb_StrConcat( &TMP$942$1, (void*)vr$24, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$943$1, 0, 24ll );
	FBSTRING* vr$30 = fb_StrConcat( &TMP$943$1, (void*)vr$27, -1ll, (void*)vr$3, -1ll );
	__builtin_memset( &TMP$944$1, 0, 24ll );
	FBSTRING* vr$33 = fb_StrConcat( &TMP$944$1, (void*)vr$30, -1ll, (void*)"]", 2ll );
	fb_StrInit( (void*)&TMP$936$1, -1ll, (void*)vr$33, -1ll, 0 );
	goto label$1996;
	label$1995:;
	FBSTRING* vr$36 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 24ll) );
	FBSTRING* vr$38 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 16ll) );
	FBSTRING* vr$40 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 8ll) );
	FBSTRING* vr$42 = fb_DoubleToStr( *(double*)THIS$1 );
	__builtin_memset( &TMP$945$1, 0, 24ll );
	FBSTRING* vr$45 = fb_StrConcat( &TMP$945$1, (void*)"{\x22x\x22:", 6ll, (void*)vr$42, -1ll );
	__builtin_memset( &TMP$946$1, 0, 24ll );
	FBSTRING* vr$48 = fb_StrConcat( &TMP$946$1, (void*)vr$45, -1ll, (void*)",\x22y\x22:", 6ll );
	__builtin_memset( &TMP$947$1, 0, 24ll );
	FBSTRING* vr$51 = fb_StrConcat( &TMP$947$1, (void*)vr$48, -1ll, (void*)vr$40, -1ll );
	__builtin_memset( &TMP$948$1, 0, 24ll );
	FBSTRING* vr$54 = fb_StrConcat( &TMP$948$1, (void*)vr$51, -1ll, (void*)",\x22z\x22:", 6ll );
	__builtin_memset( &TMP$949$1, 0, 24ll );
	FBSTRING* vr$57 = fb_StrConcat( &TMP$949$1, (void*)vr$54, -1ll, (void*)vr$38, -1ll );
	__builtin_memset( &TMP$950$1, 0, 24ll );
	FBSTRING* vr$60 = fb_StrConcat( &TMP$950$1, (void*)vr$57, -1ll, (void*)",\x22w\x22:", 6ll );
	__builtin_memset( &TMP$951$1, 0, 24ll );
	FBSTRING* vr$63 = fb_StrConcat( &TMP$951$1, (void*)vr$60, -1ll, (void*)vr$36, -1ll );
	__builtin_memset( &TMP$952$1, 0, 24ll );
	FBSTRING* vr$66 = fb_StrConcat( &TMP$952$1, (void*)vr$63, -1ll, (void*)"}", 2ll );
	fb_StrInit( (void*)&TMP$936$1, -1ll, (void*)vr$66, -1ll, 0 );
	label$1996:;
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)&TMP$936$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&TMP$936$1 );
	goto label$1994;
	label$1994:;
	FBSTRING* vr$72 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$72;
}

struct $N4MATH10QUATERNIONE _ZN4MATHmlERKNS_10QUATERNIONERKd( struct $N4MATH10QUATERNIONE* Q$1, double* N$1 )
{
	double TMP$954$1;
	double TMP$955$1;
	double TMP$956$1;
	double TMP$957$1;
	struct $N4MATH10QUATERNIONE fb$result$1;
	label$1997:;
	TMP$957$1 = *(double*)((uint8*)Q$1 + 24ll) * *N$1;
	TMP$956$1 = *(double*)((uint8*)Q$1 + 16ll) * *N$1;
	TMP$955$1 = *(double*)((uint8*)Q$1 + 8ll) * *N$1;
	TMP$954$1 = *(double*)Q$1 * *N$1;
	_ZN4MATH10QUATERNIONC1ERKdS2_S2_S2_( &fb$result$1, &TMP$954$1, &TMP$955$1, &TMP$956$1, &TMP$957$1 );
	goto label$1998;
	label$1998:;
	return fb$result$1;
}

struct $N4MATH10QUATERNIONE _ZN4MATHmlERKdRKNS_10QUATERNIONE( double* N$1, struct $N4MATH10QUATERNIONE* Q$1 )
{
	double TMP$959$1;
	double TMP$960$1;
	double TMP$961$1;
	double TMP$962$1;
	struct $N4MATH10QUATERNIONE fb$result$1;
	label$1999:;
	TMP$962$1 = *N$1 * *(double*)((uint8*)Q$1 + 24ll);
	TMP$961$1 = *N$1 * *(double*)((uint8*)Q$1 + 16ll);
	TMP$960$1 = *N$1 * *(double*)((uint8*)Q$1 + 8ll);
	TMP$959$1 = *N$1 * *(double*)Q$1;
	_ZN4MATH10QUATERNIONC1ERKdS2_S2_S2_( &fb$result$1, &TMP$959$1, &TMP$960$1, &TMP$961$1, &TMP$962$1 );
	goto label$2000;
	label$2000:;
	return fb$result$1;
}

struct $N4MATH10QUATERNIONE _ZN4MATHmlERKNS_10QUATERNIONES2_( struct $N4MATH10QUATERNIONE* Q1$1, struct $N4MATH10QUATERNIONE* Q2$1 )
{
	double TMP$964$1;
	double TMP$965$1;
	double TMP$966$1;
	double TMP$967$1;
	struct $N4MATH10QUATERNIONE fb$result$1;
	label$2001:;
	TMP$967$1 = (((*(double*)((uint8*)Q1$1 + 24ll) * *(double*)((uint8*)Q2$1 + 24ll)) - (*(double*)Q1$1 * *(double*)Q2$1)) - (*(double*)((uint8*)Q1$1 + 8ll) * *(double*)((uint8*)Q2$1 + 8ll))) - (*(double*)((uint8*)Q1$1 + 16ll) * *(double*)((uint8*)Q2$1 + 16ll));
	TMP$966$1 = (((*(double*)((uint8*)Q1$1 + 24ll) * *(double*)((uint8*)Q2$1 + 16ll)) + (*(double*)Q1$1 * *(double*)((uint8*)Q2$1 + 8ll))) - (*(double*)((uint8*)Q1$1 + 8ll) * *(double*)Q2$1)) + (*(double*)((uint8*)Q1$1 + 16ll) * *(double*)((uint8*)Q2$1 + 24ll));
	TMP$965$1 = (((*(double*)((uint8*)Q1$1 + 24ll) * *(double*)((uint8*)Q2$1 + 8ll)) - (*(double*)Q1$1 * *(double*)((uint8*)Q2$1 + 16ll))) + (*(double*)((uint8*)Q1$1 + 8ll) * *(double*)((uint8*)Q2$1 + 24ll))) + (*(double*)((uint8*)Q1$1 + 16ll) * *(double*)Q2$1);
	TMP$964$1 = (((*(double*)((uint8*)Q1$1 + 24ll) * *(double*)Q2$1) + (*(double*)Q1$1 * *(double*)((uint8*)Q2$1 + 24ll))) + (*(double*)((uint8*)Q1$1 + 8ll) * *(double*)((uint8*)Q2$1 + 16ll))) - (*(double*)((uint8*)Q1$1 + 16ll) * *(double*)((uint8*)Q2$1 + 8ll));
	_ZN4MATH10QUATERNIONC1ERKdS2_S2_S2_( &fb$result$1, &TMP$964$1, &TMP$965$1, &TMP$966$1, &TMP$967$1 );
	goto label$2002;
	label$2002:;
	return fb$result$1;
}

boolean _ZN4MATHeqERKNS_10QUATERNIONES2_( struct $N4MATH10QUATERNIONE* Q1$1, struct $N4MATH10QUATERNIONE* Q2$1 )
{
	boolean TMP$968$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2003:;
	if( ((((int64)-(*(double*)Q1$1 == *(double*)Q2$1) & (int64)-(*(double*)((uint8*)Q1$1 + 8ll) == *(double*)((uint8*)Q2$1 + 8ll))) & (int64)-(*(double*)((uint8*)Q1$1 + 16ll) == *(double*)((uint8*)Q2$1 + 16ll))) & (int64)-(*(double*)((uint8*)Q1$1 + 24ll) == *(double*)((uint8*)Q2$1 + 24ll))) == 0ll ) goto label$2005;
	TMP$968$1 = (boolean)1ll;
	goto label$2006;
	label$2005:;
	TMP$968$1 = (boolean)0ll;
	label$2006:;
	fb$result$1 = TMP$968$1;
	goto label$2004;
	label$2004:;
	return fb$result$1;
}

boolean _ZN4MATHneERKNS_10QUATERNIONES2_( struct $N4MATH10QUATERNIONE* Q1$1, struct $N4MATH10QUATERNIONE* Q2$1 )
{
	boolean TMP$969$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2007:;
	if( ((((int64)-(*(double*)Q1$1 != *(double*)Q2$1) | (int64)-(*(double*)((uint8*)Q1$1 + 8ll) != *(double*)((uint8*)Q2$1 + 8ll))) | (int64)-(*(double*)((uint8*)Q1$1 + 16ll) != *(double*)((uint8*)Q2$1 + 16ll))) | (int64)-(*(double*)((uint8*)Q1$1 + 24ll) != *(double*)((uint8*)Q2$1 + 24ll))) == 0ll ) goto label$2009;
	TMP$969$1 = (boolean)1ll;
	goto label$2010;
	label$2009:;
	TMP$969$1 = (boolean)0ll;
	label$2010:;
	fb$result$1 = TMP$969$1;
	goto label$2008;
	label$2008:;
	return fb$result$1;
}

boolean _ZN4MATH3CMPERKNS_10QUATERNIONES2_RKd( struct $N4MATH10QUATERNIONE* Q1$1, struct $N4MATH10QUATERNIONE* Q2$1, double* S$1 )
{
	boolean TMP$970$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2011:;
	double T$1;
	T$1 = __builtin_fabs( *S$1 );
	if( ((((int64)-(__builtin_fabs( (*(double*)Q1$1 - *(double*)Q2$1) ) <= T$1) & (int64)-(__builtin_fabs( (*(double*)((uint8*)Q1$1 + 8ll) - *(double*)((uint8*)Q2$1 + 8ll)) ) <= T$1)) & (int64)-(__builtin_fabs( (*(double*)((uint8*)Q1$1 + 16ll) - *(double*)((uint8*)Q2$1 + 16ll)) ) <= T$1)) & (int64)-(__builtin_fabs( (*(double*)((uint8*)Q1$1 + 24ll) - *(double*)((uint8*)Q2$1 + 24ll)) ) <= T$1)) == 0ll ) goto label$2013;
	TMP$970$1 = (boolean)1ll;
	goto label$2014;
	label$2013:;
	TMP$970$1 = (boolean)0ll;
	label$2014:;
	fb$result$1 = TMP$970$1;
	goto label$2012;
	label$2012:;
	return fb$result$1;
}

void _ZN4MATH10BASEMATRIXD1Ev( struct $N4MATH10BASEMATRIXE* THIS$1 )
{
	label$2015:;
	if( *(double**)THIS$1 == (double*)0ull ) goto label$2017;
	free( *(void**)THIS$1 );
	label$2017:;
	label$2016:;
}

double* _ZNK4MATH10BASEMATRIX11DATA__get__Ev( struct $N4MATH10BASEMATRIXE* THIS$1 )
{
	double* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$2018:;
	fb$result$1 = *(double**)THIS$1;
	goto label$2019;
	label$2019:;
	return fb$result$1;
}

void _ZN4MATH4MAT2C1Ev( struct $N4MATH4MAT2E* THIS$1 )
{
	double* TMP$971$1;
	label$2022:;
	__builtin_memset( (struct $N4MATH10BASEMATRIXE*)THIS$1, 0, 8ll );
	void* vr$2 = malloc( 32ull );
	TMP$971$1 = (double*)vr$2;
	if( TMP$971$1 == (double*)0ull ) goto label$2024;
	__builtin_memset( TMP$971$1, 0, 32ull );
	label$2024:;
	*(double**)THIS$1 = TMP$971$1;
	*(*(double**)THIS$1) = 0x1.p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 24ll) = 0x1.p+0;
	label$2023:;
}

void _ZN4MATH4MAT2C1ERKS0_( struct $N4MATH4MAT2E* THIS$1, struct $N4MATH4MAT2E* M$1 )
{
	double* TMP$972$1;
	label$2025:;
	__builtin_memset( (struct $N4MATH10BASEMATRIXE*)THIS$1, 0, 8ll );
	void* vr$2 = malloc( 32ull );
	TMP$972$1 = (double*)vr$2;
	if( TMP$972$1 == (double*)0ull ) goto label$2027;
	__builtin_memset( TMP$972$1, 0, 32ull );
	label$2027:;
	*(double**)THIS$1 = TMP$972$1;
	*(*(double**)THIS$1) = *(double*)*(double**)M$1;
	*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)*(double**)M$1 + 8ll);
	*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)*(double**)M$1 + 16ll);
	*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)*(double**)M$1 + 24ll);
	label$2026:;
}

void _ZN4MATH4MAT2pLERKS0_( struct $N4MATH4MAT2E* THIS$1, struct $N4MATH4MAT2E* M$1 )
{
	label$2028:;
	*(*(double**)THIS$1) = *(*(double**)THIS$1) + *(double*)*(double**)M$1;
	*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)*(double**)THIS$1 + 8ll) + *(double*)((uint8*)*(double**)M$1 + 8ll);
	*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)*(double**)THIS$1 + 16ll) + *(double*)((uint8*)*(double**)M$1 + 16ll);
	*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)*(double**)THIS$1 + 24ll) + *(double*)((uint8*)*(double**)M$1 + 24ll);
	label$2029:;
}

void _ZN4MATH4MAT2mIERKS0_( struct $N4MATH4MAT2E* THIS$1, struct $N4MATH4MAT2E* M$1 )
{
	label$2030:;
	*(*(double**)THIS$1) = *(*(double**)THIS$1) - *(double*)*(double**)M$1;
	*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)*(double**)THIS$1 + 8ll) - *(double*)((uint8*)*(double**)M$1 + 8ll);
	*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)*(double**)THIS$1 + 16ll) - *(double*)((uint8*)*(double**)M$1 + 16ll);
	*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)*(double**)THIS$1 + 24ll) - *(double*)((uint8*)*(double**)M$1 + 24ll);
	label$2031:;
}

void _ZN4MATH4MAT2mLERKd( struct $N4MATH4MAT2E* THIS$1, double* N$1 )
{
	label$2032:;
	*(*(double**)THIS$1) = *(*(double**)THIS$1) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)*(double**)THIS$1 + 8ll) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)*(double**)THIS$1 + 16ll) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)*(double**)THIS$1 + 24ll) * *N$1;
	label$2033:;
}

void _ZN4MATH4MAT2mLERKS0_( struct $N4MATH4MAT2E* THIS$1, struct $N4MATH4MAT2E* M$1 )
{
	label$2034:;
	double N00$1;
	N00$1 = (*(*(double**)THIS$1) * *(double*)*(double**)M$1) + (*(double*)((uint8*)*(double**)THIS$1 + 8ll) * *(double*)((uint8*)*(double**)M$1 + 16ll));
	double N10$1;
	N10$1 = (*(*(double**)THIS$1) * *(double*)((uint8*)*(double**)M$1 + 8ll)) + (*(double*)((uint8*)*(double**)THIS$1 + 8ll) * *(double*)((uint8*)*(double**)M$1 + 24ll));
	double N01$1;
	N01$1 = (*(double*)((uint8*)*(double**)THIS$1 + 16ll) * *(double*)*(double**)M$1) + (*(double*)((uint8*)*(double**)THIS$1 + 24ll) * *(double*)((uint8*)*(double**)M$1 + 16ll));
	double N11$1;
	N11$1 = (*(double*)((uint8*)*(double**)THIS$1 + 16ll) * *(double*)((uint8*)*(double**)M$1 + 8ll)) + (*(double*)((uint8*)*(double**)THIS$1 + 24ll) * *(double*)((uint8*)*(double**)M$1 + 24ll));
	*(*(double**)THIS$1) = N00$1;
	*(double*)((uint8*)*(double**)THIS$1 + 8ll) = N10$1;
	*(double*)((uint8*)*(double**)THIS$1 + 16ll) = N01$1;
	*(double*)((uint8*)*(double**)THIS$1 + 24ll) = N11$1;
	label$2035:;
}

void _ZN4MATH4MAT2dVERKd( struct $N4MATH4MAT2E* THIS$1, double* N$1 )
{
	label$2036:;
	if( *N$1 == 0x0p+0 ) goto label$2039;
	{
		*(*(double**)THIS$1) = *(*(double**)THIS$1) / *N$1;
		*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)*(double**)THIS$1 + 8ll) / *N$1;
		*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)*(double**)THIS$1 + 16ll) / *N$1;
		*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)*(double**)THIS$1 + 24ll) / *N$1;
	}
	goto label$2038;
	label$2039:;
	{
		*(*(double**)THIS$1) = 0x1.p+0;
		*(double*)((uint8*)*(double**)THIS$1 + 8ll) = 0x0p+0;
		*(double*)((uint8*)*(double**)THIS$1 + 16ll) = 0x0p+0;
		*(double*)((uint8*)*(double**)THIS$1 + 24ll) = 0x1.p+0;
	}
	label$2038:;
	label$2037:;
}

FBSTRING* _ZNK4MATH4MAT2cv8FBSTRINGEv( struct $N4MATH4MAT2E* THIS$1 )
{
	FBSTRING TMP$977$1;
	FBSTRING TMP$978$1;
	FBSTRING TMP$979$1;
	FBSTRING TMP$980$1;
	FBSTRING TMP$981$1;
	FBSTRING TMP$982$1;
	FBSTRING TMP$983$1;
	FBSTRING TMP$984$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$2040:;
	FBSTRING* vr$3 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 24ll) );
	FBSTRING* vr$6 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 16ll) );
	FBSTRING* vr$9 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 8ll) );
	FBSTRING* vr$12 = fb_DoubleToStr( *(double*)*(double**)THIS$1 );
	__builtin_memset( &TMP$977$1, 0, 24ll );
	FBSTRING* vr$15 = fb_StrConcat( &TMP$977$1, (void*)"<math.mat2>{\x0A    ", 18ll, (void*)vr$12, -1ll );
	__builtin_memset( &TMP$978$1, 0, 24ll );
	FBSTRING* vr$18 = fb_StrConcat( &TMP$978$1, (void*)vr$15, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$979$1, 0, 24ll );
	FBSTRING* vr$21 = fb_StrConcat( &TMP$979$1, (void*)vr$18, -1ll, (void*)vr$9, -1ll );
	__builtin_memset( &TMP$980$1, 0, 24ll );
	FBSTRING* vr$24 = fb_StrConcat( &TMP$980$1, (void*)vr$21, -1ll, (void*)",\x0A    ", 7ll );
	__builtin_memset( &TMP$981$1, 0, 24ll );
	FBSTRING* vr$27 = fb_StrConcat( &TMP$981$1, (void*)vr$24, -1ll, (void*)vr$6, -1ll );
	__builtin_memset( &TMP$982$1, 0, 24ll );
	FBSTRING* vr$30 = fb_StrConcat( &TMP$982$1, (void*)vr$27, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$983$1, 0, 24ll );
	FBSTRING* vr$33 = fb_StrConcat( &TMP$983$1, (void*)vr$30, -1ll, (void*)vr$3, -1ll );
	__builtin_memset( &TMP$984$1, 0, 24ll );
	FBSTRING* vr$36 = fb_StrConcat( &TMP$984$1, (void*)vr$33, -1ll, (void*)"\x0A}", 3ll );
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$36, -1ll, 0 );
	goto label$2041;
	label$2041:;
	FBSTRING* vr$39 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$39;
}

void _ZN4MATH4MAT2aSERKS0_( struct $N4MATH4MAT2E* THIS$1, struct $N4MATH4MAT2E* M$1 )
{
	label$2042:;
	if( THIS$1 == M$1 ) goto label$2045;
	{
		*(*(double**)THIS$1) = *(double*)*(double**)M$1;
		*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)*(double**)M$1 + 8ll);
		*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)*(double**)M$1 + 16ll);
		*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)*(double**)M$1 + 24ll);
	}
	label$2045:;
	label$2044:;
	label$2043:;
}

struct $N4MATH4MAT2E* _ZN4MATH4MAT212FROMROTATIONERKd( struct $N4MATH4MAT2E* tmp$985$1, double* T$1 )
{
	label$2046:;
	double C$1;
	C$1 = __builtin_cos( *T$1 );
	double S$1;
	S$1 = __builtin_sin( *T$1 );
	struct $N4MATH4MAT2E R$1;
	_ZN4MATH4MAT2C1Ev( &R$1 );
	*(*(double**)&R$1) = C$1;
	*(double*)((uint8*)*(double**)&R$1 + 8ll) = -S$1;
	*(double*)((uint8*)*(double**)&R$1 + 16ll) = S$1;
	*(double*)((uint8*)*(double**)&R$1 + 24ll) = C$1;
	_ZN4MATH4MAT2C1ERKS0_( tmp$985$1, (struct $N4MATH4MAT2E*)&R$1 );
	_ZN4MATH4MAT2D1Ev( &R$1 );
	goto label$2047;
	_ZN4MATH4MAT2D1Ev( &R$1 );
	label$2047:;
	return tmp$985$1;
}

struct $N4MATH4MAT2E* _ZN4MATH4MAT29FROMSCALEERKd( struct $N4MATH4MAT2E* tmp$986$1, double* S$1 )
{
	label$2048:;
	struct $N4MATH4MAT2E R$1;
	_ZN4MATH4MAT2C1Ev( &R$1 );
	*(*(double**)&R$1) = *S$1;
	*(double*)((uint8*)*(double**)&R$1 + 24ll) = *S$1;
	_ZN4MATH4MAT2C1ERKS0_( tmp$986$1, (struct $N4MATH4MAT2E*)&R$1 );
	_ZN4MATH4MAT2D1Ev( &R$1 );
	goto label$2049;
	_ZN4MATH4MAT2D1Ev( &R$1 );
	label$2049:;
	return tmp$986$1;
}

struct $N4MATH4MAT2E* _ZN4MATH4MAT29FROMSCALEERKdS2_( struct $N4MATH4MAT2E* tmp$987$1, double* SX$1, double* SY$1 )
{
	label$2050:;
	struct $N4MATH4MAT2E R$1;
	_ZN4MATH4MAT2C1Ev( &R$1 );
	*(*(double**)&R$1) = *SX$1;
	*(double*)((uint8*)*(double**)&R$1 + 24ll) = *SY$1;
	_ZN4MATH4MAT2C1ERKS0_( tmp$987$1, (struct $N4MATH4MAT2E*)&R$1 );
	_ZN4MATH4MAT2D1Ev( &R$1 );
	goto label$2051;
	_ZN4MATH4MAT2D1Ev( &R$1 );
	label$2051:;
	return tmp$987$1;
}

double _ZNK4MATH4MAT23GETERKu7INTEGERS3_( struct $N4MATH4MAT2E* THIS$1, int64* X$1, int64* Y$1 )
{
	double TMP$988$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$2052:;
	if( ((((int64)-(*X$1 >= 0ll) & (int64)-(*X$1 < 2ll)) & (int64)-(*Y$1 >= 0ll)) & (int64)-(*Y$1 < 2ll)) == 0ll ) goto label$2054;
	TMP$988$1 = *(double*)((uint8*)*(double**)THIS$1 + ((*X$1 + (*Y$1 << (1ll & 63ll))) << (3ll & 63ll)));
	goto label$2055;
	label$2054:;
	TMP$988$1 = 0x0p+0;
	label$2055:;
	fb$result$1 = TMP$988$1;
	goto label$2053;
	label$2053:;
	return fb$result$1;
}

struct $N4MATH4VEC2E _ZNK4MATH4MAT29GETCOLUMNERKu7INTEGER( struct $N4MATH4MAT2E* THIS$1, int64* X$1 )
{
	struct $N4MATH4VEC2E fb$result$1;
	label$2056:;
	{
		int64 TMP$989$2;
		TMP$989$2 = *X$1;
		if( TMP$989$2 != 0ll ) goto label$2059;
		label$2060:;
		{
			_ZN4MATH4VEC2C1ERKdS2_( &fb$result$1, *(double**)THIS$1, (double*)((uint8*)*(double**)THIS$1 + 16ll) );
			goto label$2057;
		}
		goto label$2058;
		label$2059:;
		if( TMP$989$2 != 1ll ) goto label$2061;
		label$2062:;
		{
			_ZN4MATH4VEC2C1ERKdS2_( &fb$result$1, (double*)((uint8*)*(double**)THIS$1 + 8ll), (double*)((uint8*)*(double**)THIS$1 + 24ll) );
			goto label$2057;
		}
		goto label$2058;
		label$2061:;
		{
			_ZN4MATH4VEC2C1Ev( &fb$result$1 );
			goto label$2057;
		}
		label$2063:;
		label$2058:;
	}
	label$2057:;
	return fb$result$1;
}

struct $N4MATH4VEC2E _ZNK4MATH4MAT26GETROWERKu7INTEGER( struct $N4MATH4MAT2E* THIS$1, int64* Y$1 )
{
	struct $N4MATH4VEC2E fb$result$1;
	label$2064:;
	{
		int64 TMP$993$2;
		TMP$993$2 = *Y$1;
		if( TMP$993$2 != 0ll ) goto label$2067;
		label$2068:;
		{
			_ZN4MATH4VEC2C1ERKdS2_( &fb$result$1, *(double**)THIS$1, (double*)((uint8*)*(double**)THIS$1 + 8ll) );
			goto label$2065;
		}
		goto label$2066;
		label$2067:;
		if( TMP$993$2 != 1ll ) goto label$2069;
		label$2070:;
		{
			_ZN4MATH4VEC2C1ERKdS2_( &fb$result$1, (double*)((uint8*)*(double**)THIS$1 + 16ll), (double*)((uint8*)*(double**)THIS$1 + 24ll) );
			goto label$2065;
		}
		goto label$2066;
		label$2069:;
		{
			_ZN4MATH4VEC2C1Ev( &fb$result$1 );
			goto label$2065;
		}
		label$2071:;
		label$2066:;
	}
	label$2065:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT23SETERKu7INTEGERS3_RKd( struct $N4MATH4MAT2E* THIS$1, int64* X$1, int64* Y$1, double* N$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2072:;
	if( ((((int64)-(*X$1 >= 0ll) & (int64)-(*X$1 < 2ll)) & (int64)-(*Y$1 >= 0ll)) & (int64)-(*Y$1 < 2ll)) == 0ll ) goto label$2075;
	{
		*(double*)((uint8*)*(double**)THIS$1 + ((*X$1 + (*Y$1 << (1ll & 63ll))) << (3ll & 63ll))) = *N$1;
		fb$result$1 = (boolean)1ll;
		goto label$2073;
	}
	label$2075:;
	label$2074:;
	fb$result$1 = (boolean)0ll;
	goto label$2073;
	label$2073:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT29SETCOLUMNERKu7INTEGERRKdS5_( struct $N4MATH4MAT2E* THIS$1, int64* X$1, double* N1$1, double* N2$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2076:;
	{
		int64 TMP$997$2;
		TMP$997$2 = *X$1;
		if( TMP$997$2 != 0ll ) goto label$2079;
		label$2080:;
		{
			*(*(double**)THIS$1) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *N2$1;
		}
		goto label$2078;
		label$2079:;
		if( TMP$997$2 != 1ll ) goto label$2081;
		label$2082:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *N2$1;
		}
		goto label$2078;
		label$2081:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2077;
		}
		label$2083:;
		label$2078:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2077;
	label$2077:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT29SETCOLUMNERKu7INTEGERRKNS_4VEC2E( struct $N4MATH4MAT2E* THIS$1, int64* X$1, struct $N4MATH4VEC2E* V$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2084:;
	{
		int64 TMP$998$2;
		TMP$998$2 = *X$1;
		if( TMP$998$2 != 0ll ) goto label$2087;
		label$2088:;
		{
			*(*(double**)THIS$1) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)V$1 + 8ll);
		}
		goto label$2086;
		label$2087:;
		if( TMP$998$2 != 1ll ) goto label$2089;
		label$2090:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)V$1 + 8ll);
		}
		goto label$2086;
		label$2089:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2085;
		}
		label$2091:;
		label$2086:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2085;
	label$2085:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT29SETCOLUMNERKu7INTEGERRKNS_4PVECE( struct $N4MATH4MAT2E* THIS$1, int64* X$1, struct $N4MATH4PVECE* V$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2092:;
	{
		int64 TMP$999$2;
		TMP$999$2 = *X$1;
		if( TMP$999$2 != 0ll ) goto label$2095;
		label$2096:;
		{
			double vr$2 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(*(double**)THIS$1) = vr$2;
			double vr$5 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = vr$5;
		}
		goto label$2094;
		label$2095:;
		if( TMP$999$2 != 1ll ) goto label$2097;
		label$2098:;
		{
			double vr$8 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = vr$8;
			double vr$11 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = vr$11;
		}
		goto label$2094;
		label$2097:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2093;
		}
		label$2099:;
		label$2094:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2093;
	label$2093:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT26SETROWERKu7INTEGERRKdS5_( struct $N4MATH4MAT2E* THIS$1, int64* Y$1, double* N1$1, double* N2$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2100:;
	{
		int64 TMP$1000$2;
		TMP$1000$2 = *Y$1;
		if( TMP$1000$2 != 0ll ) goto label$2103;
		label$2104:;
		{
			*(*(double**)THIS$1) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *N2$1;
		}
		goto label$2102;
		label$2103:;
		if( TMP$1000$2 != 1ll ) goto label$2105;
		label$2106:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *N2$1;
		}
		goto label$2102;
		label$2105:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2101;
		}
		label$2107:;
		label$2102:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2101;
	label$2101:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT26SETROWERKu7INTEGERRKNS_4VEC2E( struct $N4MATH4MAT2E* THIS$1, int64* Y$1, struct $N4MATH4VEC2E* V$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2108:;
	{
		int64 TMP$1001$2;
		TMP$1001$2 = *Y$1;
		if( TMP$1001$2 != 0ll ) goto label$2111;
		label$2112:;
		{
			*(*(double**)THIS$1) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
		}
		goto label$2110;
		label$2111:;
		if( TMP$1001$2 != 1ll ) goto label$2113;
		label$2114:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)V$1 + 8ll);
		}
		goto label$2110;
		label$2113:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2109;
		}
		label$2115:;
		label$2110:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2109;
	label$2109:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT26SETROWERKu7INTEGERRKNS_4PVECE( struct $N4MATH4MAT2E* THIS$1, int64* Y$1, struct $N4MATH4PVECE* V$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2116:;
	{
		int64 TMP$1002$2;
		TMP$1002$2 = *Y$1;
		if( TMP$1002$2 != 0ll ) goto label$2119;
		label$2120:;
		{
			double vr$2 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(*(double**)THIS$1) = vr$2;
			double vr$5 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = vr$5;
		}
		goto label$2118;
		label$2119:;
		if( TMP$1002$2 != 1ll ) goto label$2121;
		label$2122:;
		{
			double vr$8 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = vr$8;
			double vr$11 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = vr$11;
		}
		goto label$2118;
		label$2121:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2117;
		}
		label$2123:;
		label$2118:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2117;
	label$2117:;
	return fb$result$1;
}

FBSTRING* _ZNK4MATH4MAT26TOJSONERKb( struct $N4MATH4MAT2E* THIS$1, boolean* C$1 )
{
	FBSTRING TMP$1003$1;
	FBSTRING TMP$1004$1;
	FBSTRING TMP$1005$1;
	FBSTRING TMP$1006$1;
	FBSTRING TMP$1007$1;
	FBSTRING TMP$1008$1;
	FBSTRING TMP$1009$1;
	FBSTRING TMP$1010$1;
	FBSTRING TMP$1011$1;
	FBSTRING TMP$1012$1;
	FBSTRING TMP$1013$1;
	FBSTRING TMP$1014$1;
	FBSTRING TMP$1015$1;
	FBSTRING TMP$1016$1;
	FBSTRING TMP$1017$1;
	FBSTRING TMP$1018$1;
	FBSTRING TMP$1019$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$2124:;
	if( *C$1 == (boolean)0ll ) goto label$2126;
	FBSTRING* vr$4 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 24ll) );
	FBSTRING* vr$7 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 8ll) );
	FBSTRING* vr$10 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 16ll) );
	FBSTRING* vr$13 = fb_DoubleToStr( *(double*)*(double**)THIS$1 );
	__builtin_memset( &TMP$1004$1, 0, 24ll );
	FBSTRING* vr$16 = fb_StrConcat( &TMP$1004$1, (void*)"[", 2ll, (void*)vr$13, -1ll );
	__builtin_memset( &TMP$1005$1, 0, 24ll );
	FBSTRING* vr$19 = fb_StrConcat( &TMP$1005$1, (void*)vr$16, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1006$1, 0, 24ll );
	FBSTRING* vr$22 = fb_StrConcat( &TMP$1006$1, (void*)vr$19, -1ll, (void*)vr$10, -1ll );
	__builtin_memset( &TMP$1007$1, 0, 24ll );
	FBSTRING* vr$25 = fb_StrConcat( &TMP$1007$1, (void*)vr$22, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1008$1, 0, 24ll );
	FBSTRING* vr$28 = fb_StrConcat( &TMP$1008$1, (void*)vr$25, -1ll, (void*)vr$7, -1ll );
	__builtin_memset( &TMP$1009$1, 0, 24ll );
	FBSTRING* vr$31 = fb_StrConcat( &TMP$1009$1, (void*)vr$28, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1010$1, 0, 24ll );
	FBSTRING* vr$34 = fb_StrConcat( &TMP$1010$1, (void*)vr$31, -1ll, (void*)vr$4, -1ll );
	__builtin_memset( &TMP$1011$1, 0, 24ll );
	FBSTRING* vr$37 = fb_StrConcat( &TMP$1011$1, (void*)vr$34, -1ll, (void*)"]", 2ll );
	fb_StrInit( (void*)&TMP$1003$1, -1ll, (void*)vr$37, -1ll, 0 );
	goto label$2127;
	label$2126:;
	FBSTRING* vr$41 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 24ll) );
	FBSTRING* vr$44 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 16ll) );
	FBSTRING* vr$47 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 8ll) );
	FBSTRING* vr$50 = fb_DoubleToStr( *(double*)*(double**)THIS$1 );
	__builtin_memset( &TMP$1012$1, 0, 24ll );
	FBSTRING* vr$53 = fb_StrConcat( &TMP$1012$1, (void*)"[", 2ll, (void*)vr$50, -1ll );
	__builtin_memset( &TMP$1013$1, 0, 24ll );
	FBSTRING* vr$56 = fb_StrConcat( &TMP$1013$1, (void*)vr$53, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1014$1, 0, 24ll );
	FBSTRING* vr$59 = fb_StrConcat( &TMP$1014$1, (void*)vr$56, -1ll, (void*)vr$47, -1ll );
	__builtin_memset( &TMP$1015$1, 0, 24ll );
	FBSTRING* vr$62 = fb_StrConcat( &TMP$1015$1, (void*)vr$59, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1016$1, 0, 24ll );
	FBSTRING* vr$65 = fb_StrConcat( &TMP$1016$1, (void*)vr$62, -1ll, (void*)vr$44, -1ll );
	__builtin_memset( &TMP$1017$1, 0, 24ll );
	FBSTRING* vr$68 = fb_StrConcat( &TMP$1017$1, (void*)vr$65, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1018$1, 0, 24ll );
	FBSTRING* vr$71 = fb_StrConcat( &TMP$1018$1, (void*)vr$68, -1ll, (void*)vr$41, -1ll );
	__builtin_memset( &TMP$1019$1, 0, 24ll );
	FBSTRING* vr$74 = fb_StrConcat( &TMP$1019$1, (void*)vr$71, -1ll, (void*)"]", 2ll );
	fb_StrInit( (void*)&TMP$1003$1, -1ll, (void*)vr$74, -1ll, 0 );
	label$2127:;
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)&TMP$1003$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&TMP$1003$1 );
	goto label$2125;
	label$2125:;
	FBSTRING* vr$80 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$80;
}

struct $N4MATH4MAT2E* _ZN4MATHplERKNS_4MAT2ES2_( struct $N4MATH4MAT2E* tmp$1020$1, struct $N4MATH4MAT2E* M1$1, struct $N4MATH4MAT2E* M2$1 )
{
	label$2128:;
	struct $N4MATH4MAT2E R$1;
	_ZN4MATH4MAT2C1Ev( &R$1 );
	double* P1$1;
	double* vr$1 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M1$1 );
	P1$1 = vr$1;
	double* P2$1;
	double* vr$2 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M2$1 );
	P2$1 = vr$2;
	double* Q$1;
	double* vr$4 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)&R$1 );
	Q$1 = vr$4;
	*(double*)Q$1 = *(double*)P1$1 + *(double*)P2$1;
	*(double*)((uint8*)Q$1 + 8ll) = *(double*)((uint8*)P1$1 + 8ll) + *(double*)((uint8*)P2$1 + 8ll);
	*(double*)((uint8*)Q$1 + 16ll) = *(double*)((uint8*)P1$1 + 16ll) + *(double*)((uint8*)P2$1 + 16ll);
	*(double*)((uint8*)Q$1 + 24ll) = *(double*)((uint8*)P1$1 + 24ll) + *(double*)((uint8*)P2$1 + 24ll);
	_ZN4MATH4MAT2C1ERKS0_( tmp$1020$1, (struct $N4MATH4MAT2E*)&R$1 );
	_ZN4MATH4MAT2D1Ev( &R$1 );
	goto label$2129;
	_ZN4MATH4MAT2D1Ev( &R$1 );
	label$2129:;
	return tmp$1020$1;
}

struct $N4MATH4MAT2E* _ZN4MATHmiERKNS_4MAT2ES2_( struct $N4MATH4MAT2E* tmp$1021$1, struct $N4MATH4MAT2E* M1$1, struct $N4MATH4MAT2E* M2$1 )
{
	label$2130:;
	struct $N4MATH4MAT2E R$1;
	_ZN4MATH4MAT2C1Ev( &R$1 );
	double* P1$1;
	double* vr$1 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M1$1 );
	P1$1 = vr$1;
	double* P2$1;
	double* vr$2 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M2$1 );
	P2$1 = vr$2;
	double* Q$1;
	double* vr$4 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)&R$1 );
	Q$1 = vr$4;
	*(double*)Q$1 = *(double*)P1$1 - *(double*)P2$1;
	*(double*)((uint8*)Q$1 + 8ll) = *(double*)((uint8*)P1$1 + 8ll) - *(double*)((uint8*)P2$1 + 8ll);
	*(double*)((uint8*)Q$1 + 16ll) = *(double*)((uint8*)P1$1 + 16ll) - *(double*)((uint8*)P2$1 + 16ll);
	*(double*)((uint8*)Q$1 + 24ll) = *(double*)((uint8*)P1$1 + 24ll) - *(double*)((uint8*)P2$1 + 24ll);
	_ZN4MATH4MAT2C1ERKS0_( tmp$1021$1, (struct $N4MATH4MAT2E*)&R$1 );
	_ZN4MATH4MAT2D1Ev( &R$1 );
	goto label$2131;
	_ZN4MATH4MAT2D1Ev( &R$1 );
	label$2131:;
	return tmp$1021$1;
}

struct $N4MATH4MAT2E* _ZN4MATHmlERKNS_4MAT2ERKd( struct $N4MATH4MAT2E* tmp$1022$1, struct $N4MATH4MAT2E* M$1, double* N$1 )
{
	label$2132:;
	struct $N4MATH4MAT2E R$1;
	_ZN4MATH4MAT2C1Ev( &R$1 );
	double* P$1;
	double* vr$1 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M$1 );
	P$1 = vr$1;
	double* Q$1;
	double* vr$3 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)&R$1 );
	Q$1 = vr$3;
	*(double*)Q$1 = *(double*)P$1 * *N$1;
	*(double*)((uint8*)Q$1 + 8ll) = *(double*)((uint8*)P$1 + 8ll) * *N$1;
	*(double*)((uint8*)Q$1 + 16ll) = *(double*)((uint8*)P$1 + 16ll) * *N$1;
	*(double*)((uint8*)Q$1 + 24ll) = *(double*)((uint8*)P$1 + 24ll) * *N$1;
	_ZN4MATH4MAT2C1ERKS0_( tmp$1022$1, (struct $N4MATH4MAT2E*)&R$1 );
	_ZN4MATH4MAT2D1Ev( &R$1 );
	goto label$2133;
	_ZN4MATH4MAT2D1Ev( &R$1 );
	label$2133:;
	return tmp$1022$1;
}

struct $N4MATH4MAT2E* _ZN4MATHmlERKdRKNS_4MAT2E( struct $N4MATH4MAT2E* tmp$1023$1, double* N$1, struct $N4MATH4MAT2E* M$1 )
{
	label$2134:;
	struct $N4MATH4MAT2E R$1;
	_ZN4MATH4MAT2C1Ev( &R$1 );
	double* P$1;
	double* vr$1 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M$1 );
	P$1 = vr$1;
	double* Q$1;
	double* vr$3 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)&R$1 );
	Q$1 = vr$3;
	*(double*)Q$1 = *N$1 * *(double*)P$1;
	*(double*)((uint8*)Q$1 + 8ll) = *N$1 * *(double*)((uint8*)P$1 + 8ll);
	*(double*)((uint8*)Q$1 + 16ll) = *N$1 * *(double*)((uint8*)P$1 + 16ll);
	*(double*)((uint8*)Q$1 + 24ll) = *N$1 * *(double*)((uint8*)P$1 + 24ll);
	_ZN4MATH4MAT2C1ERKS0_( tmp$1023$1, (struct $N4MATH4MAT2E*)&R$1 );
	_ZN4MATH4MAT2D1Ev( &R$1 );
	goto label$2135;
	_ZN4MATH4MAT2D1Ev( &R$1 );
	label$2135:;
	return tmp$1023$1;
}

struct $N4MATH4MAT2E* _ZN4MATHmlERKNS_4MAT2ES2_( struct $N4MATH4MAT2E* tmp$1024$1, struct $N4MATH4MAT2E* M1$1, struct $N4MATH4MAT2E* M2$1 )
{
	label$2136:;
	struct $N4MATH4MAT2E R$1;
	_ZN4MATH4MAT2C1Ev( &R$1 );
	double* P1$1;
	double* vr$1 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M1$1 );
	P1$1 = vr$1;
	double* P2$1;
	double* vr$2 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M2$1 );
	P2$1 = vr$2;
	double* Q$1;
	double* vr$4 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)&R$1 );
	Q$1 = vr$4;
	*(double*)Q$1 = (*(double*)P1$1 * *(double*)P2$1) + (*(double*)((uint8*)P1$1 + 8ll) * *(double*)((uint8*)P2$1 + 16ll));
	*(double*)((uint8*)Q$1 + 8ll) = (*(double*)P1$1 * *(double*)((uint8*)P2$1 + 8ll)) + (*(double*)((uint8*)P1$1 + 8ll) * *(double*)((uint8*)P2$1 + 24ll));
	*(double*)((uint8*)Q$1 + 16ll) = (*(double*)((uint8*)P1$1 + 16ll) * *(double*)P2$1) + (*(double*)((uint8*)P1$1 + 24ll) * *(double*)((uint8*)P2$1 + 16ll));
	*(double*)((uint8*)Q$1 + 24ll) = (*(double*)((uint8*)P1$1 + 16ll) * *(double*)((uint8*)P2$1 + 8ll)) + (*(double*)((uint8*)P1$1 + 24ll) * *(double*)((uint8*)P2$1 + 24ll));
	_ZN4MATH4MAT2C1ERKS0_( tmp$1024$1, (struct $N4MATH4MAT2E*)&R$1 );
	_ZN4MATH4MAT2D1Ev( &R$1 );
	goto label$2137;
	_ZN4MATH4MAT2D1Ev( &R$1 );
	label$2137:;
	return tmp$1024$1;
}

struct $N4MATH4VEC2E _ZN4MATHmlERKNS_4MAT2ERKNS_4VEC2E( struct $N4MATH4MAT2E* M$1, struct $N4MATH4VEC2E* V$1 )
{
	double TMP$1026$1;
	double TMP$1027$1;
	struct $N4MATH4VEC2E fb$result$1;
	label$2138:;
	double* P$1;
	double* vr$0 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M$1 );
	P$1 = vr$0;
	TMP$1027$1 = (*(double*)((uint8*)P$1 + 16ll) * *(double*)V$1) + (*(double*)((uint8*)P$1 + 24ll) * *(double*)((uint8*)V$1 + 8ll));
	TMP$1026$1 = (*(double*)P$1 * *(double*)V$1) + (*(double*)((uint8*)P$1 + 8ll) * *(double*)((uint8*)V$1 + 8ll));
	_ZN4MATH4VEC2C1ERKdS2_( &fb$result$1, (double*)&TMP$1026$1, (double*)&TMP$1027$1 );
	goto label$2139;
	label$2139:;
	return fb$result$1;
}

struct $N4MATH4PVECE _ZN4MATHmlERKNS_4MAT2ERKNS_4PVECE( struct $N4MATH4MAT2E* M$1, struct $N4MATH4PVECE* V$1 )
{
	double TMP$1029$1;
	double TMP$1030$1;
	struct $N4MATH4PVECE fb$result$1;
	label$2140:;
	double X$1;
	double vr$0 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
	X$1 = vr$0;
	double Y$1;
	double vr$1 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
	Y$1 = vr$1;
	double I$1;
	__builtin_memset( &I$1, 0, 8ll );
	double J$1;
	__builtin_memset( &J$1, 0, 8ll );
	double* P$1;
	double* vr$4 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M$1 );
	P$1 = vr$4;
	I$1 = (*(double*)P$1 * X$1) + (*(double*)((uint8*)P$1 + 8ll) * Y$1);
	J$1 = (*(double*)((uint8*)P$1 + 16ll) * X$1) + (*(double*)((uint8*)P$1 + 24ll) * Y$1);
	double vr$17 = _ZN4MATH5HYPOTERKdS1_( (double*)&I$1, (double*)&J$1 );
	TMP$1030$1 = vr$17;
	double vr$21 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, (double*)&J$1 );
	TMP$1029$1 = vr$21;
	_ZN4MATH4PVECC1ERKdS2_( &fb$result$1, (double*)&TMP$1029$1, (double*)&TMP$1030$1 );
	goto label$2141;
	label$2141:;
	return fb$result$1;
}

struct $N4MATH4MAT2E* _ZN4MATHdvERKNS_4MAT2ERKd( struct $N4MATH4MAT2E* tmp$1031$1, struct $N4MATH4MAT2E* M$1, double* N$1 )
{
	label$2142:;
	if( *N$1 == 0x0p+0 ) goto label$2145;
	{
		struct $N4MATH4MAT2E R$2;
		_ZN4MATH4MAT2C1Ev( &R$2 );
		double* P$2;
		double* vr$2 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M$1 );
		P$2 = vr$2;
		double* Q$2;
		double* vr$4 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)&R$2 );
		Q$2 = vr$4;
		*(double*)Q$2 = *(double*)P$2 / *N$1;
		*(double*)((uint8*)Q$2 + 8ll) = *(double*)((uint8*)P$2 + 8ll) / *N$1;
		*(double*)((uint8*)Q$2 + 16ll) = *(double*)((uint8*)P$2 + 16ll) / *N$1;
		*(double*)((uint8*)Q$2 + 24ll) = *(double*)((uint8*)P$2 + 24ll) / *N$1;
		_ZN4MATH4MAT2C1ERKS0_( tmp$1031$1, (struct $N4MATH4MAT2E*)&R$2 );
		_ZN4MATH4MAT2D1Ev( &R$2 );
		goto label$2143;
		_ZN4MATH4MAT2D1Ev( &R$2 );
	}
	label$2145:;
	label$2144:;
	_ZN4MATH4MAT2C1Ev( tmp$1031$1 );
	goto label$2143;
	label$2143:;
	return tmp$1031$1;
}

void _ZN4MATH4MAT3C1Ev( struct $N4MATH4MAT3E* THIS$1 )
{
	double* TMP$1033$1;
	label$2148:;
	__builtin_memset( (struct $N4MATH10BASEMATRIXE*)THIS$1, 0, 8ll );
	void* vr$2 = malloc( 72ull );
	TMP$1033$1 = (double*)vr$2;
	if( TMP$1033$1 == (double*)0ull ) goto label$2150;
	__builtin_memset( TMP$1033$1, 0, 72ull );
	label$2150:;
	*(double**)THIS$1 = TMP$1033$1;
	*(*(double**)THIS$1) = 0x1.p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 32ll) = 0x1.p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 64ll) = 0x1.p+0;
	label$2149:;
}

void _ZN4MATH4MAT3C1ERKNS_4MAT2E( struct $N4MATH4MAT3E* THIS$1, struct $N4MATH4MAT2E* M$1 )
{
	double* TMP$1034$1;
	label$2151:;
	__builtin_memset( (struct $N4MATH10BASEMATRIXE*)THIS$1, 0, 8ll );
	void* vr$2 = malloc( 72ull );
	TMP$1034$1 = (double*)vr$2;
	if( TMP$1034$1 == (double*)0ull ) goto label$2153;
	__builtin_memset( TMP$1034$1, 0, 72ull );
	label$2153:;
	*(double**)THIS$1 = TMP$1034$1;
	double* P$1;
	double* vr$4 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M$1 );
	P$1 = vr$4;
	*(*(double**)THIS$1) = *(double*)P$1;
	*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)P$1 + 8ll);
	*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)P$1 + 16ll);
	*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)P$1 + 24ll);
	*(double*)((uint8*)*(double**)THIS$1 + 64ll) = 0x1.p+0;
	label$2152:;
}

void _ZN4MATH4MAT3C1ERKS0_( struct $N4MATH4MAT3E* THIS$1, struct $N4MATH4MAT3E* M$1 )
{
	double* TMP$1035$1;
	label$2154:;
	__builtin_memset( (struct $N4MATH10BASEMATRIXE*)THIS$1, 0, 8ll );
	void* vr$2 = malloc( 72ull );
	TMP$1035$1 = (double*)vr$2;
	if( TMP$1035$1 == (double*)0ull ) goto label$2156;
	__builtin_memset( TMP$1035$1, 0, 72ull );
	label$2156:;
	*(double**)THIS$1 = TMP$1035$1;
	*(*(double**)THIS$1) = *(double*)*(double**)M$1;
	*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)*(double**)M$1 + 8ll);
	*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)*(double**)M$1 + 16ll);
	*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)*(double**)M$1 + 24ll);
	*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)*(double**)M$1 + 32ll);
	*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)*(double**)M$1 + 40ll);
	*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)((uint8*)*(double**)M$1 + 48ll);
	*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *(double*)((uint8*)*(double**)M$1 + 56ll);
	*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)((uint8*)*(double**)M$1 + 64ll);
	label$2155:;
}

void _ZN4MATH4MAT3pLERKS0_( struct $N4MATH4MAT3E* THIS$1, struct $N4MATH4MAT3E* M$1 )
{
	label$2157:;
	*(*(double**)THIS$1) = *(*(double**)THIS$1) + *(double*)*(double**)M$1;
	*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)*(double**)THIS$1 + 8ll) + *(double*)((uint8*)*(double**)M$1 + 8ll);
	*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)*(double**)THIS$1 + 16ll) + *(double*)((uint8*)*(double**)M$1 + 16ll);
	*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)*(double**)THIS$1 + 24ll) + *(double*)((uint8*)*(double**)M$1 + 24ll);
	*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)*(double**)THIS$1 + 32ll) + *(double*)((uint8*)*(double**)M$1 + 32ll);
	*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)*(double**)THIS$1 + 40ll) + *(double*)((uint8*)*(double**)M$1 + 40ll);
	*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)((uint8*)*(double**)THIS$1 + 48ll) + *(double*)((uint8*)*(double**)M$1 + 48ll);
	*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *(double*)((uint8*)*(double**)THIS$1 + 56ll) + *(double*)((uint8*)*(double**)M$1 + 56ll);
	*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)((uint8*)*(double**)THIS$1 + 64ll) + *(double*)((uint8*)*(double**)M$1 + 64ll);
	label$2158:;
}

void _ZN4MATH4MAT3mIERKS0_( struct $N4MATH4MAT3E* THIS$1, struct $N4MATH4MAT3E* M$1 )
{
	label$2159:;
	*(*(double**)THIS$1) = *(*(double**)THIS$1) - *(double*)*(double**)M$1;
	*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)*(double**)THIS$1 + 8ll) - *(double*)((uint8*)*(double**)M$1 + 8ll);
	*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)*(double**)THIS$1 + 16ll) - *(double*)((uint8*)*(double**)M$1 + 16ll);
	*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)*(double**)THIS$1 + 24ll) - *(double*)((uint8*)*(double**)M$1 + 24ll);
	*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)*(double**)THIS$1 + 32ll) - *(double*)((uint8*)*(double**)M$1 + 32ll);
	*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)*(double**)THIS$1 + 40ll) - *(double*)((uint8*)*(double**)M$1 + 40ll);
	*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)((uint8*)*(double**)THIS$1 + 48ll) - *(double*)((uint8*)*(double**)M$1 + 48ll);
	*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *(double*)((uint8*)*(double**)THIS$1 + 56ll) - *(double*)((uint8*)*(double**)M$1 + 56ll);
	*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)((uint8*)*(double**)THIS$1 + 64ll) - *(double*)((uint8*)*(double**)M$1 + 64ll);
	label$2160:;
}

void _ZN4MATH4MAT3mLERKd( struct $N4MATH4MAT3E* THIS$1, double* N$1 )
{
	label$2161:;
	*(*(double**)THIS$1) = *(*(double**)THIS$1) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)*(double**)THIS$1 + 8ll) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)*(double**)THIS$1 + 16ll) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)*(double**)THIS$1 + 24ll) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)*(double**)THIS$1 + 32ll) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)*(double**)THIS$1 + 40ll) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)((uint8*)*(double**)THIS$1 + 48ll) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *(double*)((uint8*)*(double**)THIS$1 + 56ll) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)((uint8*)*(double**)THIS$1 + 64ll) * *N$1;
	label$2162:;
}

void _ZN4MATH4MAT3mLERKS0_( struct $N4MATH4MAT3E* THIS$1, struct $N4MATH4MAT3E* M$1 )
{
	label$2163:;
	double N00$1;
	N00$1 = ((*(*(double**)THIS$1) * *(double*)*(double**)M$1) + (*(double*)((uint8*)*(double**)THIS$1 + 8ll) * *(double*)((uint8*)*(double**)M$1 + 24ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 16ll) * *(double*)((uint8*)*(double**)M$1 + 48ll));
	double N10$1;
	N10$1 = ((*(*(double**)THIS$1) * *(double*)((uint8*)*(double**)M$1 + 8ll)) + (*(double*)((uint8*)*(double**)THIS$1 + 8ll) * *(double*)((uint8*)*(double**)M$1 + 32ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 16ll) * *(double*)((uint8*)*(double**)M$1 + 56ll));
	double N20$1;
	N20$1 = ((*(*(double**)THIS$1) * *(double*)((uint8*)*(double**)M$1 + 16ll)) + (*(double*)((uint8*)*(double**)THIS$1 + 8ll) * *(double*)((uint8*)*(double**)M$1 + 40ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 16ll) * *(double*)((uint8*)*(double**)M$1 + 64ll));
	double N01$1;
	N01$1 = ((*(double*)((uint8*)*(double**)THIS$1 + 24ll) * *(double*)*(double**)M$1) + (*(double*)((uint8*)*(double**)THIS$1 + 32ll) * *(double*)((uint8*)*(double**)M$1 + 24ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 40ll) * *(double*)((uint8*)*(double**)M$1 + 48ll));
	double N11$1;
	N11$1 = ((*(double*)((uint8*)*(double**)THIS$1 + 24ll) * *(double*)((uint8*)*(double**)M$1 + 8ll)) + (*(double*)((uint8*)*(double**)THIS$1 + 32ll) * *(double*)((uint8*)*(double**)M$1 + 32ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 40ll) * *(double*)((uint8*)*(double**)M$1 + 56ll));
	double N21$1;
	N21$1 = ((*(double*)((uint8*)*(double**)THIS$1 + 24ll) * *(double*)((uint8*)*(double**)M$1 + 16ll)) + (*(double*)((uint8*)*(double**)THIS$1 + 32ll) * *(double*)((uint8*)*(double**)M$1 + 40ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 40ll) * *(double*)((uint8*)*(double**)M$1 + 64ll));
	double N02$1;
	N02$1 = ((*(double*)((uint8*)*(double**)THIS$1 + 48ll) * *(double*)*(double**)M$1) + (*(double*)((uint8*)*(double**)THIS$1 + 56ll) * *(double*)((uint8*)*(double**)M$1 + 24ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 64ll) * *(double*)((uint8*)*(double**)M$1 + 48ll));
	double N12$1;
	N12$1 = ((*(double*)((uint8*)*(double**)THIS$1 + 48ll) * *(double*)((uint8*)*(double**)M$1 + 8ll)) + (*(double*)((uint8*)*(double**)THIS$1 + 56ll) * *(double*)((uint8*)*(double**)M$1 + 32ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 64ll) * *(double*)((uint8*)*(double**)M$1 + 56ll));
	double N22$1;
	N22$1 = ((*(double*)((uint8*)*(double**)THIS$1 + 48ll) * *(double*)((uint8*)*(double**)M$1 + 16ll)) + (*(double*)((uint8*)*(double**)THIS$1 + 56ll) * *(double*)((uint8*)*(double**)M$1 + 40ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 64ll) * *(double*)((uint8*)*(double**)M$1 + 64ll));
	*(*(double**)THIS$1) = N00$1;
	*(double*)((uint8*)*(double**)THIS$1 + 8ll) = N10$1;
	*(double*)((uint8*)*(double**)THIS$1 + 16ll) = N20$1;
	*(double*)((uint8*)*(double**)THIS$1 + 24ll) = N01$1;
	*(double*)((uint8*)*(double**)THIS$1 + 32ll) = N11$1;
	*(double*)((uint8*)*(double**)THIS$1 + 40ll) = N21$1;
	*(double*)((uint8*)*(double**)THIS$1 + 48ll) = N02$1;
	*(double*)((uint8*)*(double**)THIS$1 + 56ll) = N12$1;
	*(double*)((uint8*)*(double**)THIS$1 + 64ll) = N22$1;
	label$2164:;
}

void _ZN4MATH4MAT3dVERKd( struct $N4MATH4MAT3E* THIS$1, double* N$1 )
{
	label$2165:;
	if( *N$1 == 0x0p+0 ) goto label$2168;
	{
		*(*(double**)THIS$1) = *(*(double**)THIS$1) / *N$1;
		*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)*(double**)THIS$1 + 8ll) / *N$1;
		*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)*(double**)THIS$1 + 16ll) / *N$1;
		*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)*(double**)THIS$1 + 24ll) / *N$1;
		*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)*(double**)THIS$1 + 32ll) / *N$1;
		*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)*(double**)THIS$1 + 40ll) / *N$1;
		*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)((uint8*)*(double**)THIS$1 + 48ll) / *N$1;
		*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *(double*)((uint8*)*(double**)THIS$1 + 56ll) / *N$1;
		*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)((uint8*)*(double**)THIS$1 + 64ll) / *N$1;
	}
	goto label$2167;
	label$2168:;
	{
		*(*(double**)THIS$1) = 0x1.p+0;
		*(double*)((uint8*)*(double**)THIS$1 + 8ll) = 0x0p+0;
		*(double*)((uint8*)*(double**)THIS$1 + 16ll) = 0x0p+0;
		*(double*)((uint8*)*(double**)THIS$1 + 24ll) = 0x0p+0;
		*(double*)((uint8*)*(double**)THIS$1 + 32ll) = 0x1.p+0;
		*(double*)((uint8*)*(double**)THIS$1 + 40ll) = 0x0p+0;
		*(double*)((uint8*)*(double**)THIS$1 + 48ll) = 0x0p+0;
		*(double*)((uint8*)*(double**)THIS$1 + 56ll) = 0x0p+0;
		*(double*)((uint8*)*(double**)THIS$1 + 64ll) = 0x1.p+0;
	}
	label$2167:;
	label$2166:;
}

FBSTRING* _ZNK4MATH4MAT3cv8FBSTRINGEv( struct $N4MATH4MAT3E* THIS$1 )
{
	FBSTRING TMP$1037$1;
	FBSTRING TMP$1038$1;
	FBSTRING TMP$1039$1;
	FBSTRING TMP$1040$1;
	FBSTRING TMP$1041$1;
	FBSTRING TMP$1042$1;
	FBSTRING TMP$1043$1;
	FBSTRING TMP$1044$1;
	FBSTRING TMP$1045$1;
	FBSTRING TMP$1046$1;
	FBSTRING TMP$1047$1;
	FBSTRING TMP$1048$1;
	FBSTRING TMP$1049$1;
	FBSTRING TMP$1050$1;
	FBSTRING TMP$1051$1;
	FBSTRING TMP$1052$1;
	FBSTRING TMP$1053$1;
	FBSTRING TMP$1054$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$2169:;
	FBSTRING* vr$3 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 64ll) );
	FBSTRING* vr$6 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 56ll) );
	FBSTRING* vr$9 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 48ll) );
	FBSTRING* vr$12 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 40ll) );
	FBSTRING* vr$15 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 32ll) );
	FBSTRING* vr$18 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 24ll) );
	FBSTRING* vr$21 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 16ll) );
	FBSTRING* vr$24 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 8ll) );
	FBSTRING* vr$27 = fb_DoubleToStr( *(double*)*(double**)THIS$1 );
	__builtin_memset( &TMP$1037$1, 0, 24ll );
	FBSTRING* vr$30 = fb_StrConcat( &TMP$1037$1, (void*)"<math.mat3>{\x0A    ", 18ll, (void*)vr$27, -1ll );
	__builtin_memset( &TMP$1038$1, 0, 24ll );
	FBSTRING* vr$33 = fb_StrConcat( &TMP$1038$1, (void*)vr$30, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1039$1, 0, 24ll );
	FBSTRING* vr$36 = fb_StrConcat( &TMP$1039$1, (void*)vr$33, -1ll, (void*)vr$24, -1ll );
	__builtin_memset( &TMP$1040$1, 0, 24ll );
	FBSTRING* vr$39 = fb_StrConcat( &TMP$1040$1, (void*)vr$36, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1041$1, 0, 24ll );
	FBSTRING* vr$42 = fb_StrConcat( &TMP$1041$1, (void*)vr$39, -1ll, (void*)vr$21, -1ll );
	__builtin_memset( &TMP$1042$1, 0, 24ll );
	FBSTRING* vr$45 = fb_StrConcat( &TMP$1042$1, (void*)vr$42, -1ll, (void*)",\x0A    ", 7ll );
	__builtin_memset( &TMP$1043$1, 0, 24ll );
	FBSTRING* vr$48 = fb_StrConcat( &TMP$1043$1, (void*)vr$45, -1ll, (void*)vr$18, -1ll );
	__builtin_memset( &TMP$1044$1, 0, 24ll );
	FBSTRING* vr$51 = fb_StrConcat( &TMP$1044$1, (void*)vr$48, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1045$1, 0, 24ll );
	FBSTRING* vr$54 = fb_StrConcat( &TMP$1045$1, (void*)vr$51, -1ll, (void*)vr$15, -1ll );
	__builtin_memset( &TMP$1046$1, 0, 24ll );
	FBSTRING* vr$57 = fb_StrConcat( &TMP$1046$1, (void*)vr$54, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1047$1, 0, 24ll );
	FBSTRING* vr$60 = fb_StrConcat( &TMP$1047$1, (void*)vr$57, -1ll, (void*)vr$12, -1ll );
	__builtin_memset( &TMP$1048$1, 0, 24ll );
	FBSTRING* vr$63 = fb_StrConcat( &TMP$1048$1, (void*)vr$60, -1ll, (void*)",\x0A    ", 7ll );
	__builtin_memset( &TMP$1049$1, 0, 24ll );
	FBSTRING* vr$66 = fb_StrConcat( &TMP$1049$1, (void*)vr$63, -1ll, (void*)vr$9, -1ll );
	__builtin_memset( &TMP$1050$1, 0, 24ll );
	FBSTRING* vr$69 = fb_StrConcat( &TMP$1050$1, (void*)vr$66, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1051$1, 0, 24ll );
	FBSTRING* vr$72 = fb_StrConcat( &TMP$1051$1, (void*)vr$69, -1ll, (void*)vr$6, -1ll );
	__builtin_memset( &TMP$1052$1, 0, 24ll );
	FBSTRING* vr$75 = fb_StrConcat( &TMP$1052$1, (void*)vr$72, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1053$1, 0, 24ll );
	FBSTRING* vr$78 = fb_StrConcat( &TMP$1053$1, (void*)vr$75, -1ll, (void*)vr$3, -1ll );
	__builtin_memset( &TMP$1054$1, 0, 24ll );
	FBSTRING* vr$81 = fb_StrConcat( &TMP$1054$1, (void*)vr$78, -1ll, (void*)"\x0A}", 3ll );
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$81, -1ll, 0 );
	goto label$2170;
	label$2170:;
	FBSTRING* vr$84 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$84;
}

void _ZN4MATH4MAT3aSERKNS_4MAT2E( struct $N4MATH4MAT3E* THIS$1, struct $N4MATH4MAT2E* M$1 )
{
	label$2171:;
	double* P$1;
	double* vr$0 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M$1 );
	P$1 = vr$0;
	*(*(double**)THIS$1) = *(double*)P$1;
	*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)P$1 + 8ll);
	*(double*)((uint8*)*(double**)THIS$1 + 16ll) = 0x0p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)P$1 + 16ll);
	*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)P$1 + 24ll);
	*(double*)((uint8*)*(double**)THIS$1 + 40ll) = 0x0p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 48ll) = 0x0p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 56ll) = 0x0p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 64ll) = 0x1.p+0;
	label$2172:;
}

void _ZN4MATH4MAT3aSERKS0_( struct $N4MATH4MAT3E* THIS$1, struct $N4MATH4MAT3E* M$1 )
{
	label$2173:;
	if( THIS$1 == M$1 ) goto label$2176;
	{
		*(*(double**)THIS$1) = *(double*)*(double**)M$1;
		*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)*(double**)M$1 + 8ll);
		*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)*(double**)M$1 + 16ll);
		*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)*(double**)M$1 + 24ll);
		*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)*(double**)M$1 + 32ll);
		*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)*(double**)M$1 + 40ll);
		*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)((uint8*)*(double**)M$1 + 48ll);
		*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *(double*)((uint8*)*(double**)M$1 + 56ll);
		*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)((uint8*)*(double**)M$1 + 64ll);
	}
	label$2176:;
	label$2175:;
	label$2174:;
}

struct $N4MATH4MAT3E* _ZN4MATH4MAT39FROMSCALEERKd( struct $N4MATH4MAT3E* tmp$1055$1, double* S$1 )
{
	label$2177:;
	struct $N4MATH4MAT3E R$1;
	_ZN4MATH4MAT3C1Ev( &R$1 );
	*(*(double**)&R$1) = *S$1;
	*(double*)((uint8*)*(double**)&R$1 + 32ll) = *S$1;
	*(double*)((uint8*)*(double**)&R$1 + 64ll) = *S$1;
	_ZN4MATH4MAT3C1ERKS0_( tmp$1055$1, (struct $N4MATH4MAT3E*)&R$1 );
	_ZN4MATH4MAT3D1Ev( &R$1 );
	goto label$2178;
	_ZN4MATH4MAT3D1Ev( &R$1 );
	label$2178:;
	return tmp$1055$1;
}

struct $N4MATH4MAT3E* _ZN4MATH4MAT39FROMSCALEERKdS2_S2_( struct $N4MATH4MAT3E* tmp$1056$1, double* SX$1, double* SY$1, double* SZ$1 )
{
	label$2179:;
	struct $N4MATH4MAT3E R$1;
	_ZN4MATH4MAT3C1Ev( &R$1 );
	*(*(double**)&R$1) = *SX$1;
	*(double*)((uint8*)*(double**)&R$1 + 32ll) = *SY$1;
	*(double*)((uint8*)*(double**)&R$1 + 64ll) = *SZ$1;
	_ZN4MATH4MAT3C1ERKS0_( tmp$1056$1, (struct $N4MATH4MAT3E*)&R$1 );
	_ZN4MATH4MAT3D1Ev( &R$1 );
	goto label$2180;
	_ZN4MATH4MAT3D1Ev( &R$1 );
	label$2180:;
	return tmp$1056$1;
}

struct $N4MATH4MAT3E* _ZN4MATH4MAT315FROMTRANSLATIONERKdS2_( struct $N4MATH4MAT3E* tmp$1057$1, double* TX$1, double* TY$1 )
{
	label$2181:;
	struct $N4MATH4MAT3E R$1;
	_ZN4MATH4MAT3C1Ev( &R$1 );
	*(double*)((uint8*)*(double**)&R$1 + 16ll) = *TX$1;
	*(double*)((uint8*)*(double**)&R$1 + 40ll) = *TY$1;
	_ZN4MATH4MAT3C1ERKS0_( tmp$1057$1, (struct $N4MATH4MAT3E*)&R$1 );
	_ZN4MATH4MAT3D1Ev( &R$1 );
	goto label$2182;
	_ZN4MATH4MAT3D1Ev( &R$1 );
	label$2182:;
	return tmp$1057$1;
}

struct $N4MATH4MAT3E* _ZN4MATH4MAT315FROMTRANSLATIONERKNS_4VEC2E( struct $N4MATH4MAT3E* tmp$1058$1, struct $N4MATH4VEC2E* T$1 )
{
	label$2183:;
	struct $N4MATH4MAT3E R$1;
	_ZN4MATH4MAT3C1Ev( &R$1 );
	*(double*)((uint8*)*(double**)&R$1 + 16ll) = *(double*)T$1;
	*(double*)((uint8*)*(double**)&R$1 + 40ll) = *(double*)((uint8*)T$1 + 8ll);
	_ZN4MATH4MAT3C1ERKS0_( tmp$1058$1, (struct $N4MATH4MAT3E*)&R$1 );
	_ZN4MATH4MAT3D1Ev( &R$1 );
	goto label$2184;
	_ZN4MATH4MAT3D1Ev( &R$1 );
	label$2184:;
	return tmp$1058$1;
}

struct $N4MATH4MAT3E* _ZN4MATH4MAT315FROMTRANSLATIONERKNS_4PVECE( struct $N4MATH4MAT3E* tmp$1059$1, struct $N4MATH4PVECE* T$1 )
{
	label$2185:;
	struct $N4MATH4MAT3E R$1;
	_ZN4MATH4MAT3C1Ev( &R$1 );
	double vr$1 = _ZNK4MATH4PVEC8X__get__Ev( T$1 );
	*(double*)((uint8*)*(double**)&R$1 + 16ll) = vr$1;
	double vr$3 = _ZNK4MATH4PVEC8Y__get__Ev( T$1 );
	*(double*)((uint8*)*(double**)&R$1 + 40ll) = vr$3;
	_ZN4MATH4MAT3C1ERKS0_( tmp$1059$1, (struct $N4MATH4MAT3E*)&R$1 );
	_ZN4MATH4MAT3D1Ev( &R$1 );
	goto label$2186;
	_ZN4MATH4MAT3D1Ev( &R$1 );
	label$2186:;
	return tmp$1059$1;
}

double _ZNK4MATH4MAT33GETERKu7INTEGERS3_( struct $N4MATH4MAT3E* THIS$1, int64* X$1, int64* Y$1 )
{
	double TMP$1060$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$2187:;
	if( ((((int64)-(*X$1 >= 0ll) & (int64)-(*X$1 < 3ll)) & (int64)-(*Y$1 >= 0ll)) & (int64)-(*Y$1 < 3ll)) == 0ll ) goto label$2189;
	TMP$1060$1 = *(double*)((uint8*)*(double**)THIS$1 + ((*X$1 + (*Y$1 * 3ll)) << (3ll & 63ll)));
	goto label$2190;
	label$2189:;
	TMP$1060$1 = 0x0p+0;
	label$2190:;
	fb$result$1 = TMP$1060$1;
	goto label$2188;
	label$2188:;
	return fb$result$1;
}

struct $N4MATH4VEC3E _ZNK4MATH4MAT39GETCOLUMNERKu7INTEGER( struct $N4MATH4MAT3E* THIS$1, int64* X$1 )
{
	struct $N4MATH4VEC3E fb$result$1;
	label$2191:;
	{
		int64 TMP$1061$2;
		TMP$1061$2 = *X$1;
		if( TMP$1061$2 != 0ll ) goto label$2194;
		label$2195:;
		{
			_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, *(double**)THIS$1, (double*)((uint8*)*(double**)THIS$1 + 24ll), (double*)((uint8*)*(double**)THIS$1 + 48ll) );
			goto label$2192;
		}
		goto label$2193;
		label$2194:;
		if( TMP$1061$2 != 1ll ) goto label$2196;
		label$2197:;
		{
			_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, (double*)((uint8*)*(double**)THIS$1 + 8ll), (double*)((uint8*)*(double**)THIS$1 + 32ll), (double*)((uint8*)*(double**)THIS$1 + 56ll) );
			goto label$2192;
		}
		goto label$2193;
		label$2196:;
		if( TMP$1061$2 != 2ll ) goto label$2198;
		label$2199:;
		{
			_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, (double*)((uint8*)*(double**)THIS$1 + 16ll), (double*)((uint8*)*(double**)THIS$1 + 40ll), (double*)((uint8*)*(double**)THIS$1 + 64ll) );
			goto label$2192;
		}
		goto label$2193;
		label$2198:;
		{
			_ZN4MATH4VEC3C1Ev( &fb$result$1 );
			goto label$2192;
		}
		label$2200:;
		label$2193:;
	}
	label$2192:;
	return fb$result$1;
}

struct $N4MATH4VEC3E _ZNK4MATH4MAT36GETROWERKu7INTEGER( struct $N4MATH4MAT3E* THIS$1, int64* Y$1 )
{
	struct $N4MATH4VEC3E fb$result$1;
	label$2201:;
	{
		int64 TMP$1066$2;
		TMP$1066$2 = *Y$1;
		if( TMP$1066$2 != 0ll ) goto label$2204;
		label$2205:;
		{
			_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, *(double**)THIS$1, (double*)((uint8*)*(double**)THIS$1 + 8ll), (double*)((uint8*)*(double**)THIS$1 + 16ll) );
			goto label$2202;
		}
		goto label$2203;
		label$2204:;
		if( TMP$1066$2 != 1ll ) goto label$2206;
		label$2207:;
		{
			_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, (double*)((uint8*)*(double**)THIS$1 + 24ll), (double*)((uint8*)*(double**)THIS$1 + 32ll), (double*)((uint8*)*(double**)THIS$1 + 40ll) );
			goto label$2202;
		}
		goto label$2203;
		label$2206:;
		if( TMP$1066$2 != 2ll ) goto label$2208;
		label$2209:;
		{
			_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, (double*)((uint8*)*(double**)THIS$1 + 48ll), (double*)((uint8*)*(double**)THIS$1 + 56ll), (double*)((uint8*)*(double**)THIS$1 + 64ll) );
			goto label$2202;
		}
		goto label$2203;
		label$2208:;
		{
			_ZN4MATH4VEC3C1Ev( &fb$result$1 );
			goto label$2202;
		}
		label$2210:;
		label$2203:;
	}
	label$2202:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT33SETERKu7INTEGERS3_RKd( struct $N4MATH4MAT3E* THIS$1, int64* X$1, int64* Y$1, double* N$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2211:;
	if( ((((int64)-(*X$1 >= 0ll) & (int64)-(*X$1 < 3ll)) & (int64)-(*Y$1 >= 0ll)) & (int64)-(*Y$1 < 3ll)) == 0ll ) goto label$2214;
	{
		*(double*)((uint8*)*(double**)THIS$1 + ((*X$1 + (*Y$1 * 3ll)) << (3ll & 63ll))) = *N$1;
		fb$result$1 = (boolean)1ll;
		goto label$2212;
	}
	label$2214:;
	label$2213:;
	fb$result$1 = (boolean)0ll;
	goto label$2212;
	label$2212:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT39SETCOLUMNERKu7INTEGERRKdS5_S5_( struct $N4MATH4MAT3E* THIS$1, int64* X$1, double* N1$1, double* N2$1, double* N3$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2215:;
	{
		int64 TMP$1071$2;
		TMP$1071$2 = *X$1;
		if( TMP$1071$2 != 0ll ) goto label$2218;
		label$2219:;
		{
			*(*(double**)THIS$1) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *N2$1;
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *N3$1;
		}
		goto label$2217;
		label$2218:;
		if( TMP$1071$2 != 1ll ) goto label$2220;
		label$2221:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *N2$1;
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *N3$1;
		}
		goto label$2217;
		label$2220:;
		if( TMP$1071$2 != 2ll ) goto label$2222;
		label$2223:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *N2$1;
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *N3$1;
		}
		goto label$2217;
		label$2222:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2216;
		}
		label$2224:;
		label$2217:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2216;
	label$2216:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT39SETCOLUMNERKu7INTEGERRKNS_4VEC2ERKd( struct $N4MATH4MAT3E* THIS$1, int64* X$1, struct $N4MATH4VEC2E* V$1, double* N$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2225:;
	{
		int64 TMP$1072$2;
		TMP$1072$2 = *X$1;
		if( TMP$1072$2 != 0ll ) goto label$2228;
		label$2229:;
		{
			*(*(double**)THIS$1) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *N$1;
		}
		goto label$2227;
		label$2228:;
		if( TMP$1072$2 != 1ll ) goto label$2230;
		label$2231:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *N$1;
		}
		goto label$2227;
		label$2230:;
		if( TMP$1072$2 != 2ll ) goto label$2232;
		label$2233:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *N$1;
		}
		goto label$2227;
		label$2232:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2226;
		}
		label$2234:;
		label$2227:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2226;
	label$2226:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT39SETCOLUMNERKu7INTEGERRKNS_4PVECERKd( struct $N4MATH4MAT3E* THIS$1, int64* X$1, struct $N4MATH4PVECE* V$1, double* N$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2235:;
	{
		int64 TMP$1073$2;
		TMP$1073$2 = *X$1;
		if( TMP$1073$2 != 0ll ) goto label$2238;
		label$2239:;
		{
			double vr$2 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(*(double**)THIS$1) = vr$2;
			double vr$5 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = vr$5;
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *N$1;
		}
		goto label$2237;
		label$2238:;
		if( TMP$1073$2 != 1ll ) goto label$2240;
		label$2241:;
		{
			double vr$11 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = vr$11;
			double vr$14 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = vr$14;
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *N$1;
		}
		goto label$2237;
		label$2240:;
		if( TMP$1073$2 != 2ll ) goto label$2242;
		label$2243:;
		{
			double vr$20 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = vr$20;
			double vr$23 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = vr$23;
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *N$1;
		}
		goto label$2237;
		label$2242:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2236;
		}
		label$2244:;
		label$2237:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2236;
	label$2236:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT39SETCOLUMNERKu7INTEGERRKNS_4VEC3E( struct $N4MATH4MAT3E* THIS$1, int64* X$1, struct $N4MATH4VEC3E* V$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2245:;
	{
		int64 TMP$1074$2;
		TMP$1074$2 = *X$1;
		if( TMP$1074$2 != 0ll ) goto label$2248;
		label$2249:;
		{
			*(*(double**)THIS$1) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)((uint8*)V$1 + 16ll);
		}
		goto label$2247;
		label$2248:;
		if( TMP$1074$2 != 1ll ) goto label$2250;
		label$2251:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *(double*)((uint8*)V$1 + 16ll);
		}
		goto label$2247;
		label$2250:;
		if( TMP$1074$2 != 2ll ) goto label$2252;
		label$2253:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)((uint8*)V$1 + 16ll);
		}
		goto label$2247;
		label$2252:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2246;
		}
		label$2254:;
		label$2247:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2246;
	label$2246:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT39SETCOLUMNERKu7INTEGERRKNS_4CVECE( struct $N4MATH4MAT3E* THIS$1, int64* X$1, struct $N4MATH4CVECE* V$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2255:;
	{
		int64 TMP$1075$2;
		TMP$1075$2 = *X$1;
		if( TMP$1075$2 != 0ll ) goto label$2258;
		label$2259:;
		{
			double vr$2 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
			*(*(double**)THIS$1) = vr$2;
			double vr$5 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = vr$5;
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)V$1;
		}
		goto label$2257;
		label$2258:;
		if( TMP$1075$2 != 1ll ) goto label$2260;
		label$2261:;
		{
			double vr$11 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = vr$11;
			double vr$14 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = vr$14;
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *(double*)V$1;
		}
		goto label$2257;
		label$2260:;
		if( TMP$1075$2 != 2ll ) goto label$2262;
		label$2263:;
		{
			double vr$20 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = vr$20;
			double vr$23 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = vr$23;
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)V$1;
		}
		goto label$2257;
		label$2262:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2256;
		}
		label$2264:;
		label$2257:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2256;
	label$2256:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT36SETROWERKu7INTEGERRKdS5_S5_( struct $N4MATH4MAT3E* THIS$1, int64* Y$1, double* N1$1, double* N2$1, double* N3$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2265:;
	{
		int64 TMP$1076$2;
		TMP$1076$2 = *Y$1;
		if( TMP$1076$2 != 0ll ) goto label$2268;
		label$2269:;
		{
			*(*(double**)THIS$1) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *N2$1;
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *N3$1;
		}
		goto label$2267;
		label$2268:;
		if( TMP$1076$2 != 1ll ) goto label$2270;
		label$2271:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *N2$1;
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *N3$1;
		}
		goto label$2267;
		label$2270:;
		if( TMP$1076$2 != 2ll ) goto label$2272;
		label$2273:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *N2$1;
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *N3$1;
		}
		goto label$2267;
		label$2272:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2266;
		}
		label$2274:;
		label$2267:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2266;
	label$2266:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT36SETROWERKu7INTEGERRKNS_4VEC2ERKd( struct $N4MATH4MAT3E* THIS$1, int64* Y$1, struct $N4MATH4VEC2E* V$1, double* N$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2275:;
	{
		int64 TMP$1077$2;
		TMP$1077$2 = *Y$1;
		if( TMP$1077$2 != 0ll ) goto label$2278;
		label$2279:;
		{
			*(*(double**)THIS$1) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *N$1;
		}
		goto label$2277;
		label$2278:;
		if( TMP$1077$2 != 1ll ) goto label$2280;
		label$2281:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *N$1;
		}
		goto label$2277;
		label$2280:;
		if( TMP$1077$2 != 2ll ) goto label$2282;
		label$2283:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *N$1;
		}
		goto label$2277;
		label$2282:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2276;
		}
		label$2284:;
		label$2277:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2276;
	label$2276:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT36SETROWERKu7INTEGERRKNS_4PVECERKd( struct $N4MATH4MAT3E* THIS$1, int64* Y$1, struct $N4MATH4PVECE* V$1, double* N$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2285:;
	{
		int64 TMP$1078$2;
		TMP$1078$2 = *Y$1;
		if( TMP$1078$2 != 0ll ) goto label$2288;
		label$2289:;
		{
			double vr$2 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(*(double**)THIS$1) = vr$2;
			double vr$5 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = vr$5;
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *N$1;
		}
		goto label$2287;
		label$2288:;
		if( TMP$1078$2 != 1ll ) goto label$2290;
		label$2291:;
		{
			double vr$11 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = vr$11;
			double vr$14 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = vr$14;
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *N$1;
		}
		goto label$2287;
		label$2290:;
		if( TMP$1078$2 != 2ll ) goto label$2292;
		label$2293:;
		{
			double vr$20 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = vr$20;
			double vr$23 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = vr$23;
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *N$1;
		}
		goto label$2287;
		label$2292:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2286;
		}
		label$2294:;
		label$2287:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2286;
	label$2286:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT36SETROWERKu7INTEGERRKNS_4VEC3E( struct $N4MATH4MAT3E* THIS$1, int64* Y$1, struct $N4MATH4VEC3E* V$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2295:;
	{
		int64 TMP$1079$2;
		TMP$1079$2 = *Y$1;
		if( TMP$1079$2 != 0ll ) goto label$2298;
		label$2299:;
		{
			*(*(double**)THIS$1) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)V$1 + 16ll);
		}
		goto label$2297;
		label$2298:;
		if( TMP$1079$2 != 1ll ) goto label$2300;
		label$2301:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)V$1 + 16ll);
		}
		goto label$2297;
		label$2300:;
		if( TMP$1079$2 != 2ll ) goto label$2302;
		label$2303:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)((uint8*)V$1 + 16ll);
		}
		goto label$2297;
		label$2302:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2296;
		}
		label$2304:;
		label$2297:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2296;
	label$2296:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT36SETROWERKu7INTEGERRKNS_4CVECE( struct $N4MATH4MAT3E* THIS$1, int64* Y$1, struct $N4MATH4CVECE* V$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2305:;
	{
		int64 TMP$1080$2;
		TMP$1080$2 = *Y$1;
		if( TMP$1080$2 != 0ll ) goto label$2308;
		label$2309:;
		{
			double vr$2 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
			*(*(double**)THIS$1) = vr$2;
			double vr$5 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = vr$5;
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)V$1;
		}
		goto label$2307;
		label$2308:;
		if( TMP$1080$2 != 1ll ) goto label$2310;
		label$2311:;
		{
			double vr$11 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = vr$11;
			double vr$14 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = vr$14;
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)V$1;
		}
		goto label$2307;
		label$2310:;
		if( TMP$1080$2 != 2ll ) goto label$2312;
		label$2313:;
		{
			double vr$20 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = vr$20;
			double vr$23 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = vr$23;
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)V$1;
		}
		goto label$2307;
		label$2312:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2306;
		}
		label$2314:;
		label$2307:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2306;
	label$2306:;
	return fb$result$1;
}

FBSTRING* _ZNK4MATH4MAT36TOJSONERKb( struct $N4MATH4MAT3E* THIS$1, boolean* C$1 )
{
	FBSTRING TMP$1081$1;
	FBSTRING TMP$1082$1;
	FBSTRING TMP$1083$1;
	FBSTRING TMP$1084$1;
	FBSTRING TMP$1085$1;
	FBSTRING TMP$1086$1;
	FBSTRING TMP$1087$1;
	FBSTRING TMP$1088$1;
	FBSTRING TMP$1089$1;
	FBSTRING TMP$1090$1;
	FBSTRING TMP$1091$1;
	FBSTRING TMP$1092$1;
	FBSTRING TMP$1093$1;
	FBSTRING TMP$1094$1;
	FBSTRING TMP$1095$1;
	FBSTRING TMP$1096$1;
	FBSTRING TMP$1097$1;
	FBSTRING TMP$1098$1;
	FBSTRING TMP$1099$1;
	FBSTRING TMP$1100$1;
	FBSTRING TMP$1101$1;
	FBSTRING TMP$1102$1;
	FBSTRING TMP$1103$1;
	FBSTRING TMP$1104$1;
	FBSTRING TMP$1105$1;
	FBSTRING TMP$1106$1;
	FBSTRING TMP$1107$1;
	FBSTRING TMP$1108$1;
	FBSTRING TMP$1109$1;
	FBSTRING TMP$1110$1;
	FBSTRING TMP$1111$1;
	FBSTRING TMP$1112$1;
	FBSTRING TMP$1113$1;
	FBSTRING TMP$1114$1;
	FBSTRING TMP$1115$1;
	FBSTRING TMP$1116$1;
	FBSTRING TMP$1117$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$2315:;
	if( *C$1 == (boolean)0ll ) goto label$2317;
	FBSTRING* vr$4 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 64ll) );
	FBSTRING* vr$7 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 40ll) );
	FBSTRING* vr$10 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 16ll) );
	FBSTRING* vr$13 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 56ll) );
	FBSTRING* vr$16 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 32ll) );
	FBSTRING* vr$19 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 8ll) );
	FBSTRING* vr$22 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 48ll) );
	FBSTRING* vr$25 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 24ll) );
	FBSTRING* vr$28 = fb_DoubleToStr( *(double*)*(double**)THIS$1 );
	__builtin_memset( &TMP$1082$1, 0, 24ll );
	FBSTRING* vr$31 = fb_StrConcat( &TMP$1082$1, (void*)"[", 2ll, (void*)vr$28, -1ll );
	__builtin_memset( &TMP$1083$1, 0, 24ll );
	FBSTRING* vr$34 = fb_StrConcat( &TMP$1083$1, (void*)vr$31, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1084$1, 0, 24ll );
	FBSTRING* vr$37 = fb_StrConcat( &TMP$1084$1, (void*)vr$34, -1ll, (void*)vr$25, -1ll );
	__builtin_memset( &TMP$1085$1, 0, 24ll );
	FBSTRING* vr$40 = fb_StrConcat( &TMP$1085$1, (void*)vr$37, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1086$1, 0, 24ll );
	FBSTRING* vr$43 = fb_StrConcat( &TMP$1086$1, (void*)vr$40, -1ll, (void*)vr$22, -1ll );
	__builtin_memset( &TMP$1087$1, 0, 24ll );
	FBSTRING* vr$46 = fb_StrConcat( &TMP$1087$1, (void*)vr$43, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1088$1, 0, 24ll );
	FBSTRING* vr$49 = fb_StrConcat( &TMP$1088$1, (void*)vr$46, -1ll, (void*)vr$19, -1ll );
	__builtin_memset( &TMP$1089$1, 0, 24ll );
	FBSTRING* vr$52 = fb_StrConcat( &TMP$1089$1, (void*)vr$49, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1090$1, 0, 24ll );
	FBSTRING* vr$55 = fb_StrConcat( &TMP$1090$1, (void*)vr$52, -1ll, (void*)vr$16, -1ll );
	__builtin_memset( &TMP$1091$1, 0, 24ll );
	FBSTRING* vr$58 = fb_StrConcat( &TMP$1091$1, (void*)vr$55, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1092$1, 0, 24ll );
	FBSTRING* vr$61 = fb_StrConcat( &TMP$1092$1, (void*)vr$58, -1ll, (void*)vr$13, -1ll );
	__builtin_memset( &TMP$1093$1, 0, 24ll );
	FBSTRING* vr$64 = fb_StrConcat( &TMP$1093$1, (void*)vr$61, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1094$1, 0, 24ll );
	FBSTRING* vr$67 = fb_StrConcat( &TMP$1094$1, (void*)vr$64, -1ll, (void*)vr$10, -1ll );
	__builtin_memset( &TMP$1095$1, 0, 24ll );
	FBSTRING* vr$70 = fb_StrConcat( &TMP$1095$1, (void*)vr$67, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1096$1, 0, 24ll );
	FBSTRING* vr$73 = fb_StrConcat( &TMP$1096$1, (void*)vr$70, -1ll, (void*)vr$7, -1ll );
	__builtin_memset( &TMP$1097$1, 0, 24ll );
	FBSTRING* vr$76 = fb_StrConcat( &TMP$1097$1, (void*)vr$73, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1098$1, 0, 24ll );
	FBSTRING* vr$79 = fb_StrConcat( &TMP$1098$1, (void*)vr$76, -1ll, (void*)vr$4, -1ll );
	__builtin_memset( &TMP$1099$1, 0, 24ll );
	FBSTRING* vr$82 = fb_StrConcat( &TMP$1099$1, (void*)vr$79, -1ll, (void*)"]", 2ll );
	fb_StrInit( (void*)&TMP$1081$1, -1ll, (void*)vr$82, -1ll, 0 );
	goto label$2318;
	label$2317:;
	FBSTRING* vr$86 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 64ll) );
	FBSTRING* vr$89 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 56ll) );
	FBSTRING* vr$92 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 48ll) );
	FBSTRING* vr$95 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 40ll) );
	FBSTRING* vr$98 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 32ll) );
	FBSTRING* vr$101 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 24ll) );
	FBSTRING* vr$104 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 16ll) );
	FBSTRING* vr$107 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 8ll) );
	FBSTRING* vr$110 = fb_DoubleToStr( *(double*)*(double**)THIS$1 );
	__builtin_memset( &TMP$1100$1, 0, 24ll );
	FBSTRING* vr$113 = fb_StrConcat( &TMP$1100$1, (void*)"[", 2ll, (void*)vr$110, -1ll );
	__builtin_memset( &TMP$1101$1, 0, 24ll );
	FBSTRING* vr$116 = fb_StrConcat( &TMP$1101$1, (void*)vr$113, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1102$1, 0, 24ll );
	FBSTRING* vr$119 = fb_StrConcat( &TMP$1102$1, (void*)vr$116, -1ll, (void*)vr$107, -1ll );
	__builtin_memset( &TMP$1103$1, 0, 24ll );
	FBSTRING* vr$122 = fb_StrConcat( &TMP$1103$1, (void*)vr$119, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1104$1, 0, 24ll );
	FBSTRING* vr$125 = fb_StrConcat( &TMP$1104$1, (void*)vr$122, -1ll, (void*)vr$104, -1ll );
	__builtin_memset( &TMP$1105$1, 0, 24ll );
	FBSTRING* vr$128 = fb_StrConcat( &TMP$1105$1, (void*)vr$125, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1106$1, 0, 24ll );
	FBSTRING* vr$131 = fb_StrConcat( &TMP$1106$1, (void*)vr$128, -1ll, (void*)vr$101, -1ll );
	__builtin_memset( &TMP$1107$1, 0, 24ll );
	FBSTRING* vr$134 = fb_StrConcat( &TMP$1107$1, (void*)vr$131, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1108$1, 0, 24ll );
	FBSTRING* vr$137 = fb_StrConcat( &TMP$1108$1, (void*)vr$134, -1ll, (void*)vr$98, -1ll );
	__builtin_memset( &TMP$1109$1, 0, 24ll );
	FBSTRING* vr$140 = fb_StrConcat( &TMP$1109$1, (void*)vr$137, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1110$1, 0, 24ll );
	FBSTRING* vr$143 = fb_StrConcat( &TMP$1110$1, (void*)vr$140, -1ll, (void*)vr$95, -1ll );
	__builtin_memset( &TMP$1111$1, 0, 24ll );
	FBSTRING* vr$146 = fb_StrConcat( &TMP$1111$1, (void*)vr$143, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1112$1, 0, 24ll );
	FBSTRING* vr$149 = fb_StrConcat( &TMP$1112$1, (void*)vr$146, -1ll, (void*)vr$92, -1ll );
	__builtin_memset( &TMP$1113$1, 0, 24ll );
	FBSTRING* vr$152 = fb_StrConcat( &TMP$1113$1, (void*)vr$149, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1114$1, 0, 24ll );
	FBSTRING* vr$155 = fb_StrConcat( &TMP$1114$1, (void*)vr$152, -1ll, (void*)vr$89, -1ll );
	__builtin_memset( &TMP$1115$1, 0, 24ll );
	FBSTRING* vr$158 = fb_StrConcat( &TMP$1115$1, (void*)vr$155, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1116$1, 0, 24ll );
	FBSTRING* vr$161 = fb_StrConcat( &TMP$1116$1, (void*)vr$158, -1ll, (void*)vr$86, -1ll );
	__builtin_memset( &TMP$1117$1, 0, 24ll );
	FBSTRING* vr$164 = fb_StrConcat( &TMP$1117$1, (void*)vr$161, -1ll, (void*)"]", 2ll );
	fb_StrInit( (void*)&TMP$1081$1, -1ll, (void*)vr$164, -1ll, 0 );
	label$2318:;
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)&TMP$1081$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&TMP$1081$1 );
	goto label$2316;
	label$2316:;
	FBSTRING* vr$170 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$170;
}

struct $N4MATH4MAT3E* _ZN4MATHplERKNS_4MAT3ES2_( struct $N4MATH4MAT3E* tmp$1118$1, struct $N4MATH4MAT3E* M1$1, struct $N4MATH4MAT3E* M2$1 )
{
	label$2319:;
	struct $N4MATH4MAT3E R$1;
	_ZN4MATH4MAT3C1Ev( &R$1 );
	double* P1$1;
	double* vr$1 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M1$1 );
	P1$1 = vr$1;
	double* P2$1;
	double* vr$2 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M2$1 );
	P2$1 = vr$2;
	double* Q$1;
	double* vr$4 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)&R$1 );
	Q$1 = vr$4;
	*(double*)Q$1 = *(double*)P1$1 + *(double*)P2$1;
	*(double*)((uint8*)Q$1 + 8ll) = *(double*)((uint8*)P1$1 + 8ll) + *(double*)((uint8*)P2$1 + 8ll);
	*(double*)((uint8*)Q$1 + 16ll) = *(double*)((uint8*)P1$1 + 16ll) + *(double*)((uint8*)P2$1 + 16ll);
	*(double*)((uint8*)Q$1 + 24ll) = *(double*)((uint8*)P1$1 + 24ll) + *(double*)((uint8*)P2$1 + 24ll);
	*(double*)((uint8*)Q$1 + 32ll) = *(double*)((uint8*)P1$1 + 32ll) + *(double*)((uint8*)P2$1 + 32ll);
	*(double*)((uint8*)Q$1 + 40ll) = *(double*)((uint8*)P1$1 + 40ll) + *(double*)((uint8*)P2$1 + 40ll);
	*(double*)((uint8*)Q$1 + 48ll) = *(double*)((uint8*)P1$1 + 48ll) + *(double*)((uint8*)P2$1 + 48ll);
	*(double*)((uint8*)Q$1 + 56ll) = *(double*)((uint8*)P1$1 + 56ll) + *(double*)((uint8*)P2$1 + 56ll);
	*(double*)((uint8*)Q$1 + 64ll) = *(double*)((uint8*)P1$1 + 64ll) + *(double*)((uint8*)P2$1 + 64ll);
	_ZN4MATH4MAT3C1ERKS0_( tmp$1118$1, (struct $N4MATH4MAT3E*)&R$1 );
	_ZN4MATH4MAT3D1Ev( &R$1 );
	goto label$2320;
	_ZN4MATH4MAT3D1Ev( &R$1 );
	label$2320:;
	return tmp$1118$1;
}

struct $N4MATH4MAT3E* _ZN4MATHmiERKNS_4MAT3ES2_( struct $N4MATH4MAT3E* tmp$1119$1, struct $N4MATH4MAT3E* M1$1, struct $N4MATH4MAT3E* M2$1 )
{
	label$2321:;
	struct $N4MATH4MAT3E R$1;
	_ZN4MATH4MAT3C1Ev( &R$1 );
	double* P1$1;
	double* vr$1 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M1$1 );
	P1$1 = vr$1;
	double* P2$1;
	double* vr$2 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M2$1 );
	P2$1 = vr$2;
	double* Q$1;
	double* vr$4 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)&R$1 );
	Q$1 = vr$4;
	*(double*)Q$1 = *(double*)P1$1 - *(double*)P2$1;
	*(double*)((uint8*)Q$1 + 8ll) = *(double*)((uint8*)P1$1 + 8ll) - *(double*)((uint8*)P2$1 + 8ll);
	*(double*)((uint8*)Q$1 + 16ll) = *(double*)((uint8*)P1$1 + 16ll) - *(double*)((uint8*)P2$1 + 16ll);
	*(double*)((uint8*)Q$1 + 24ll) = *(double*)((uint8*)P1$1 + 24ll) - *(double*)((uint8*)P2$1 + 24ll);
	*(double*)((uint8*)Q$1 + 32ll) = *(double*)((uint8*)P1$1 + 32ll) - *(double*)((uint8*)P2$1 + 32ll);
	*(double*)((uint8*)Q$1 + 40ll) = *(double*)((uint8*)P1$1 + 40ll) - *(double*)((uint8*)P2$1 + 40ll);
	*(double*)((uint8*)Q$1 + 48ll) = *(double*)((uint8*)P1$1 + 48ll) - *(double*)((uint8*)P2$1 + 48ll);
	*(double*)((uint8*)Q$1 + 56ll) = *(double*)((uint8*)P1$1 + 56ll) - *(double*)((uint8*)P2$1 + 56ll);
	*(double*)((uint8*)Q$1 + 64ll) = *(double*)((uint8*)P1$1 + 64ll) - *(double*)((uint8*)P2$1 + 64ll);
	_ZN4MATH4MAT3C1ERKS0_( tmp$1119$1, (struct $N4MATH4MAT3E*)&R$1 );
	_ZN4MATH4MAT3D1Ev( &R$1 );
	goto label$2322;
	_ZN4MATH4MAT3D1Ev( &R$1 );
	label$2322:;
	return tmp$1119$1;
}

struct $N4MATH4MAT3E* _ZN4MATHmlERKNS_4MAT3ERKd( struct $N4MATH4MAT3E* tmp$1120$1, struct $N4MATH4MAT3E* M$1, double* N$1 )
{
	label$2323:;
	struct $N4MATH4MAT3E R$1;
	_ZN4MATH4MAT3C1Ev( &R$1 );
	double* P$1;
	double* vr$1 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M$1 );
	P$1 = vr$1;
	double* Q$1;
	double* vr$3 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)&R$1 );
	Q$1 = vr$3;
	*(double*)Q$1 = *(double*)P$1 * *N$1;
	*(double*)((uint8*)Q$1 + 8ll) = *(double*)((uint8*)P$1 + 8ll) * *N$1;
	*(double*)((uint8*)Q$1 + 16ll) = *(double*)((uint8*)P$1 + 16ll) * *N$1;
	*(double*)((uint8*)Q$1 + 24ll) = *(double*)((uint8*)P$1 + 24ll) * *N$1;
	*(double*)((uint8*)Q$1 + 32ll) = *(double*)((uint8*)P$1 + 32ll) * *N$1;
	*(double*)((uint8*)Q$1 + 40ll) = *(double*)((uint8*)P$1 + 40ll) * *N$1;
	*(double*)((uint8*)Q$1 + 48ll) = *(double*)((uint8*)P$1 + 48ll) * *N$1;
	*(double*)((uint8*)Q$1 + 56ll) = *(double*)((uint8*)P$1 + 56ll) * *N$1;
	*(double*)((uint8*)Q$1 + 64ll) = *(double*)((uint8*)P$1 + 64ll) * *N$1;
	_ZN4MATH4MAT3C1ERKS0_( tmp$1120$1, (struct $N4MATH4MAT3E*)&R$1 );
	_ZN4MATH4MAT3D1Ev( &R$1 );
	goto label$2324;
	_ZN4MATH4MAT3D1Ev( &R$1 );
	label$2324:;
	return tmp$1120$1;
}

struct $N4MATH4MAT3E* _ZN4MATHmlERKdRKNS_4MAT3E( struct $N4MATH4MAT3E* tmp$1121$1, double* N$1, struct $N4MATH4MAT3E* M$1 )
{
	label$2325:;
	struct $N4MATH4MAT3E R$1;
	_ZN4MATH4MAT3C1Ev( &R$1 );
	double* P$1;
	double* vr$1 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M$1 );
	P$1 = vr$1;
	double* Q$1;
	double* vr$3 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)&R$1 );
	Q$1 = vr$3;
	*(double*)Q$1 = *N$1 * *(double*)P$1;
	*(double*)((uint8*)Q$1 + 8ll) = *N$1 * *(double*)((uint8*)P$1 + 8ll);
	*(double*)((uint8*)Q$1 + 16ll) = *N$1 * *(double*)((uint8*)P$1 + 16ll);
	*(double*)((uint8*)Q$1 + 24ll) = *N$1 * *(double*)((uint8*)P$1 + 24ll);
	*(double*)((uint8*)Q$1 + 32ll) = *N$1 * *(double*)((uint8*)P$1 + 32ll);
	*(double*)((uint8*)Q$1 + 40ll) = *N$1 * *(double*)((uint8*)P$1 + 40ll);
	*(double*)((uint8*)Q$1 + 48ll) = *N$1 * *(double*)((uint8*)P$1 + 48ll);
	*(double*)((uint8*)Q$1 + 56ll) = *N$1 * *(double*)((uint8*)P$1 + 56ll);
	*(double*)((uint8*)Q$1 + 64ll) = *N$1 * *(double*)((uint8*)P$1 + 64ll);
	_ZN4MATH4MAT3C1ERKS0_( tmp$1121$1, (struct $N4MATH4MAT3E*)&R$1 );
	_ZN4MATH4MAT3D1Ev( &R$1 );
	goto label$2326;
	_ZN4MATH4MAT3D1Ev( &R$1 );
	label$2326:;
	return tmp$1121$1;
}

struct $N4MATH4MAT3E* _ZN4MATHmlERKNS_4MAT3ES2_( struct $N4MATH4MAT3E* tmp$1122$1, struct $N4MATH4MAT3E* M1$1, struct $N4MATH4MAT3E* M2$1 )
{
	label$2327:;
	struct $N4MATH4MAT3E R$1;
	_ZN4MATH4MAT3C1Ev( &R$1 );
	double* P1$1;
	double* vr$1 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M1$1 );
	P1$1 = vr$1;
	double* P2$1;
	double* vr$2 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M2$1 );
	P2$1 = vr$2;
	double* Q$1;
	double* vr$4 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)&R$1 );
	Q$1 = vr$4;
	*(double*)Q$1 = ((*(double*)P1$1 * *(double*)P2$1) + (*(double*)((uint8*)P1$1 + 8ll) * *(double*)((uint8*)P2$1 + 24ll))) + (*(double*)((uint8*)P1$1 + 16ll) * *(double*)((uint8*)P2$1 + 48ll));
	*(double*)((uint8*)Q$1 + 8ll) = ((*(double*)P1$1 * *(double*)((uint8*)P2$1 + 8ll)) + (*(double*)((uint8*)P1$1 + 8ll) * *(double*)((uint8*)P2$1 + 32ll))) + (*(double*)((uint8*)P1$1 + 16ll) * *(double*)((uint8*)P2$1 + 56ll));
	*(double*)((uint8*)Q$1 + 16ll) = ((*(double*)P1$1 * *(double*)((uint8*)P2$1 + 16ll)) + (*(double*)((uint8*)P1$1 + 8ll) * *(double*)((uint8*)P2$1 + 40ll))) + (*(double*)((uint8*)P1$1 + 16ll) * *(double*)((uint8*)P2$1 + 64ll));
	*(double*)((uint8*)Q$1 + 24ll) = ((*(double*)((uint8*)P1$1 + 24ll) * *(double*)P2$1) + (*(double*)((uint8*)P1$1 + 32ll) * *(double*)((uint8*)P2$1 + 24ll))) + (*(double*)((uint8*)P1$1 + 40ll) * *(double*)((uint8*)P2$1 + 48ll));
	*(double*)((uint8*)Q$1 + 32ll) = ((*(double*)((uint8*)P1$1 + 24ll) * *(double*)((uint8*)P2$1 + 8ll)) + (*(double*)((uint8*)P1$1 + 32ll) * *(double*)((uint8*)P2$1 + 32ll))) + (*(double*)((uint8*)P1$1 + 40ll) * *(double*)((uint8*)P2$1 + 56ll));
	*(double*)((uint8*)Q$1 + 40ll) = ((*(double*)((uint8*)P1$1 + 24ll) * *(double*)((uint8*)P2$1 + 16ll)) + (*(double*)((uint8*)P1$1 + 32ll) * *(double*)((uint8*)P2$1 + 40ll))) + (*(double*)((uint8*)P1$1 + 40ll) * *(double*)((uint8*)P2$1 + 64ll));
	*(double*)((uint8*)Q$1 + 48ll) = ((*(double*)((uint8*)P1$1 + 48ll) * *(double*)P2$1) + (*(double*)((uint8*)P1$1 + 56ll) * *(double*)((uint8*)P2$1 + 24ll))) + (*(double*)((uint8*)P1$1 + 64ll) * *(double*)((uint8*)P2$1 + 48ll));
	*(double*)((uint8*)Q$1 + 56ll) = ((*(double*)((uint8*)P1$1 + 48ll) * *(double*)((uint8*)P2$1 + 8ll)) + (*(double*)((uint8*)P1$1 + 56ll) * *(double*)((uint8*)P2$1 + 32ll))) + (*(double*)((uint8*)P1$1 + 64ll) * *(double*)((uint8*)P2$1 + 56ll));
	*(double*)((uint8*)Q$1 + 64ll) = ((*(double*)((uint8*)P1$1 + 48ll) * *(double*)((uint8*)P2$1 + 16ll)) + (*(double*)((uint8*)P1$1 + 56ll) * *(double*)((uint8*)P2$1 + 40ll))) + (*(double*)((uint8*)P1$1 + 64ll) * *(double*)((uint8*)P2$1 + 64ll));
	_ZN4MATH4MAT3C1ERKS0_( tmp$1122$1, (struct $N4MATH4MAT3E*)&R$1 );
	_ZN4MATH4MAT3D1Ev( &R$1 );
	goto label$2328;
	_ZN4MATH4MAT3D1Ev( &R$1 );
	label$2328:;
	return tmp$1122$1;
}

struct $N4MATH4VEC3E _ZN4MATHmlERKNS_4MAT3ERKNS_4VEC3E( struct $N4MATH4MAT3E* M$1, struct $N4MATH4VEC3E* V$1 )
{
	double TMP$1124$1;
	double TMP$1125$1;
	double TMP$1126$1;
	struct $N4MATH4VEC3E fb$result$1;
	label$2329:;
	double* P$1;
	double* vr$0 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M$1 );
	P$1 = vr$0;
	TMP$1126$1 = ((*(double*)((uint8*)P$1 + 48ll) * *(double*)V$1) + (*(double*)((uint8*)P$1 + 56ll) * *(double*)((uint8*)V$1 + 8ll))) + (*(double*)((uint8*)P$1 + 64ll) * *(double*)((uint8*)V$1 + 16ll));
	TMP$1125$1 = ((*(double*)((uint8*)P$1 + 24ll) * *(double*)V$1) + (*(double*)((uint8*)P$1 + 32ll) * *(double*)((uint8*)V$1 + 8ll))) + (*(double*)((uint8*)P$1 + 40ll) * *(double*)((uint8*)V$1 + 16ll));
	TMP$1124$1 = ((*(double*)P$1 * *(double*)V$1) + (*(double*)((uint8*)P$1 + 8ll) * *(double*)((uint8*)V$1 + 8ll))) + (*(double*)((uint8*)P$1 + 16ll) * *(double*)((uint8*)V$1 + 16ll));
	_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, (double*)&TMP$1124$1, (double*)&TMP$1125$1, (double*)&TMP$1126$1 );
	goto label$2330;
	label$2330:;
	return fb$result$1;
}

struct $N4MATH4CVECE _ZN4MATHmlERKNS_4MAT3ERKNS_4CVECE( struct $N4MATH4MAT3E* M$1, struct $N4MATH4CVECE* V$1 )
{
	double TMP$1128$1;
	double TMP$1129$1;
	struct $N4MATH4CVECE fb$result$1;
	label$2331:;
	double X$1;
	double vr$0 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
	X$1 = vr$0;
	double Y$1;
	double vr$1 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
	Y$1 = vr$1;
	double I$1;
	__builtin_memset( &I$1, 0, 8ll );
	double J$1;
	__builtin_memset( &J$1, 0, 8ll );
	double K$1;
	__builtin_memset( &K$1, 0, 8ll );
	double* P$1;
	double* vr$5 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M$1 );
	P$1 = vr$5;
	I$1 = ((*(double*)P$1 * X$1) + (*(double*)((uint8*)P$1 + 8ll) * Y$1)) + (*(double*)((uint8*)P$1 + 16ll) * *(double*)V$1);
	J$1 = ((*(double*)((uint8*)P$1 + 24ll) * X$1) + (*(double*)((uint8*)P$1 + 32ll) * Y$1)) + (*(double*)((uint8*)P$1 + 40ll) * *(double*)V$1);
	K$1 = ((*(double*)((uint8*)P$1 + 48ll) * X$1) + (*(double*)((uint8*)P$1 + 56ll) * Y$1)) + (*(double*)((uint8*)P$1 + 64ll) * *(double*)V$1);
	double vr$36 = _ZN4MATH5HYPOTERKdS1_( (double*)&I$1, (double*)&J$1 );
	TMP$1129$1 = vr$36;
	double vr$40 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, (double*)&J$1 );
	TMP$1128$1 = vr$40;
	_ZN4MATH4CVECC1ERKdS2_S2_( &fb$result$1, (double*)&TMP$1128$1, (double*)&TMP$1129$1, (double*)&K$1 );
	goto label$2332;
	label$2332:;
	return fb$result$1;
}

struct $N4MATH4MAT3E* _ZN4MATHdvERKNS_4MAT3ERKd( struct $N4MATH4MAT3E* tmp$1130$1, struct $N4MATH4MAT3E* M$1, double* N$1 )
{
	label$2333:;
	if( *N$1 == 0x0p+0 ) goto label$2336;
	{
		struct $N4MATH4MAT3E R$2;
		_ZN4MATH4MAT3C1Ev( &R$2 );
		double* P$2;
		double* vr$2 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M$1 );
		P$2 = vr$2;
		double* Q$2;
		double* vr$4 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)&R$2 );
		Q$2 = vr$4;
		*(double*)Q$2 = *(double*)P$2 / *N$1;
		*(double*)((uint8*)Q$2 + 8ll) = *(double*)((uint8*)P$2 + 8ll) / *N$1;
		*(double*)((uint8*)Q$2 + 16ll) = *(double*)((uint8*)P$2 + 16ll) / *N$1;
		*(double*)((uint8*)Q$2 + 24ll) = *(double*)((uint8*)P$2 + 24ll) / *N$1;
		*(double*)((uint8*)Q$2 + 32ll) = *(double*)((uint8*)P$2 + 32ll) / *N$1;
		*(double*)((uint8*)Q$2 + 40ll) = *(double*)((uint8*)P$2 + 40ll) / *N$1;
		*(double*)((uint8*)Q$2 + 48ll) = *(double*)((uint8*)P$2 + 48ll) / *N$1;
		*(double*)((uint8*)Q$2 + 56ll) = *(double*)((uint8*)P$2 + 56ll) / *N$1;
		*(double*)((uint8*)Q$2 + 64ll) = *(double*)((uint8*)P$2 + 64ll) / *N$1;
		_ZN4MATH4MAT3C1ERKS0_( tmp$1130$1, (struct $N4MATH4MAT3E*)&R$2 );
		_ZN4MATH4MAT3D1Ev( &R$2 );
		goto label$2334;
		_ZN4MATH4MAT3D1Ev( &R$2 );
	}
	label$2336:;
	label$2335:;
	_ZN4MATH4MAT3C1Ev( tmp$1130$1 );
	goto label$2334;
	label$2334:;
	return tmp$1130$1;
}

void _ZN4MATH4MAT4C1Ev( struct $N4MATH4MAT4E* THIS$1 )
{
	double* TMP$1132$1;
	label$2339:;
	__builtin_memset( (struct $N4MATH10BASEMATRIXE*)THIS$1, 0, 8ll );
	void* vr$2 = malloc( 128ull );
	TMP$1132$1 = (double*)vr$2;
	if( TMP$1132$1 == (double*)0ull ) goto label$2341;
	__builtin_memset( TMP$1132$1, 0, 128ull );
	label$2341:;
	*(double**)THIS$1 = TMP$1132$1;
	*(*(double**)THIS$1) = 0x1.p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 40ll) = 0x1.p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 80ll) = 0x1.p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 120ll) = 0x1.p+0;
	label$2340:;
}

void _ZN4MATH4MAT4C1ERKNS_4MAT2E( struct $N4MATH4MAT4E* THIS$1, struct $N4MATH4MAT2E* M$1 )
{
	double* TMP$1133$1;
	label$2342:;
	__builtin_memset( (struct $N4MATH10BASEMATRIXE*)THIS$1, 0, 8ll );
	void* vr$2 = malloc( 128ull );
	TMP$1133$1 = (double*)vr$2;
	if( TMP$1133$1 == (double*)0ull ) goto label$2344;
	__builtin_memset( TMP$1133$1, 0, 128ull );
	label$2344:;
	*(double**)THIS$1 = TMP$1133$1;
	double* P$1;
	double* vr$4 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M$1 );
	P$1 = vr$4;
	*(*(double**)THIS$1) = *(double*)P$1;
	*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)P$1 + 8ll);
	*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)P$1 + 16ll);
	*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)P$1 + 24ll);
	*(double*)((uint8*)*(double**)THIS$1 + 80ll) = 0x1.p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 120ll) = 0x1.p+0;
	label$2343:;
}

void _ZN4MATH4MAT4C1ERKNS_4MAT3E( struct $N4MATH4MAT4E* THIS$1, struct $N4MATH4MAT3E* M$1 )
{
	double* TMP$1134$1;
	label$2345:;
	__builtin_memset( (struct $N4MATH10BASEMATRIXE*)THIS$1, 0, 8ll );
	void* vr$2 = malloc( 128ull );
	TMP$1134$1 = (double*)vr$2;
	if( TMP$1134$1 == (double*)0ull ) goto label$2347;
	__builtin_memset( TMP$1134$1, 0, 128ull );
	label$2347:;
	*(double**)THIS$1 = TMP$1134$1;
	double* P$1;
	double* vr$4 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M$1 );
	P$1 = vr$4;
	*(*(double**)THIS$1) = *(double*)P$1;
	*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)P$1 + 8ll);
	*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)P$1 + 16ll);
	*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)P$1 + 24ll);
	*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)P$1 + 32ll);
	*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)((uint8*)P$1 + 40ll);
	*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)((uint8*)P$1 + 48ll);
	*(double*)((uint8*)*(double**)THIS$1 + 72ll) = *(double*)((uint8*)P$1 + 56ll);
	*(double*)((uint8*)*(double**)THIS$1 + 80ll) = *(double*)((uint8*)P$1 + 64ll);
	*(double*)((uint8*)*(double**)THIS$1 + 120ll) = 0x1.p+0;
	label$2346:;
}

void _ZN4MATH4MAT4C1ERKS0_( struct $N4MATH4MAT4E* THIS$1, struct $N4MATH4MAT4E* M$1 )
{
	double* TMP$1135$1;
	label$2348:;
	__builtin_memset( (struct $N4MATH10BASEMATRIXE*)THIS$1, 0, 8ll );
	void* vr$2 = malloc( 128ull );
	TMP$1135$1 = (double*)vr$2;
	if( TMP$1135$1 == (double*)0ull ) goto label$2350;
	__builtin_memset( TMP$1135$1, 0, 128ull );
	label$2350:;
	*(double**)THIS$1 = TMP$1135$1;
	*(*(double**)THIS$1) = *(double*)*(double**)M$1;
	*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)*(double**)M$1 + 8ll);
	*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)*(double**)M$1 + 16ll);
	*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)*(double**)M$1 + 24ll);
	*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)*(double**)M$1 + 32ll);
	*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)*(double**)M$1 + 40ll);
	*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)((uint8*)*(double**)M$1 + 48ll);
	*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *(double*)((uint8*)*(double**)M$1 + 56ll);
	*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)((uint8*)*(double**)M$1 + 64ll);
	*(double*)((uint8*)*(double**)THIS$1 + 72ll) = *(double*)((uint8*)*(double**)M$1 + 72ll);
	*(double*)((uint8*)*(double**)THIS$1 + 80ll) = *(double*)((uint8*)*(double**)M$1 + 80ll);
	*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *(double*)((uint8*)*(double**)M$1 + 88ll);
	*(double*)((uint8*)*(double**)THIS$1 + 96ll) = *(double*)((uint8*)*(double**)M$1 + 96ll);
	*(double*)((uint8*)*(double**)THIS$1 + 104ll) = *(double*)((uint8*)*(double**)M$1 + 104ll);
	*(double*)((uint8*)*(double**)THIS$1 + 112ll) = *(double*)((uint8*)*(double**)M$1 + 112ll);
	*(double*)((uint8*)*(double**)THIS$1 + 120ll) = *(double*)((uint8*)*(double**)M$1 + 120ll);
	label$2349:;
}

void _ZN4MATH4MAT4pLERKS0_( struct $N4MATH4MAT4E* THIS$1, struct $N4MATH4MAT4E* M$1 )
{
	label$2351:;
	*(*(double**)THIS$1) = *(*(double**)THIS$1) + *(double*)*(double**)M$1;
	*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)*(double**)THIS$1 + 8ll) + *(double*)((uint8*)*(double**)M$1 + 8ll);
	*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)*(double**)THIS$1 + 16ll) + *(double*)((uint8*)*(double**)M$1 + 16ll);
	*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)*(double**)THIS$1 + 24ll) + *(double*)((uint8*)*(double**)M$1 + 24ll);
	*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)*(double**)THIS$1 + 32ll) + *(double*)((uint8*)*(double**)M$1 + 32ll);
	*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)*(double**)THIS$1 + 40ll) + *(double*)((uint8*)*(double**)M$1 + 40ll);
	*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)((uint8*)*(double**)THIS$1 + 48ll) + *(double*)((uint8*)*(double**)M$1 + 48ll);
	*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *(double*)((uint8*)*(double**)THIS$1 + 56ll) + *(double*)((uint8*)*(double**)M$1 + 56ll);
	*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)((uint8*)*(double**)THIS$1 + 64ll) + *(double*)((uint8*)*(double**)M$1 + 64ll);
	*(double*)((uint8*)*(double**)THIS$1 + 72ll) = *(double*)((uint8*)*(double**)THIS$1 + 72ll) + *(double*)((uint8*)*(double**)M$1 + 72ll);
	*(double*)((uint8*)*(double**)THIS$1 + 80ll) = *(double*)((uint8*)*(double**)THIS$1 + 80ll) + *(double*)((uint8*)*(double**)M$1 + 80ll);
	*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *(double*)((uint8*)*(double**)THIS$1 + 88ll) + *(double*)((uint8*)*(double**)M$1 + 88ll);
	*(double*)((uint8*)*(double**)THIS$1 + 96ll) = *(double*)((uint8*)*(double**)THIS$1 + 96ll) + *(double*)((uint8*)*(double**)M$1 + 96ll);
	*(double*)((uint8*)*(double**)THIS$1 + 104ll) = *(double*)((uint8*)*(double**)THIS$1 + 104ll) + *(double*)((uint8*)*(double**)M$1 + 104ll);
	*(double*)((uint8*)*(double**)THIS$1 + 112ll) = *(double*)((uint8*)*(double**)THIS$1 + 112ll) + *(double*)((uint8*)*(double**)M$1 + 112ll);
	*(double*)((uint8*)*(double**)THIS$1 + 120ll) = *(double*)((uint8*)*(double**)THIS$1 + 120ll) + *(double*)((uint8*)*(double**)M$1 + 120ll);
	label$2352:;
}

void _ZN4MATH4MAT4mIERKS0_( struct $N4MATH4MAT4E* THIS$1, struct $N4MATH4MAT4E* M$1 )
{
	label$2353:;
	*(*(double**)THIS$1) = *(*(double**)THIS$1) - *(double*)*(double**)M$1;
	*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)*(double**)THIS$1 + 8ll) - *(double*)((uint8*)*(double**)M$1 + 8ll);
	*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)*(double**)THIS$1 + 16ll) - *(double*)((uint8*)*(double**)M$1 + 16ll);
	*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)*(double**)THIS$1 + 24ll) - *(double*)((uint8*)*(double**)M$1 + 24ll);
	*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)*(double**)THIS$1 + 32ll) - *(double*)((uint8*)*(double**)M$1 + 32ll);
	*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)*(double**)THIS$1 + 40ll) - *(double*)((uint8*)*(double**)M$1 + 40ll);
	*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)((uint8*)*(double**)THIS$1 + 48ll) - *(double*)((uint8*)*(double**)M$1 + 48ll);
	*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *(double*)((uint8*)*(double**)THIS$1 + 56ll) - *(double*)((uint8*)*(double**)M$1 + 56ll);
	*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)((uint8*)*(double**)THIS$1 + 64ll) - *(double*)((uint8*)*(double**)M$1 + 64ll);
	*(double*)((uint8*)*(double**)THIS$1 + 72ll) = *(double*)((uint8*)*(double**)THIS$1 + 72ll) - *(double*)((uint8*)*(double**)M$1 + 72ll);
	*(double*)((uint8*)*(double**)THIS$1 + 80ll) = *(double*)((uint8*)*(double**)THIS$1 + 80ll) - *(double*)((uint8*)*(double**)M$1 + 80ll);
	*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *(double*)((uint8*)*(double**)THIS$1 + 88ll) - *(double*)((uint8*)*(double**)M$1 + 88ll);
	*(double*)((uint8*)*(double**)THIS$1 + 96ll) = *(double*)((uint8*)*(double**)THIS$1 + 96ll) - *(double*)((uint8*)*(double**)M$1 + 96ll);
	*(double*)((uint8*)*(double**)THIS$1 + 104ll) = *(double*)((uint8*)*(double**)THIS$1 + 104ll) - *(double*)((uint8*)*(double**)M$1 + 104ll);
	*(double*)((uint8*)*(double**)THIS$1 + 112ll) = *(double*)((uint8*)*(double**)THIS$1 + 112ll) - *(double*)((uint8*)*(double**)M$1 + 112ll);
	*(double*)((uint8*)*(double**)THIS$1 + 120ll) = *(double*)((uint8*)*(double**)THIS$1 + 120ll) - *(double*)((uint8*)*(double**)M$1 + 120ll);
	label$2354:;
}

void _ZN4MATH4MAT4mLERKd( struct $N4MATH4MAT4E* THIS$1, double* N$1 )
{
	label$2355:;
	*(*(double**)THIS$1) = *(*(double**)THIS$1) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)*(double**)THIS$1 + 8ll) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)*(double**)THIS$1 + 16ll) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)*(double**)THIS$1 + 24ll) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)*(double**)THIS$1 + 32ll) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)*(double**)THIS$1 + 40ll) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)((uint8*)*(double**)THIS$1 + 48ll) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *(double*)((uint8*)*(double**)THIS$1 + 56ll) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)((uint8*)*(double**)THIS$1 + 64ll) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 72ll) = *(double*)((uint8*)*(double**)THIS$1 + 72ll) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 80ll) = *(double*)((uint8*)*(double**)THIS$1 + 80ll) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *(double*)((uint8*)*(double**)THIS$1 + 88ll) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 96ll) = *(double*)((uint8*)*(double**)THIS$1 + 96ll) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 104ll) = *(double*)((uint8*)*(double**)THIS$1 + 104ll) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 112ll) = *(double*)((uint8*)*(double**)THIS$1 + 112ll) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 120ll) = *(double*)((uint8*)*(double**)THIS$1 + 120ll) * *N$1;
	label$2356:;
}

void _ZN4MATH4MAT4mLERKS0_( struct $N4MATH4MAT4E* THIS$1, struct $N4MATH4MAT4E* M$1 )
{
	label$2357:;
	double N00$1;
	N00$1 = (((*(*(double**)THIS$1) * *(double*)*(double**)M$1) + (*(double*)((uint8*)*(double**)THIS$1 + 8ll) * *(double*)((uint8*)*(double**)M$1 + 32ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 16ll) * *(double*)((uint8*)*(double**)M$1 + 64ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 24ll) * *(double*)((uint8*)*(double**)M$1 + 96ll));
	double N10$1;
	N10$1 = (((*(*(double**)THIS$1) * *(double*)*(double**)M$1) + (*(double*)((uint8*)*(double**)THIS$1 + 8ll) * *(double*)((uint8*)*(double**)M$1 + 32ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 16ll) * *(double*)((uint8*)*(double**)M$1 + 64ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 24ll) * *(double*)((uint8*)*(double**)M$1 + 96ll));
	double N20$1;
	N20$1 = (((*(*(double**)THIS$1) * *(double*)*(double**)M$1) + (*(double*)((uint8*)*(double**)THIS$1 + 8ll) * *(double*)((uint8*)*(double**)M$1 + 32ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 16ll) * *(double*)((uint8*)*(double**)M$1 + 64ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 24ll) * *(double*)((uint8*)*(double**)M$1 + 96ll));
	double N30$1;
	N30$1 = (((*(*(double**)THIS$1) * *(double*)*(double**)M$1) + (*(double*)((uint8*)*(double**)THIS$1 + 8ll) * *(double*)((uint8*)*(double**)M$1 + 32ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 16ll) * *(double*)((uint8*)*(double**)M$1 + 64ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 24ll) * *(double*)((uint8*)*(double**)M$1 + 96ll));
	double N01$1;
	N01$1 = (((*(double*)((uint8*)*(double**)THIS$1 + 32ll) * *(double*)*(double**)M$1) + (*(double*)((uint8*)*(double**)THIS$1 + 40ll) * *(double*)((uint8*)*(double**)M$1 + 32ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 48ll) * *(double*)((uint8*)*(double**)M$1 + 64ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 56ll) * *(double*)((uint8*)*(double**)M$1 + 96ll));
	double N11$1;
	N11$1 = (((*(double*)((uint8*)*(double**)THIS$1 + 32ll) * *(double*)*(double**)M$1) + (*(double*)((uint8*)*(double**)THIS$1 + 40ll) * *(double*)((uint8*)*(double**)M$1 + 32ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 48ll) * *(double*)((uint8*)*(double**)M$1 + 64ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 56ll) * *(double*)((uint8*)*(double**)M$1 + 96ll));
	double N21$1;
	N21$1 = (((*(double*)((uint8*)*(double**)THIS$1 + 32ll) * *(double*)*(double**)M$1) + (*(double*)((uint8*)*(double**)THIS$1 + 40ll) * *(double*)((uint8*)*(double**)M$1 + 32ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 48ll) * *(double*)((uint8*)*(double**)M$1 + 64ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 56ll) * *(double*)((uint8*)*(double**)M$1 + 96ll));
	double N31$1;
	N31$1 = (((*(double*)((uint8*)*(double**)THIS$1 + 32ll) * *(double*)*(double**)M$1) + (*(double*)((uint8*)*(double**)THIS$1 + 40ll) * *(double*)((uint8*)*(double**)M$1 + 32ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 48ll) * *(double*)((uint8*)*(double**)M$1 + 64ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 56ll) * *(double*)((uint8*)*(double**)M$1 + 96ll));
	double N02$1;
	N02$1 = (((*(double*)((uint8*)*(double**)THIS$1 + 64ll) * *(double*)*(double**)M$1) + (*(double*)((uint8*)*(double**)THIS$1 + 72ll) * *(double*)((uint8*)*(double**)M$1 + 32ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 80ll) * *(double*)((uint8*)*(double**)M$1 + 64ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 88ll) * *(double*)((uint8*)*(double**)M$1 + 96ll));
	double N12$1;
	N12$1 = (((*(double*)((uint8*)*(double**)THIS$1 + 64ll) * *(double*)*(double**)M$1) + (*(double*)((uint8*)*(double**)THIS$1 + 72ll) * *(double*)((uint8*)*(double**)M$1 + 32ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 80ll) * *(double*)((uint8*)*(double**)M$1 + 64ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 88ll) * *(double*)((uint8*)*(double**)M$1 + 96ll));
	double N22$1;
	N22$1 = (((*(double*)((uint8*)*(double**)THIS$1 + 64ll) * *(double*)*(double**)M$1) + (*(double*)((uint8*)*(double**)THIS$1 + 72ll) * *(double*)((uint8*)*(double**)M$1 + 32ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 80ll) * *(double*)((uint8*)*(double**)M$1 + 64ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 88ll) * *(double*)((uint8*)*(double**)M$1 + 96ll));
	double N32$1;
	N32$1 = (((*(double*)((uint8*)*(double**)THIS$1 + 64ll) * *(double*)*(double**)M$1) + (*(double*)((uint8*)*(double**)THIS$1 + 72ll) * *(double*)((uint8*)*(double**)M$1 + 32ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 80ll) * *(double*)((uint8*)*(double**)M$1 + 64ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 88ll) * *(double*)((uint8*)*(double**)M$1 + 96ll));
	double N03$1;
	N03$1 = (((*(double*)((uint8*)*(double**)THIS$1 + 96ll) * *(double*)*(double**)M$1) + (*(double*)((uint8*)*(double**)THIS$1 + 104ll) * *(double*)((uint8*)*(double**)M$1 + 32ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 112ll) * *(double*)((uint8*)*(double**)M$1 + 64ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 120ll) * *(double*)((uint8*)*(double**)M$1 + 96ll));
	double N13$1;
	N13$1 = (((*(double*)((uint8*)*(double**)THIS$1 + 96ll) * *(double*)*(double**)M$1) + (*(double*)((uint8*)*(double**)THIS$1 + 104ll) * *(double*)((uint8*)*(double**)M$1 + 32ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 112ll) * *(double*)((uint8*)*(double**)M$1 + 64ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 120ll) * *(double*)((uint8*)*(double**)M$1 + 96ll));
	double N23$1;
	N23$1 = (((*(double*)((uint8*)*(double**)THIS$1 + 96ll) * *(double*)*(double**)M$1) + (*(double*)((uint8*)*(double**)THIS$1 + 104ll) * *(double*)((uint8*)*(double**)M$1 + 32ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 112ll) * *(double*)((uint8*)*(double**)M$1 + 64ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 120ll) * *(double*)((uint8*)*(double**)M$1 + 96ll));
	double N33$1;
	N33$1 = (((*(double*)((uint8*)*(double**)THIS$1 + 96ll) * *(double*)*(double**)M$1) + (*(double*)((uint8*)*(double**)THIS$1 + 104ll) * *(double*)((uint8*)*(double**)M$1 + 32ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 112ll) * *(double*)((uint8*)*(double**)M$1 + 64ll))) + (*(double*)((uint8*)*(double**)THIS$1 + 120ll) * *(double*)((uint8*)*(double**)M$1 + 96ll));
	*(*(double**)THIS$1) = N00$1;
	*(double*)((uint8*)*(double**)THIS$1 + 8ll) = N10$1;
	*(double*)((uint8*)*(double**)THIS$1 + 16ll) = N20$1;
	*(double*)((uint8*)*(double**)THIS$1 + 24ll) = N30$1;
	*(double*)((uint8*)*(double**)THIS$1 + 32ll) = N01$1;
	*(double*)((uint8*)*(double**)THIS$1 + 40ll) = N11$1;
	*(double*)((uint8*)*(double**)THIS$1 + 48ll) = N21$1;
	*(double*)((uint8*)*(double**)THIS$1 + 56ll) = N31$1;
	*(double*)((uint8*)*(double**)THIS$1 + 64ll) = N02$1;
	*(double*)((uint8*)*(double**)THIS$1 + 72ll) = N12$1;
	*(double*)((uint8*)*(double**)THIS$1 + 80ll) = N22$1;
	*(double*)((uint8*)*(double**)THIS$1 + 88ll) = N32$1;
	*(double*)((uint8*)*(double**)THIS$1 + 96ll) = N03$1;
	*(double*)((uint8*)*(double**)THIS$1 + 104ll) = N13$1;
	*(double*)((uint8*)*(double**)THIS$1 + 112ll) = N23$1;
	*(double*)((uint8*)*(double**)THIS$1 + 120ll) = N33$1;
	label$2358:;
}

void _ZN4MATH4MAT4dVERKd( struct $N4MATH4MAT4E* THIS$1, double* N$1 )
{
	label$2359:;
	if( *N$1 == 0x0p+0 ) goto label$2362;
	{
		*(*(double**)THIS$1) = *(*(double**)THIS$1) / *N$1;
		*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)*(double**)THIS$1 + 8ll) / *N$1;
		*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)*(double**)THIS$1 + 16ll) / *N$1;
		*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)*(double**)THIS$1 + 24ll) / *N$1;
		*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)*(double**)THIS$1 + 32ll) / *N$1;
		*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)*(double**)THIS$1 + 40ll) / *N$1;
		*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)((uint8*)*(double**)THIS$1 + 48ll) / *N$1;
		*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *(double*)((uint8*)*(double**)THIS$1 + 56ll) / *N$1;
		*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)((uint8*)*(double**)THIS$1 + 64ll) / *N$1;
		*(double*)((uint8*)*(double**)THIS$1 + 72ll) = *(double*)((uint8*)*(double**)THIS$1 + 72ll) / *N$1;
		*(double*)((uint8*)*(double**)THIS$1 + 80ll) = *(double*)((uint8*)*(double**)THIS$1 + 80ll) / *N$1;
		*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *(double*)((uint8*)*(double**)THIS$1 + 88ll) / *N$1;
		*(double*)((uint8*)*(double**)THIS$1 + 96ll) = *(double*)((uint8*)*(double**)THIS$1 + 96ll) / *N$1;
		*(double*)((uint8*)*(double**)THIS$1 + 104ll) = *(double*)((uint8*)*(double**)THIS$1 + 104ll) / *N$1;
		*(double*)((uint8*)*(double**)THIS$1 + 112ll) = *(double*)((uint8*)*(double**)THIS$1 + 112ll) / *N$1;
		*(double*)((uint8*)*(double**)THIS$1 + 120ll) = *(double*)((uint8*)*(double**)THIS$1 + 120ll) / *N$1;
	}
	goto label$2361;
	label$2362:;
	{
		*(*(double**)THIS$1) = 0x1.p+0;
		*(double*)((uint8*)*(double**)THIS$1 + 8ll) = 0x0p+0;
		*(double*)((uint8*)*(double**)THIS$1 + 16ll) = 0x0p+0;
		*(double*)((uint8*)*(double**)THIS$1 + 24ll) = 0x0p+0;
		*(double*)((uint8*)*(double**)THIS$1 + 32ll) = 0x0p+0;
		*(double*)((uint8*)*(double**)THIS$1 + 40ll) = 0x1.p+0;
		*(double*)((uint8*)*(double**)THIS$1 + 48ll) = 0x0p+0;
		*(double*)((uint8*)*(double**)THIS$1 + 56ll) = 0x0p+0;
		*(double*)((uint8*)*(double**)THIS$1 + 64ll) = 0x0p+0;
		*(double*)((uint8*)*(double**)THIS$1 + 72ll) = 0x0p+0;
		*(double*)((uint8*)*(double**)THIS$1 + 80ll) = 0x1.p+0;
		*(double*)((uint8*)*(double**)THIS$1 + 88ll) = 0x0p+0;
		*(double*)((uint8*)*(double**)THIS$1 + 96ll) = 0x0p+0;
		*(double*)((uint8*)*(double**)THIS$1 + 104ll) = 0x0p+0;
		*(double*)((uint8*)*(double**)THIS$1 + 112ll) = 0x0p+0;
		*(double*)((uint8*)*(double**)THIS$1 + 120ll) = 0x1.p+0;
	}
	label$2361:;
	label$2360:;
}

FBSTRING* _ZNK4MATH4MAT4cv8FBSTRINGEv( struct $N4MATH4MAT4E* THIS$1 )
{
	FBSTRING TMP$1137$1;
	FBSTRING TMP$1138$1;
	FBSTRING TMP$1139$1;
	FBSTRING TMP$1140$1;
	FBSTRING TMP$1141$1;
	FBSTRING TMP$1142$1;
	FBSTRING TMP$1143$1;
	FBSTRING TMP$1144$1;
	FBSTRING TMP$1145$1;
	FBSTRING TMP$1146$1;
	FBSTRING TMP$1147$1;
	FBSTRING TMP$1148$1;
	FBSTRING TMP$1149$1;
	FBSTRING TMP$1150$1;
	FBSTRING TMP$1151$1;
	FBSTRING TMP$1152$1;
	FBSTRING TMP$1153$1;
	FBSTRING TMP$1154$1;
	FBSTRING TMP$1155$1;
	FBSTRING TMP$1156$1;
	FBSTRING TMP$1157$1;
	FBSTRING TMP$1158$1;
	FBSTRING TMP$1159$1;
	FBSTRING TMP$1160$1;
	FBSTRING TMP$1161$1;
	FBSTRING TMP$1162$1;
	FBSTRING TMP$1163$1;
	FBSTRING TMP$1164$1;
	FBSTRING TMP$1165$1;
	FBSTRING TMP$1166$1;
	FBSTRING TMP$1167$1;
	FBSTRING TMP$1168$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$2363:;
	FBSTRING* vr$3 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 120ll) );
	FBSTRING* vr$6 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 112ll) );
	FBSTRING* vr$9 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 104ll) );
	FBSTRING* vr$12 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 96ll) );
	FBSTRING* vr$15 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 88ll) );
	FBSTRING* vr$18 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 80ll) );
	FBSTRING* vr$21 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 72ll) );
	FBSTRING* vr$24 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 64ll) );
	FBSTRING* vr$27 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 56ll) );
	FBSTRING* vr$30 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 48ll) );
	FBSTRING* vr$33 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 40ll) );
	FBSTRING* vr$36 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 32ll) );
	FBSTRING* vr$39 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 24ll) );
	FBSTRING* vr$42 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 16ll) );
	FBSTRING* vr$45 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 8ll) );
	FBSTRING* vr$48 = fb_DoubleToStr( *(double*)*(double**)THIS$1 );
	__builtin_memset( &TMP$1137$1, 0, 24ll );
	FBSTRING* vr$51 = fb_StrConcat( &TMP$1137$1, (void*)"<math.mat4>{\x0A    ", 18ll, (void*)vr$48, -1ll );
	__builtin_memset( &TMP$1138$1, 0, 24ll );
	FBSTRING* vr$54 = fb_StrConcat( &TMP$1138$1, (void*)vr$51, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1139$1, 0, 24ll );
	FBSTRING* vr$57 = fb_StrConcat( &TMP$1139$1, (void*)vr$54, -1ll, (void*)vr$45, -1ll );
	__builtin_memset( &TMP$1140$1, 0, 24ll );
	FBSTRING* vr$60 = fb_StrConcat( &TMP$1140$1, (void*)vr$57, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1141$1, 0, 24ll );
	FBSTRING* vr$63 = fb_StrConcat( &TMP$1141$1, (void*)vr$60, -1ll, (void*)vr$42, -1ll );
	__builtin_memset( &TMP$1142$1, 0, 24ll );
	FBSTRING* vr$66 = fb_StrConcat( &TMP$1142$1, (void*)vr$63, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1143$1, 0, 24ll );
	FBSTRING* vr$69 = fb_StrConcat( &TMP$1143$1, (void*)vr$66, -1ll, (void*)vr$39, -1ll );
	__builtin_memset( &TMP$1144$1, 0, 24ll );
	FBSTRING* vr$72 = fb_StrConcat( &TMP$1144$1, (void*)vr$69, -1ll, (void*)",\x0A    ", 7ll );
	__builtin_memset( &TMP$1145$1, 0, 24ll );
	FBSTRING* vr$75 = fb_StrConcat( &TMP$1145$1, (void*)vr$72, -1ll, (void*)vr$36, -1ll );
	__builtin_memset( &TMP$1146$1, 0, 24ll );
	FBSTRING* vr$78 = fb_StrConcat( &TMP$1146$1, (void*)vr$75, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1147$1, 0, 24ll );
	FBSTRING* vr$81 = fb_StrConcat( &TMP$1147$1, (void*)vr$78, -1ll, (void*)vr$33, -1ll );
	__builtin_memset( &TMP$1148$1, 0, 24ll );
	FBSTRING* vr$84 = fb_StrConcat( &TMP$1148$1, (void*)vr$81, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1149$1, 0, 24ll );
	FBSTRING* vr$87 = fb_StrConcat( &TMP$1149$1, (void*)vr$84, -1ll, (void*)vr$30, -1ll );
	__builtin_memset( &TMP$1150$1, 0, 24ll );
	FBSTRING* vr$90 = fb_StrConcat( &TMP$1150$1, (void*)vr$87, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1151$1, 0, 24ll );
	FBSTRING* vr$93 = fb_StrConcat( &TMP$1151$1, (void*)vr$90, -1ll, (void*)vr$27, -1ll );
	__builtin_memset( &TMP$1152$1, 0, 24ll );
	FBSTRING* vr$96 = fb_StrConcat( &TMP$1152$1, (void*)vr$93, -1ll, (void*)",\x0A    ", 7ll );
	__builtin_memset( &TMP$1153$1, 0, 24ll );
	FBSTRING* vr$99 = fb_StrConcat( &TMP$1153$1, (void*)vr$96, -1ll, (void*)vr$24, -1ll );
	__builtin_memset( &TMP$1154$1, 0, 24ll );
	FBSTRING* vr$102 = fb_StrConcat( &TMP$1154$1, (void*)vr$99, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1155$1, 0, 24ll );
	FBSTRING* vr$105 = fb_StrConcat( &TMP$1155$1, (void*)vr$102, -1ll, (void*)vr$21, -1ll );
	__builtin_memset( &TMP$1156$1, 0, 24ll );
	FBSTRING* vr$108 = fb_StrConcat( &TMP$1156$1, (void*)vr$105, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1157$1, 0, 24ll );
	FBSTRING* vr$111 = fb_StrConcat( &TMP$1157$1, (void*)vr$108, -1ll, (void*)vr$18, -1ll );
	__builtin_memset( &TMP$1158$1, 0, 24ll );
	FBSTRING* vr$114 = fb_StrConcat( &TMP$1158$1, (void*)vr$111, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1159$1, 0, 24ll );
	FBSTRING* vr$117 = fb_StrConcat( &TMP$1159$1, (void*)vr$114, -1ll, (void*)vr$15, -1ll );
	__builtin_memset( &TMP$1160$1, 0, 24ll );
	FBSTRING* vr$120 = fb_StrConcat( &TMP$1160$1, (void*)vr$117, -1ll, (void*)",\x0A    ", 7ll );
	__builtin_memset( &TMP$1161$1, 0, 24ll );
	FBSTRING* vr$123 = fb_StrConcat( &TMP$1161$1, (void*)vr$120, -1ll, (void*)vr$12, -1ll );
	__builtin_memset( &TMP$1162$1, 0, 24ll );
	FBSTRING* vr$126 = fb_StrConcat( &TMP$1162$1, (void*)vr$123, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1163$1, 0, 24ll );
	FBSTRING* vr$129 = fb_StrConcat( &TMP$1163$1, (void*)vr$126, -1ll, (void*)vr$9, -1ll );
	__builtin_memset( &TMP$1164$1, 0, 24ll );
	FBSTRING* vr$132 = fb_StrConcat( &TMP$1164$1, (void*)vr$129, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1165$1, 0, 24ll );
	FBSTRING* vr$135 = fb_StrConcat( &TMP$1165$1, (void*)vr$132, -1ll, (void*)vr$6, -1ll );
	__builtin_memset( &TMP$1166$1, 0, 24ll );
	FBSTRING* vr$138 = fb_StrConcat( &TMP$1166$1, (void*)vr$135, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1167$1, 0, 24ll );
	FBSTRING* vr$141 = fb_StrConcat( &TMP$1167$1, (void*)vr$138, -1ll, (void*)vr$3, -1ll );
	__builtin_memset( &TMP$1168$1, 0, 24ll );
	FBSTRING* vr$144 = fb_StrConcat( &TMP$1168$1, (void*)vr$141, -1ll, (void*)"\x0A}", 3ll );
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$144, -1ll, 0 );
	goto label$2364;
	label$2364:;
	FBSTRING* vr$147 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$147;
}

void _ZN4MATH4MAT4aSERKNS_4MAT2E( struct $N4MATH4MAT4E* THIS$1, struct $N4MATH4MAT2E* M$1 )
{
	label$2365:;
	double* P$1;
	double* vr$0 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M$1 );
	P$1 = vr$0;
	*(*(double**)THIS$1) = *(double*)P$1;
	*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)P$1 + 8ll);
	*(double*)((uint8*)*(double**)THIS$1 + 16ll) = 0x0p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 24ll) = 0x0p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)P$1 + 16ll);
	*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)P$1 + 24ll);
	*(double*)((uint8*)*(double**)THIS$1 + 48ll) = 0x0p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 56ll) = 0x0p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 64ll) = 0x0p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 72ll) = 0x0p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 80ll) = 0x1.p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 88ll) = 0x0p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 96ll) = 0x0p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 104ll) = 0x0p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 112ll) = 0x0p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 120ll) = 0x1.p+0;
	label$2366:;
}

void _ZN4MATH4MAT4aSERKNS_4MAT3E( struct $N4MATH4MAT4E* THIS$1, struct $N4MATH4MAT3E* M$1 )
{
	label$2367:;
	double* P$1;
	double* vr$0 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M$1 );
	P$1 = vr$0;
	*(*(double**)THIS$1) = *(double*)P$1;
	*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)P$1 + 8ll);
	*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)P$1 + 16ll);
	*(double*)((uint8*)*(double**)THIS$1 + 24ll) = 0x0p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)P$1 + 24ll);
	*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)P$1 + 32ll);
	*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)((uint8*)P$1 + 40ll);
	*(double*)((uint8*)*(double**)THIS$1 + 56ll) = 0x0p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)((uint8*)P$1 + 48ll);
	*(double*)((uint8*)*(double**)THIS$1 + 72ll) = *(double*)((uint8*)P$1 + 56ll);
	*(double*)((uint8*)*(double**)THIS$1 + 80ll) = *(double*)((uint8*)P$1 + 64ll);
	*(double*)((uint8*)*(double**)THIS$1 + 88ll) = 0x0p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 96ll) = 0x0p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 104ll) = 0x0p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 112ll) = 0x0p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 120ll) = 0x1.p+0;
	label$2368:;
}

void _ZN4MATH4MAT4aSERKS0_( struct $N4MATH4MAT4E* THIS$1, struct $N4MATH4MAT4E* M$1 )
{
	label$2369:;
	*(*(double**)THIS$1) = *(double*)*(double**)M$1;
	*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)*(double**)M$1 + 8ll);
	*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)*(double**)M$1 + 16ll);
	*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)*(double**)M$1 + 24ll);
	*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)*(double**)M$1 + 32ll);
	*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)*(double**)M$1 + 40ll);
	*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)((uint8*)*(double**)M$1 + 48ll);
	*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *(double*)((uint8*)*(double**)M$1 + 56ll);
	*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)((uint8*)*(double**)M$1 + 64ll);
	*(double*)((uint8*)*(double**)THIS$1 + 72ll) = *(double*)((uint8*)*(double**)M$1 + 72ll);
	*(double*)((uint8*)*(double**)THIS$1 + 80ll) = *(double*)((uint8*)*(double**)M$1 + 80ll);
	*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *(double*)((uint8*)*(double**)M$1 + 88ll);
	*(double*)((uint8*)*(double**)THIS$1 + 96ll) = *(double*)((uint8*)*(double**)M$1 + 96ll);
	*(double*)((uint8*)*(double**)THIS$1 + 104ll) = *(double*)((uint8*)*(double**)M$1 + 104ll);
	*(double*)((uint8*)*(double**)THIS$1 + 112ll) = *(double*)((uint8*)*(double**)M$1 + 112ll);
	*(double*)((uint8*)*(double**)THIS$1 + 120ll) = *(double*)((uint8*)*(double**)M$1 + 120ll);
	label$2370:;
}

struct $N4MATH4MAT4E* _ZN4MATH4MAT413FROMAXISANGLEERKdS2_S2_S2_( struct $N4MATH4MAT4E* tmp$1169$1, double* X$1, double* Y$1, double* Z$1, double* T$1 )
{
	label$2371:;
	struct $N4MATH4VEC3E A$1;
	_ZN4MATH4VEC3C1ERKdS2_S2_( &A$1, X$1, Y$1, Z$1 );
	double H$1;
	double vr$2 = _ZNK4MATH4VEC311NORM__get__Ev( (struct $N4MATH4VEC3E*)&A$1 );
	H$1 = vr$2;
	if( H$1 == 0x0p+0 ) goto label$2374;
	{
		*(double*)&A$1 = *(double*)&A$1 / H$1;
		*(double*)((uint8*)&A$1 + 8ll) = *(double*)((uint8*)&A$1 + 8ll) / H$1;
		*(double*)((uint8*)&A$1 + 16ll) = *(double*)((uint8*)&A$1 + 16ll) / H$1;
		double C$2;
		C$2 = __builtin_cos( *T$1 );
		double D$2;
		D$2 = 0x1.p+0 - C$2;
		double S$2;
		S$2 = __builtin_sin( *T$1 );
		struct $N4MATH4MAT4E R$2;
		_ZN4MATH4MAT4C1Ev( &R$2 );
		*(*(double**)&R$2) = ((D$2 * *(double*)&A$1) * *(double*)&A$1) + C$2;
		*(double*)((uint8*)*(double**)&R$2 + 8ll) = ((D$2 * *(double*)&A$1) * *(double*)((uint8*)&A$1 + 8ll)) - (*(double*)((uint8*)&A$1 + 16ll) * S$2);
		*(double*)((uint8*)*(double**)&R$2 + 16ll) = ((D$2 * *(double*)&A$1) * *(double*)((uint8*)&A$1 + 16ll)) + (*(double*)((uint8*)&A$1 + 8ll) * S$2);
		*(double*)((uint8*)*(double**)&R$2 + 32ll) = ((D$2 * *(double*)&A$1) * *(double*)((uint8*)&A$1 + 8ll)) + (*(double*)((uint8*)&A$1 + 16ll) * S$2);
		*(double*)((uint8*)*(double**)&R$2 + 40ll) = ((D$2 * *(double*)((uint8*)&A$1 + 8ll)) * *(double*)((uint8*)&A$1 + 8ll)) + C$2;
		*(double*)((uint8*)*(double**)&R$2 + 48ll) = ((D$2 * *(double*)((uint8*)&A$1 + 8ll)) * *(double*)((uint8*)&A$1 + 16ll)) - (*(double*)&A$1 * S$2);
		*(double*)((uint8*)*(double**)&R$2 + 64ll) = ((D$2 * *(double*)&A$1) * *(double*)((uint8*)&A$1 + 16ll)) - (*(double*)((uint8*)&A$1 + 8ll) * S$2);
		*(double*)((uint8*)*(double**)&R$2 + 72ll) = ((D$2 * *(double*)((uint8*)&A$1 + 8ll)) * *(double*)((uint8*)&A$1 + 16ll)) + (*(double*)&A$1 * S$2);
		*(double*)((uint8*)*(double**)&R$2 + 80ll) = ((D$2 * *(double*)((uint8*)&A$1 + 16ll)) * *(double*)((uint8*)&A$1 + 16ll)) + C$2;
		_ZN4MATH4MAT4C1ERKS0_( tmp$1169$1, (struct $N4MATH4MAT4E*)&R$2 );
		_ZN4MATH4MAT4D1Ev( &R$2 );
		goto label$2372;
		_ZN4MATH4MAT4D1Ev( &R$2 );
	}
	label$2374:;
	label$2373:;
	_ZN4MATH4MAT4C1Ev( tmp$1169$1 );
	goto label$2372;
	label$2372:;
	return tmp$1169$1;
}

struct $N4MATH4MAT4E* _ZN4MATH4MAT413FROMAXISANGLEERKNS_4VEC2ERKdS5_( struct $N4MATH4MAT4E* tmp$1172$1, struct $N4MATH4VEC2E* V$1, double* Z$1, double* T$1 )
{
	struct $N4MATH4MAT4E TMP$1173$1;
	label$2375:;
	struct $N4MATH4MAT4E* vr$5 = _ZN4MATH4MAT413FROMAXISANGLEERKdS2_S2_S2_( &TMP$1173$1, (double*)V$1, (double*)((uint8*)V$1 + 8ll), Z$1, T$1 );
	_ZN4MATH4MAT4C1ERKS0_( tmp$1172$1, (struct $N4MATH4MAT4E*)vr$5 );
	_ZN4MATH4MAT4D1Ev( &TMP$1173$1 );
	goto label$2376;
	label$2376:;
	return tmp$1172$1;
}

struct $N4MATH4MAT4E* _ZN4MATH4MAT413FROMAXISANGLEERKNS_4PVECERKdS5_( struct $N4MATH4MAT4E* tmp$1174$1, struct $N4MATH4PVECE* V$1, double* Z$1, double* T$1 )
{
	struct $N4MATH4MAT4E TMP$1175$1;
	double TMP$1176$1;
	double TMP$1177$1;
	label$2377:;
	double vr$0 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
	TMP$1177$1 = vr$0;
	double vr$2 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
	TMP$1176$1 = vr$2;
	struct $N4MATH4MAT4E* vr$5 = _ZN4MATH4MAT413FROMAXISANGLEERKdS2_S2_S2_( &TMP$1175$1, (double*)&TMP$1176$1, (double*)&TMP$1177$1, Z$1, T$1 );
	_ZN4MATH4MAT4C1ERKS0_( tmp$1174$1, (struct $N4MATH4MAT4E*)vr$5 );
	_ZN4MATH4MAT4D1Ev( &TMP$1175$1 );
	goto label$2378;
	label$2378:;
	return tmp$1174$1;
}

struct $N4MATH4MAT4E* _ZN4MATH4MAT413FROMAXISANGLEERKNS_4VEC3ERKd( struct $N4MATH4MAT4E* tmp$1178$1, struct $N4MATH4VEC3E* V$1, double* T$1 )
{
	struct $N4MATH4MAT4E TMP$1179$1;
	label$2379:;
	struct $N4MATH4MAT4E* vr$7 = _ZN4MATH4MAT413FROMAXISANGLEERKdS2_S2_S2_( &TMP$1179$1, (double*)V$1, (double*)((uint8*)V$1 + 8ll), (double*)((uint8*)V$1 + 16ll), T$1 );
	_ZN4MATH4MAT4C1ERKS0_( tmp$1178$1, (struct $N4MATH4MAT4E*)vr$7 );
	_ZN4MATH4MAT4D1Ev( &TMP$1179$1 );
	goto label$2380;
	label$2380:;
	return tmp$1178$1;
}

struct $N4MATH4MAT4E* _ZN4MATH4MAT413FROMAXISANGLEERKNS_4CVECERKd( struct $N4MATH4MAT4E* tmp$1180$1, struct $N4MATH4CVECE* V$1, double* T$1 )
{
	struct $N4MATH4MAT4E TMP$1181$1;
	double TMP$1182$1;
	double TMP$1183$1;
	label$2381:;
	double vr$2 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
	TMP$1183$1 = vr$2;
	double vr$4 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
	TMP$1182$1 = vr$4;
	struct $N4MATH4MAT4E* vr$7 = _ZN4MATH4MAT413FROMAXISANGLEERKdS2_S2_S2_( &TMP$1181$1, (double*)&TMP$1182$1, (double*)&TMP$1183$1, (double*)V$1, T$1 );
	_ZN4MATH4MAT4C1ERKS0_( tmp$1180$1, (struct $N4MATH4MAT4E*)vr$7 );
	_ZN4MATH4MAT4D1Ev( &TMP$1181$1 );
	goto label$2382;
	label$2382:;
	return tmp$1180$1;
}

struct $N4MATH4MAT4E* _ZN4MATH4MAT49FROMSCALEERKd( struct $N4MATH4MAT4E* tmp$1184$1, double* S$1 )
{
	label$2383:;
	struct $N4MATH4MAT4E R$1;
	_ZN4MATH4MAT4C1Ev( &R$1 );
	*(*(double**)&R$1) = *S$1;
	*(double*)((uint8*)*(double**)&R$1 + 40ll) = *S$1;
	*(double*)((uint8*)*(double**)&R$1 + 80ll) = *S$1;
	*(double*)((uint8*)*(double**)&R$1 + 120ll) = *S$1;
	_ZN4MATH4MAT4C1ERKS0_( tmp$1184$1, (struct $N4MATH4MAT4E*)&R$1 );
	_ZN4MATH4MAT4D1Ev( &R$1 );
	goto label$2384;
	_ZN4MATH4MAT4D1Ev( &R$1 );
	label$2384:;
	return tmp$1184$1;
}

struct $N4MATH4MAT4E* _ZN4MATH4MAT49FROMSCALEERKdS2_S2_( struct $N4MATH4MAT4E* tmp$1185$1, double* SX$1, double* SY$1, double* SZ$1 )
{
	label$2385:;
	struct $N4MATH4MAT4E R$1;
	_ZN4MATH4MAT4C1Ev( &R$1 );
	*(*(double**)&R$1) = *SX$1;
	*(double*)((uint8*)*(double**)&R$1 + 40ll) = *SY$1;
	*(double*)((uint8*)*(double**)&R$1 + 80ll) = *SZ$1;
	_ZN4MATH4MAT4C1ERKS0_( tmp$1185$1, (struct $N4MATH4MAT4E*)&R$1 );
	_ZN4MATH4MAT4D1Ev( &R$1 );
	goto label$2386;
	_ZN4MATH4MAT4D1Ev( &R$1 );
	label$2386:;
	return tmp$1185$1;
}

struct $N4MATH4MAT4E* _ZN4MATH4MAT415FROMTRANSLATIONERKdS2_S2_( struct $N4MATH4MAT4E* tmp$1186$1, double* TX$1, double* TY$1, double* TZ$1 )
{
	label$2387:;
	struct $N4MATH4MAT4E R$1;
	_ZN4MATH4MAT4C1Ev( &R$1 );
	*(double*)((uint8*)*(double**)&R$1 + 24ll) = *TX$1;
	*(double*)((uint8*)*(double**)&R$1 + 56ll) = *TY$1;
	*(double*)((uint8*)*(double**)&R$1 + 88ll) = *TZ$1;
	_ZN4MATH4MAT4C1ERKS0_( tmp$1186$1, (struct $N4MATH4MAT4E*)&R$1 );
	_ZN4MATH4MAT4D1Ev( &R$1 );
	goto label$2388;
	_ZN4MATH4MAT4D1Ev( &R$1 );
	label$2388:;
	return tmp$1186$1;
}

struct $N4MATH4MAT4E* _ZN4MATH4MAT415FROMTRANSLATIONERKNS_4VEC2ERKd( struct $N4MATH4MAT4E* tmp$1187$1, struct $N4MATH4VEC2E* T$1, double* TZ$1 )
{
	label$2389:;
	struct $N4MATH4MAT4E R$1;
	_ZN4MATH4MAT4C1Ev( &R$1 );
	*(double*)((uint8*)*(double**)&R$1 + 24ll) = *(double*)T$1;
	*(double*)((uint8*)*(double**)&R$1 + 56ll) = *(double*)((uint8*)T$1 + 8ll);
	*(double*)((uint8*)*(double**)&R$1 + 88ll) = *TZ$1;
	_ZN4MATH4MAT4C1ERKS0_( tmp$1187$1, (struct $N4MATH4MAT4E*)&R$1 );
	_ZN4MATH4MAT4D1Ev( &R$1 );
	goto label$2390;
	_ZN4MATH4MAT4D1Ev( &R$1 );
	label$2390:;
	return tmp$1187$1;
}

struct $N4MATH4MAT4E* _ZN4MATH4MAT415FROMTRANSLATIONERKNS_4PVECERKd( struct $N4MATH4MAT4E* tmp$1188$1, struct $N4MATH4PVECE* T$1, double* TZ$1 )
{
	label$2391:;
	struct $N4MATH4MAT4E R$1;
	_ZN4MATH4MAT4C1Ev( &R$1 );
	double vr$1 = _ZNK4MATH4PVEC8X__get__Ev( T$1 );
	*(double*)((uint8*)*(double**)&R$1 + 24ll) = vr$1;
	double vr$3 = _ZNK4MATH4PVEC8Y__get__Ev( T$1 );
	*(double*)((uint8*)*(double**)&R$1 + 56ll) = vr$3;
	*(double*)((uint8*)*(double**)&R$1 + 88ll) = *TZ$1;
	_ZN4MATH4MAT4C1ERKS0_( tmp$1188$1, (struct $N4MATH4MAT4E*)&R$1 );
	_ZN4MATH4MAT4D1Ev( &R$1 );
	goto label$2392;
	_ZN4MATH4MAT4D1Ev( &R$1 );
	label$2392:;
	return tmp$1188$1;
}

struct $N4MATH4MAT4E* _ZN4MATH4MAT415FROMTRANSLATIONERKNS_4VEC3E( struct $N4MATH4MAT4E* tmp$1189$1, struct $N4MATH4VEC3E* T$1 )
{
	label$2393:;
	struct $N4MATH4MAT4E R$1;
	_ZN4MATH4MAT4C1Ev( &R$1 );
	*(double*)((uint8*)*(double**)&R$1 + 24ll) = *(double*)T$1;
	*(double*)((uint8*)*(double**)&R$1 + 56ll) = *(double*)((uint8*)T$1 + 8ll);
	*(double*)((uint8*)*(double**)&R$1 + 88ll) = *(double*)((uint8*)T$1 + 16ll);
	_ZN4MATH4MAT4C1ERKS0_( tmp$1189$1, (struct $N4MATH4MAT4E*)&R$1 );
	_ZN4MATH4MAT4D1Ev( &R$1 );
	goto label$2394;
	_ZN4MATH4MAT4D1Ev( &R$1 );
	label$2394:;
	return tmp$1189$1;
}

struct $N4MATH4MAT4E* _ZN4MATH4MAT415FROMTRANSLATIONERKNS_4CVECE( struct $N4MATH4MAT4E* tmp$1190$1, struct $N4MATH4CVECE* T$1 )
{
	label$2395:;
	struct $N4MATH4MAT4E R$1;
	_ZN4MATH4MAT4C1Ev( &R$1 );
	double vr$1 = _ZNK4MATH4CVEC8X__get__Ev( T$1 );
	*(double*)((uint8*)*(double**)&R$1 + 24ll) = vr$1;
	double vr$3 = _ZNK4MATH4CVEC8Y__get__Ev( T$1 );
	*(double*)((uint8*)*(double**)&R$1 + 56ll) = vr$3;
	*(double*)((uint8*)*(double**)&R$1 + 88ll) = *(double*)T$1;
	_ZN4MATH4MAT4C1ERKS0_( tmp$1190$1, (struct $N4MATH4MAT4E*)&R$1 );
	_ZN4MATH4MAT4D1Ev( &R$1 );
	goto label$2396;
	_ZN4MATH4MAT4D1Ev( &R$1 );
	label$2396:;
	return tmp$1190$1;
}

double _ZNK4MATH4MAT43GETERKu7INTEGERS3_( struct $N4MATH4MAT4E* THIS$1, int64* X$1, int64* Y$1 )
{
	double TMP$1191$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$2397:;
	if( ((((int64)-(*X$1 >= 0ll) & (int64)-(*X$1 < 4ll)) & (int64)-(*Y$1 >= 0ll)) & (int64)-(*Y$1 < 4ll)) == 0ll ) goto label$2399;
	TMP$1191$1 = *(double*)((uint8*)*(double**)THIS$1 + ((*X$1 + (*Y$1 << (2ll & 63ll))) << (3ll & 63ll)));
	goto label$2400;
	label$2399:;
	TMP$1191$1 = 0x0p+0;
	label$2400:;
	fb$result$1 = TMP$1191$1;
	goto label$2398;
	label$2398:;
	return fb$result$1;
}

struct $N4MATH4VEC4E _ZNK4MATH4MAT49GETCOLUMNERKu7INTEGER( struct $N4MATH4MAT4E* THIS$1, int64* X$1 )
{
	struct $N4MATH4VEC4E fb$result$1;
	label$2401:;
	{
		int64 TMP$1192$2;
		TMP$1192$2 = *X$1;
		if( TMP$1192$2 != 0ll ) goto label$2404;
		label$2405:;
		{
			_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, *(double**)THIS$1, (double*)((uint8*)*(double**)THIS$1 + 32ll), (double*)((uint8*)*(double**)THIS$1 + 64ll), (double*)((uint8*)*(double**)THIS$1 + 96ll) );
			goto label$2402;
		}
		goto label$2403;
		label$2404:;
		if( TMP$1192$2 != 1ll ) goto label$2406;
		label$2407:;
		{
			_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, (double*)((uint8*)*(double**)THIS$1 + 8ll), (double*)((uint8*)*(double**)THIS$1 + 40ll), (double*)((uint8*)*(double**)THIS$1 + 72ll), (double*)((uint8*)*(double**)THIS$1 + 104ll) );
			goto label$2402;
		}
		goto label$2403;
		label$2406:;
		if( TMP$1192$2 != 2ll ) goto label$2408;
		label$2409:;
		{
			_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, (double*)((uint8*)*(double**)THIS$1 + 16ll), (double*)((uint8*)*(double**)THIS$1 + 48ll), (double*)((uint8*)*(double**)THIS$1 + 80ll), (double*)((uint8*)*(double**)THIS$1 + 112ll) );
			goto label$2402;
		}
		goto label$2403;
		label$2408:;
		if( TMP$1192$2 != 3ll ) goto label$2410;
		label$2411:;
		{
			_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, (double*)((uint8*)*(double**)THIS$1 + 24ll), (double*)((uint8*)*(double**)THIS$1 + 56ll), (double*)((uint8*)*(double**)THIS$1 + 88ll), (double*)((uint8*)*(double**)THIS$1 + 120ll) );
			goto label$2402;
		}
		goto label$2403;
		label$2410:;
		{
			_ZN4MATH4VEC4C1Ev( &fb$result$1 );
			goto label$2402;
		}
		label$2412:;
		label$2403:;
	}
	label$2402:;
	return fb$result$1;
}

struct $N4MATH4VEC4E _ZNK4MATH4MAT46GETROWERKu7INTEGER( struct $N4MATH4MAT4E* THIS$1, int64* Y$1 )
{
	struct $N4MATH4VEC4E fb$result$1;
	label$2413:;
	{
		int64 TMP$1198$2;
		TMP$1198$2 = *Y$1;
		if( TMP$1198$2 != 0ll ) goto label$2416;
		label$2417:;
		{
			_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, *(double**)THIS$1, (double*)((uint8*)*(double**)THIS$1 + 8ll), (double*)((uint8*)*(double**)THIS$1 + 16ll), (double*)((uint8*)*(double**)THIS$1 + 24ll) );
			goto label$2414;
		}
		goto label$2415;
		label$2416:;
		if( TMP$1198$2 != 1ll ) goto label$2418;
		label$2419:;
		{
			_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, (double*)((uint8*)*(double**)THIS$1 + 32ll), (double*)((uint8*)*(double**)THIS$1 + 40ll), (double*)((uint8*)*(double**)THIS$1 + 48ll), (double*)((uint8*)*(double**)THIS$1 + 56ll) );
			goto label$2414;
		}
		goto label$2415;
		label$2418:;
		if( TMP$1198$2 != 2ll ) goto label$2420;
		label$2421:;
		{
			_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, (double*)((uint8*)*(double**)THIS$1 + 64ll), (double*)((uint8*)*(double**)THIS$1 + 72ll), (double*)((uint8*)*(double**)THIS$1 + 80ll), (double*)((uint8*)*(double**)THIS$1 + 88ll) );
			goto label$2414;
		}
		goto label$2415;
		label$2420:;
		if( TMP$1198$2 != 3ll ) goto label$2422;
		label$2423:;
		{
			_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, (double*)((uint8*)*(double**)THIS$1 + 96ll), (double*)((uint8*)*(double**)THIS$1 + 104ll), (double*)((uint8*)*(double**)THIS$1 + 112ll), (double*)((uint8*)*(double**)THIS$1 + 120ll) );
			goto label$2414;
		}
		goto label$2415;
		label$2422:;
		{
			_ZN4MATH4VEC4C1Ev( &fb$result$1 );
			goto label$2414;
		}
		label$2424:;
		label$2415:;
	}
	label$2414:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT43SETERKu7INTEGERS3_RKd( struct $N4MATH4MAT4E* THIS$1, int64* X$1, int64* Y$1, double* N$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2425:;
	if( ((((int64)-(*X$1 >= 0ll) & (int64)-(*X$1 < 4ll)) & (int64)-(*Y$1 >= 0ll)) & (int64)-(*Y$1 < 4ll)) == 0ll ) goto label$2428;
	{
		*(double*)((uint8*)*(double**)THIS$1 + ((*X$1 + (*Y$1 << (2ll & 63ll))) << (3ll & 63ll))) = *N$1;
		fb$result$1 = (boolean)1ll;
		goto label$2426;
	}
	label$2428:;
	label$2427:;
	fb$result$1 = (boolean)0ll;
	goto label$2426;
	label$2426:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT49SETCOLUMNERKu7INTEGERRKdS5_S5_S5_( struct $N4MATH4MAT4E* THIS$1, int64* X$1, double* N1$1, double* N2$1, double* N3$1, double* N4$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2429:;
	{
		int64 TMP$1204$2;
		TMP$1204$2 = *X$1;
		if( TMP$1204$2 != 0ll ) goto label$2432;
		label$2433:;
		{
			*(*(double**)THIS$1) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *N2$1;
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *N3$1;
			*(double*)((uint8*)*(double**)THIS$1 + 96ll) = *N4$1;
		}
		goto label$2431;
		label$2432:;
		if( TMP$1204$2 != 1ll ) goto label$2434;
		label$2435:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *N2$1;
			*(double*)((uint8*)*(double**)THIS$1 + 72ll) = *N3$1;
			*(double*)((uint8*)*(double**)THIS$1 + 104ll) = *N4$1;
		}
		goto label$2431;
		label$2434:;
		if( TMP$1204$2 != 2ll ) goto label$2436;
		label$2437:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *N2$1;
			*(double*)((uint8*)*(double**)THIS$1 + 80ll) = *N3$1;
			*(double*)((uint8*)*(double**)THIS$1 + 112ll) = *N4$1;
		}
		goto label$2431;
		label$2436:;
		if( TMP$1204$2 != 3ll ) goto label$2438;
		label$2439:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *N2$1;
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *N3$1;
			*(double*)((uint8*)*(double**)THIS$1 + 120ll) = *N4$1;
		}
		goto label$2431;
		label$2438:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2430;
		}
		label$2440:;
		label$2431:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2430;
	label$2430:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT49SETCOLUMNERKu7INTEGERRKNS_4VEC2ERKdS8_( struct $N4MATH4MAT4E* THIS$1, int64* X$1, struct $N4MATH4VEC2E* V$1, double* N1$1, double* N2$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2441:;
	{
		int64 TMP$1205$2;
		TMP$1205$2 = *X$1;
		if( TMP$1205$2 != 0ll ) goto label$2444;
		label$2445:;
		{
			*(*(double**)THIS$1) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 96ll) = *N2$1;
		}
		goto label$2443;
		label$2444:;
		if( TMP$1205$2 != 1ll ) goto label$2446;
		label$2447:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 72ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 104ll) = *N2$1;
		}
		goto label$2443;
		label$2446:;
		if( TMP$1205$2 != 2ll ) goto label$2448;
		label$2449:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 80ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 112ll) = *N2$1;
		}
		goto label$2443;
		label$2448:;
		if( TMP$1205$2 != 3ll ) goto label$2450;
		label$2451:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 120ll) = *N2$1;
		}
		goto label$2443;
		label$2450:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2442;
		}
		label$2452:;
		label$2443:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2442;
	label$2442:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT49SETCOLUMNERKu7INTEGERRKNS_4PVECERKdS8_( struct $N4MATH4MAT4E* THIS$1, int64* X$1, struct $N4MATH4PVECE* V$1, double* N1$1, double* N2$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2453:;
	{
		int64 TMP$1206$2;
		TMP$1206$2 = *X$1;
		if( TMP$1206$2 != 0ll ) goto label$2456;
		label$2457:;
		{
			double vr$2 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(*(double**)THIS$1) = vr$2;
			double vr$5 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = vr$5;
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 96ll) = *N2$1;
		}
		goto label$2455;
		label$2456:;
		if( TMP$1206$2 != 1ll ) goto label$2458;
		label$2459:;
		{
			double vr$14 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = vr$14;
			double vr$17 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = vr$17;
			*(double*)((uint8*)*(double**)THIS$1 + 72ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 104ll) = *N2$1;
		}
		goto label$2455;
		label$2458:;
		if( TMP$1206$2 != 2ll ) goto label$2460;
		label$2461:;
		{
			double vr$26 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = vr$26;
			double vr$29 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = vr$29;
			*(double*)((uint8*)*(double**)THIS$1 + 80ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 112ll) = *N2$1;
		}
		goto label$2455;
		label$2460:;
		if( TMP$1206$2 != 3ll ) goto label$2462;
		label$2463:;
		{
			double vr$38 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = vr$38;
			double vr$41 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = vr$41;
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 120ll) = *N2$1;
		}
		goto label$2455;
		label$2462:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2454;
		}
		label$2464:;
		label$2455:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2454;
	label$2454:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT49SETCOLUMNERKu7INTEGERRKNS_4VEC3ERKd( struct $N4MATH4MAT4E* THIS$1, int64* X$1, struct $N4MATH4VEC3E* V$1, double* N$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2465:;
	{
		int64 TMP$1207$2;
		TMP$1207$2 = *X$1;
		if( TMP$1207$2 != 0ll ) goto label$2468;
		label$2469:;
		{
			*(*(double**)THIS$1) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)((uint8*)V$1 + 16ll);
			*(double*)((uint8*)*(double**)THIS$1 + 96ll) = *N$1;
		}
		goto label$2467;
		label$2468:;
		if( TMP$1207$2 != 1ll ) goto label$2470;
		label$2471:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 72ll) = *(double*)((uint8*)V$1 + 16ll);
			*(double*)((uint8*)*(double**)THIS$1 + 104ll) = *N$1;
		}
		goto label$2467;
		label$2470:;
		if( TMP$1207$2 != 2ll ) goto label$2472;
		label$2473:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 80ll) = *(double*)((uint8*)V$1 + 16ll);
			*(double*)((uint8*)*(double**)THIS$1 + 112ll) = *N$1;
		}
		goto label$2467;
		label$2472:;
		if( TMP$1207$2 != 3ll ) goto label$2474;
		label$2475:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *(double*)((uint8*)V$1 + 16ll);
			*(double*)((uint8*)*(double**)THIS$1 + 120ll) = *N$1;
		}
		goto label$2467;
		label$2474:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2466;
		}
		label$2476:;
		label$2467:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2466;
	label$2466:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT49SETCOLUMNERKu7INTEGERRKNS_4CVECERKd( struct $N4MATH4MAT4E* THIS$1, int64* X$1, struct $N4MATH4CVECE* V$1, double* N$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2477:;
	{
		int64 TMP$1208$2;
		TMP$1208$2 = *X$1;
		if( TMP$1208$2 != 0ll ) goto label$2480;
		label$2481:;
		{
			double vr$2 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
			*(*(double**)THIS$1) = vr$2;
			double vr$5 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = vr$5;
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 96ll) = *N$1;
		}
		goto label$2479;
		label$2480:;
		if( TMP$1208$2 != 1ll ) goto label$2482;
		label$2483:;
		{
			double vr$14 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = vr$14;
			double vr$17 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = vr$17;
			*(double*)((uint8*)*(double**)THIS$1 + 72ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 104ll) = *N$1;
		}
		goto label$2479;
		label$2482:;
		if( TMP$1208$2 != 2ll ) goto label$2484;
		label$2485:;
		{
			double vr$26 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = vr$26;
			double vr$29 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = vr$29;
			*(double*)((uint8*)*(double**)THIS$1 + 80ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 112ll) = *N$1;
		}
		goto label$2479;
		label$2484:;
		if( TMP$1208$2 != 3ll ) goto label$2486;
		label$2487:;
		{
			double vr$38 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = vr$38;
			double vr$41 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = vr$41;
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 120ll) = *N$1;
		}
		goto label$2479;
		label$2486:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2478;
		}
		label$2488:;
		label$2479:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2478;
	label$2478:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT49SETCOLUMNERKu7INTEGERRKNS_4VEC4E( struct $N4MATH4MAT4E* THIS$1, int64* X$1, struct $N4MATH4VEC4E* V$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2489:;
	{
		int64 TMP$1209$2;
		TMP$1209$2 = *X$1;
		if( TMP$1209$2 != 0ll ) goto label$2492;
		label$2493:;
		{
			*(*(double**)THIS$1) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)((uint8*)V$1 + 16ll);
			*(double*)((uint8*)*(double**)THIS$1 + 96ll) = *(double*)((uint8*)V$1 + 24ll);
		}
		goto label$2491;
		label$2492:;
		if( TMP$1209$2 != 1ll ) goto label$2494;
		label$2495:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 72ll) = *(double*)((uint8*)V$1 + 16ll);
			*(double*)((uint8*)*(double**)THIS$1 + 104ll) = *(double*)((uint8*)V$1 + 24ll);
		}
		goto label$2491;
		label$2494:;
		if( TMP$1209$2 != 2ll ) goto label$2496;
		label$2497:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 80ll) = *(double*)((uint8*)V$1 + 16ll);
			*(double*)((uint8*)*(double**)THIS$1 + 112ll) = *(double*)((uint8*)V$1 + 24ll);
		}
		goto label$2491;
		label$2496:;
		if( TMP$1209$2 != 3ll ) goto label$2498;
		label$2499:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *(double*)((uint8*)V$1 + 16ll);
			*(double*)((uint8*)*(double**)THIS$1 + 120ll) = *(double*)((uint8*)V$1 + 24ll);
		}
		goto label$2491;
		label$2498:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2490;
		}
		label$2500:;
		label$2491:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2490;
	label$2490:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT46SETROWERKu7INTEGERRKdS5_S5_S5_( struct $N4MATH4MAT4E* THIS$1, int64* Y$1, double* N1$1, double* N2$1, double* N3$1, double* N4$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2501:;
	{
		int64 TMP$1210$2;
		TMP$1210$2 = *Y$1;
		if( TMP$1210$2 != 0ll ) goto label$2504;
		label$2505:;
		{
			*(*(double**)THIS$1) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *N2$1;
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *N3$1;
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *N4$1;
		}
		goto label$2503;
		label$2504:;
		if( TMP$1210$2 != 1ll ) goto label$2506;
		label$2507:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *N2$1;
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *N3$1;
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *N4$1;
		}
		goto label$2503;
		label$2506:;
		if( TMP$1210$2 != 2ll ) goto label$2508;
		label$2509:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 72ll) = *N2$1;
			*(double*)((uint8*)*(double**)THIS$1 + 80ll) = *N3$1;
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *N4$1;
		}
		goto label$2503;
		label$2508:;
		if( TMP$1210$2 != 3ll ) goto label$2510;
		label$2511:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 96ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *N2$1;
			*(double*)((uint8*)*(double**)THIS$1 + 112ll) = *N3$1;
			*(double*)((uint8*)*(double**)THIS$1 + 120ll) = *N4$1;
		}
		goto label$2503;
		label$2510:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2502;
		}
		label$2512:;
		label$2503:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2502;
	label$2502:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT46SETROWERKu7INTEGERRKNS_4VEC2ERKdS8_( struct $N4MATH4MAT4E* THIS$1, int64* Y$1, struct $N4MATH4VEC2E* V$1, double* N1$1, double* N2$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2513:;
	{
		int64 TMP$1211$2;
		TMP$1211$2 = *Y$1;
		if( TMP$1211$2 != 0ll ) goto label$2516;
		label$2517:;
		{
			*(*(double**)THIS$1) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *N2$1;
		}
		goto label$2515;
		label$2516:;
		if( TMP$1211$2 != 1ll ) goto label$2518;
		label$2519:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *N2$1;
		}
		goto label$2515;
		label$2518:;
		if( TMP$1211$2 != 2ll ) goto label$2520;
		label$2521:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 72ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 80ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *N2$1;
		}
		goto label$2515;
		label$2520:;
		if( TMP$1211$2 != 3ll ) goto label$2522;
		label$2523:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 96ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 112ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 120ll) = *N2$1;
		}
		goto label$2515;
		label$2522:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2514;
		}
		label$2524:;
		label$2515:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2514;
	label$2514:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT46SETROWERKu7INTEGERRKNS_4PVECERKdS8_( struct $N4MATH4MAT4E* THIS$1, int64* Y$1, struct $N4MATH4PVECE* V$1, double* N1$1, double* N2$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2525:;
	{
		int64 TMP$1212$2;
		TMP$1212$2 = *Y$1;
		if( TMP$1212$2 != 0ll ) goto label$2528;
		label$2529:;
		{
			double vr$2 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(*(double**)THIS$1) = vr$2;
			double vr$5 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = vr$5;
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *N2$1;
		}
		goto label$2527;
		label$2528:;
		if( TMP$1212$2 != 1ll ) goto label$2530;
		label$2531:;
		{
			double vr$14 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = vr$14;
			double vr$17 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = vr$17;
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *N2$1;
		}
		goto label$2527;
		label$2530:;
		if( TMP$1212$2 != 2ll ) goto label$2532;
		label$2533:;
		{
			double vr$26 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = vr$26;
			double vr$29 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 72ll) = vr$29;
			*(double*)((uint8*)*(double**)THIS$1 + 80ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *N2$1;
		}
		goto label$2527;
		label$2532:;
		if( TMP$1212$2 != 3ll ) goto label$2534;
		label$2535:;
		{
			double vr$38 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 96ll) = vr$38;
			double vr$41 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = vr$41;
			*(double*)((uint8*)*(double**)THIS$1 + 112ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 120ll) = *N2$1;
		}
		goto label$2527;
		label$2534:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2526;
		}
		label$2536:;
		label$2527:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2526;
	label$2526:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT46SETROWERKu7INTEGERRKNS_4VEC3ERKd( struct $N4MATH4MAT4E* THIS$1, int64* Y$1, struct $N4MATH4VEC3E* V$1, double* N$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2537:;
	{
		int64 TMP$1213$2;
		TMP$1213$2 = *Y$1;
		if( TMP$1213$2 != 0ll ) goto label$2540;
		label$2541:;
		{
			*(*(double**)THIS$1) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)V$1 + 16ll);
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *N$1;
		}
		goto label$2539;
		label$2540:;
		if( TMP$1213$2 != 1ll ) goto label$2542;
		label$2543:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)((uint8*)V$1 + 16ll);
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *N$1;
		}
		goto label$2539;
		label$2542:;
		if( TMP$1213$2 != 2ll ) goto label$2544;
		label$2545:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 72ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 80ll) = *(double*)((uint8*)V$1 + 16ll);
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *N$1;
		}
		goto label$2539;
		label$2544:;
		if( TMP$1213$2 != 3ll ) goto label$2546;
		label$2547:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 96ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 112ll) = *(double*)((uint8*)V$1 + 16ll);
			*(double*)((uint8*)*(double**)THIS$1 + 120ll) = *N$1;
		}
		goto label$2539;
		label$2546:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2538;
		}
		label$2548:;
		label$2539:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2538;
	label$2538:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT46SETROWERKu7INTEGERRKNS_4CVECERKd( struct $N4MATH4MAT4E* THIS$1, int64* Y$1, struct $N4MATH4CVECE* V$1, double* N$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2549:;
	{
		int64 TMP$1214$2;
		TMP$1214$2 = *Y$1;
		if( TMP$1214$2 != 0ll ) goto label$2552;
		label$2553:;
		{
			double vr$2 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
			*(*(double**)THIS$1) = vr$2;
			double vr$5 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = vr$5;
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *N$1;
		}
		goto label$2551;
		label$2552:;
		if( TMP$1214$2 != 1ll ) goto label$2554;
		label$2555:;
		{
			double vr$14 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = vr$14;
			double vr$17 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = vr$17;
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *N$1;
		}
		goto label$2551;
		label$2554:;
		if( TMP$1214$2 != 2ll ) goto label$2556;
		label$2557:;
		{
			double vr$26 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = vr$26;
			double vr$29 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 72ll) = vr$29;
			*(double*)((uint8*)*(double**)THIS$1 + 80ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *N$1;
		}
		goto label$2551;
		label$2556:;
		if( TMP$1214$2 != 3ll ) goto label$2558;
		label$2559:;
		{
			double vr$38 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 96ll) = vr$38;
			double vr$41 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = vr$41;
			*(double*)((uint8*)*(double**)THIS$1 + 112ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 120ll) = *N$1;
		}
		goto label$2551;
		label$2558:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2550;
		}
		label$2560:;
		label$2551:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2550;
	label$2550:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT46SETROWERKu7INTEGERRKNS_4VEC4E( struct $N4MATH4MAT4E* THIS$1, int64* Y$1, struct $N4MATH4VEC4E* V$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2561:;
	{
		int64 TMP$1215$2;
		TMP$1215$2 = *Y$1;
		if( TMP$1215$2 != 0ll ) goto label$2564;
		label$2565:;
		{
			*(*(double**)THIS$1) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)V$1 + 16ll);
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)V$1 + 24ll);
		}
		goto label$2563;
		label$2564:;
		if( TMP$1215$2 != 1ll ) goto label$2566;
		label$2567:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)((uint8*)V$1 + 16ll);
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *(double*)((uint8*)V$1 + 24ll);
		}
		goto label$2563;
		label$2566:;
		if( TMP$1215$2 != 2ll ) goto label$2568;
		label$2569:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 72ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 80ll) = *(double*)((uint8*)V$1 + 16ll);
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *(double*)((uint8*)V$1 + 24ll);
		}
		goto label$2563;
		label$2568:;
		if( TMP$1215$2 != 3ll ) goto label$2570;
		label$2571:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 96ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 112ll) = *(double*)((uint8*)V$1 + 16ll);
			*(double*)((uint8*)*(double**)THIS$1 + 120ll) = *(double*)((uint8*)V$1 + 24ll);
		}
		goto label$2563;
		label$2570:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2562;
		}
		label$2572:;
		label$2563:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2562;
	label$2562:;
	return fb$result$1;
}

FBSTRING* _ZNK4MATH4MAT46TOJSONERKb( struct $N4MATH4MAT4E* THIS$1, boolean* C$1 )
{
	FBSTRING TMP$1216$1;
	FBSTRING TMP$1217$1;
	FBSTRING TMP$1218$1;
	FBSTRING TMP$1219$1;
	FBSTRING TMP$1220$1;
	FBSTRING TMP$1221$1;
	FBSTRING TMP$1222$1;
	FBSTRING TMP$1223$1;
	FBSTRING TMP$1224$1;
	FBSTRING TMP$1225$1;
	FBSTRING TMP$1226$1;
	FBSTRING TMP$1227$1;
	FBSTRING TMP$1228$1;
	FBSTRING TMP$1229$1;
	FBSTRING TMP$1230$1;
	FBSTRING TMP$1231$1;
	FBSTRING TMP$1232$1;
	FBSTRING TMP$1233$1;
	FBSTRING TMP$1234$1;
	FBSTRING TMP$1235$1;
	FBSTRING TMP$1236$1;
	FBSTRING TMP$1237$1;
	FBSTRING TMP$1238$1;
	FBSTRING TMP$1239$1;
	FBSTRING TMP$1240$1;
	FBSTRING TMP$1241$1;
	FBSTRING TMP$1242$1;
	FBSTRING TMP$1243$1;
	FBSTRING TMP$1244$1;
	FBSTRING TMP$1245$1;
	FBSTRING TMP$1246$1;
	FBSTRING TMP$1247$1;
	FBSTRING TMP$1248$1;
	FBSTRING TMP$1249$1;
	FBSTRING TMP$1250$1;
	FBSTRING TMP$1251$1;
	FBSTRING TMP$1252$1;
	FBSTRING TMP$1253$1;
	FBSTRING TMP$1254$1;
	FBSTRING TMP$1255$1;
	FBSTRING TMP$1256$1;
	FBSTRING TMP$1257$1;
	FBSTRING TMP$1258$1;
	FBSTRING TMP$1259$1;
	FBSTRING TMP$1260$1;
	FBSTRING TMP$1261$1;
	FBSTRING TMP$1262$1;
	FBSTRING TMP$1263$1;
	FBSTRING TMP$1264$1;
	FBSTRING TMP$1265$1;
	FBSTRING TMP$1266$1;
	FBSTRING TMP$1267$1;
	FBSTRING TMP$1268$1;
	FBSTRING TMP$1269$1;
	FBSTRING TMP$1270$1;
	FBSTRING TMP$1271$1;
	FBSTRING TMP$1272$1;
	FBSTRING TMP$1273$1;
	FBSTRING TMP$1274$1;
	FBSTRING TMP$1275$1;
	FBSTRING TMP$1276$1;
	FBSTRING TMP$1277$1;
	FBSTRING TMP$1278$1;
	FBSTRING TMP$1279$1;
	FBSTRING TMP$1280$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$2573:;
	if( *C$1 == (boolean)0ll ) goto label$2575;
	FBSTRING* vr$4 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 120ll) );
	FBSTRING* vr$7 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 88ll) );
	FBSTRING* vr$10 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 56ll) );
	FBSTRING* vr$13 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 24ll) );
	FBSTRING* vr$16 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 112ll) );
	FBSTRING* vr$19 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 80ll) );
	FBSTRING* vr$22 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 48ll) );
	FBSTRING* vr$25 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 16ll) );
	FBSTRING* vr$28 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 104ll) );
	FBSTRING* vr$31 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 72ll) );
	FBSTRING* vr$34 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 40ll) );
	FBSTRING* vr$37 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 8ll) );
	FBSTRING* vr$40 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 96ll) );
	FBSTRING* vr$43 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 64ll) );
	FBSTRING* vr$46 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 32ll) );
	FBSTRING* vr$49 = fb_DoubleToStr( *(double*)*(double**)THIS$1 );
	__builtin_memset( &TMP$1217$1, 0, 24ll );
	FBSTRING* vr$52 = fb_StrConcat( &TMP$1217$1, (void*)"[", 2ll, (void*)vr$49, -1ll );
	__builtin_memset( &TMP$1218$1, 0, 24ll );
	FBSTRING* vr$55 = fb_StrConcat( &TMP$1218$1, (void*)vr$52, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1219$1, 0, 24ll );
	FBSTRING* vr$58 = fb_StrConcat( &TMP$1219$1, (void*)vr$55, -1ll, (void*)vr$46, -1ll );
	__builtin_memset( &TMP$1220$1, 0, 24ll );
	FBSTRING* vr$61 = fb_StrConcat( &TMP$1220$1, (void*)vr$58, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1221$1, 0, 24ll );
	FBSTRING* vr$64 = fb_StrConcat( &TMP$1221$1, (void*)vr$61, -1ll, (void*)vr$43, -1ll );
	__builtin_memset( &TMP$1222$1, 0, 24ll );
	FBSTRING* vr$67 = fb_StrConcat( &TMP$1222$1, (void*)vr$64, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1223$1, 0, 24ll );
	FBSTRING* vr$70 = fb_StrConcat( &TMP$1223$1, (void*)vr$67, -1ll, (void*)vr$40, -1ll );
	__builtin_memset( &TMP$1224$1, 0, 24ll );
	FBSTRING* vr$73 = fb_StrConcat( &TMP$1224$1, (void*)vr$70, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1225$1, 0, 24ll );
	FBSTRING* vr$76 = fb_StrConcat( &TMP$1225$1, (void*)vr$73, -1ll, (void*)vr$37, -1ll );
	__builtin_memset( &TMP$1226$1, 0, 24ll );
	FBSTRING* vr$79 = fb_StrConcat( &TMP$1226$1, (void*)vr$76, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1227$1, 0, 24ll );
	FBSTRING* vr$82 = fb_StrConcat( &TMP$1227$1, (void*)vr$79, -1ll, (void*)vr$34, -1ll );
	__builtin_memset( &TMP$1228$1, 0, 24ll );
	FBSTRING* vr$85 = fb_StrConcat( &TMP$1228$1, (void*)vr$82, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1229$1, 0, 24ll );
	FBSTRING* vr$88 = fb_StrConcat( &TMP$1229$1, (void*)vr$85, -1ll, (void*)vr$31, -1ll );
	__builtin_memset( &TMP$1230$1, 0, 24ll );
	FBSTRING* vr$91 = fb_StrConcat( &TMP$1230$1, (void*)vr$88, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1231$1, 0, 24ll );
	FBSTRING* vr$94 = fb_StrConcat( &TMP$1231$1, (void*)vr$91, -1ll, (void*)vr$28, -1ll );
	__builtin_memset( &TMP$1232$1, 0, 24ll );
	FBSTRING* vr$97 = fb_StrConcat( &TMP$1232$1, (void*)vr$94, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1233$1, 0, 24ll );
	FBSTRING* vr$100 = fb_StrConcat( &TMP$1233$1, (void*)vr$97, -1ll, (void*)vr$25, -1ll );
	__builtin_memset( &TMP$1234$1, 0, 24ll );
	FBSTRING* vr$103 = fb_StrConcat( &TMP$1234$1, (void*)vr$100, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1235$1, 0, 24ll );
	FBSTRING* vr$106 = fb_StrConcat( &TMP$1235$1, (void*)vr$103, -1ll, (void*)vr$22, -1ll );
	__builtin_memset( &TMP$1236$1, 0, 24ll );
	FBSTRING* vr$109 = fb_StrConcat( &TMP$1236$1, (void*)vr$106, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1237$1, 0, 24ll );
	FBSTRING* vr$112 = fb_StrConcat( &TMP$1237$1, (void*)vr$109, -1ll, (void*)vr$19, -1ll );
	__builtin_memset( &TMP$1238$1, 0, 24ll );
	FBSTRING* vr$115 = fb_StrConcat( &TMP$1238$1, (void*)vr$112, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1239$1, 0, 24ll );
	FBSTRING* vr$118 = fb_StrConcat( &TMP$1239$1, (void*)vr$115, -1ll, (void*)vr$16, -1ll );
	__builtin_memset( &TMP$1240$1, 0, 24ll );
	FBSTRING* vr$121 = fb_StrConcat( &TMP$1240$1, (void*)vr$118, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1241$1, 0, 24ll );
	FBSTRING* vr$124 = fb_StrConcat( &TMP$1241$1, (void*)vr$121, -1ll, (void*)vr$13, -1ll );
	__builtin_memset( &TMP$1242$1, 0, 24ll );
	FBSTRING* vr$127 = fb_StrConcat( &TMP$1242$1, (void*)vr$124, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1243$1, 0, 24ll );
	FBSTRING* vr$130 = fb_StrConcat( &TMP$1243$1, (void*)vr$127, -1ll, (void*)vr$10, -1ll );
	__builtin_memset( &TMP$1244$1, 0, 24ll );
	FBSTRING* vr$133 = fb_StrConcat( &TMP$1244$1, (void*)vr$130, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1245$1, 0, 24ll );
	FBSTRING* vr$136 = fb_StrConcat( &TMP$1245$1, (void*)vr$133, -1ll, (void*)vr$7, -1ll );
	__builtin_memset( &TMP$1246$1, 0, 24ll );
	FBSTRING* vr$139 = fb_StrConcat( &TMP$1246$1, (void*)vr$136, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1247$1, 0, 24ll );
	FBSTRING* vr$142 = fb_StrConcat( &TMP$1247$1, (void*)vr$139, -1ll, (void*)vr$4, -1ll );
	__builtin_memset( &TMP$1248$1, 0, 24ll );
	FBSTRING* vr$145 = fb_StrConcat( &TMP$1248$1, (void*)vr$142, -1ll, (void*)"]", 2ll );
	fb_StrInit( (void*)&TMP$1216$1, -1ll, (void*)vr$145, -1ll, 0 );
	goto label$2576;
	label$2575:;
	FBSTRING* vr$149 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 120ll) );
	FBSTRING* vr$152 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 112ll) );
	FBSTRING* vr$155 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 104ll) );
	FBSTRING* vr$158 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 96ll) );
	FBSTRING* vr$161 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 88ll) );
	FBSTRING* vr$164 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 80ll) );
	FBSTRING* vr$167 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 72ll) );
	FBSTRING* vr$170 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 64ll) );
	FBSTRING* vr$173 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 56ll) );
	FBSTRING* vr$176 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 48ll) );
	FBSTRING* vr$179 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 40ll) );
	FBSTRING* vr$182 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 32ll) );
	FBSTRING* vr$185 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 24ll) );
	FBSTRING* vr$188 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 16ll) );
	FBSTRING* vr$191 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 8ll) );
	FBSTRING* vr$194 = fb_DoubleToStr( *(double*)*(double**)THIS$1 );
	__builtin_memset( &TMP$1249$1, 0, 24ll );
	FBSTRING* vr$197 = fb_StrConcat( &TMP$1249$1, (void*)"[", 2ll, (void*)vr$194, -1ll );
	__builtin_memset( &TMP$1250$1, 0, 24ll );
	FBSTRING* vr$200 = fb_StrConcat( &TMP$1250$1, (void*)vr$197, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1251$1, 0, 24ll );
	FBSTRING* vr$203 = fb_StrConcat( &TMP$1251$1, (void*)vr$200, -1ll, (void*)vr$191, -1ll );
	__builtin_memset( &TMP$1252$1, 0, 24ll );
	FBSTRING* vr$206 = fb_StrConcat( &TMP$1252$1, (void*)vr$203, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1253$1, 0, 24ll );
	FBSTRING* vr$209 = fb_StrConcat( &TMP$1253$1, (void*)vr$206, -1ll, (void*)vr$188, -1ll );
	__builtin_memset( &TMP$1254$1, 0, 24ll );
	FBSTRING* vr$212 = fb_StrConcat( &TMP$1254$1, (void*)vr$209, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1255$1, 0, 24ll );
	FBSTRING* vr$215 = fb_StrConcat( &TMP$1255$1, (void*)vr$212, -1ll, (void*)vr$185, -1ll );
	__builtin_memset( &TMP$1256$1, 0, 24ll );
	FBSTRING* vr$218 = fb_StrConcat( &TMP$1256$1, (void*)vr$215, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1257$1, 0, 24ll );
	FBSTRING* vr$221 = fb_StrConcat( &TMP$1257$1, (void*)vr$218, -1ll, (void*)vr$182, -1ll );
	__builtin_memset( &TMP$1258$1, 0, 24ll );
	FBSTRING* vr$224 = fb_StrConcat( &TMP$1258$1, (void*)vr$221, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1259$1, 0, 24ll );
	FBSTRING* vr$227 = fb_StrConcat( &TMP$1259$1, (void*)vr$224, -1ll, (void*)vr$179, -1ll );
	__builtin_memset( &TMP$1260$1, 0, 24ll );
	FBSTRING* vr$230 = fb_StrConcat( &TMP$1260$1, (void*)vr$227, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1261$1, 0, 24ll );
	FBSTRING* vr$233 = fb_StrConcat( &TMP$1261$1, (void*)vr$230, -1ll, (void*)vr$176, -1ll );
	__builtin_memset( &TMP$1262$1, 0, 24ll );
	FBSTRING* vr$236 = fb_StrConcat( &TMP$1262$1, (void*)vr$233, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1263$1, 0, 24ll );
	FBSTRING* vr$239 = fb_StrConcat( &TMP$1263$1, (void*)vr$236, -1ll, (void*)vr$173, -1ll );
	__builtin_memset( &TMP$1264$1, 0, 24ll );
	FBSTRING* vr$242 = fb_StrConcat( &TMP$1264$1, (void*)vr$239, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1265$1, 0, 24ll );
	FBSTRING* vr$245 = fb_StrConcat( &TMP$1265$1, (void*)vr$242, -1ll, (void*)vr$170, -1ll );
	__builtin_memset( &TMP$1266$1, 0, 24ll );
	FBSTRING* vr$248 = fb_StrConcat( &TMP$1266$1, (void*)vr$245, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1267$1, 0, 24ll );
	FBSTRING* vr$251 = fb_StrConcat( &TMP$1267$1, (void*)vr$248, -1ll, (void*)vr$167, -1ll );
	__builtin_memset( &TMP$1268$1, 0, 24ll );
	FBSTRING* vr$254 = fb_StrConcat( &TMP$1268$1, (void*)vr$251, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1269$1, 0, 24ll );
	FBSTRING* vr$257 = fb_StrConcat( &TMP$1269$1, (void*)vr$254, -1ll, (void*)vr$164, -1ll );
	__builtin_memset( &TMP$1270$1, 0, 24ll );
	FBSTRING* vr$260 = fb_StrConcat( &TMP$1270$1, (void*)vr$257, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1271$1, 0, 24ll );
	FBSTRING* vr$263 = fb_StrConcat( &TMP$1271$1, (void*)vr$260, -1ll, (void*)vr$161, -1ll );
	__builtin_memset( &TMP$1272$1, 0, 24ll );
	FBSTRING* vr$266 = fb_StrConcat( &TMP$1272$1, (void*)vr$263, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1273$1, 0, 24ll );
	FBSTRING* vr$269 = fb_StrConcat( &TMP$1273$1, (void*)vr$266, -1ll, (void*)vr$158, -1ll );
	__builtin_memset( &TMP$1274$1, 0, 24ll );
	FBSTRING* vr$272 = fb_StrConcat( &TMP$1274$1, (void*)vr$269, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1275$1, 0, 24ll );
	FBSTRING* vr$275 = fb_StrConcat( &TMP$1275$1, (void*)vr$272, -1ll, (void*)vr$155, -1ll );
	__builtin_memset( &TMP$1276$1, 0, 24ll );
	FBSTRING* vr$278 = fb_StrConcat( &TMP$1276$1, (void*)vr$275, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1277$1, 0, 24ll );
	FBSTRING* vr$281 = fb_StrConcat( &TMP$1277$1, (void*)vr$278, -1ll, (void*)vr$152, -1ll );
	__builtin_memset( &TMP$1278$1, 0, 24ll );
	FBSTRING* vr$284 = fb_StrConcat( &TMP$1278$1, (void*)vr$281, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1279$1, 0, 24ll );
	FBSTRING* vr$287 = fb_StrConcat( &TMP$1279$1, (void*)vr$284, -1ll, (void*)vr$149, -1ll );
	__builtin_memset( &TMP$1280$1, 0, 24ll );
	FBSTRING* vr$290 = fb_StrConcat( &TMP$1280$1, (void*)vr$287, -1ll, (void*)"]", 2ll );
	fb_StrInit( (void*)&TMP$1216$1, -1ll, (void*)vr$290, -1ll, 0 );
	label$2576:;
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)&TMP$1216$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&TMP$1216$1 );
	goto label$2574;
	label$2574:;
	FBSTRING* vr$296 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$296;
}

struct $N4MATH4MAT4E* _ZN4MATHplERKNS_4MAT4ES2_( struct $N4MATH4MAT4E* tmp$1281$1, struct $N4MATH4MAT4E* M1$1, struct $N4MATH4MAT4E* M2$1 )
{
	label$2577:;
	struct $N4MATH4MAT4E R$1;
	_ZN4MATH4MAT4C1Ev( &R$1 );
	double* P1$1;
	double* vr$1 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M1$1 );
	P1$1 = vr$1;
	double* P2$1;
	double* vr$2 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M2$1 );
	P2$1 = vr$2;
	double* Q$1;
	double* vr$4 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)&R$1 );
	Q$1 = vr$4;
	*(double*)Q$1 = *(double*)P1$1 + *(double*)P2$1;
	*(double*)((uint8*)Q$1 + 8ll) = *(double*)((uint8*)P1$1 + 8ll) + *(double*)((uint8*)P2$1 + 8ll);
	*(double*)((uint8*)Q$1 + 16ll) = *(double*)((uint8*)P1$1 + 16ll) + *(double*)((uint8*)P2$1 + 16ll);
	*(double*)((uint8*)Q$1 + 24ll) = *(double*)((uint8*)P1$1 + 24ll) + *(double*)((uint8*)P2$1 + 24ll);
	*(double*)((uint8*)Q$1 + 32ll) = *(double*)((uint8*)P1$1 + 32ll) + *(double*)((uint8*)P2$1 + 32ll);
	*(double*)((uint8*)Q$1 + 40ll) = *(double*)((uint8*)P1$1 + 40ll) + *(double*)((uint8*)P2$1 + 40ll);
	*(double*)((uint8*)Q$1 + 48ll) = *(double*)((uint8*)P1$1 + 48ll) + *(double*)((uint8*)P2$1 + 48ll);
	*(double*)((uint8*)Q$1 + 56ll) = *(double*)((uint8*)P1$1 + 56ll) + *(double*)((uint8*)P2$1 + 56ll);
	*(double*)((uint8*)Q$1 + 64ll) = *(double*)((uint8*)P1$1 + 64ll) + *(double*)((uint8*)P2$1 + 64ll);
	*(double*)((uint8*)Q$1 + 72ll) = *(double*)((uint8*)P1$1 + 72ll) + *(double*)((uint8*)P2$1 + 72ll);
	*(double*)((uint8*)Q$1 + 80ll) = *(double*)((uint8*)P1$1 + 80ll) + *(double*)((uint8*)P2$1 + 80ll);
	*(double*)((uint8*)Q$1 + 88ll) = *(double*)((uint8*)P1$1 + 88ll) + *(double*)((uint8*)P2$1 + 88ll);
	*(double*)((uint8*)Q$1 + 96ll) = *(double*)((uint8*)P1$1 + 96ll) + *(double*)((uint8*)P2$1 + 96ll);
	*(double*)((uint8*)Q$1 + 104ll) = *(double*)((uint8*)P1$1 + 104ll) + *(double*)((uint8*)P2$1 + 104ll);
	*(double*)((uint8*)Q$1 + 112ll) = *(double*)((uint8*)P1$1 + 112ll) + *(double*)((uint8*)P2$1 + 112ll);
	*(double*)((uint8*)Q$1 + 120ll) = *(double*)((uint8*)P1$1 + 120ll) + *(double*)((uint8*)P2$1 + 120ll);
	_ZN4MATH4MAT4C1ERKS0_( tmp$1281$1, (struct $N4MATH4MAT4E*)&R$1 );
	_ZN4MATH4MAT4D1Ev( &R$1 );
	goto label$2578;
	_ZN4MATH4MAT4D1Ev( &R$1 );
	label$2578:;
	return tmp$1281$1;
}

struct $N4MATH4MAT4E* _ZN4MATHmiERKNS_4MAT4ES2_( struct $N4MATH4MAT4E* tmp$1282$1, struct $N4MATH4MAT4E* M1$1, struct $N4MATH4MAT4E* M2$1 )
{
	label$2579:;
	struct $N4MATH4MAT4E R$1;
	_ZN4MATH4MAT4C1Ev( &R$1 );
	double* P1$1;
	double* vr$1 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M1$1 );
	P1$1 = vr$1;
	double* P2$1;
	double* vr$2 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M2$1 );
	P2$1 = vr$2;
	double* Q$1;
	double* vr$4 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)&R$1 );
	Q$1 = vr$4;
	*(double*)Q$1 = *(double*)P1$1 - *(double*)P2$1;
	*(double*)((uint8*)Q$1 + 8ll) = *(double*)((uint8*)P1$1 + 8ll) - *(double*)((uint8*)P2$1 + 8ll);
	*(double*)((uint8*)Q$1 + 16ll) = *(double*)((uint8*)P1$1 + 16ll) - *(double*)((uint8*)P2$1 + 16ll);
	*(double*)((uint8*)Q$1 + 24ll) = *(double*)((uint8*)P1$1 + 24ll) - *(double*)((uint8*)P2$1 + 24ll);
	*(double*)((uint8*)Q$1 + 32ll) = *(double*)((uint8*)P1$1 + 32ll) - *(double*)((uint8*)P2$1 + 32ll);
	*(double*)((uint8*)Q$1 + 40ll) = *(double*)((uint8*)P1$1 + 40ll) - *(double*)((uint8*)P2$1 + 40ll);
	*(double*)((uint8*)Q$1 + 48ll) = *(double*)((uint8*)P1$1 + 48ll) - *(double*)((uint8*)P2$1 + 48ll);
	*(double*)((uint8*)Q$1 + 56ll) = *(double*)((uint8*)P1$1 + 56ll) - *(double*)((uint8*)P2$1 + 56ll);
	*(double*)((uint8*)Q$1 + 64ll) = *(double*)((uint8*)P1$1 + 64ll) - *(double*)((uint8*)P2$1 + 64ll);
	*(double*)((uint8*)Q$1 + 72ll) = *(double*)((uint8*)P1$1 + 72ll) - *(double*)((uint8*)P2$1 + 72ll);
	*(double*)((uint8*)Q$1 + 80ll) = *(double*)((uint8*)P1$1 + 80ll) - *(double*)((uint8*)P2$1 + 80ll);
	*(double*)((uint8*)Q$1 + 88ll) = *(double*)((uint8*)P1$1 + 88ll) - *(double*)((uint8*)P2$1 + 88ll);
	*(double*)((uint8*)Q$1 + 96ll) = *(double*)((uint8*)P1$1 + 96ll) - *(double*)((uint8*)P2$1 + 96ll);
	*(double*)((uint8*)Q$1 + 104ll) = *(double*)((uint8*)P1$1 + 104ll) - *(double*)((uint8*)P2$1 + 104ll);
	*(double*)((uint8*)Q$1 + 112ll) = *(double*)((uint8*)P1$1 + 112ll) - *(double*)((uint8*)P2$1 + 112ll);
	*(double*)((uint8*)Q$1 + 120ll) = *(double*)((uint8*)P1$1 + 120ll) - *(double*)((uint8*)P2$1 + 120ll);
	_ZN4MATH4MAT4C1ERKS0_( tmp$1282$1, (struct $N4MATH4MAT4E*)&R$1 );
	_ZN4MATH4MAT4D1Ev( &R$1 );
	goto label$2580;
	_ZN4MATH4MAT4D1Ev( &R$1 );
	label$2580:;
	return tmp$1282$1;
}

struct $N4MATH4MAT4E* _ZN4MATHmlERKNS_4MAT4ERKd( struct $N4MATH4MAT4E* tmp$1283$1, struct $N4MATH4MAT4E* M$1, double* N$1 )
{
	label$2581:;
	struct $N4MATH4MAT4E R$1;
	_ZN4MATH4MAT4C1Ev( &R$1 );
	double* P$1;
	double* vr$1 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M$1 );
	P$1 = vr$1;
	double* Q$1;
	double* vr$3 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)&R$1 );
	Q$1 = vr$3;
	*(double*)Q$1 = *(double*)P$1 * *N$1;
	*(double*)((uint8*)Q$1 + 8ll) = *(double*)((uint8*)P$1 + 8ll) * *N$1;
	*(double*)((uint8*)Q$1 + 16ll) = *(double*)((uint8*)P$1 + 16ll) * *N$1;
	*(double*)((uint8*)Q$1 + 24ll) = *(double*)((uint8*)P$1 + 24ll) * *N$1;
	*(double*)((uint8*)Q$1 + 32ll) = *(double*)((uint8*)P$1 + 32ll) * *N$1;
	*(double*)((uint8*)Q$1 + 40ll) = *(double*)((uint8*)P$1 + 40ll) * *N$1;
	*(double*)((uint8*)Q$1 + 48ll) = *(double*)((uint8*)P$1 + 48ll) * *N$1;
	*(double*)((uint8*)Q$1 + 56ll) = *(double*)((uint8*)P$1 + 56ll) * *N$1;
	*(double*)((uint8*)Q$1 + 64ll) = *(double*)((uint8*)P$1 + 64ll) * *N$1;
	*(double*)((uint8*)Q$1 + 72ll) = *(double*)((uint8*)P$1 + 72ll) * *N$1;
	*(double*)((uint8*)Q$1 + 80ll) = *(double*)((uint8*)P$1 + 80ll) * *N$1;
	*(double*)((uint8*)Q$1 + 88ll) = *(double*)((uint8*)P$1 + 88ll) * *N$1;
	*(double*)((uint8*)Q$1 + 96ll) = *(double*)((uint8*)P$1 + 96ll) * *N$1;
	*(double*)((uint8*)Q$1 + 104ll) = *(double*)((uint8*)P$1 + 104ll) * *N$1;
	*(double*)((uint8*)Q$1 + 112ll) = *(double*)((uint8*)P$1 + 112ll) * *N$1;
	*(double*)((uint8*)Q$1 + 120ll) = *(double*)((uint8*)P$1 + 120ll) * *N$1;
	_ZN4MATH4MAT4C1ERKS0_( tmp$1283$1, (struct $N4MATH4MAT4E*)&R$1 );
	_ZN4MATH4MAT4D1Ev( &R$1 );
	goto label$2582;
	_ZN4MATH4MAT4D1Ev( &R$1 );
	label$2582:;
	return tmp$1283$1;
}

struct $N4MATH4MAT4E* _ZN4MATHmlERKdRKNS_4MAT4E( struct $N4MATH4MAT4E* tmp$1284$1, double* N$1, struct $N4MATH4MAT4E* M$1 )
{
	label$2583:;
	struct $N4MATH4MAT4E R$1;
	_ZN4MATH4MAT4C1Ev( &R$1 );
	double* P$1;
	double* vr$1 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M$1 );
	P$1 = vr$1;
	double* Q$1;
	double* vr$3 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)&R$1 );
	Q$1 = vr$3;
	*(double*)Q$1 = *N$1 * *(double*)P$1;
	*(double*)((uint8*)Q$1 + 8ll) = *N$1 * *(double*)((uint8*)P$1 + 8ll);
	*(double*)((uint8*)Q$1 + 16ll) = *N$1 * *(double*)((uint8*)P$1 + 16ll);
	*(double*)((uint8*)Q$1 + 24ll) = *N$1 * *(double*)((uint8*)P$1 + 24ll);
	*(double*)((uint8*)Q$1 + 32ll) = *N$1 * *(double*)((uint8*)P$1 + 32ll);
	*(double*)((uint8*)Q$1 + 40ll) = *N$1 * *(double*)((uint8*)P$1 + 40ll);
	*(double*)((uint8*)Q$1 + 48ll) = *N$1 * *(double*)((uint8*)P$1 + 48ll);
	*(double*)((uint8*)Q$1 + 56ll) = *N$1 * *(double*)((uint8*)P$1 + 56ll);
	*(double*)((uint8*)Q$1 + 64ll) = *N$1 * *(double*)((uint8*)P$1 + 64ll);
	*(double*)((uint8*)Q$1 + 72ll) = *N$1 * *(double*)((uint8*)P$1 + 72ll);
	*(double*)((uint8*)Q$1 + 80ll) = *N$1 * *(double*)((uint8*)P$1 + 80ll);
	*(double*)((uint8*)Q$1 + 88ll) = *N$1 * *(double*)((uint8*)P$1 + 88ll);
	*(double*)((uint8*)Q$1 + 96ll) = *N$1 * *(double*)((uint8*)P$1 + 96ll);
	*(double*)((uint8*)Q$1 + 104ll) = *N$1 * *(double*)((uint8*)P$1 + 104ll);
	*(double*)((uint8*)Q$1 + 112ll) = *N$1 * *(double*)((uint8*)P$1 + 112ll);
	*(double*)((uint8*)Q$1 + 120ll) = *N$1 * *(double*)((uint8*)P$1 + 120ll);
	_ZN4MATH4MAT4C1ERKS0_( tmp$1284$1, (struct $N4MATH4MAT4E*)&R$1 );
	_ZN4MATH4MAT4D1Ev( &R$1 );
	goto label$2584;
	_ZN4MATH4MAT4D1Ev( &R$1 );
	label$2584:;
	return tmp$1284$1;
}

struct $N4MATH4MAT4E* _ZN4MATHmlERKNS_4MAT4ES2_( struct $N4MATH4MAT4E* tmp$1285$1, struct $N4MATH4MAT4E* M1$1, struct $N4MATH4MAT4E* M2$1 )
{
	label$2585:;
	struct $N4MATH4MAT4E R$1;
	_ZN4MATH4MAT4C1Ev( &R$1 );
	double* P1$1;
	double* vr$1 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M1$1 );
	P1$1 = vr$1;
	double* P2$1;
	double* vr$2 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M2$1 );
	P2$1 = vr$2;
	double* Q$1;
	double* vr$4 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)&R$1 );
	Q$1 = vr$4;
	*(double*)Q$1 = (((*(double*)P1$1 * *(double*)P2$1) + (*(double*)((uint8*)P1$1 + 8ll) * *(double*)((uint8*)P2$1 + 32ll))) + (*(double*)((uint8*)P1$1 + 16ll) * *(double*)((uint8*)P2$1 + 64ll))) + (*(double*)((uint8*)P1$1 + 24ll) * *(double*)((uint8*)P2$1 + 96ll));
	*(double*)((uint8*)Q$1 + 8ll) = (((*(double*)P1$1 * *(double*)P2$1) + (*(double*)((uint8*)P1$1 + 8ll) * *(double*)((uint8*)P2$1 + 32ll))) + (*(double*)((uint8*)P1$1 + 16ll) * *(double*)((uint8*)P2$1 + 64ll))) + (*(double*)((uint8*)P1$1 + 24ll) * *(double*)((uint8*)P2$1 + 96ll));
	*(double*)((uint8*)Q$1 + 16ll) = (((*(double*)P1$1 * *(double*)P2$1) + (*(double*)((uint8*)P1$1 + 8ll) * *(double*)((uint8*)P2$1 + 32ll))) + (*(double*)((uint8*)P1$1 + 16ll) * *(double*)((uint8*)P2$1 + 64ll))) + (*(double*)((uint8*)P1$1 + 24ll) * *(double*)((uint8*)P2$1 + 96ll));
	*(double*)((uint8*)Q$1 + 24ll) = (((*(double*)P1$1 * *(double*)P2$1) + (*(double*)((uint8*)P1$1 + 8ll) * *(double*)((uint8*)P2$1 + 32ll))) + (*(double*)((uint8*)P1$1 + 16ll) * *(double*)((uint8*)P2$1 + 64ll))) + (*(double*)((uint8*)P1$1 + 24ll) * *(double*)((uint8*)P2$1 + 96ll));
	*(double*)((uint8*)Q$1 + 32ll) = (((*(double*)((uint8*)P1$1 + 32ll) * *(double*)P2$1) + (*(double*)((uint8*)P1$1 + 40ll) * *(double*)((uint8*)P2$1 + 32ll))) + (*(double*)((uint8*)P1$1 + 48ll) * *(double*)((uint8*)P2$1 + 64ll))) + (*(double*)((uint8*)P1$1 + 56ll) * *(double*)((uint8*)P2$1 + 96ll));
	*(double*)((uint8*)Q$1 + 40ll) = (((*(double*)((uint8*)P1$1 + 32ll) * *(double*)P2$1) + (*(double*)((uint8*)P1$1 + 40ll) * *(double*)((uint8*)P2$1 + 32ll))) + (*(double*)((uint8*)P1$1 + 48ll) * *(double*)((uint8*)P2$1 + 64ll))) + (*(double*)((uint8*)P1$1 + 56ll) * *(double*)((uint8*)P2$1 + 96ll));
	*(double*)((uint8*)Q$1 + 48ll) = (((*(double*)((uint8*)P1$1 + 32ll) * *(double*)P2$1) + (*(double*)((uint8*)P1$1 + 40ll) * *(double*)((uint8*)P2$1 + 32ll))) + (*(double*)((uint8*)P1$1 + 48ll) * *(double*)((uint8*)P2$1 + 64ll))) + (*(double*)((uint8*)P1$1 + 56ll) * *(double*)((uint8*)P2$1 + 96ll));
	*(double*)((uint8*)Q$1 + 56ll) = (((*(double*)((uint8*)P1$1 + 32ll) * *(double*)P2$1) + (*(double*)((uint8*)P1$1 + 40ll) * *(double*)((uint8*)P2$1 + 32ll))) + (*(double*)((uint8*)P1$1 + 48ll) * *(double*)((uint8*)P2$1 + 64ll))) + (*(double*)((uint8*)P1$1 + 56ll) * *(double*)((uint8*)P2$1 + 96ll));
	*(double*)((uint8*)Q$1 + 64ll) = (((*(double*)((uint8*)P1$1 + 64ll) * *(double*)P2$1) + (*(double*)((uint8*)P1$1 + 72ll) * *(double*)((uint8*)P2$1 + 32ll))) + (*(double*)((uint8*)P1$1 + 80ll) * *(double*)((uint8*)P2$1 + 64ll))) + (*(double*)((uint8*)P1$1 + 88ll) * *(double*)((uint8*)P2$1 + 96ll));
	*(double*)((uint8*)Q$1 + 72ll) = (((*(double*)((uint8*)P1$1 + 64ll) * *(double*)P2$1) + (*(double*)((uint8*)P1$1 + 72ll) * *(double*)((uint8*)P2$1 + 32ll))) + (*(double*)((uint8*)P1$1 + 80ll) * *(double*)((uint8*)P2$1 + 64ll))) + (*(double*)((uint8*)P1$1 + 88ll) * *(double*)((uint8*)P2$1 + 96ll));
	*(double*)((uint8*)Q$1 + 80ll) = (((*(double*)((uint8*)P1$1 + 64ll) * *(double*)P2$1) + (*(double*)((uint8*)P1$1 + 72ll) * *(double*)((uint8*)P2$1 + 32ll))) + (*(double*)((uint8*)P1$1 + 80ll) * *(double*)((uint8*)P2$1 + 64ll))) + (*(double*)((uint8*)P1$1 + 88ll) * *(double*)((uint8*)P2$1 + 96ll));
	*(double*)((uint8*)Q$1 + 88ll) = (((*(double*)((uint8*)P1$1 + 64ll) * *(double*)P2$1) + (*(double*)((uint8*)P1$1 + 72ll) * *(double*)((uint8*)P2$1 + 32ll))) + (*(double*)((uint8*)P1$1 + 80ll) * *(double*)((uint8*)P2$1 + 64ll))) + (*(double*)((uint8*)P1$1 + 88ll) * *(double*)((uint8*)P2$1 + 96ll));
	*(double*)((uint8*)Q$1 + 96ll) = (((*(double*)((uint8*)P1$1 + 96ll) * *(double*)P2$1) + (*(double*)((uint8*)P1$1 + 104ll) * *(double*)((uint8*)P2$1 + 32ll))) + (*(double*)((uint8*)P1$1 + 112ll) * *(double*)((uint8*)P2$1 + 64ll))) + (*(double*)((uint8*)P1$1 + 120ll) * *(double*)((uint8*)P2$1 + 96ll));
	*(double*)((uint8*)Q$1 + 104ll) = (((*(double*)((uint8*)P1$1 + 96ll) * *(double*)P2$1) + (*(double*)((uint8*)P1$1 + 104ll) * *(double*)((uint8*)P2$1 + 32ll))) + (*(double*)((uint8*)P1$1 + 112ll) * *(double*)((uint8*)P2$1 + 64ll))) + (*(double*)((uint8*)P1$1 + 120ll) * *(double*)((uint8*)P2$1 + 96ll));
	*(double*)((uint8*)Q$1 + 112ll) = (((*(double*)((uint8*)P1$1 + 96ll) * *(double*)P2$1) + (*(double*)((uint8*)P1$1 + 104ll) * *(double*)((uint8*)P2$1 + 32ll))) + (*(double*)((uint8*)P1$1 + 112ll) * *(double*)((uint8*)P2$1 + 64ll))) + (*(double*)((uint8*)P1$1 + 120ll) * *(double*)((uint8*)P2$1 + 96ll));
	*(double*)((uint8*)Q$1 + 120ll) = (((*(double*)((uint8*)P1$1 + 96ll) * *(double*)P2$1) + (*(double*)((uint8*)P1$1 + 104ll) * *(double*)((uint8*)P2$1 + 32ll))) + (*(double*)((uint8*)P1$1 + 112ll) * *(double*)((uint8*)P2$1 + 64ll))) + (*(double*)((uint8*)P1$1 + 120ll) * *(double*)((uint8*)P2$1 + 96ll));
	_ZN4MATH4MAT4C1ERKS0_( tmp$1285$1, (struct $N4MATH4MAT4E*)&R$1 );
	_ZN4MATH4MAT4D1Ev( &R$1 );
	goto label$2586;
	_ZN4MATH4MAT4D1Ev( &R$1 );
	label$2586:;
	return tmp$1285$1;
}

struct $N4MATH4VEC4E _ZN4MATHmlERKNS_4MAT4ERKNS_4VEC4E( struct $N4MATH4MAT4E* M$1, struct $N4MATH4VEC4E* V$1 )
{
	double TMP$1287$1;
	double TMP$1288$1;
	double TMP$1289$1;
	double TMP$1290$1;
	struct $N4MATH4VEC4E fb$result$1;
	label$2587:;
	double* P$1;
	double* vr$0 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M$1 );
	P$1 = vr$0;
	TMP$1290$1 = (((*(double*)((uint8*)P$1 + 96ll) * *(double*)V$1) + (*(double*)((uint8*)P$1 + 104ll) * *(double*)((uint8*)V$1 + 8ll))) + (*(double*)((uint8*)P$1 + 112ll) * *(double*)((uint8*)V$1 + 16ll))) + (*(double*)((uint8*)P$1 + 120ll) * *(double*)((uint8*)V$1 + 24ll));
	TMP$1289$1 = (((*(double*)((uint8*)P$1 + 64ll) * *(double*)V$1) + (*(double*)((uint8*)P$1 + 72ll) * *(double*)((uint8*)V$1 + 8ll))) + (*(double*)((uint8*)P$1 + 80ll) * *(double*)((uint8*)V$1 + 16ll))) + (*(double*)((uint8*)P$1 + 88ll) * *(double*)((uint8*)V$1 + 24ll));
	TMP$1288$1 = (((*(double*)((uint8*)P$1 + 32ll) * *(double*)V$1) + (*(double*)((uint8*)P$1 + 40ll) * *(double*)((uint8*)V$1 + 8ll))) + (*(double*)((uint8*)P$1 + 48ll) * *(double*)((uint8*)V$1 + 16ll))) + (*(double*)((uint8*)P$1 + 56ll) * *(double*)((uint8*)V$1 + 24ll));
	TMP$1287$1 = (((*(double*)P$1 * *(double*)V$1) + (*(double*)((uint8*)P$1 + 8ll) * *(double*)((uint8*)V$1 + 8ll))) + (*(double*)((uint8*)P$1 + 16ll) * *(double*)((uint8*)V$1 + 16ll))) + (*(double*)((uint8*)P$1 + 24ll) * *(double*)((uint8*)V$1 + 24ll));
	_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, (double*)&TMP$1287$1, (double*)&TMP$1288$1, (double*)&TMP$1289$1, (double*)&TMP$1290$1 );
	goto label$2588;
	label$2588:;
	return fb$result$1;
}

struct $N4MATH4MAT4E* _ZN4MATHdvERKNS_4MAT4ERKd( struct $N4MATH4MAT4E* tmp$1291$1, struct $N4MATH4MAT4E* M$1, double* N$1 )
{
	label$2589:;
	if( *N$1 == 0x0p+0 ) goto label$2592;
	{
		struct $N4MATH4MAT4E R$2;
		_ZN4MATH4MAT4C1Ev( &R$2 );
		double* P$2;
		double* vr$2 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M$1 );
		P$2 = vr$2;
		double* Q$2;
		double* vr$4 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)&R$2 );
		Q$2 = vr$4;
		*(double*)Q$2 = *(double*)P$2 / *N$1;
		*(double*)((uint8*)Q$2 + 8ll) = *(double*)((uint8*)P$2 + 8ll) / *N$1;
		*(double*)((uint8*)Q$2 + 16ll) = *(double*)((uint8*)P$2 + 16ll) / *N$1;
		*(double*)((uint8*)Q$2 + 24ll) = *(double*)((uint8*)P$2 + 24ll) / *N$1;
		*(double*)((uint8*)Q$2 + 32ll) = *(double*)((uint8*)P$2 + 32ll) / *N$1;
		*(double*)((uint8*)Q$2 + 40ll) = *(double*)((uint8*)P$2 + 40ll) / *N$1;
		*(double*)((uint8*)Q$2 + 48ll) = *(double*)((uint8*)P$2 + 48ll) / *N$1;
		*(double*)((uint8*)Q$2 + 56ll) = *(double*)((uint8*)P$2 + 56ll) / *N$1;
		*(double*)((uint8*)Q$2 + 64ll) = *(double*)((uint8*)P$2 + 64ll) / *N$1;
		*(double*)((uint8*)Q$2 + 72ll) = *(double*)((uint8*)P$2 + 72ll) / *N$1;
		*(double*)((uint8*)Q$2 + 80ll) = *(double*)((uint8*)P$2 + 80ll) / *N$1;
		*(double*)((uint8*)Q$2 + 88ll) = *(double*)((uint8*)P$2 + 88ll) / *N$1;
		*(double*)((uint8*)Q$2 + 96ll) = *(double*)((uint8*)P$2 + 96ll) / *N$1;
		*(double*)((uint8*)Q$2 + 104ll) = *(double*)((uint8*)P$2 + 104ll) / *N$1;
		*(double*)((uint8*)Q$2 + 112ll) = *(double*)((uint8*)P$2 + 112ll) / *N$1;
		*(double*)((uint8*)Q$2 + 120ll) = *(double*)((uint8*)P$2 + 120ll) / *N$1;
		_ZN4MATH4MAT4C1ERKS0_( tmp$1291$1, (struct $N4MATH4MAT4E*)&R$2 );
		_ZN4MATH4MAT4D1Ev( &R$2 );
		goto label$2590;
		_ZN4MATH4MAT4D1Ev( &R$2 );
	}
	label$2592:;
	label$2591:;
	_ZN4MATH4MAT4C1Ev( tmp$1291$1 );
	goto label$2590;
	label$2590:;
	return tmp$1291$1;
}

int64 _ZNK4MATH9BASEARRAY13LENGTH__get__Ev( struct $N4MATH9BASEARRAYE* THIS$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$2593:;
	fb$result$1 = *(int64*)THIS$1;
	goto label$2594;
	label$2594:;
	return fb$result$1;
}

void _ZN4MATH5ARRAYC1Ev( struct $N4MATH5ARRAYE* THIS$1 )
{
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (double**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	label$2595:;
	label$2596:;
}

void _ZN4MATH5ARRAYC1ERKu7INTEGER( struct $N4MATH5ARRAYE* THIS$1, int64* L$1 )
{
	label$2597:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (double**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	if( *L$1 <= 0ll ) goto label$2600;
	{
		double* TMP$1299$2;
		*(int64*)THIS$1 = *L$1;
		void* vr$11 = malloc( *(uint64*)L$1 << (3ull & 63ll) );
		TMP$1299$2 = (double*)vr$11;
		if( TMP$1299$2 == (double*)0ull ) goto label$2601;
		__builtin_memset( TMP$1299$2, 0, *(uint64*)L$1 << (3ull & 63ll) );
		label$2601:;
		*(double**)((uint8*)THIS$1 + 8ll) = TMP$1299$2;
	}
	label$2600:;
	label$2599:;
	label$2598:;
}

void _ZN4MATH5ARRAYC1ERKu7INTEGERPFvRdERKb( struct $N4MATH5ARRAYE* THIS$1, int64* L$1, tmp$1293 F$1, boolean* R$1 )
{
	label$2602:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (double**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	if( *L$1 <= 0ll ) goto label$2605;
	{
		double* TMP$1300$2;
		*(int64*)THIS$1 = *L$1;
		void* vr$11 = malloc( *(uint64*)L$1 << (3ull & 63ll) );
		TMP$1300$2 = (double*)vr$11;
		if( TMP$1300$2 == (double*)0ull ) goto label$2606;
		__builtin_memset( TMP$1300$2, 0, *(uint64*)L$1 << (3ull & 63ll) );
		label$2606:;
		*(double**)((uint8*)THIS$1 + 8ll) = TMP$1300$2;
		if( F$1 == (tmp$1293)0ull ) goto label$2608;
		{
			if( *R$1 == (boolean)0ll ) goto label$2610;
			{
				{
					int64 I$5;
					I$5 = *L$1 + -1ll;
					goto label$2611;
					label$2614:;
					{
						(F$1)( (double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$5 << (3ll & 63ll))) );
					}
					label$2612:;
					I$5 = I$5 + -1ll;
					label$2611:;
					if( I$5 >= 0ll ) goto label$2614;
					label$2613:;
				}
			}
			goto label$2609;
			label$2610:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1301$5;
					TMP$1301$5 = *L$1 + -1ll;
					goto label$2615;
					label$2618:;
					{
						(F$1)( (double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$5 << (3ll & 63ll))) );
					}
					label$2616:;
					I$5 = I$5 + 1ll;
					label$2615:;
					if( I$5 <= TMP$1301$5 ) goto label$2618;
					label$2617:;
				}
			}
			label$2609:;
		}
		label$2608:;
		label$2607:;
	}
	label$2605:;
	label$2604:;
	label$2603:;
}

void _ZN4MATH5ARRAYC1ERKu7INTEGERPFvRdS3_ERKb( struct $N4MATH5ARRAYE* THIS$1, int64* L$1, tmp$1294 F$1, boolean* R$1 )
{
	label$2619:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (double**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	if( *L$1 <= 0ll ) goto label$2622;
	{
		double* TMP$1302$2;
		*(int64*)THIS$1 = *L$1;
		void* vr$11 = malloc( *(uint64*)L$1 << (3ull & 63ll) );
		TMP$1302$2 = (double*)vr$11;
		if( TMP$1302$2 == (double*)0ull ) goto label$2623;
		__builtin_memset( TMP$1302$2, 0, *(uint64*)L$1 << (3ull & 63ll) );
		label$2623:;
		*(double**)((uint8*)THIS$1 + 8ll) = TMP$1302$2;
		if( F$1 == (tmp$1294)0ull ) goto label$2625;
		{
			if( *R$1 == (boolean)0ll ) goto label$2627;
			{
				{
					int64 I$5;
					I$5 = *L$1 + -1ll;
					goto label$2628;
					label$2631:;
					{
						(F$1)( (double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$5 << (3ll & 63ll))), (int64*)&I$5 );
					}
					label$2629:;
					I$5 = I$5 + -1ll;
					label$2628:;
					if( I$5 >= 0ll ) goto label$2631;
					label$2630:;
				}
			}
			goto label$2626;
			label$2627:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1303$5;
					TMP$1303$5 = *L$1 + -1ll;
					goto label$2632;
					label$2635:;
					{
						(F$1)( (double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$5 << (3ll & 63ll))), (int64*)&I$5 );
					}
					label$2633:;
					I$5 = I$5 + 1ll;
					label$2632:;
					if( I$5 <= TMP$1303$5 ) goto label$2635;
					label$2634:;
				}
			}
			label$2626:;
		}
		label$2625:;
		label$2624:;
	}
	label$2622:;
	label$2621:;
	label$2620:;
}

void _ZN4MATH5ARRAYC1ERKS0_( struct $N4MATH5ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	label$2636:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (double**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	if( *(int64*)A$1 == 0ll ) goto label$2639;
	{
		double* TMP$1304$2;
		*(int64*)THIS$1 = *(int64*)A$1;
		void* vr$11 = malloc( *(uint64*)A$1 << (3ull & 63ll) );
		TMP$1304$2 = (double*)vr$11;
		if( TMP$1304$2 == (double*)0ull ) goto label$2640;
		__builtin_memset( TMP$1304$2, 0, *(uint64*)A$1 << (3ull & 63ll) );
		label$2640:;
		*(double**)((uint8*)THIS$1 + 8ll) = TMP$1304$2;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1305$3;
			TMP$1305$3 = *(int64*)A$1 + -1ll;
			goto label$2641;
			label$2644:;
			{
				*(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))) = *(double*)((uint8*)*(double**)((uint8*)A$1 + 8ll) + (I$3 << (3ll & 63ll)));
			}
			label$2642:;
			I$3 = I$3 + 1ll;
			label$2641:;
			if( I$3 <= TMP$1305$3 ) goto label$2644;
			label$2643:;
		}
	}
	label$2639:;
	label$2638:;
	label$2637:;
}

void _ZN4MATH5ARRAYD1Ev( struct $N4MATH5ARRAYE* THIS$1 )
{
	label$2645:;
	if( *(double**)((uint8*)THIS$1 + 8ll) == (double*)0ull ) goto label$2648;
	{
		if( *(double**)((uint8*)THIS$1 + 8ll) == (double*)0ull ) goto label$2649;
		free( *(void**)((uint8*)THIS$1 + 8ll) );
		label$2649:;
		label$2648:;
	}
	label$2646:;
}

void _ZN4MATH5ARRAYv27selfcatERKd( struct $N4MATH5ARRAYE* THIS$1, double* N$1 )
{
	label$2650:;
	if( *(int64*)THIS$1 == 0ll ) goto label$2653;
	{
		double* TMP$1306$2;
		*(int64*)THIS$1 = *(int64*)THIS$1 + 1ll;
		double* Q$2;
		void* vr$6 = malloc( *(uint64*)THIS$1 << (3ull & 63ll) );
		TMP$1306$2 = (double*)vr$6;
		if( TMP$1306$2 == (double*)0ull ) goto label$2654;
		__builtin_memset( TMP$1306$2, 0, *(uint64*)THIS$1 << (3ull & 63ll) );
		label$2654:;
		Q$2 = TMP$1306$2;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1307$3;
			TMP$1307$3 = *(int64*)THIS$1 + -2ll;
			goto label$2655;
			label$2658:;
			{
				*(double*)((uint8*)Q$2 + (I$3 << (3ll & 63ll))) = *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll)));
			}
			label$2656:;
			I$3 = I$3 + 1ll;
			label$2655:;
			if( I$3 <= TMP$1307$3 ) goto label$2658;
			label$2657:;
		}
		*(double*)((uint8*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (*(int64*)THIS$1 << (3ll & 63ll))) + -8ll) = *N$1;
		if( *(double**)((uint8*)THIS$1 + 8ll) == (double*)0ull ) goto label$2659;
		free( *(void**)((uint8*)THIS$1 + 8ll) );
		label$2659:;
		*(double**)((uint8*)THIS$1 + 8ll) = Q$2;
	}
	goto label$2652;
	label$2653:;
	{
		double* TMP$1308$2;
		*(int64*)THIS$1 = 1ll;
		void* vr$26 = malloc( 8ull );
		TMP$1308$2 = (double*)vr$26;
		if( TMP$1308$2 == (double*)0ull ) goto label$2660;
		__builtin_memset( TMP$1308$2, 0, 8ull );
		label$2660:;
		*(double**)((uint8*)THIS$1 + 8ll) = TMP$1308$2;
		*(*(double**)((uint8*)THIS$1 + 8ll)) = *N$1;
	}
	label$2652:;
	label$2651:;
}

void _ZN4MATH5ARRAYv27selfcatERKS0_( struct $N4MATH5ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	label$2661:;
	if( THIS$1 == A$1 ) goto label$2664;
	{
		if( *(int64*)A$1 == 0ll ) goto label$2666;
		{
			if( *(int64*)THIS$1 == 0ll ) goto label$2668;
			{
				double* TMP$1309$4;
				double* Q$4;
				void* vr$6 = malloc( (uint64)(*(int64*)THIS$1 + *(int64*)A$1) << (3ull & 63ll) );
				TMP$1309$4 = (double*)vr$6;
				if( TMP$1309$4 == (double*)0ull ) goto label$2669;
				__builtin_memset( TMP$1309$4, 0, (uint64)(*(int64*)THIS$1 + *(int64*)A$1) << (3ull & 63ll) );
				label$2669:;
				Q$4 = TMP$1309$4;
				int64 I$4;
				__builtin_memset( &I$4, 0, 8ll );
				{
					I$4 = 0ll;
					int64 TMP$1310$5;
					TMP$1310$5 = *(int64*)THIS$1 + -1ll;
					goto label$2670;
					label$2673:;
					{
						*(double*)((uint8*)Q$4 + (I$4 << (3ll & 63ll))) = *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$4 << (3ll & 63ll)));
					}
					label$2671:;
					I$4 = I$4 + 1ll;
					label$2670:;
					if( I$4 <= TMP$1310$5 ) goto label$2673;
					label$2672:;
				}
				{
					I$4 = 0ll;
					int64 TMP$1311$5;
					TMP$1311$5 = *(int64*)A$1 + -1ll;
					goto label$2674;
					label$2677:;
					{
						*(double*)((uint8*)Q$4 + ((*(int64*)THIS$1 + I$4) << (3ll & 63ll))) = *(double*)((uint8*)*(double**)((uint8*)A$1 + 8ll) + (I$4 << (3ll & 63ll)));
					}
					label$2675:;
					I$4 = I$4 + 1ll;
					label$2674:;
					if( I$4 <= TMP$1311$5 ) goto label$2677;
					label$2676:;
				}
				*(int64*)THIS$1 = *(int64*)THIS$1 + *(int64*)A$1;
				if( *(double**)((uint8*)THIS$1 + 8ll) == (double*)0ull ) goto label$2678;
				free( *(void**)((uint8*)THIS$1 + 8ll) );
				label$2678:;
				*(double**)((uint8*)THIS$1 + 8ll) = Q$4;
			}
			goto label$2667;
			label$2668:;
			{
				double* TMP$1312$4;
				*(int64*)THIS$1 = *(int64*)A$1;
				void* vr$41 = malloc( *(uint64*)THIS$1 << (3ull & 63ll) );
				TMP$1312$4 = (double*)vr$41;
				if( TMP$1312$4 == (double*)0ull ) goto label$2679;
				__builtin_memset( TMP$1312$4, 0, *(uint64*)THIS$1 << (3ull & 63ll) );
				label$2679:;
				*(double**)((uint8*)THIS$1 + 8ll) = TMP$1312$4;
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1313$5;
					TMP$1313$5 = *(int64*)THIS$1 + -1ll;
					goto label$2680;
					label$2683:;
					{
						*(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$5 << (3ll & 63ll))) = *(double*)((uint8*)*(double**)((uint8*)A$1 + 8ll) + (I$5 << (3ll & 63ll)));
					}
					label$2681:;
					I$5 = I$5 + 1ll;
					label$2680:;
					if( I$5 <= TMP$1313$5 ) goto label$2683;
					label$2682:;
				}
			}
			label$2667:;
		}
		label$2666:;
		label$2665:;
	}
	goto label$2663;
	label$2664:;
	{
		if( *(int64*)THIS$1 == 0ll ) goto label$2685;
		{
			double* TMP$1314$3;
			double* Q$3;
			void* vr$58 = malloc( (uint64)(*(int64*)THIS$1 << (1ll & 63ll)) << (3ull & 63ll) );
			TMP$1314$3 = (double*)vr$58;
			if( TMP$1314$3 == (double*)0ull ) goto label$2686;
			__builtin_memset( TMP$1314$3, 0, (uint64)(*(int64*)THIS$1 << (1ll & 63ll)) << (3ull & 63ll) );
			label$2686:;
			Q$3 = TMP$1314$3;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1315$4;
				TMP$1315$4 = *(int64*)THIS$1 + -1ll;
				goto label$2687;
				label$2690:;
				{
					*(double*)((uint8*)Q$3 + (I$4 << (3ll & 63ll))) = *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$4 << (3ll & 63ll)));
					*(double*)((uint8*)Q$3 + ((*(int64*)THIS$1 + I$4) << (3ll & 63ll))) = *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$4 << (3ll & 63ll)));
				}
				label$2688:;
				I$4 = I$4 + 1ll;
				label$2687:;
				if( I$4 <= TMP$1315$4 ) goto label$2690;
				label$2689:;
			}
			*(int64*)THIS$1 = *(int64*)THIS$1 << (1ll & 63ll);
			if( *(double**)((uint8*)THIS$1 + 8ll) == (double*)0ull ) goto label$2691;
			free( *(void**)((uint8*)THIS$1 + 8ll) );
			label$2691:;
			*(double**)((uint8*)THIS$1 + 8ll) = Q$3;
		}
		label$2685:;
		label$2684:;
	}
	label$2663:;
	label$2662:;
}

double* _ZN4MATH5ARRAYixERKu7INTEGER( struct $N4MATH5ARRAYE* THIS$1, int64* I$1 )
{
	double* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$2692:;
	if( ((int64)-(*I$1 >= 0ll) & (int64)-(*I$1 < *(int64*)THIS$1)) == 0ll ) goto label$2695;
	{
		fb$result$1 = (double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (*I$1 << (3ll & 63ll)));
		goto label$2693;
		label$2695:;
	}
	*(double*)((uint8*)THIS$1 + 16ll) = 0x0p+0;
	fb$result$1 = (double*)((uint8*)THIS$1 + 16ll);
	goto label$2693;
	label$2693:;
	return fb$result$1;
}

void _ZN4MATH5ARRAYpLERKd( struct $N4MATH5ARRAYE* THIS$1, double* N$1 )
{
	label$2696:;
	if( *(int64*)THIS$1 == 0ll ) goto label$2699;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1316$3;
			TMP$1316$3 = *(int64*)THIS$1 + -1ll;
			goto label$2700;
			label$2703:;
			{
				*(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))) = *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))) + *N$1;
			}
			label$2701:;
			I$3 = I$3 + 1ll;
			label$2700:;
			if( I$3 <= TMP$1316$3 ) goto label$2703;
			label$2702:;
		}
	}
	label$2699:;
	label$2698:;
	label$2697:;
}

void _ZN4MATH5ARRAYpLERKS0_( struct $N4MATH5ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	label$2704:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$2707;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1317$3;
			TMP$1317$3 = *(int64*)THIS$1 + -1ll;
			goto label$2708;
			label$2711:;
			{
				*(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))) = *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))) + *(double*)((uint8*)*(double**)((uint8*)A$1 + 8ll) + (I$3 << (3ll & 63ll)));
			}
			label$2709:;
			I$3 = I$3 + 1ll;
			label$2708:;
			if( I$3 <= TMP$1317$3 ) goto label$2711;
			label$2710:;
		}
	}
	label$2707:;
	label$2706:;
	label$2705:;
}

void _ZN4MATH5ARRAYmIERKd( struct $N4MATH5ARRAYE* THIS$1, double* N$1 )
{
	label$2712:;
	if( *(int64*)THIS$1 == 0ll ) goto label$2715;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1318$3;
			TMP$1318$3 = *(int64*)THIS$1 + -1ll;
			goto label$2716;
			label$2719:;
			{
				*(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))) = *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))) - *N$1;
			}
			label$2717:;
			I$3 = I$3 + 1ll;
			label$2716:;
			if( I$3 <= TMP$1318$3 ) goto label$2719;
			label$2718:;
		}
	}
	label$2715:;
	label$2714:;
	label$2713:;
}

void _ZN4MATH5ARRAYmIERKS0_( struct $N4MATH5ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	label$2720:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$2723;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1319$3;
			TMP$1319$3 = *(int64*)THIS$1 + -1ll;
			goto label$2724;
			label$2727:;
			{
				*(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))) = *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))) - *(double*)((uint8*)*(double**)((uint8*)A$1 + 8ll) + (I$3 << (3ll & 63ll)));
			}
			label$2725:;
			I$3 = I$3 + 1ll;
			label$2724:;
			if( I$3 <= TMP$1319$3 ) goto label$2727;
			label$2726:;
		}
	}
	label$2723:;
	label$2722:;
	label$2721:;
}

void _ZN4MATH5ARRAYmLERKd( struct $N4MATH5ARRAYE* THIS$1, double* N$1 )
{
	label$2728:;
	if( *(int64*)THIS$1 == 0ll ) goto label$2731;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1320$3;
			TMP$1320$3 = *(int64*)THIS$1 + -1ll;
			goto label$2732;
			label$2735:;
			{
				*(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))) = *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))) * *N$1;
			}
			label$2733:;
			I$3 = I$3 + 1ll;
			label$2732:;
			if( I$3 <= TMP$1320$3 ) goto label$2735;
			label$2734:;
		}
	}
	label$2731:;
	label$2730:;
	label$2729:;
}

void _ZN4MATH5ARRAYmLERKS0_( struct $N4MATH5ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	label$2736:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$2739;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1321$3;
			TMP$1321$3 = *(int64*)THIS$1 + -1ll;
			goto label$2740;
			label$2743:;
			{
				*(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))) = *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))) * *(double*)((uint8*)*(double**)((uint8*)A$1 + 8ll) + (I$3 << (3ll & 63ll)));
			}
			label$2741:;
			I$3 = I$3 + 1ll;
			label$2740:;
			if( I$3 <= TMP$1321$3 ) goto label$2743;
			label$2742:;
		}
	}
	label$2739:;
	label$2738:;
	label$2737:;
}

void _ZN4MATH5ARRAYdVERKd( struct $N4MATH5ARRAYE* THIS$1, double* N$1 )
{
	label$2744:;
	if( *(int64*)THIS$1 == 0ll ) goto label$2747;
	{
		if( *N$1 == 0x0p+0 ) goto label$2749;
		{
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1322$4;
				TMP$1322$4 = *(int64*)THIS$1 + -1ll;
				goto label$2750;
				label$2753:;
				{
					*(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$4 << (3ll & 63ll))) = *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$4 << (3ll & 63ll))) / *N$1;
				}
				label$2751:;
				I$4 = I$4 + 1ll;
				label$2750:;
				if( I$4 <= TMP$1322$4 ) goto label$2753;
				label$2752:;
			}
		}
		goto label$2748;
		label$2749:;
		{
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1323$4;
				TMP$1323$4 = *(int64*)THIS$1 + -1ll;
				goto label$2754;
				label$2757:;
				{
					*(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$4 << (3ll & 63ll))) = 0x0p+0;
				}
				label$2755:;
				I$4 = I$4 + 1ll;
				label$2754:;
				if( I$4 <= TMP$1323$4 ) goto label$2757;
				label$2756:;
			}
		}
		label$2748:;
	}
	label$2747:;
	label$2746:;
	label$2745:;
}

void _ZN4MATH5ARRAYdVERKS0_( struct $N4MATH5ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	label$2758:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$2761;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1324$3;
			TMP$1324$3 = *(int64*)THIS$1 + -1ll;
			goto label$2762;
			label$2765:;
			{
				double TMP$1325$4;
				if( *(double*)((uint8*)*(double**)((uint8*)A$1 + 8ll) + (I$3 << (3ll & 63ll))) == 0x0p+0 ) goto label$2766;
				TMP$1325$4 = *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))) / *(double*)((uint8*)*(double**)((uint8*)A$1 + 8ll) + (I$3 << (3ll & 63ll)));
				goto label$2767;
				label$2766:;
				TMP$1325$4 = 0x0p+0;
				label$2767:;
				*(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))) = TMP$1325$4;
			}
			label$2763:;
			I$3 = I$3 + 1ll;
			label$2762:;
			if( I$3 <= TMP$1324$3 ) goto label$2765;
			label$2764:;
		}
	}
	label$2761:;
	label$2760:;
	label$2759:;
}

void _ZN4MATH5ARRAYv27selfpowERKd( struct $N4MATH5ARRAYE* THIS$1, double* N$1 )
{
	label$2768:;
	if( *(int64*)THIS$1 == 0ll ) goto label$2771;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1326$3;
			TMP$1326$3 = *(int64*)THIS$1 + -1ll;
			goto label$2772;
			label$2775:;
			{
				double vr$7 = pow( *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))), *N$1 );
				*(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))) = vr$7;
			}
			label$2773:;
			I$3 = I$3 + 1ll;
			label$2772:;
			if( I$3 <= TMP$1326$3 ) goto label$2775;
			label$2774:;
		}
	}
	label$2771:;
	label$2770:;
	label$2769:;
}

void _ZN4MATH5ARRAYv27selfpowERKS0_( struct $N4MATH5ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	label$2776:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$2779;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1327$3;
			TMP$1327$3 = *(int64*)THIS$1 + -1ll;
			goto label$2780;
			label$2783:;
			{
				double vr$14 = pow( *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))), *(double*)((uint8*)*(double**)((uint8*)A$1 + 8ll) + (I$3 << (3ll & 63ll))) );
				*(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))) = vr$14;
			}
			label$2781:;
			I$3 = I$3 + 1ll;
			label$2780:;
			if( I$3 <= TMP$1327$3 ) goto label$2783;
			label$2782:;
		}
	}
	label$2779:;
	label$2778:;
	label$2777:;
}

FBSTRING* _ZNK4MATH5ARRAYcv8FBSTRINGEv( struct $N4MATH5ARRAYE* THIS$1 )
{
	FBSTRING TMP$1329$1;
	FBSTRING TMP$1330$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$2784:;
	FBSTRING* vr$2 = fb_LongintToStr( *(int64*)THIS$1 );
	__builtin_memset( &TMP$1329$1, 0, 24ll );
	FBSTRING* vr$5 = fb_StrConcat( &TMP$1329$1, (void*)"<math.array>{ length : ", 24ll, (void*)vr$2, -1ll );
	__builtin_memset( &TMP$1330$1, 0, 24ll );
	FBSTRING* vr$8 = fb_StrConcat( &TMP$1330$1, (void*)vr$5, -1ll, (void*)" }", 3ll );
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$8, -1ll, 0 );
	goto label$2785;
	label$2785:;
	FBSTRING* vr$11 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$11;
}

void _ZN4MATH5ARRAYaSERKS0_( struct $N4MATH5ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	label$2786:;
	if( THIS$1 == A$1 ) goto label$2789;
	{
		*(int64*)THIS$1 = 0ll;
		if( *(double**)((uint8*)THIS$1 + 8ll) == (double*)0ull ) goto label$2791;
		{
			if( *(double**)((uint8*)THIS$1 + 8ll) == (double*)0ull ) goto label$2792;
			free( *(void**)((uint8*)THIS$1 + 8ll) );
			label$2792:;
			*(double**)((uint8*)THIS$1 + 8ll) = (double*)0ull;
		}
		label$2791:;
		label$2790:;
		if( *(int64*)A$1 == 0ll ) goto label$2794;
		{
			double* TMP$1331$3;
			*(int64*)THIS$1 = *(int64*)A$1;
			void* vr$10 = malloc( *(uint64*)A$1 << (3ull & 63ll) );
			TMP$1331$3 = (double*)vr$10;
			if( TMP$1331$3 == (double*)0ull ) goto label$2795;
			__builtin_memset( TMP$1331$3, 0, *(uint64*)A$1 << (3ull & 63ll) );
			label$2795:;
			*(double**)((uint8*)THIS$1 + 8ll) = TMP$1331$3;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1332$4;
				TMP$1332$4 = *(int64*)A$1 + -1ll;
				goto label$2796;
				label$2799:;
				{
					*(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$4 << (3ll & 63ll))) = *(double*)((uint8*)*(double**)((uint8*)A$1 + 8ll) + (I$4 << (3ll & 63ll)));
				}
				label$2797:;
				I$4 = I$4 + 1ll;
				label$2796:;
				if( I$4 <= TMP$1332$4 ) goto label$2799;
				label$2798:;
			}
		}
		label$2794:;
		label$2793:;
	}
	label$2789:;
	label$2788:;
	label$2787:;
}

double _ZNK4MATH5ARRAY10AVG__get__Ev( struct $N4MATH5ARRAYE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$2800:;
	{
		int64 TMP$1333$2;
		TMP$1333$2 = *(int64*)THIS$1;
		if( TMP$1333$2 != 0ll ) goto label$2803;
		label$2804:;
		{
			fb$result$1 = 0x0p+0;
			goto label$2801;
		}
		goto label$2802;
		label$2803:;
		if( TMP$1333$2 != 1ll ) goto label$2805;
		label$2806:;
		{
			fb$result$1 = *(double*)*(double**)((uint8*)THIS$1 + 8ll);
			goto label$2801;
		}
		goto label$2802;
		label$2805:;
		{
			double R$3;
			__builtin_memset( &R$3, 0, 8ll );
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1334$4;
				TMP$1334$4 = *(int64*)THIS$1 + -1ll;
				goto label$2808;
				label$2811:;
				{
					R$3 = R$3 + *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$4 << (3ll & 63ll)));
				}
				label$2809:;
				I$4 = I$4 + 1ll;
				label$2808:;
				if( I$4 <= TMP$1334$4 ) goto label$2811;
				label$2810:;
			}
			fb$result$1 = R$3 / (double)*(int64*)THIS$1;
			goto label$2801;
		}
		label$2807:;
		label$2802:;
	}
	label$2801:;
	return fb$result$1;
}

double* _ZNK4MATH5ARRAY11DATA__get__Ev( struct $N4MATH5ARRAYE* THIS$1 )
{
	double* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$2812:;
	fb$result$1 = *(double**)((uint8*)THIS$1 + 8ll);
	goto label$2813;
	label$2813:;
	return fb$result$1;
}

void _ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( struct $N4MATH5ARRAYE* THIS$1, int64* L$1 )
{
	label$2814:;
	if( *L$1 <= 0ll ) goto label$2817;
	{
		if( *(int64*)THIS$1 <= 0ll ) goto label$2819;
		{
			if( *L$1 == *(int64*)THIS$1 ) goto label$2821;
			{
				double* TMP$1335$4;
				double* Q$4;
				void* vr$6 = malloc( *(uint64*)L$1 << (3ull & 63ll) );
				TMP$1335$4 = (double*)vr$6;
				if( TMP$1335$4 == (double*)0ull ) goto label$2822;
				__builtin_memset( TMP$1335$4, 0, *(uint64*)L$1 << (3ull & 63ll) );
				label$2822:;
				Q$4 = TMP$1335$4;
				{
					int64 TMP$1336$5;
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1337$5;
					if( *L$1 >= *(int64*)THIS$1 ) goto label$2823;
					TMP$1336$5 = *L$1;
					goto label$2834;
					label$2823:;
					TMP$1336$5 = *(int64*)THIS$1;
					label$2834:;
					TMP$1337$5 = TMP$1336$5 + -1ll;
					goto label$2824;
					label$2827:;
					{
						*(double*)((uint8*)Q$4 + (I$5 << (3ll & 63ll))) = *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$5 << (3ll & 63ll)));
					}
					label$2825:;
					I$5 = I$5 + 1ll;
					label$2824:;
					if( I$5 <= TMP$1337$5 ) goto label$2827;
					label$2826:;
				}
				*(int64*)THIS$1 = *L$1;
				if( *(double**)((uint8*)THIS$1 + 8ll) == (double*)0ull ) goto label$2828;
				free( *(void**)((uint8*)THIS$1 + 8ll) );
				label$2828:;
				*(double**)((uint8*)THIS$1 + 8ll) = Q$4;
			}
			label$2821:;
			label$2820:;
		}
		goto label$2818;
		label$2819:;
		{
			double* TMP$1338$3;
			*(int64*)THIS$1 = *L$1;
			void* vr$29 = malloc( *(uint64*)THIS$1 << (3ull & 63ll) );
			TMP$1338$3 = (double*)vr$29;
			if( TMP$1338$3 == (double*)0ull ) goto label$2829;
			__builtin_memset( TMP$1338$3, 0, *(uint64*)THIS$1 << (3ull & 63ll) );
			label$2829:;
			*(double**)((uint8*)THIS$1 + 8ll) = TMP$1338$3;
		}
		label$2818:;
	}
	goto label$2816;
	label$2817:;
	if( *L$1 != 0ll ) goto label$2830;
	{
		if( *(int64*)THIS$1 <= 0ll ) goto label$2832;
		{
			*(int64*)THIS$1 = 0ll;
			if( *(double**)((uint8*)THIS$1 + 8ll) == (double*)0ull ) goto label$2833;
			free( *(void**)((uint8*)THIS$1 + 8ll) );
			label$2833:;
			*(double**)((uint8*)THIS$1 + 8ll) = (double*)0ull;
		}
		label$2832:;
		label$2831:;
	}
	label$2830:;
	label$2816:;
	label$2815:;
}

double _ZNK4MATH5ARRAY10MAX__get__Ev( struct $N4MATH5ARRAYE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$2835:;
	{
		int64 TMP$1339$2;
		TMP$1339$2 = *(int64*)THIS$1;
		if( TMP$1339$2 != 0ll ) goto label$2838;
		label$2839:;
		{
			fb$result$1 = 0x0p+0;
			goto label$2836;
		}
		goto label$2837;
		label$2838:;
		if( TMP$1339$2 != 1ll ) goto label$2840;
		label$2841:;
		{
			fb$result$1 = *(double*)*(double**)((uint8*)THIS$1 + 8ll);
			goto label$2836;
		}
		goto label$2837;
		label$2840:;
		{
			double R$3;
			R$3 = *(double*)*(double**)((uint8*)THIS$1 + 8ll);
			{
				int64 I$4;
				I$4 = 1ll;
				int64 TMP$1340$4;
				TMP$1340$4 = *(int64*)THIS$1 + -1ll;
				goto label$2843;
				label$2846:;
				{
					if( R$3 >= *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$4 << (3ll & 63ll))) ) goto label$2848;
					{
						R$3 = *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$4 << (3ll & 63ll)));
						label$2848:;
					}
				}
				label$2844:;
				I$4 = I$4 + 1ll;
				label$2843:;
				if( I$4 <= TMP$1340$4 ) goto label$2846;
				label$2845:;
			}
			fb$result$1 = R$3;
			goto label$2836;
		}
		label$2842:;
		label$2837:;
	}
	label$2836:;
	return fb$result$1;
}

double _ZNK4MATH5ARRAY10MIN__get__Ev( struct $N4MATH5ARRAYE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$2849:;
	{
		int64 TMP$1341$2;
		TMP$1341$2 = *(int64*)THIS$1;
		if( TMP$1341$2 != 0ll ) goto label$2852;
		label$2853:;
		{
			fb$result$1 = 0x0p+0;
			goto label$2850;
		}
		goto label$2851;
		label$2852:;
		if( TMP$1341$2 != 1ll ) goto label$2854;
		label$2855:;
		{
			fb$result$1 = *(double*)*(double**)((uint8*)THIS$1 + 8ll);
			goto label$2850;
		}
		goto label$2851;
		label$2854:;
		{
			double R$3;
			R$3 = *(double*)*(double**)((uint8*)THIS$1 + 8ll);
			{
				int64 I$4;
				I$4 = 1ll;
				int64 TMP$1342$4;
				TMP$1342$4 = *(int64*)THIS$1 + -1ll;
				goto label$2857;
				label$2860:;
				{
					if( *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$4 << (3ll & 63ll))) >= R$3 ) goto label$2862;
					{
						R$3 = *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$4 << (3ll & 63ll)));
						label$2862:;
					}
				}
				label$2858:;
				I$4 = I$4 + 1ll;
				label$2857:;
				if( I$4 <= TMP$1342$4 ) goto label$2860;
				label$2859:;
			}
			fb$result$1 = R$3;
			goto label$2850;
		}
		label$2856:;
		label$2851:;
	}
	label$2850:;
	return fb$result$1;
}

boolean _ZN4MATH5ARRAY7FOREACHEPFvRdERKb( struct $N4MATH5ARRAYE* THIS$1, tmp$1293 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2863:;
	if( *(int64*)THIS$1 == 0ll ) goto label$2866;
	{
		if( F$1 == (tmp$1293)0ull ) goto label$2868;
		{
			if( *R$1 == (boolean)0ll ) goto label$2870;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$2871;
					label$2874:;
					{
						(F$1)( (double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$5 << (3ll & 63ll))) );
					}
					label$2872:;
					I$5 = I$5 + -1ll;
					label$2871:;
					if( I$5 >= 0ll ) goto label$2874;
					label$2873:;
				}
			}
			goto label$2869;
			label$2870:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1343$5;
					TMP$1343$5 = *(int64*)THIS$1 + -1ll;
					goto label$2875;
					label$2878:;
					{
						(F$1)( (double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$5 << (3ll & 63ll))) );
					}
					label$2876:;
					I$5 = I$5 + 1ll;
					label$2875:;
					if( I$5 <= TMP$1343$5 ) goto label$2878;
					label$2877:;
				}
			}
			label$2869:;
			fb$result$1 = (boolean)1ll;
			goto label$2864;
		}
		label$2868:;
		label$2867:;
	}
	label$2866:;
	label$2865:;
	fb$result$1 = (boolean)0ll;
	goto label$2864;
	label$2864:;
	return fb$result$1;
}

boolean _ZN4MATH5ARRAY7FOREACHEPFbRdERKb( struct $N4MATH5ARRAYE* THIS$1, tmp$1295 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2879:;
	if( *(int64*)THIS$1 == 0ll ) goto label$2882;
	{
		if( F$1 == (tmp$1295)0ull ) goto label$2884;
		{
			if( *R$1 == (boolean)0ll ) goto label$2886;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$2887;
					label$2890:;
					{
						boolean vr$8 = (F$1)( (double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$5 << (3ll & 63ll))) );
						if( vr$8 != (boolean)0ll ) goto label$2892;
						{
							goto label$2889;
						}
						label$2892:;
						label$2891:;
					}
					label$2888:;
					I$5 = I$5 + -1ll;
					label$2887:;
					if( I$5 >= 0ll ) goto label$2890;
					label$2889:;
				}
			}
			goto label$2885;
			label$2886:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1344$5;
					TMP$1344$5 = *(int64*)THIS$1 + -1ll;
					goto label$2893;
					label$2896:;
					{
						boolean vr$15 = (F$1)( (double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$5 << (3ll & 63ll))) );
						if( vr$15 != (boolean)0ll ) goto label$2898;
						{
							goto label$2895;
						}
						label$2898:;
						label$2897:;
					}
					label$2894:;
					I$5 = I$5 + 1ll;
					label$2893:;
					if( I$5 <= TMP$1344$5 ) goto label$2896;
					label$2895:;
				}
			}
			label$2885:;
			fb$result$1 = (boolean)1ll;
			goto label$2880;
		}
		label$2884:;
		label$2883:;
	}
	label$2882:;
	label$2881:;
	fb$result$1 = (boolean)0ll;
	goto label$2880;
	label$2880:;
	return fb$result$1;
}

boolean _ZN4MATH5ARRAY7FOREACHEPFvRdRKu7INTEGERERKb( struct $N4MATH5ARRAYE* THIS$1, tmp$1294 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2899:;
	if( *(int64*)THIS$1 == 0ll ) goto label$2902;
	{
		if( F$1 == (tmp$1294)0ull ) goto label$2904;
		{
			if( *R$1 == (boolean)0ll ) goto label$2906;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$2907;
					label$2910:;
					{
						(F$1)( (double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$5 << (3ll & 63ll))), (int64*)&I$5 );
					}
					label$2908:;
					I$5 = I$5 + -1ll;
					label$2907:;
					if( I$5 >= 0ll ) goto label$2910;
					label$2909:;
				}
			}
			goto label$2905;
			label$2906:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1345$5;
					TMP$1345$5 = *(int64*)THIS$1 + -1ll;
					goto label$2911;
					label$2914:;
					{
						(F$1)( (double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$5 << (3ll & 63ll))), (int64*)&I$5 );
					}
					label$2912:;
					I$5 = I$5 + 1ll;
					label$2911:;
					if( I$5 <= TMP$1345$5 ) goto label$2914;
					label$2913:;
				}
			}
			label$2905:;
			fb$result$1 = (boolean)1ll;
			goto label$2900;
		}
		label$2904:;
		label$2903:;
	}
	label$2902:;
	label$2901:;
	fb$result$1 = (boolean)0ll;
	goto label$2900;
	label$2900:;
	return fb$result$1;
}

boolean _ZN4MATH5ARRAY7FOREACHEPFbRdRKu7INTEGERERKb( struct $N4MATH5ARRAYE* THIS$1, tmp$1296 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2915:;
	if( *(int64*)THIS$1 == 0ll ) goto label$2918;
	{
		if( F$1 == (tmp$1296)0ull ) goto label$2920;
		{
			if( *R$1 == (boolean)0ll ) goto label$2922;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$2923;
					label$2926:;
					{
						boolean vr$9 = (F$1)( (double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$5 << (3ll & 63ll))), (int64*)&I$5 );
						if( vr$9 != (boolean)0ll ) goto label$2928;
						{
							goto label$2925;
						}
						label$2928:;
						label$2927:;
					}
					label$2924:;
					I$5 = I$5 + -1ll;
					label$2923:;
					if( I$5 >= 0ll ) goto label$2926;
					label$2925:;
				}
			}
			goto label$2921;
			label$2922:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1346$5;
					TMP$1346$5 = *(int64*)THIS$1 + -1ll;
					goto label$2929;
					label$2932:;
					{
						boolean vr$17 = (F$1)( (double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$5 << (3ll & 63ll))), (int64*)&I$5 );
						if( vr$17 != (boolean)0ll ) goto label$2934;
						{
							goto label$2931;
						}
						label$2934:;
						label$2933:;
					}
					label$2930:;
					I$5 = I$5 + 1ll;
					label$2929:;
					if( I$5 <= TMP$1346$5 ) goto label$2932;
					label$2931:;
				}
			}
			label$2921:;
			fb$result$1 = (boolean)1ll;
			goto label$2916;
		}
		label$2920:;
		label$2919:;
	}
	label$2918:;
	label$2917:;
	fb$result$1 = (boolean)0ll;
	goto label$2916;
	label$2916:;
	return fb$result$1;
}

boolean _ZN4MATH5ARRAY3MAPERS0_PFdRKdE( struct $N4MATH5ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1, tmp$1297 F$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2935:;
	if( *(int64*)THIS$1 == 0ll ) goto label$2938;
	{
		if( F$1 == (tmp$1297)0ull ) goto label$2940;
		{
			_ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1347$4;
				TMP$1347$4 = *(int64*)THIS$1 + -1ll;
				goto label$2941;
				label$2944:;
				{
					double vr$9 = (F$1)( (double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$4 << (3ll & 63ll))) );
					*(double*)((uint8*)*(double**)((uint8*)A$1 + 8ll) + (I$4 << (3ll & 63ll))) = vr$9;
				}
				label$2942:;
				I$4 = I$4 + 1ll;
				label$2941:;
				if( I$4 <= TMP$1347$4 ) goto label$2944;
				label$2943:;
			}
		}
		label$2940:;
		label$2939:;
	}
	label$2938:;
	label$2937:;
	fb$result$1 = (boolean)0ll;
	goto label$2936;
	label$2936:;
	return fb$result$1;
}

boolean _ZN4MATH5ARRAY3MAPERS0_PFdRKdRKu7INTEGERE( struct $N4MATH5ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1, tmp$1298 F$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2945:;
	if( *(int64*)THIS$1 == 0ll ) goto label$2948;
	{
		if( F$1 == (tmp$1298)0ull ) goto label$2950;
		{
			_ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1348$4;
				TMP$1348$4 = *(int64*)THIS$1 + -1ll;
				goto label$2951;
				label$2954:;
				{
					double vr$10 = (F$1)( (double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$4 << (3ll & 63ll))), (int64*)&I$4 );
					*(double*)((uint8*)*(double**)((uint8*)A$1 + 8ll) + (I$4 << (3ll & 63ll))) = vr$10;
				}
				label$2952:;
				I$4 = I$4 + 1ll;
				label$2951:;
				if( I$4 <= TMP$1348$4 ) goto label$2954;
				label$2953:;
			}
		}
		label$2950:;
		label$2949:;
	}
	label$2948:;
	label$2947:;
	fb$result$1 = (boolean)0ll;
	goto label$2946;
	label$2946:;
	return fb$result$1;
}

FBSTRING* _ZNK4MATH5ARRAY6TOJSONEv( struct $N4MATH5ARRAYE* THIS$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$2955:;
	{
		int64 TMP$1349$2;
		TMP$1349$2 = *(int64*)THIS$1;
		if( TMP$1349$2 != 0ll ) goto label$2958;
		label$2959:;
		{
			fb_StrInit( (void*)&fb$result$1, -1ll, (void*)"[]", 3ll, 0 );
			goto label$2956;
		}
		goto label$2957;
		label$2958:;
		if( TMP$1349$2 != 1ll ) goto label$2960;
		label$2961:;
		{
			FBSTRING TMP$1351$3;
			FBSTRING TMP$1352$3;
			FBSTRING* vr$5 = fb_DoubleToStr( *(double*)*(double**)((uint8*)THIS$1 + 8ll) );
			__builtin_memset( &TMP$1351$3, 0, 24ll );
			FBSTRING* vr$8 = fb_StrConcat( &TMP$1351$3, (void*)"[", 2ll, (void*)vr$5, -1ll );
			__builtin_memset( &TMP$1352$3, 0, 24ll );
			FBSTRING* vr$11 = fb_StrConcat( &TMP$1352$3, (void*)vr$8, -1ll, (void*)"]", 2ll );
			fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$11, -1ll, 0 );
			goto label$2956;
		}
		goto label$2957;
		label$2960:;
		{
			FBSTRING TMP$1353$3;
			FBSTRING TMP$1357$3;
			FBSTRING R$3;
			FBSTRING* vr$15 = fb_DoubleToStr( *(double*)*(double**)((uint8*)THIS$1 + 8ll) );
			__builtin_memset( &TMP$1353$3, 0, 24ll );
			FBSTRING* vr$18 = fb_StrConcat( &TMP$1353$3, (void*)"[", 2ll, (void*)vr$15, -1ll );
			fb_StrInit( (void*)&R$3, -1ll, (void*)vr$18, -1ll, 0 );
			{
				int64 I$4;
				I$4 = 1ll;
				int64 TMP$1354$4;
				TMP$1354$4 = *(int64*)THIS$1 + -1ll;
				goto label$2963;
				label$2966:;
				{
					FBSTRING TMP$1355$5;
					FBSTRING TMP$1356$5;
					FBSTRING* vr$25 = fb_DoubleToStr( *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$4 << (3ll & 63ll))) );
					__builtin_memset( &TMP$1355$5, 0, 24ll );
					FBSTRING* vr$28 = fb_StrConcat( &TMP$1355$5, (void*)",", 2ll, (void*)vr$25, -1ll );
					__builtin_memset( &TMP$1356$5, 0, 24ll );
					FBSTRING* vr$32 = fb_StrConcat( &TMP$1356$5, (void*)&R$3, -1ll, (void*)vr$28, -1ll );
					fb_StrAssign( (void*)&R$3, -1ll, (void*)vr$32, -1ll, 0 );
				}
				label$2964:;
				I$4 = I$4 + 1ll;
				label$2963:;
				if( I$4 <= TMP$1354$4 ) goto label$2966;
				label$2965:;
			}
			__builtin_memset( &TMP$1357$3, 0, 24ll );
			FBSTRING* vr$38 = fb_StrConcat( &TMP$1357$3, (void*)&R$3, -1ll, (void*)"]", 2ll );
			fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$38, -1ll, 0 );
			fb_StrDelete( (FBSTRING*)&R$3 );
			goto label$2956;
			fb_StrDelete( (FBSTRING*)&R$3 );
		}
		label$2962:;
		label$2957:;
	}
	label$2956:;
	FBSTRING* vr$43 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$43;
}

void _ZN4MATH12COMPLEXARRAYC1Ev( struct $N4MATH12COMPLEXARRAYE* THIS$1 )
{
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH7COMPLEXC1Ev( (struct $N4MATH7COMPLEXE*)((uint8*)THIS$1 + 16ll) );
	label$2967:;
	label$2968:;
}

void _ZN4MATH12COMPLEXARRAYC1ERKu7INTEGER( struct $N4MATH12COMPLEXARRAYE* THIS$1, int64* L$1 )
{
	label$2969:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH7COMPLEXC1Ev( (struct $N4MATH7COMPLEXE*)((uint8*)THIS$1 + 16ll) );
	if( *L$1 <= 0ll ) goto label$2972;
	{
		struct $N4MATH7COMPLEXE* TMP$1363$2;
		uint64 TMP$1364$2;
		struct $N4MATH7COMPLEXE* TMP$1365$2;
		*(int64*)THIS$1 = *L$1;
		void* vr$11 = malloc( *(uint64*)L$1 << (4ull & 63ll) );
		TMP$1363$2 = (struct $N4MATH7COMPLEXE*)vr$11;
		if( TMP$1363$2 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$2973;
		TMP$1365$2 = TMP$1363$2;
		TMP$1364$2 = *(uint64*)L$1;
		label$2974:;
		if( TMP$1364$2 == 0ull ) goto label$2975;
		_ZN4MATH7COMPLEXC1Ev( TMP$1365$2 );
		TMP$1365$2 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1365$2 + 16ll);
		TMP$1364$2 = TMP$1364$2 + 18446744073709551615ull;
		goto label$2974;
		label$2975:;
		label$2973:;
		*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = TMP$1363$2;
	}
	label$2972:;
	label$2971:;
	label$2970:;
}

void _ZN4MATH12COMPLEXARRAYC1ERKu7INTEGERPFvRNS_7COMPLEXEERKb( struct $N4MATH12COMPLEXARRAYE* THIS$1, int64* L$1, tmp$1358 F$1, boolean* R$1 )
{
	label$2976:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH7COMPLEXC1Ev( (struct $N4MATH7COMPLEXE*)((uint8*)THIS$1 + 16ll) );
	if( *L$1 <= 0ll ) goto label$2979;
	{
		struct $N4MATH7COMPLEXE* TMP$1366$2;
		uint64 TMP$1367$2;
		struct $N4MATH7COMPLEXE* TMP$1368$2;
		*(int64*)THIS$1 = *L$1;
		void* vr$11 = malloc( *(uint64*)L$1 << (4ull & 63ll) );
		TMP$1366$2 = (struct $N4MATH7COMPLEXE*)vr$11;
		if( TMP$1366$2 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$2980;
		TMP$1368$2 = TMP$1366$2;
		TMP$1367$2 = *(uint64*)L$1;
		label$2981:;
		if( TMP$1367$2 == 0ull ) goto label$2982;
		_ZN4MATH7COMPLEXC1Ev( TMP$1368$2 );
		TMP$1368$2 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1368$2 + 16ll);
		TMP$1367$2 = TMP$1367$2 + 18446744073709551615ull;
		goto label$2981;
		label$2982:;
		label$2980:;
		*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = TMP$1366$2;
		if( F$1 == (tmp$1358)0ull ) goto label$2984;
		{
			if( *R$1 == (boolean)0ll ) goto label$2986;
			{
				{
					int64 I$5;
					I$5 = *L$1 + -1ll;
					goto label$2987;
					label$2990:;
					{
						(F$1)( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
					}
					label$2988:;
					I$5 = I$5 + -1ll;
					label$2987:;
					if( I$5 >= 0ll ) goto label$2990;
					label$2989:;
				}
			}
			goto label$2985;
			label$2986:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1369$5;
					TMP$1369$5 = *L$1 + -1ll;
					goto label$2991;
					label$2994:;
					{
						(F$1)( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
					}
					label$2992:;
					I$5 = I$5 + 1ll;
					label$2991:;
					if( I$5 <= TMP$1369$5 ) goto label$2994;
					label$2993:;
				}
			}
			label$2985:;
		}
		label$2984:;
		label$2983:;
	}
	label$2979:;
	label$2978:;
	label$2977:;
}

void _ZN4MATH12COMPLEXARRAYC1ERKu7INTEGERPFvRNS_7COMPLEXES3_ERKb( struct $N4MATH12COMPLEXARRAYE* THIS$1, int64* L$1, tmp$1359 F$1, boolean* R$1 )
{
	label$2995:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH7COMPLEXC1Ev( (struct $N4MATH7COMPLEXE*)((uint8*)THIS$1 + 16ll) );
	if( *L$1 <= 0ll ) goto label$2998;
	{
		struct $N4MATH7COMPLEXE* TMP$1370$2;
		uint64 TMP$1371$2;
		struct $N4MATH7COMPLEXE* TMP$1372$2;
		*(int64*)THIS$1 = *L$1;
		void* vr$11 = malloc( *(uint64*)L$1 << (4ull & 63ll) );
		TMP$1370$2 = (struct $N4MATH7COMPLEXE*)vr$11;
		if( TMP$1370$2 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$2999;
		TMP$1372$2 = TMP$1370$2;
		TMP$1371$2 = *(uint64*)L$1;
		label$3000:;
		if( TMP$1371$2 == 0ull ) goto label$3001;
		_ZN4MATH7COMPLEXC1Ev( TMP$1372$2 );
		TMP$1372$2 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1372$2 + 16ll);
		TMP$1371$2 = TMP$1371$2 + 18446744073709551615ull;
		goto label$3000;
		label$3001:;
		label$2999:;
		*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = TMP$1370$2;
		if( F$1 == (tmp$1359)0ull ) goto label$3003;
		{
			if( *R$1 == (boolean)0ll ) goto label$3005;
			{
				{
					int64 I$5;
					I$5 = *L$1 + -1ll;
					goto label$3006;
					label$3009:;
					{
						(F$1)( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
					}
					label$3007:;
					I$5 = I$5 + -1ll;
					label$3006:;
					if( I$5 >= 0ll ) goto label$3009;
					label$3008:;
				}
			}
			goto label$3004;
			label$3005:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1373$5;
					TMP$1373$5 = *L$1 + -1ll;
					goto label$3010;
					label$3013:;
					{
						(F$1)( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
					}
					label$3011:;
					I$5 = I$5 + 1ll;
					label$3010:;
					if( I$5 <= TMP$1373$5 ) goto label$3013;
					label$3012:;
				}
			}
			label$3004:;
		}
		label$3003:;
		label$3002:;
	}
	label$2998:;
	label$2997:;
	label$2996:;
}

void _ZN4MATH12COMPLEXARRAYC1ERKNS_5ARRAYE( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	label$3014:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH7COMPLEXC1Ev( (struct $N4MATH7COMPLEXE*)((uint8*)THIS$1 + 16ll) );
	if( *(int64*)A$1 == 0ll ) goto label$3017;
	{
		struct $N4MATH7COMPLEXE* TMP$1374$2;
		uint64 TMP$1375$2;
		struct $N4MATH7COMPLEXE* TMP$1376$2;
		*(int64*)THIS$1 = *(int64*)A$1;
		void* vr$11 = malloc( *(uint64*)A$1 << (4ull & 63ll) );
		TMP$1374$2 = (struct $N4MATH7COMPLEXE*)vr$11;
		if( TMP$1374$2 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3018;
		TMP$1376$2 = TMP$1374$2;
		TMP$1375$2 = *(uint64*)A$1;
		label$3019:;
		if( TMP$1375$2 == 0ull ) goto label$3020;
		_ZN4MATH7COMPLEXC1Ev( TMP$1376$2 );
		TMP$1376$2 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1376$2 + 16ll);
		TMP$1375$2 = TMP$1375$2 + 18446744073709551615ull;
		goto label$3019;
		label$3020:;
		label$3018:;
		*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = TMP$1374$2;
		double* P$2;
		double* vr$16 = _ZNK4MATH5ARRAY11DATA__get__Ev( A$1 );
		P$2 = vr$16;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1377$3;
			TMP$1377$3 = *(int64*)A$1 + -1ll;
			goto label$3021;
			label$3024:;
			{
				*(double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) = *(double*)((uint8*)P$2 + (I$3 << (3ll & 63ll)));
			}
			label$3022:;
			I$3 = I$3 + 1ll;
			label$3021:;
			if( I$3 <= TMP$1377$3 ) goto label$3024;
			label$3023:;
		}
	}
	label$3017:;
	label$3016:;
	label$3015:;
}

void _ZN4MATH12COMPLEXARRAYC1ERKNS_5ARRAYES3_( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH5ARRAYE* A1$1, struct $N4MATH5ARRAYE* A2$1 )
{
	label$3025:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH7COMPLEXC1Ev( (struct $N4MATH7COMPLEXE*)((uint8*)THIS$1 + 16ll) );
	if( ((int64)-(*(int64*)A1$1 > 0ll) & (int64)-(*(int64*)A1$1 == *(int64*)A2$1)) == 0ll ) goto label$3028;
	{
		struct $N4MATH7COMPLEXE* TMP$1378$2;
		uint64 TMP$1379$2;
		struct $N4MATH7COMPLEXE* TMP$1380$2;
		*(int64*)THIS$1 = *(int64*)A1$1;
		void* vr$16 = malloc( *(uint64*)A1$1 << (4ull & 63ll) );
		TMP$1378$2 = (struct $N4MATH7COMPLEXE*)vr$16;
		if( TMP$1378$2 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3029;
		TMP$1380$2 = TMP$1378$2;
		TMP$1379$2 = *(uint64*)A1$1;
		label$3030:;
		if( TMP$1379$2 == 0ull ) goto label$3031;
		_ZN4MATH7COMPLEXC1Ev( TMP$1380$2 );
		TMP$1380$2 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1380$2 + 16ll);
		TMP$1379$2 = TMP$1379$2 + 18446744073709551615ull;
		goto label$3030;
		label$3031:;
		label$3029:;
		*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = TMP$1378$2;
		double* P1$2;
		double* vr$21 = _ZNK4MATH5ARRAY11DATA__get__Ev( A1$1 );
		P1$2 = vr$21;
		double* P2$2;
		double* vr$22 = _ZNK4MATH5ARRAY11DATA__get__Ev( A2$1 );
		P2$2 = vr$22;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1381$3;
			TMP$1381$3 = *(int64*)A1$1 + -1ll;
			goto label$3032;
			label$3035:;
			{
				*(double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) = *(double*)((uint8*)P1$2 + (I$3 << (3ll & 63ll)));
				*(double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) = *(double*)((uint8*)P2$2 + (I$3 << (3ll & 63ll)));
			}
			label$3033:;
			I$3 = I$3 + 1ll;
			label$3032:;
			if( I$3 <= TMP$1381$3 ) goto label$3035;
			label$3034:;
		}
	}
	label$3028:;
	label$3027:;
	label$3026:;
}

void _ZN4MATH12COMPLEXARRAYC1ERKS0_( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH12COMPLEXARRAYE* A$1 )
{
	label$3036:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH7COMPLEXC1Ev( (struct $N4MATH7COMPLEXE*)((uint8*)THIS$1 + 16ll) );
	if( *(int64*)A$1 == 0ll ) goto label$3039;
	{
		struct $N4MATH7COMPLEXE* TMP$1382$2;
		uint64 TMP$1383$2;
		struct $N4MATH7COMPLEXE* TMP$1384$2;
		*(int64*)THIS$1 = *(int64*)A$1;
		void* vr$11 = malloc( *(uint64*)A$1 << (4ull & 63ll) );
		TMP$1382$2 = (struct $N4MATH7COMPLEXE*)vr$11;
		if( TMP$1382$2 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3040;
		TMP$1384$2 = TMP$1382$2;
		TMP$1383$2 = *(uint64*)A$1;
		label$3041:;
		if( TMP$1383$2 == 0ull ) goto label$3042;
		_ZN4MATH7COMPLEXC1Ev( TMP$1384$2 );
		TMP$1384$2 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1384$2 + 16ll);
		TMP$1383$2 = TMP$1383$2 + 18446744073709551615ull;
		goto label$3041;
		label$3042:;
		label$3040:;
		*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = TMP$1382$2;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1385$3;
			TMP$1385$3 = *(int64*)A$1 + -1ll;
			goto label$3043;
			label$3046:;
			{
				_ZN4MATH7COMPLEXaSERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)A$1 + 8ll) + (I$3 << (4ll & 63ll))) );
			}
			label$3044:;
			I$3 = I$3 + 1ll;
			label$3043:;
			if( I$3 <= TMP$1385$3 ) goto label$3046;
			label$3045:;
		}
	}
	label$3039:;
	label$3038:;
	label$3037:;
}

void _ZN4MATH12COMPLEXARRAYD1Ev( struct $N4MATH12COMPLEXARRAYE* THIS$1 )
{
	label$3047:;
	if( *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3050;
	{
		if( *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3051;
		free( *(void**)((uint8*)THIS$1 + 8ll) );
		label$3051:;
		label$3050:;
	}
	label$3048:;
}

void _ZN4MATH12COMPLEXARRAYv27selfcatERKd( struct $N4MATH12COMPLEXARRAYE* THIS$1, double* N$1 )
{
	label$3052:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3055;
	{
		struct $N4MATH7COMPLEXE* TMP$1386$2;
		uint64 TMP$1387$2;
		struct $N4MATH7COMPLEXE* TMP$1388$2;
		*(int64*)THIS$1 = *(int64*)THIS$1 + 1ll;
		struct $N4MATH7COMPLEXE* Q$2;
		void* vr$6 = malloc( *(uint64*)THIS$1 << (4ull & 63ll) );
		TMP$1386$2 = (struct $N4MATH7COMPLEXE*)vr$6;
		if( TMP$1386$2 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3056;
		TMP$1388$2 = TMP$1386$2;
		TMP$1387$2 = *(uint64*)THIS$1;
		label$3057:;
		if( TMP$1387$2 == 0ull ) goto label$3058;
		_ZN4MATH7COMPLEXC1Ev( TMP$1388$2 );
		TMP$1388$2 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1388$2 + 16ll);
		TMP$1387$2 = TMP$1387$2 + 18446744073709551615ull;
		goto label$3057;
		label$3058:;
		label$3056:;
		Q$2 = TMP$1386$2;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1389$3;
			TMP$1389$3 = *(int64*)THIS$1 + -2ll;
			goto label$3059;
			label$3062:;
			{
				_ZN4MATH7COMPLEXaSERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)Q$2 + (I$3 << (4ll & 63ll))), (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) );
			}
			label$3060:;
			I$3 = I$3 + 1ll;
			label$3059:;
			if( I$3 <= TMP$1389$3 ) goto label$3062;
			label$3061:;
		}
		*(double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (*(int64*)THIS$1 << (4ll & 63ll))) + -16ll) = *N$1;
		if( *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3063;
		free( *(void**)((uint8*)THIS$1 + 8ll) );
		label$3063:;
		*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = Q$2;
	}
	goto label$3054;
	label$3055:;
	{
		struct $N4MATH7COMPLEXE* TMP$1390$2;
		uint64 TMP$1391$2;
		struct $N4MATH7COMPLEXE* TMP$1392$2;
		*(int64*)THIS$1 = 1ll;
		void* vr$27 = malloc( 16ull );
		TMP$1390$2 = (struct $N4MATH7COMPLEXE*)vr$27;
		if( TMP$1390$2 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3064;
		TMP$1392$2 = TMP$1390$2;
		TMP$1391$2 = 1ull;
		label$3065:;
		if( TMP$1391$2 == 0ull ) goto label$3066;
		_ZN4MATH7COMPLEXC1Ev( TMP$1392$2 );
		TMP$1392$2 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1392$2 + 16ll);
		TMP$1391$2 = TMP$1391$2 + 18446744073709551615ull;
		goto label$3065;
		label$3066:;
		label$3064:;
		*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = TMP$1390$2;
		*(double*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = *N$1;
	}
	label$3054:;
	label$3053:;
}

void _ZN4MATH12COMPLEXARRAYv27selfcatERKNS_5ARRAYE( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	label$3067:;
	if( *(int64*)A$1 == 0ll ) goto label$3070;
	{
		if( *(int64*)THIS$1 == 0ll ) goto label$3072;
		{
			struct $N4MATH7COMPLEXE* TMP$1393$3;
			uint64 TMP$1394$3;
			struct $N4MATH7COMPLEXE* TMP$1395$3;
			struct $N4MATH7COMPLEXE* Q$3;
			void* vr$6 = malloc( (uint64)(*(int64*)THIS$1 + *(int64*)A$1) << (4ull & 63ll) );
			TMP$1393$3 = (struct $N4MATH7COMPLEXE*)vr$6;
			if( TMP$1393$3 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3073;
			TMP$1395$3 = TMP$1393$3;
			TMP$1394$3 = (uint64)(*(int64*)THIS$1 + *(int64*)A$1);
			label$3074:;
			if( TMP$1394$3 == 0ull ) goto label$3075;
			_ZN4MATH7COMPLEXC1Ev( TMP$1395$3 );
			TMP$1395$3 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1395$3 + 16ll);
			TMP$1394$3 = TMP$1394$3 + 18446744073709551615ull;
			goto label$3074;
			label$3075:;
			label$3073:;
			Q$3 = TMP$1393$3;
			int64 I$3;
			__builtin_memset( &I$3, 0, 8ll );
			{
				I$3 = 0ll;
				int64 TMP$1396$4;
				TMP$1396$4 = *(int64*)THIS$1 + -1ll;
				goto label$3076;
				label$3079:;
				{
					_ZN4MATH7COMPLEXaSERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)Q$3 + (I$3 << (4ll & 63ll))), (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) );
				}
				label$3077:;
				I$3 = I$3 + 1ll;
				label$3076:;
				if( I$3 <= TMP$1396$4 ) goto label$3079;
				label$3078:;
			}
			double* P$3;
			double* vr$21 = _ZNK4MATH5ARRAY11DATA__get__Ev( A$1 );
			P$3 = vr$21;
			{
				I$3 = 0ll;
				int64 TMP$1397$4;
				TMP$1397$4 = *(int64*)A$1 + -1ll;
				goto label$3080;
				label$3083:;
				{
					*(double*)((uint8*)Q$3 + ((*(int64*)THIS$1 + I$3) << (4ll & 63ll))) = *(double*)((uint8*)P$3 + (I$3 << (3ll & 63ll)));
				}
				label$3081:;
				I$3 = I$3 + 1ll;
				label$3080:;
				if( I$3 <= TMP$1397$4 ) goto label$3083;
				label$3082:;
			}
			*(int64*)THIS$1 = *(int64*)THIS$1 + *(int64*)A$1;
			if( *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3084;
			free( *(void**)((uint8*)THIS$1 + 8ll) );
			label$3084:;
			*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = Q$3;
		}
		goto label$3071;
		label$3072:;
		{
			struct $N4MATH7COMPLEXE* TMP$1398$3;
			uint64 TMP$1399$3;
			struct $N4MATH7COMPLEXE* TMP$1400$3;
			*(int64*)THIS$1 = *(int64*)A$1;
			void* vr$42 = malloc( *(uint64*)THIS$1 << (4ull & 63ll) );
			TMP$1398$3 = (struct $N4MATH7COMPLEXE*)vr$42;
			if( TMP$1398$3 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3085;
			TMP$1400$3 = TMP$1398$3;
			TMP$1399$3 = *(uint64*)THIS$1;
			label$3086:;
			if( TMP$1399$3 == 0ull ) goto label$3087;
			_ZN4MATH7COMPLEXC1Ev( TMP$1400$3 );
			TMP$1400$3 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1400$3 + 16ll);
			TMP$1399$3 = TMP$1399$3 + 18446744073709551615ull;
			goto label$3086;
			label$3087:;
			label$3085:;
			*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = TMP$1398$3;
			double* P$3;
			double* vr$47 = _ZNK4MATH5ARRAY11DATA__get__Ev( A$1 );
			P$3 = vr$47;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1401$4;
				TMP$1401$4 = *(int64*)THIS$1 + -1ll;
				goto label$3088;
				label$3091:;
				{
					*(double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) = *(double*)((uint8*)P$3 + (I$4 << (3ll & 63ll)));
				}
				label$3089:;
				I$4 = I$4 + 1ll;
				label$3088:;
				if( I$4 <= TMP$1401$4 ) goto label$3091;
				label$3090:;
			}
		}
		label$3071:;
	}
	label$3070:;
	label$3069:;
	label$3068:;
}

void _ZN4MATH12COMPLEXARRAYv27selfcatERKNS_7COMPLEXE( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH7COMPLEXE* C$1 )
{
	label$3092:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3095;
	{
		struct $N4MATH7COMPLEXE* TMP$1402$2;
		uint64 TMP$1403$2;
		struct $N4MATH7COMPLEXE* TMP$1404$2;
		*(int64*)THIS$1 = *(int64*)THIS$1 + 1ll;
		struct $N4MATH7COMPLEXE* Q$2;
		void* vr$6 = malloc( *(uint64*)THIS$1 << (4ull & 63ll) );
		TMP$1402$2 = (struct $N4MATH7COMPLEXE*)vr$6;
		if( TMP$1402$2 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3096;
		TMP$1404$2 = TMP$1402$2;
		TMP$1403$2 = *(uint64*)THIS$1;
		label$3097:;
		if( TMP$1403$2 == 0ull ) goto label$3098;
		_ZN4MATH7COMPLEXC1Ev( TMP$1404$2 );
		TMP$1404$2 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1404$2 + 16ll);
		TMP$1403$2 = TMP$1403$2 + 18446744073709551615ull;
		goto label$3097;
		label$3098:;
		label$3096:;
		Q$2 = TMP$1402$2;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1405$3;
			TMP$1405$3 = *(int64*)THIS$1 + -2ll;
			goto label$3099;
			label$3102:;
			{
				_ZN4MATH7COMPLEXaSERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)Q$2 + (I$3 << (4ll & 63ll))), (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) );
			}
			label$3100:;
			I$3 = I$3 + 1ll;
			label$3099:;
			if( I$3 <= TMP$1405$3 ) goto label$3102;
			label$3101:;
		}
		_ZN4MATH7COMPLEXaSERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (*(int64*)THIS$1 << (4ll & 63ll))) + -16ll), C$1 );
		if( *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3103;
		free( *(void**)((uint8*)THIS$1 + 8ll) );
		label$3103:;
		*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = Q$2;
	}
	goto label$3094;
	label$3095:;
	{
		struct $N4MATH7COMPLEXE* TMP$1406$2;
		uint64 TMP$1407$2;
		struct $N4MATH7COMPLEXE* TMP$1408$2;
		*(int64*)THIS$1 = 1ll;
		void* vr$27 = malloc( 16ull );
		TMP$1406$2 = (struct $N4MATH7COMPLEXE*)vr$27;
		if( TMP$1406$2 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3104;
		TMP$1408$2 = TMP$1406$2;
		TMP$1407$2 = 1ull;
		label$3105:;
		if( TMP$1407$2 == 0ull ) goto label$3106;
		_ZN4MATH7COMPLEXC1Ev( TMP$1408$2 );
		TMP$1408$2 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1408$2 + 16ll);
		TMP$1407$2 = TMP$1407$2 + 18446744073709551615ull;
		goto label$3105;
		label$3106:;
		label$3104:;
		*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = TMP$1406$2;
		_ZN4MATH7COMPLEXaSERKS0_( *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll), C$1 );
	}
	label$3094:;
	label$3093:;
}

void _ZN4MATH12COMPLEXARRAYv27selfcatERKS0_( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH12COMPLEXARRAYE* A$1 )
{
	label$3107:;
	if( THIS$1 == A$1 ) goto label$3110;
	{
		if( *(int64*)A$1 == 0ll ) goto label$3112;
		{
			if( *(int64*)THIS$1 == 0ll ) goto label$3114;
			{
				struct $N4MATH7COMPLEXE* TMP$1409$4;
				uint64 TMP$1410$4;
				struct $N4MATH7COMPLEXE* TMP$1411$4;
				struct $N4MATH7COMPLEXE* Q$4;
				void* vr$6 = malloc( (uint64)(*(int64*)THIS$1 + *(int64*)A$1) << (4ull & 63ll) );
				TMP$1409$4 = (struct $N4MATH7COMPLEXE*)vr$6;
				if( TMP$1409$4 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3115;
				TMP$1411$4 = TMP$1409$4;
				TMP$1410$4 = (uint64)(*(int64*)THIS$1 + *(int64*)A$1);
				label$3116:;
				if( TMP$1410$4 == 0ull ) goto label$3117;
				_ZN4MATH7COMPLEXC1Ev( TMP$1411$4 );
				TMP$1411$4 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1411$4 + 16ll);
				TMP$1410$4 = TMP$1410$4 + 18446744073709551615ull;
				goto label$3116;
				label$3117:;
				label$3115:;
				Q$4 = TMP$1409$4;
				int64 I$4;
				__builtin_memset( &I$4, 0, 8ll );
				{
					I$4 = 0ll;
					int64 TMP$1412$5;
					TMP$1412$5 = *(int64*)THIS$1 + -1ll;
					goto label$3118;
					label$3121:;
					{
						_ZN4MATH7COMPLEXaSERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)Q$4 + (I$4 << (4ll & 63ll))), (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) );
					}
					label$3119:;
					I$4 = I$4 + 1ll;
					label$3118:;
					if( I$4 <= TMP$1412$5 ) goto label$3121;
					label$3120:;
				}
				{
					I$4 = 0ll;
					int64 TMP$1413$5;
					TMP$1413$5 = *(int64*)A$1 + -1ll;
					goto label$3122;
					label$3125:;
					{
						_ZN4MATH7COMPLEXaSERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)Q$4 + ((*(int64*)THIS$1 + I$4) << (4ll & 63ll))), (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)A$1 + 8ll) + (I$4 << (4ll & 63ll))) );
					}
					label$3123:;
					I$4 = I$4 + 1ll;
					label$3122:;
					if( I$4 <= TMP$1413$5 ) goto label$3125;
					label$3124:;
				}
				*(int64*)THIS$1 = *(int64*)THIS$1 + *(int64*)A$1;
				if( *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3126;
				free( *(void**)((uint8*)THIS$1 + 8ll) );
				label$3126:;
				*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = Q$4;
			}
			goto label$3113;
			label$3114:;
			{
				struct $N4MATH7COMPLEXE* TMP$1414$4;
				uint64 TMP$1415$4;
				struct $N4MATH7COMPLEXE* TMP$1416$4;
				*(int64*)THIS$1 = *(int64*)A$1;
				void* vr$42 = malloc( *(uint64*)THIS$1 << (4ull & 63ll) );
				TMP$1414$4 = (struct $N4MATH7COMPLEXE*)vr$42;
				if( TMP$1414$4 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3127;
				TMP$1416$4 = TMP$1414$4;
				TMP$1415$4 = *(uint64*)THIS$1;
				label$3128:;
				if( TMP$1415$4 == 0ull ) goto label$3129;
				_ZN4MATH7COMPLEXC1Ev( TMP$1416$4 );
				TMP$1416$4 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1416$4 + 16ll);
				TMP$1415$4 = TMP$1415$4 + 18446744073709551615ull;
				goto label$3128;
				label$3129:;
				label$3127:;
				*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = TMP$1414$4;
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1417$5;
					TMP$1417$5 = *(int64*)THIS$1 + -1ll;
					goto label$3130;
					label$3133:;
					{
						_ZN4MATH7COMPLEXaSERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)A$1 + 8ll) + (I$5 << (4ll & 63ll))) );
					}
					label$3131:;
					I$5 = I$5 + 1ll;
					label$3130:;
					if( I$5 <= TMP$1417$5 ) goto label$3133;
					label$3132:;
				}
			}
			label$3113:;
		}
		label$3112:;
		label$3111:;
	}
	goto label$3109;
	label$3110:;
	{
		if( *(int64*)THIS$1 == 0ll ) goto label$3135;
		{
			struct $N4MATH7COMPLEXE* TMP$1418$3;
			uint64 TMP$1419$3;
			struct $N4MATH7COMPLEXE* TMP$1420$3;
			struct $N4MATH7COMPLEXE* Q$3;
			void* vr$60 = malloc( (uint64)(*(int64*)THIS$1 << (1ll & 63ll)) << (4ull & 63ll) );
			TMP$1418$3 = (struct $N4MATH7COMPLEXE*)vr$60;
			if( TMP$1418$3 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3136;
			TMP$1420$3 = TMP$1418$3;
			TMP$1419$3 = (uint64)(*(int64*)THIS$1 << (1ll & 63ll));
			label$3137:;
			if( TMP$1419$3 == 0ull ) goto label$3138;
			_ZN4MATH7COMPLEXC1Ev( TMP$1420$3 );
			TMP$1420$3 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1420$3 + 16ll);
			TMP$1419$3 = TMP$1419$3 + 18446744073709551615ull;
			goto label$3137;
			label$3138:;
			label$3136:;
			Q$3 = TMP$1418$3;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1421$4;
				TMP$1421$4 = *(int64*)THIS$1 + -1ll;
				goto label$3139;
				label$3142:;
				{
					_ZN4MATH7COMPLEXaSERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)Q$3 + (I$4 << (4ll & 63ll))), (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) );
					_ZN4MATH7COMPLEXaSERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)Q$3 + ((*(int64*)THIS$1 + I$4) << (4ll & 63ll))), (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) );
				}
				label$3140:;
				I$4 = I$4 + 1ll;
				label$3139:;
				if( I$4 <= TMP$1421$4 ) goto label$3142;
				label$3141:;
			}
			*(int64*)THIS$1 = *(int64*)THIS$1 << (1ll & 63ll);
			if( *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3143;
			free( *(void**)((uint8*)THIS$1 + 8ll) );
			label$3143:;
			*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = Q$3;
		}
		label$3135:;
		label$3134:;
	}
	label$3109:;
	label$3108:;
}

struct $N4MATH7COMPLEXE* _ZN4MATH12COMPLEXARRAYixERKu7INTEGER( struct $N4MATH12COMPLEXARRAYE* THIS$1, int64* I$1 )
{
	struct $N4MATH7COMPLEXE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$3144:;
	if( ((int64)-(*I$1 >= 0ll) & (int64)-(*I$1 < *(int64*)THIS$1)) == 0ll ) goto label$3147;
	{
		fb$result$1 = (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (*I$1 << (4ll & 63ll)));
		goto label$3145;
		label$3147:;
	}
	*(double*)((uint8*)THIS$1 + 16ll) = 0x0p+0;
	*(double*)((uint8*)THIS$1 + 24ll) = 0x0p+0;
	fb$result$1 = (struct $N4MATH7COMPLEXE*)((uint8*)THIS$1 + 16ll);
	goto label$3145;
	label$3145:;
	return fb$result$1;
}

void _ZN4MATH12COMPLEXARRAYpLERKd( struct $N4MATH12COMPLEXARRAYE* THIS$1, double* N$1 )
{
	label$3148:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3151;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1422$3;
			TMP$1422$3 = *(int64*)THIS$1 + -1ll;
			goto label$3152;
			label$3155:;
			{
				_ZN4MATH7COMPLEXpLERKd( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), N$1 );
			}
			label$3153:;
			I$3 = I$3 + 1ll;
			label$3152:;
			if( I$3 <= TMP$1422$3 ) goto label$3155;
			label$3154:;
		}
	}
	label$3151:;
	label$3150:;
	label$3149:;
}

void _ZN4MATH12COMPLEXARRAYpLERKNS_5ARRAYE( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	label$3156:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$3159;
	{
		double* P$2;
		double* vr$6 = _ZNK4MATH5ARRAY11DATA__get__Ev( A$1 );
		P$2 = vr$6;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1423$3;
			TMP$1423$3 = *(int64*)THIS$1 + -1ll;
			goto label$3160;
			label$3163:;
			{
				_ZN4MATH7COMPLEXpLERKd( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), (double*)((uint8*)P$2 + (I$3 << (3ll & 63ll))) );
			}
			label$3161:;
			I$3 = I$3 + 1ll;
			label$3160:;
			if( I$3 <= TMP$1423$3 ) goto label$3163;
			label$3162:;
		}
	}
	label$3159:;
	label$3158:;
	label$3157:;
}

void _ZN4MATH12COMPLEXARRAYpLERKNS_7COMPLEXE( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH7COMPLEXE* C$1 )
{
	label$3164:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3167;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1424$3;
			TMP$1424$3 = *(int64*)THIS$1 + -1ll;
			goto label$3168;
			label$3171:;
			{
				_ZN4MATH7COMPLEXpLERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), C$1 );
			}
			label$3169:;
			I$3 = I$3 + 1ll;
			label$3168:;
			if( I$3 <= TMP$1424$3 ) goto label$3171;
			label$3170:;
		}
	}
	label$3167:;
	label$3166:;
	label$3165:;
}

void _ZN4MATH12COMPLEXARRAYpLERKS0_( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH12COMPLEXARRAYE* A$1 )
{
	label$3172:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$3175;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1425$3;
			TMP$1425$3 = *(int64*)THIS$1 + -1ll;
			goto label$3176;
			label$3179:;
			{
				_ZN4MATH7COMPLEXpLERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)A$1 + 8ll) + (I$3 << (4ll & 63ll))) );
			}
			label$3177:;
			I$3 = I$3 + 1ll;
			label$3176:;
			if( I$3 <= TMP$1425$3 ) goto label$3179;
			label$3178:;
		}
	}
	label$3175:;
	label$3174:;
	label$3173:;
}

void _ZN4MATH12COMPLEXARRAYmIERKd( struct $N4MATH12COMPLEXARRAYE* THIS$1, double* N$1 )
{
	label$3180:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3183;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1426$3;
			TMP$1426$3 = *(int64*)THIS$1 + -1ll;
			goto label$3184;
			label$3187:;
			{
				_ZN4MATH7COMPLEXmIERKd( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), N$1 );
			}
			label$3185:;
			I$3 = I$3 + 1ll;
			label$3184:;
			if( I$3 <= TMP$1426$3 ) goto label$3187;
			label$3186:;
		}
	}
	label$3183:;
	label$3182:;
	label$3181:;
}

void _ZN4MATH12COMPLEXARRAYmIERKNS_5ARRAYE( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	label$3188:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$3191;
	{
		double* P$2;
		double* vr$6 = _ZNK4MATH5ARRAY11DATA__get__Ev( A$1 );
		P$2 = vr$6;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1427$3;
			TMP$1427$3 = *(int64*)THIS$1 + -1ll;
			goto label$3192;
			label$3195:;
			{
				_ZN4MATH7COMPLEXmIERKd( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), (double*)((uint8*)P$2 + (I$3 << (3ll & 63ll))) );
			}
			label$3193:;
			I$3 = I$3 + 1ll;
			label$3192:;
			if( I$3 <= TMP$1427$3 ) goto label$3195;
			label$3194:;
		}
	}
	label$3191:;
	label$3190:;
	label$3189:;
}

void _ZN4MATH12COMPLEXARRAYmIERKNS_7COMPLEXE( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH7COMPLEXE* C$1 )
{
	label$3196:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3199;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1428$3;
			TMP$1428$3 = *(int64*)THIS$1 + -1ll;
			goto label$3200;
			label$3203:;
			{
				_ZN4MATH7COMPLEXmIERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), C$1 );
			}
			label$3201:;
			I$3 = I$3 + 1ll;
			label$3200:;
			if( I$3 <= TMP$1428$3 ) goto label$3203;
			label$3202:;
		}
	}
	label$3199:;
	label$3198:;
	label$3197:;
}

void _ZN4MATH12COMPLEXARRAYmIERKS0_( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH12COMPLEXARRAYE* A$1 )
{
	label$3204:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$3207;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1429$3;
			TMP$1429$3 = *(int64*)THIS$1 + -1ll;
			goto label$3208;
			label$3211:;
			{
				_ZN4MATH7COMPLEXmIERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)A$1 + 8ll) + (I$3 << (4ll & 63ll))) );
			}
			label$3209:;
			I$3 = I$3 + 1ll;
			label$3208:;
			if( I$3 <= TMP$1429$3 ) goto label$3211;
			label$3210:;
		}
	}
	label$3207:;
	label$3206:;
	label$3205:;
}

void _ZN4MATH12COMPLEXARRAYmLERKd( struct $N4MATH12COMPLEXARRAYE* THIS$1, double* N$1 )
{
	label$3212:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3215;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1430$3;
			TMP$1430$3 = *(int64*)THIS$1 + -1ll;
			goto label$3216;
			label$3219:;
			{
				_ZN4MATH7COMPLEXmLERKd( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), N$1 );
			}
			label$3217:;
			I$3 = I$3 + 1ll;
			label$3216:;
			if( I$3 <= TMP$1430$3 ) goto label$3219;
			label$3218:;
		}
	}
	label$3215:;
	label$3214:;
	label$3213:;
}

void _ZN4MATH12COMPLEXARRAYmLERKNS_5ARRAYE( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	label$3220:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$3223;
	{
		double* P$2;
		double* vr$6 = _ZNK4MATH5ARRAY11DATA__get__Ev( A$1 );
		P$2 = vr$6;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1431$3;
			TMP$1431$3 = *(int64*)THIS$1 + -1ll;
			goto label$3224;
			label$3227:;
			{
				_ZN4MATH7COMPLEXmLERKd( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), (double*)((uint8*)P$2 + (I$3 << (3ll & 63ll))) );
			}
			label$3225:;
			I$3 = I$3 + 1ll;
			label$3224:;
			if( I$3 <= TMP$1431$3 ) goto label$3227;
			label$3226:;
		}
	}
	label$3223:;
	label$3222:;
	label$3221:;
}

void _ZN4MATH12COMPLEXARRAYmLERKNS_7COMPLEXE( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH7COMPLEXE* C$1 )
{
	label$3228:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3231;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1432$3;
			TMP$1432$3 = *(int64*)THIS$1 + -1ll;
			goto label$3232;
			label$3235:;
			{
				_ZN4MATH7COMPLEXmLERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), C$1 );
			}
			label$3233:;
			I$3 = I$3 + 1ll;
			label$3232:;
			if( I$3 <= TMP$1432$3 ) goto label$3235;
			label$3234:;
		}
	}
	label$3231:;
	label$3230:;
	label$3229:;
}

void _ZN4MATH12COMPLEXARRAYmLERKS0_( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH12COMPLEXARRAYE* A$1 )
{
	label$3236:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$3239;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1433$3;
			TMP$1433$3 = *(int64*)THIS$1 + -1ll;
			goto label$3240;
			label$3243:;
			{
				_ZN4MATH7COMPLEXmLERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)A$1 + 8ll) + (I$3 << (4ll & 63ll))) );
			}
			label$3241:;
			I$3 = I$3 + 1ll;
			label$3240:;
			if( I$3 <= TMP$1433$3 ) goto label$3243;
			label$3242:;
		}
	}
	label$3239:;
	label$3238:;
	label$3237:;
}

void _ZN4MATH12COMPLEXARRAYdVERKd( struct $N4MATH12COMPLEXARRAYE* THIS$1, double* N$1 )
{
	label$3244:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3247;
	{
		if( *N$1 == 0x0p+0 ) goto label$3249;
		{
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1434$4;
				TMP$1434$4 = *(int64*)THIS$1 + -1ll;
				goto label$3250;
				label$3253:;
				{
					*(double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) = *(double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) / *N$1;
					*(double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) + 8ll) / *N$1;
				}
				label$3251:;
				I$4 = I$4 + 1ll;
				label$3250:;
				if( I$4 <= TMP$1434$4 ) goto label$3253;
				label$3252:;
			}
		}
		goto label$3248;
		label$3249:;
		{
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1435$4;
				TMP$1435$4 = *(int64*)THIS$1 + -1ll;
				goto label$3254;
				label$3257:;
				{
					*(double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) = 0x0p+0;
					*(double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) + 8ll) = 0x0p+0;
				}
				label$3255:;
				I$4 = I$4 + 1ll;
				label$3254:;
				if( I$4 <= TMP$1435$4 ) goto label$3257;
				label$3256:;
			}
		}
		label$3248:;
	}
	label$3247:;
	label$3246:;
	label$3245:;
}

void _ZN4MATH12COMPLEXARRAYdVERKNS_5ARRAYE( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	label$3258:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$3261;
	{
		double* P$2;
		double* vr$6 = _ZNK4MATH5ARRAY11DATA__get__Ev( A$1 );
		P$2 = vr$6;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1436$3;
			TMP$1436$3 = *(int64*)THIS$1 + -1ll;
			goto label$3262;
			label$3265:;
			{
				if( *(double*)((uint8*)P$2 + (I$3 << (3ll & 63ll))) == 0x0p+0 ) goto label$3267;
				{
					*(double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) = *(double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) / *(double*)((uint8*)P$2 + (I$3 << (3ll & 63ll)));
					*(double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) / *(double*)((uint8*)P$2 + (I$3 << (3ll & 63ll)));
				}
				goto label$3266;
				label$3267:;
				{
					*(double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) = 0x0p+0;
					*(double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) = 0x0p+0;
				}
				label$3266:;
			}
			label$3263:;
			I$3 = I$3 + 1ll;
			label$3262:;
			if( I$3 <= TMP$1436$3 ) goto label$3265;
			label$3264:;
		}
	}
	label$3261:;
	label$3260:;
	label$3259:;
}

void _ZN4MATH12COMPLEXARRAYdVERKNS_7COMPLEXE( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH7COMPLEXE* C$1 )
{
	label$3268:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3271;
	{
		if( ((int64)-(*(double*)C$1 != 0x0p+0) | (int64)-(*(double*)((uint8*)C$1 + 8ll) != 0x0p+0)) == 0ll ) goto label$3273;
		{
			double D$3;
			D$3 = (*(double*)C$1 * *(double*)C$1) + (*(double*)((uint8*)C$1 + 8ll) * *(double*)((uint8*)C$1 + 8ll));
			double X$3;
			__builtin_memset( &X$3, 0, 8ll );
			double Y$3;
			__builtin_memset( &Y$3, 0, 8ll );
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1437$4;
				TMP$1437$4 = *(int64*)THIS$1 + -1ll;
				goto label$3274;
				label$3277:;
				{
					X$3 = ((*(double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) * *(double*)C$1) + (*(double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) + 8ll) * *(double*)((uint8*)C$1 + 8ll))) / D$3;
					Y$3 = ((*(double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) + 8ll) * *(double*)C$1) - (*(double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) * *(double*)((uint8*)C$1 + 8ll))) / D$3;
					*(double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) = X$3;
					*(double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) + 8ll) = Y$3;
				}
				label$3275:;
				I$4 = I$4 + 1ll;
				label$3274:;
				if( I$4 <= TMP$1437$4 ) goto label$3277;
				label$3276:;
			}
		}
		goto label$3272;
		label$3273:;
		{
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1438$4;
				TMP$1438$4 = *(int64*)THIS$1 + -1ll;
				goto label$3278;
				label$3281:;
				{
					*(double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) = 0x0p+0;
					*(double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) + 8ll) = 0x0p+0;
				}
				label$3279:;
				I$4 = I$4 + 1ll;
				label$3278:;
				if( I$4 <= TMP$1438$4 ) goto label$3281;
				label$3280:;
			}
		}
		label$3272:;
	}
	label$3271:;
	label$3270:;
	label$3269:;
}

void _ZN4MATH12COMPLEXARRAYdVERKS0_( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH12COMPLEXARRAYE* A$1 )
{
	label$3282:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$3285;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1440$3;
			TMP$1440$3 = *(int64*)THIS$1 + -1ll;
			goto label$3286;
			label$3289:;
			{
				_ZN4MATH7COMPLEXdVERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)A$1 + 8ll) + (I$3 << (4ll & 63ll))) );
			}
			label$3287:;
			I$3 = I$3 + 1ll;
			label$3286:;
			if( I$3 <= TMP$1440$3 ) goto label$3289;
			label$3288:;
		}
	}
	label$3285:;
	label$3284:;
	label$3283:;
}

FBSTRING* _ZNK4MATH12COMPLEXARRAYcv8FBSTRINGEv( struct $N4MATH12COMPLEXARRAYE* THIS$1 )
{
	FBSTRING TMP$1442$1;
	FBSTRING TMP$1443$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$3290:;
	FBSTRING* vr$2 = fb_LongintToStr( *(int64*)THIS$1 );
	__builtin_memset( &TMP$1442$1, 0, 24ll );
	FBSTRING* vr$5 = fb_StrConcat( &TMP$1442$1, (void*)"<math.complexArray>{ length : ", 31ll, (void*)vr$2, -1ll );
	__builtin_memset( &TMP$1443$1, 0, 24ll );
	FBSTRING* vr$8 = fb_StrConcat( &TMP$1443$1, (void*)vr$5, -1ll, (void*)" }", 3ll );
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$8, -1ll, 0 );
	goto label$3291;
	label$3291:;
	FBSTRING* vr$11 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$11;
}

void _ZN4MATH12COMPLEXARRAYaSERKNS_5ARRAYE( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	label$3292:;
	*(int64*)THIS$1 = 0ll;
	if( *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3295;
	{
		if( *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3296;
		free( *(void**)((uint8*)THIS$1 + 8ll) );
		label$3296:;
		*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = (struct $N4MATH7COMPLEXE*)0ull;
	}
	label$3295:;
	label$3294:;
	if( *(int64*)A$1 == 0ll ) goto label$3298;
	{
		struct $N4MATH7COMPLEXE* TMP$1444$2;
		uint64 TMP$1445$2;
		struct $N4MATH7COMPLEXE* TMP$1446$2;
		*(int64*)THIS$1 = *(int64*)A$1;
		void* vr$10 = malloc( *(uint64*)A$1 << (4ull & 63ll) );
		TMP$1444$2 = (struct $N4MATH7COMPLEXE*)vr$10;
		if( TMP$1444$2 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3299;
		TMP$1446$2 = TMP$1444$2;
		TMP$1445$2 = *(uint64*)A$1;
		label$3300:;
		if( TMP$1445$2 == 0ull ) goto label$3301;
		_ZN4MATH7COMPLEXC1Ev( TMP$1446$2 );
		TMP$1446$2 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1446$2 + 16ll);
		TMP$1445$2 = TMP$1445$2 + 18446744073709551615ull;
		goto label$3300;
		label$3301:;
		label$3299:;
		*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = TMP$1444$2;
		double* P$2;
		double* vr$15 = _ZNK4MATH5ARRAY11DATA__get__Ev( A$1 );
		P$2 = vr$15;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1447$3;
			TMP$1447$3 = *(int64*)A$1 + -1ll;
			goto label$3302;
			label$3305:;
			{
				*(double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) = *(double*)((uint8*)P$2 + (I$3 << (3ll & 63ll)));
			}
			label$3303:;
			I$3 = I$3 + 1ll;
			label$3302:;
			if( I$3 <= TMP$1447$3 ) goto label$3305;
			label$3304:;
		}
	}
	label$3298:;
	label$3297:;
	label$3293:;
}

void _ZN4MATH12COMPLEXARRAYaSERKS0_( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH12COMPLEXARRAYE* A$1 )
{
	label$3306:;
	if( THIS$1 == A$1 ) goto label$3309;
	{
		*(int64*)THIS$1 = 0ll;
		if( *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3311;
		{
			if( *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3312;
			free( *(void**)((uint8*)THIS$1 + 8ll) );
			label$3312:;
			*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = (struct $N4MATH7COMPLEXE*)0ull;
		}
		label$3311:;
		label$3310:;
		if( *(int64*)A$1 == 0ll ) goto label$3314;
		{
			struct $N4MATH7COMPLEXE* TMP$1448$3;
			uint64 TMP$1449$3;
			struct $N4MATH7COMPLEXE* TMP$1450$3;
			*(int64*)THIS$1 = *(int64*)A$1;
			void* vr$10 = malloc( *(uint64*)A$1 << (4ull & 63ll) );
			TMP$1448$3 = (struct $N4MATH7COMPLEXE*)vr$10;
			if( TMP$1448$3 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3315;
			TMP$1450$3 = TMP$1448$3;
			TMP$1449$3 = *(uint64*)A$1;
			label$3316:;
			if( TMP$1449$3 == 0ull ) goto label$3317;
			_ZN4MATH7COMPLEXC1Ev( TMP$1450$3 );
			TMP$1450$3 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1450$3 + 16ll);
			TMP$1449$3 = TMP$1449$3 + 18446744073709551615ull;
			goto label$3316;
			label$3317:;
			label$3315:;
			*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = TMP$1448$3;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1451$4;
				TMP$1451$4 = *(int64*)A$1 + -1ll;
				goto label$3318;
				label$3321:;
				{
					_ZN4MATH7COMPLEXaSERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))), (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)A$1 + 8ll) + (I$4 << (4ll & 63ll))) );
				}
				label$3319:;
				I$4 = I$4 + 1ll;
				label$3318:;
				if( I$4 <= TMP$1451$4 ) goto label$3321;
				label$3320:;
			}
		}
		label$3314:;
		label$3313:;
	}
	label$3309:;
	label$3308:;
	label$3307:;
}

struct $N4MATH7COMPLEXE _ZNK4MATH12COMPLEXARRAY10AVG__get__Ev( struct $N4MATH12COMPLEXARRAYE* THIS$1 )
{
	struct $N4MATH7COMPLEXE fb$result$1;
	label$3322:;
	{
		int64 TMP$1452$2;
		TMP$1452$2 = *(int64*)THIS$1;
		if( TMP$1452$2 != 0ll ) goto label$3325;
		label$3326:;
		{
			_ZN4MATH7COMPLEXC1Ev( &fb$result$1 );
			goto label$3323;
		}
		goto label$3324;
		label$3325:;
		if( TMP$1452$2 != 1ll ) goto label$3327;
		label$3328:;
		{
			_ZN4MATH7COMPLEXC1ERKS0_( &fb$result$1, *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) );
			goto label$3323;
		}
		goto label$3324;
		label$3327:;
		{
			double TMP$1455$3;
			struct $N4MATH7COMPLEXE TMP$1456$3;
			struct $N4MATH7COMPLEXE R$3;
			_ZN4MATH7COMPLEXC1Ev( &R$3 );
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1454$4;
				TMP$1454$4 = *(int64*)THIS$1 + -1ll;
				goto label$3330;
				label$3333:;
				{
					_ZN4MATH7COMPLEXpLERKS0_( &R$3, (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) );
				}
				label$3331:;
				I$4 = I$4 + 1ll;
				label$3330:;
				if( I$4 <= TMP$1454$4 ) goto label$3333;
				label$3332:;
			}
			TMP$1455$3 = (double)*(int64*)THIS$1;
			struct $N4MATH7COMPLEXE vr$16 = _ZN4MATHdvERKNS_7COMPLEXERKd( (struct $N4MATH7COMPLEXE*)&R$3, (double*)&TMP$1455$3 );
			TMP$1456$3 = vr$16;
			_ZN4MATH7COMPLEXC1ERKS0_( &fb$result$1, (struct $N4MATH7COMPLEXE*)&TMP$1456$3 );
			goto label$3323;
		}
		label$3329:;
		label$3324:;
	}
	label$3323:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE* _ZNK4MATH12COMPLEXARRAY11DATA__get__Ev( struct $N4MATH12COMPLEXARRAYE* THIS$1 )
{
	struct $N4MATH7COMPLEXE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$3334:;
	fb$result$1 = *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll);
	goto label$3335;
	label$3335:;
	return fb$result$1;
}

void _ZN4MATH12COMPLEXARRAY13LENGTH__set__ERKu7INTEGER( struct $N4MATH12COMPLEXARRAYE* THIS$1, int64* L$1 )
{
	label$3336:;
	if( *L$1 <= 0ll ) goto label$3339;
	{
		if( *(int64*)THIS$1 <= 0ll ) goto label$3341;
		{
			if( *L$1 == *(int64*)THIS$1 ) goto label$3343;
			{
				struct $N4MATH7COMPLEXE* TMP$1457$4;
				uint64 TMP$1458$4;
				struct $N4MATH7COMPLEXE* TMP$1459$4;
				struct $N4MATH7COMPLEXE* Q$4;
				void* vr$6 = malloc( *(uint64*)L$1 << (4ull & 63ll) );
				TMP$1457$4 = (struct $N4MATH7COMPLEXE*)vr$6;
				if( TMP$1457$4 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3344;
				TMP$1459$4 = TMP$1457$4;
				TMP$1458$4 = *(uint64*)L$1;
				label$3345:;
				if( TMP$1458$4 == 0ull ) goto label$3346;
				_ZN4MATH7COMPLEXC1Ev( TMP$1459$4 );
				TMP$1459$4 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1459$4 + 16ll);
				TMP$1458$4 = TMP$1458$4 + 18446744073709551615ull;
				goto label$3345;
				label$3346:;
				label$3344:;
				Q$4 = TMP$1457$4;
				{
					int64 TMP$1460$5;
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1461$5;
					if( *L$1 >= *(int64*)THIS$1 ) goto label$3347;
					TMP$1460$5 = *L$1;
					goto label$3360;
					label$3347:;
					TMP$1460$5 = *(int64*)THIS$1;
					label$3360:;
					TMP$1461$5 = TMP$1460$5 + -1ll;
					goto label$3348;
					label$3351:;
					{
						_ZN4MATH7COMPLEXaSERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)Q$4 + (I$5 << (4ll & 63ll))), (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
					}
					label$3349:;
					I$5 = I$5 + 1ll;
					label$3348:;
					if( I$5 <= TMP$1461$5 ) goto label$3351;
					label$3350:;
				}
				*(int64*)THIS$1 = *L$1;
				if( *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3352;
				free( *(void**)((uint8*)THIS$1 + 8ll) );
				label$3352:;
				*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = Q$4;
			}
			label$3343:;
			label$3342:;
		}
		goto label$3340;
		label$3341:;
		{
			struct $N4MATH7COMPLEXE* TMP$1462$3;
			uint64 TMP$1463$3;
			struct $N4MATH7COMPLEXE* TMP$1464$3;
			*(int64*)THIS$1 = *L$1;
			void* vr$30 = malloc( *(uint64*)THIS$1 << (4ull & 63ll) );
			TMP$1462$3 = (struct $N4MATH7COMPLEXE*)vr$30;
			if( TMP$1462$3 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3353;
			TMP$1464$3 = TMP$1462$3;
			TMP$1463$3 = *(uint64*)THIS$1;
			label$3354:;
			if( TMP$1463$3 == 0ull ) goto label$3355;
			_ZN4MATH7COMPLEXC1Ev( TMP$1464$3 );
			TMP$1464$3 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1464$3 + 16ll);
			TMP$1463$3 = TMP$1463$3 + 18446744073709551615ull;
			goto label$3354;
			label$3355:;
			label$3353:;
			*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = TMP$1462$3;
		}
		label$3340:;
	}
	goto label$3338;
	label$3339:;
	if( *L$1 != 0ll ) goto label$3356;
	{
		if( *(int64*)THIS$1 <= 0ll ) goto label$3358;
		{
			*(int64*)THIS$1 = 0ll;
			if( *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3359;
			free( *(void**)((uint8*)THIS$1 + 8ll) );
			label$3359:;
			*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = (struct $N4MATH7COMPLEXE*)0ull;
		}
		label$3358:;
		label$3357:;
	}
	label$3356:;
	label$3338:;
	label$3337:;
}

boolean _ZN4MATH12COMPLEXARRAY7FOREACHEPFvRNS_7COMPLEXEERKb( struct $N4MATH12COMPLEXARRAYE* THIS$1, tmp$1358 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$3361:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3364;
	{
		if( F$1 == (tmp$1358)0ull ) goto label$3366;
		{
			if( *R$1 == (boolean)0ll ) goto label$3368;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$3369;
					label$3372:;
					{
						(F$1)( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
					}
					label$3370:;
					I$5 = I$5 + -1ll;
					label$3369:;
					if( I$5 >= 0ll ) goto label$3372;
					label$3371:;
				}
			}
			goto label$3367;
			label$3368:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1465$5;
					TMP$1465$5 = *(int64*)THIS$1 + -1ll;
					goto label$3373;
					label$3376:;
					{
						(F$1)( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
					}
					label$3374:;
					I$5 = I$5 + 1ll;
					label$3373:;
					if( I$5 <= TMP$1465$5 ) goto label$3376;
					label$3375:;
				}
			}
			label$3367:;
			fb$result$1 = (boolean)1ll;
			goto label$3362;
		}
		label$3366:;
		label$3365:;
	}
	label$3364:;
	label$3363:;
	fb$result$1 = (boolean)0ll;
	goto label$3362;
	label$3362:;
	return fb$result$1;
}

boolean _ZN4MATH12COMPLEXARRAY7FOREACHEPFbRNS_7COMPLEXEERKb( struct $N4MATH12COMPLEXARRAYE* THIS$1, tmp$1360 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$3377:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3380;
	{
		if( F$1 == (tmp$1360)0ull ) goto label$3382;
		{
			if( *R$1 == (boolean)0ll ) goto label$3384;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$3385;
					label$3388:;
					{
						boolean vr$8 = (F$1)( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
						if( vr$8 != (boolean)0ll ) goto label$3390;
						{
							goto label$3387;
						}
						label$3390:;
						label$3389:;
					}
					label$3386:;
					I$5 = I$5 + -1ll;
					label$3385:;
					if( I$5 >= 0ll ) goto label$3388;
					label$3387:;
				}
			}
			goto label$3383;
			label$3384:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1466$5;
					TMP$1466$5 = *(int64*)THIS$1 + -1ll;
					goto label$3391;
					label$3394:;
					{
						boolean vr$15 = (F$1)( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
						if( vr$15 != (boolean)0ll ) goto label$3396;
						{
							goto label$3393;
						}
						label$3396:;
						label$3395:;
					}
					label$3392:;
					I$5 = I$5 + 1ll;
					label$3391:;
					if( I$5 <= TMP$1466$5 ) goto label$3394;
					label$3393:;
				}
			}
			label$3383:;
			fb$result$1 = (boolean)1ll;
			goto label$3378;
		}
		label$3382:;
		label$3381:;
	}
	label$3380:;
	label$3379:;
	fb$result$1 = (boolean)0ll;
	goto label$3378;
	label$3378:;
	return fb$result$1;
}

boolean _ZN4MATH12COMPLEXARRAY7FOREACHEPFvRNS_7COMPLEXERKu7INTEGERERKb( struct $N4MATH12COMPLEXARRAYE* THIS$1, tmp$1359 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$3397:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3400;
	{
		if( F$1 == (tmp$1359)0ull ) goto label$3402;
		{
			if( *R$1 == (boolean)0ll ) goto label$3404;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$3405;
					label$3408:;
					{
						(F$1)( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
					}
					label$3406:;
					I$5 = I$5 + -1ll;
					label$3405:;
					if( I$5 >= 0ll ) goto label$3408;
					label$3407:;
				}
			}
			goto label$3403;
			label$3404:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1467$5;
					TMP$1467$5 = *(int64*)THIS$1 + -1ll;
					goto label$3409;
					label$3412:;
					{
						(F$1)( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
					}
					label$3410:;
					I$5 = I$5 + 1ll;
					label$3409:;
					if( I$5 <= TMP$1467$5 ) goto label$3412;
					label$3411:;
				}
			}
			label$3403:;
			fb$result$1 = (boolean)1ll;
			goto label$3398;
		}
		label$3402:;
		label$3401:;
	}
	label$3400:;
	label$3399:;
	fb$result$1 = (boolean)0ll;
	goto label$3398;
	label$3398:;
	return fb$result$1;
}

boolean _ZN4MATH12COMPLEXARRAY7FOREACHEPFbRNS_7COMPLEXERKu7INTEGERERKb( struct $N4MATH12COMPLEXARRAYE* THIS$1, tmp$1361 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$3413:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3416;
	{
		if( F$1 == (tmp$1361)0ull ) goto label$3418;
		{
			if( *R$1 == (boolean)0ll ) goto label$3420;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$3421;
					label$3424:;
					{
						boolean vr$9 = (F$1)( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
						if( vr$9 != (boolean)0ll ) goto label$3426;
						{
							goto label$3423;
						}
						label$3426:;
						label$3425:;
					}
					label$3422:;
					I$5 = I$5 + -1ll;
					label$3421:;
					if( I$5 >= 0ll ) goto label$3424;
					label$3423:;
				}
			}
			goto label$3419;
			label$3420:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1468$5;
					TMP$1468$5 = *(int64*)THIS$1 + -1ll;
					goto label$3427;
					label$3430:;
					{
						boolean vr$17 = (F$1)( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
						if( vr$17 != (boolean)0ll ) goto label$3432;
						{
							goto label$3429;
						}
						label$3432:;
						label$3431:;
					}
					label$3428:;
					I$5 = I$5 + 1ll;
					label$3427:;
					if( I$5 <= TMP$1468$5 ) goto label$3430;
					label$3429:;
				}
			}
			label$3419:;
			fb$result$1 = (boolean)1ll;
			goto label$3414;
		}
		label$3418:;
		label$3417:;
	}
	label$3416:;
	label$3415:;
	fb$result$1 = (boolean)0ll;
	goto label$3414;
	label$3414:;
	return fb$result$1;
}

boolean _ZN4MATH12COMPLEXARRAY8FOREACHIEPFvRdERKb( struct $N4MATH12COMPLEXARRAYE* THIS$1, tmp$1293 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$3433:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3436;
	{
		if( F$1 == (tmp$1293)0ull ) goto label$3438;
		{
			if( *R$1 == (boolean)0ll ) goto label$3440;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$3441;
					label$3444:;
					{
						(F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) );
					}
					label$3442:;
					I$5 = I$5 + -1ll;
					label$3441:;
					if( I$5 >= 0ll ) goto label$3444;
					label$3443:;
				}
			}
			goto label$3439;
			label$3440:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1469$5;
					TMP$1469$5 = *(int64*)THIS$1 + -1ll;
					goto label$3445;
					label$3448:;
					{
						(F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) );
					}
					label$3446:;
					I$5 = I$5 + 1ll;
					label$3445:;
					if( I$5 <= TMP$1469$5 ) goto label$3448;
					label$3447:;
				}
			}
			label$3439:;
			fb$result$1 = (boolean)1ll;
			goto label$3434;
		}
		label$3438:;
		label$3437:;
	}
	label$3436:;
	label$3435:;
	fb$result$1 = (boolean)0ll;
	goto label$3434;
	label$3434:;
	return fb$result$1;
}

boolean _ZN4MATH12COMPLEXARRAY8FOREACHIEPFbRdERKb( struct $N4MATH12COMPLEXARRAYE* THIS$1, tmp$1295 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$3449:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3452;
	{
		if( F$1 == (tmp$1295)0ull ) goto label$3454;
		{
			if( *R$1 == (boolean)0ll ) goto label$3456;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$3457;
					label$3460:;
					{
						boolean vr$9 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) );
						if( vr$9 != (boolean)0ll ) goto label$3462;
						{
							goto label$3459;
						}
						label$3462:;
						label$3461:;
					}
					label$3458:;
					I$5 = I$5 + -1ll;
					label$3457:;
					if( I$5 >= 0ll ) goto label$3460;
					label$3459:;
				}
			}
			goto label$3455;
			label$3456:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1470$5;
					TMP$1470$5 = *(int64*)THIS$1 + -1ll;
					goto label$3463;
					label$3466:;
					{
						boolean vr$17 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) );
						if( vr$17 != (boolean)0ll ) goto label$3468;
						{
							goto label$3465;
						}
						label$3468:;
						label$3467:;
					}
					label$3464:;
					I$5 = I$5 + 1ll;
					label$3463:;
					if( I$5 <= TMP$1470$5 ) goto label$3466;
					label$3465:;
				}
			}
			label$3455:;
			fb$result$1 = (boolean)1ll;
			goto label$3450;
		}
		label$3454:;
		label$3453:;
	}
	label$3452:;
	label$3451:;
	fb$result$1 = (boolean)0ll;
	goto label$3450;
	label$3450:;
	return fb$result$1;
}

boolean _ZN4MATH12COMPLEXARRAY8FOREACHIEPFvRdRKu7INTEGERERKb( struct $N4MATH12COMPLEXARRAYE* THIS$1, tmp$1294 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$3469:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3472;
	{
		if( F$1 == (tmp$1294)0ull ) goto label$3474;
		{
			if( *R$1 == (boolean)0ll ) goto label$3476;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$3477;
					label$3480:;
					{
						(F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll), (int64*)&I$5 );
					}
					label$3478:;
					I$5 = I$5 + -1ll;
					label$3477:;
					if( I$5 >= 0ll ) goto label$3480;
					label$3479:;
				}
			}
			goto label$3475;
			label$3476:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1471$5;
					TMP$1471$5 = *(int64*)THIS$1 + -1ll;
					goto label$3481;
					label$3484:;
					{
						(F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll), (int64*)&I$5 );
					}
					label$3482:;
					I$5 = I$5 + 1ll;
					label$3481:;
					if( I$5 <= TMP$1471$5 ) goto label$3484;
					label$3483:;
				}
			}
			label$3475:;
			fb$result$1 = (boolean)1ll;
			goto label$3470;
		}
		label$3474:;
		label$3473:;
	}
	label$3472:;
	label$3471:;
	fb$result$1 = (boolean)0ll;
	goto label$3470;
	label$3470:;
	return fb$result$1;
}

boolean _ZN4MATH12COMPLEXARRAY8FOREACHIEPFbRdRKu7INTEGERERKb( struct $N4MATH12COMPLEXARRAYE* THIS$1, tmp$1296 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$3485:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3488;
	{
		if( F$1 == (tmp$1296)0ull ) goto label$3490;
		{
			if( *R$1 == (boolean)0ll ) goto label$3492;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$3493;
					label$3496:;
					{
						boolean vr$10 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll), (int64*)&I$5 );
						if( vr$10 != (boolean)0ll ) goto label$3498;
						{
							goto label$3495;
						}
						label$3498:;
						label$3497:;
					}
					label$3494:;
					I$5 = I$5 + -1ll;
					label$3493:;
					if( I$5 >= 0ll ) goto label$3496;
					label$3495:;
				}
			}
			goto label$3491;
			label$3492:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1472$5;
					TMP$1472$5 = *(int64*)THIS$1 + -1ll;
					goto label$3499;
					label$3502:;
					{
						boolean vr$19 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll), (int64*)&I$5 );
						if( vr$19 != (boolean)0ll ) goto label$3504;
						{
							goto label$3501;
						}
						label$3504:;
						label$3503:;
					}
					label$3500:;
					I$5 = I$5 + 1ll;
					label$3499:;
					if( I$5 <= TMP$1472$5 ) goto label$3502;
					label$3501:;
				}
			}
			label$3491:;
			fb$result$1 = (boolean)1ll;
			goto label$3486;
		}
		label$3490:;
		label$3489:;
	}
	label$3488:;
	label$3487:;
	fb$result$1 = (boolean)0ll;
	goto label$3486;
	label$3486:;
	return fb$result$1;
}

boolean _ZN4MATH12COMPLEXARRAY8FOREACHREPFvRdERKb( struct $N4MATH12COMPLEXARRAYE* THIS$1, tmp$1293 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$3505:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3508;
	{
		if( F$1 == (tmp$1293)0ull ) goto label$3510;
		{
			if( *R$1 == (boolean)0ll ) goto label$3512;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$3513;
					label$3516:;
					{
						(F$1)( (double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
					}
					label$3514:;
					I$5 = I$5 + -1ll;
					label$3513:;
					if( I$5 >= 0ll ) goto label$3516;
					label$3515:;
				}
			}
			goto label$3511;
			label$3512:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1473$5;
					TMP$1473$5 = *(int64*)THIS$1 + -1ll;
					goto label$3517;
					label$3520:;
					{
						(F$1)( (double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
					}
					label$3518:;
					I$5 = I$5 + 1ll;
					label$3517:;
					if( I$5 <= TMP$1473$5 ) goto label$3520;
					label$3519:;
				}
			}
			label$3511:;
			fb$result$1 = (boolean)1ll;
			goto label$3506;
		}
		label$3510:;
		label$3509:;
	}
	label$3508:;
	label$3507:;
	fb$result$1 = (boolean)0ll;
	goto label$3506;
	label$3506:;
	return fb$result$1;
}

boolean _ZN4MATH12COMPLEXARRAY8FOREACHREPFbRdERKb( struct $N4MATH12COMPLEXARRAYE* THIS$1, tmp$1295 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$3521:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3524;
	{
		if( F$1 == (tmp$1295)0ull ) goto label$3526;
		{
			if( *R$1 == (boolean)0ll ) goto label$3528;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$3529;
					label$3532:;
					{
						boolean vr$9 = (F$1)( (double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
						if( vr$9 != (boolean)0ll ) goto label$3534;
						{
							goto label$3531;
						}
						label$3534:;
						label$3533:;
					}
					label$3530:;
					I$5 = I$5 + -1ll;
					label$3529:;
					if( I$5 >= 0ll ) goto label$3532;
					label$3531:;
				}
			}
			goto label$3527;
			label$3528:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1474$5;
					TMP$1474$5 = *(int64*)THIS$1 + -1ll;
					goto label$3535;
					label$3538:;
					{
						boolean vr$17 = (F$1)( (double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
						if( vr$17 != (boolean)0ll ) goto label$3540;
						{
							goto label$3537;
						}
						label$3540:;
						label$3539:;
					}
					label$3536:;
					I$5 = I$5 + 1ll;
					label$3535:;
					if( I$5 <= TMP$1474$5 ) goto label$3538;
					label$3537:;
				}
			}
			label$3527:;
			fb$result$1 = (boolean)1ll;
			goto label$3522;
		}
		label$3526:;
		label$3525:;
	}
	label$3524:;
	label$3523:;
	fb$result$1 = (boolean)0ll;
	goto label$3522;
	label$3522:;
	return fb$result$1;
}

boolean _ZN4MATH12COMPLEXARRAY8FOREACHREPFvRdRKu7INTEGERERKb( struct $N4MATH12COMPLEXARRAYE* THIS$1, tmp$1294 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$3541:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3544;
	{
		if( F$1 == (tmp$1294)0ull ) goto label$3546;
		{
			if( *R$1 == (boolean)0ll ) goto label$3548;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$3549;
					label$3552:;
					{
						(F$1)( (double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
					}
					label$3550:;
					I$5 = I$5 + -1ll;
					label$3549:;
					if( I$5 >= 0ll ) goto label$3552;
					label$3551:;
				}
			}
			goto label$3547;
			label$3548:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1475$5;
					TMP$1475$5 = *(int64*)THIS$1 + -1ll;
					goto label$3553;
					label$3556:;
					{
						(F$1)( (double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
					}
					label$3554:;
					I$5 = I$5 + 1ll;
					label$3553:;
					if( I$5 <= TMP$1475$5 ) goto label$3556;
					label$3555:;
				}
			}
			label$3547:;
			fb$result$1 = (boolean)1ll;
			goto label$3542;
		}
		label$3546:;
		label$3545:;
	}
	label$3544:;
	label$3543:;
	fb$result$1 = (boolean)0ll;
	goto label$3542;
	label$3542:;
	return fb$result$1;
}

boolean _ZN4MATH12COMPLEXARRAY8FOREACHREPFbRdRKu7INTEGERERKb( struct $N4MATH12COMPLEXARRAYE* THIS$1, tmp$1296 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$3557:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3560;
	{
		if( F$1 == (tmp$1296)0ull ) goto label$3562;
		{
			if( *R$1 == (boolean)0ll ) goto label$3564;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$3565;
					label$3568:;
					{
						boolean vr$10 = (F$1)( (double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
						if( vr$10 != (boolean)0ll ) goto label$3570;
						{
							goto label$3567;
						}
						label$3570:;
						label$3569:;
					}
					label$3566:;
					I$5 = I$5 + -1ll;
					label$3565:;
					if( I$5 >= 0ll ) goto label$3568;
					label$3567:;
				}
			}
			goto label$3563;
			label$3564:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1476$5;
					TMP$1476$5 = *(int64*)THIS$1 + -1ll;
					goto label$3571;
					label$3574:;
					{
						boolean vr$19 = (F$1)( (double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
						if( vr$19 != (boolean)0ll ) goto label$3576;
						{
							goto label$3573;
						}
						label$3576:;
						label$3575:;
					}
					label$3572:;
					I$5 = I$5 + 1ll;
					label$3571:;
					if( I$5 <= TMP$1476$5 ) goto label$3574;
					label$3573:;
				}
			}
			label$3563:;
			fb$result$1 = (boolean)1ll;
			goto label$3558;
		}
		label$3562:;
		label$3561:;
	}
	label$3560:;
	label$3559:;
	fb$result$1 = (boolean)0ll;
	goto label$3558;
	label$3558:;
	return fb$result$1;
}

boolean _ZNK4MATH12COMPLEXARRAY3MAPERS0_PFNS_7COMPLEXERKS2_E( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH12COMPLEXARRAYE* A$1, tmp$1362 F$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$3577:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3580;
	{
		if( F$1 == (tmp$1362)0ull ) goto label$3582;
		{
			_ZN4MATH12COMPLEXARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1477$4;
				TMP$1477$4 = *(int64*)THIS$1 + -1ll;
				goto label$3583;
				label$3586:;
				{
					struct $N4MATH7COMPLEXE TMP$1478$5;
					struct $N4MATH7COMPLEXE vr$9 = (F$1)( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) );
					TMP$1478$5 = vr$9;
					_ZN4MATH7COMPLEXaSERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)A$1 + 8ll) + (I$4 << (4ll & 63ll))), (struct $N4MATH7COMPLEXE*)&TMP$1478$5 );
				}
				label$3584:;
				I$4 = I$4 + 1ll;
				label$3583:;
				if( I$4 <= TMP$1477$4 ) goto label$3586;
				label$3585:;
			}
			fb$result$1 = (boolean)1ll;
			goto label$3578;
		}
		label$3582:;
		label$3581:;
	}
	label$3580:;
	label$3579:;
	fb$result$1 = (boolean)0ll;
	goto label$3578;
	label$3578:;
	return fb$result$1;
}

boolean _ZNK4MATH12COMPLEXARRAY4MAPIERNS_5ARRAYE( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$3587:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3590;
	{
		_ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
		double* P$2;
		double* vr$4 = _ZNK4MATH5ARRAY11DATA__get__Ev( (struct $N4MATH5ARRAYE*)A$1 );
		P$2 = vr$4;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1479$3;
			TMP$1479$3 = *(int64*)THIS$1 + -1ll;
			goto label$3591;
			label$3594:;
			{
				*(double*)((uint8*)P$2 + (I$3 << (3ll & 63ll))) = *(double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll);
			}
			label$3592:;
			I$3 = I$3 + 1ll;
			label$3591:;
			if( I$3 <= TMP$1479$3 ) goto label$3594;
			label$3593:;
		}
		fb$result$1 = (boolean)1ll;
		goto label$3588;
	}
	label$3590:;
	label$3589:;
	fb$result$1 = (boolean)0ll;
	goto label$3588;
	label$3588:;
	return fb$result$1;
}

boolean _ZNK4MATH12COMPLEXARRAY4MAPIERNS_5ARRAYEPFdRKdE( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1, tmp$1297 F$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$3595:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3598;
	{
		if( F$1 == (tmp$1297)0ull ) goto label$3600;
		{
			_ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
			double* P$3;
			double* vr$4 = _ZNK4MATH5ARRAY11DATA__get__Ev( (struct $N4MATH5ARRAYE*)A$1 );
			P$3 = vr$4;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1480$4;
				TMP$1480$4 = *(int64*)THIS$1 + -1ll;
				goto label$3601;
				label$3604:;
				{
					double vr$11 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) + 8ll) );
					*(double*)((uint8*)P$3 + (I$4 << (3ll & 63ll))) = vr$11;
				}
				label$3602:;
				I$4 = I$4 + 1ll;
				label$3601:;
				if( I$4 <= TMP$1480$4 ) goto label$3604;
				label$3603:;
			}
			fb$result$1 = (boolean)1ll;
			goto label$3596;
		}
		label$3600:;
		label$3599:;
	}
	label$3598:;
	label$3597:;
	fb$result$1 = (boolean)0ll;
	goto label$3596;
	label$3596:;
	return fb$result$1;
}

boolean _ZNK4MATH12COMPLEXARRAY4MAPRERNS_5ARRAYE( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$3605:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3608;
	{
		_ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
		double* P$2;
		double* vr$4 = _ZNK4MATH5ARRAY11DATA__get__Ev( (struct $N4MATH5ARRAYE*)A$1 );
		P$2 = vr$4;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1481$3;
			TMP$1481$3 = *(int64*)THIS$1 + -1ll;
			goto label$3609;
			label$3612:;
			{
				*(double*)((uint8*)P$2 + (I$3 << (3ll & 63ll))) = *(double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll)));
			}
			label$3610:;
			I$3 = I$3 + 1ll;
			label$3609:;
			if( I$3 <= TMP$1481$3 ) goto label$3612;
			label$3611:;
		}
		fb$result$1 = (boolean)1ll;
		goto label$3606;
	}
	label$3608:;
	label$3607:;
	fb$result$1 = (boolean)0ll;
	goto label$3606;
	label$3606:;
	return fb$result$1;
}

boolean _ZNK4MATH12COMPLEXARRAY4MAPRERNS_5ARRAYEPFdRKdE( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1, tmp$1297 F$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$3613:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3616;
	{
		if( F$1 == (tmp$1297)0ull ) goto label$3618;
		{
			_ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
			double* P$3;
			double* vr$4 = _ZNK4MATH5ARRAY11DATA__get__Ev( (struct $N4MATH5ARRAYE*)A$1 );
			P$3 = vr$4;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1482$4;
				TMP$1482$4 = *(int64*)THIS$1 + -1ll;
				goto label$3619;
				label$3622:;
				{
					double vr$11 = (F$1)( (double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) );
					*(double*)((uint8*)P$3 + (I$4 << (3ll & 63ll))) = vr$11;
				}
				label$3620:;
				I$4 = I$4 + 1ll;
				label$3619:;
				if( I$4 <= TMP$1482$4 ) goto label$3622;
				label$3621:;
			}
			fb$result$1 = (boolean)1ll;
			goto label$3614;
		}
		label$3618:;
		label$3617:;
	}
	label$3616:;
	label$3615:;
	fb$result$1 = (boolean)0ll;
	goto label$3614;
	label$3614:;
	return fb$result$1;
}

FBSTRING* _ZNK4MATH12COMPLEXARRAY6TOJSONERKb( struct $N4MATH12COMPLEXARRAYE* THIS$1, boolean* A$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$3623:;
	{
		int64 TMP$1483$2;
		TMP$1483$2 = *(int64*)THIS$1;
		if( TMP$1483$2 != 0ll ) goto label$3626;
		label$3627:;
		{
			fb_StrInit( (void*)&fb$result$1, -1ll, (void*)"[]", 3ll, 0 );
			goto label$3624;
		}
		goto label$3625;
		label$3626:;
		if( TMP$1483$2 != 1ll ) goto label$3628;
		label$3629:;
		{
			FBSTRING TMP$1484$3;
			FBSTRING TMP$1485$3;
			FBSTRING* vr$4 = _ZNK4MATH7COMPLEX6TOJSONERKb( *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll), A$1 );
			__builtin_memset( &TMP$1484$3, 0, 24ll );
			FBSTRING* vr$7 = fb_StrConcat( &TMP$1484$3, (void*)"[", 2ll, (void*)vr$4, -1ll );
			__builtin_memset( &TMP$1485$3, 0, 24ll );
			FBSTRING* vr$10 = fb_StrConcat( &TMP$1485$3, (void*)vr$7, -1ll, (void*)"]", 2ll );
			fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$10, -1ll, 0 );
			goto label$3624;
		}
		goto label$3625;
		label$3628:;
		{
			FBSTRING TMP$1486$3;
			FBSTRING TMP$1490$3;
			FBSTRING R$3;
			FBSTRING* vr$13 = _ZNK4MATH7COMPLEX6TOJSONERKb( *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll), A$1 );
			__builtin_memset( &TMP$1486$3, 0, 24ll );
			FBSTRING* vr$16 = fb_StrConcat( &TMP$1486$3, (void*)"[", 2ll, (void*)vr$13, -1ll );
			fb_StrInit( (void*)&R$3, -1ll, (void*)vr$16, -1ll, 0 );
			{
				int64 I$4;
				I$4 = 1ll;
				int64 TMP$1487$4;
				TMP$1487$4 = *(int64*)THIS$1 + -1ll;
				goto label$3631;
				label$3634:;
				{
					FBSTRING TMP$1488$5;
					FBSTRING TMP$1489$5;
					FBSTRING* vr$23 = _ZNK4MATH7COMPLEX6TOJSONERKb( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))), A$1 );
					__builtin_memset( &TMP$1488$5, 0, 24ll );
					FBSTRING* vr$26 = fb_StrConcat( &TMP$1488$5, (void*)",", 2ll, (void*)vr$23, -1ll );
					__builtin_memset( &TMP$1489$5, 0, 24ll );
					FBSTRING* vr$30 = fb_StrConcat( &TMP$1489$5, (void*)&R$3, -1ll, (void*)vr$26, -1ll );
					fb_StrAssign( (void*)&R$3, -1ll, (void*)vr$30, -1ll, 0 );
				}
				label$3632:;
				I$4 = I$4 + 1ll;
				label$3631:;
				if( I$4 <= TMP$1487$4 ) goto label$3634;
				label$3633:;
			}
			__builtin_memset( &TMP$1490$3, 0, 24ll );
			FBSTRING* vr$36 = fb_StrConcat( &TMP$1490$3, (void*)&R$3, -1ll, (void*)"]", 2ll );
			fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$36, -1ll, 0 );
			fb_StrDelete( (FBSTRING*)&R$3 );
			goto label$3624;
			fb_StrDelete( (FBSTRING*)&R$3 );
		}
		label$3630:;
		label$3625:;
	}
	label$3624:;
	FBSTRING* vr$41 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$41;
}

void _ZN4MATH7V2ARRAYC1Ev( struct $N4MATH7V2ARRAYE* THIS$1 )
{
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC2C1Ev( (struct $N4MATH4VEC2E*)((uint8*)THIS$1 + 16ll) );
	label$3635:;
	label$3636:;
}

void _ZN4MATH7V2ARRAYC1ERKu7INTEGER( struct $N4MATH7V2ARRAYE* THIS$1, int64* L$1 )
{
	label$3637:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC2C1Ev( (struct $N4MATH4VEC2E*)((uint8*)THIS$1 + 16ll) );
	if( *L$1 <= 0ll ) goto label$3640;
	{
		struct $N4MATH4VEC2E* TMP$1496$2;
		uint64 TMP$1497$2;
		struct $N4MATH4VEC2E* TMP$1498$2;
		*(int64*)THIS$1 = *L$1;
		void* vr$11 = malloc( *(uint64*)L$1 << (4ull & 63ll) );
		TMP$1496$2 = (struct $N4MATH4VEC2E*)vr$11;
		if( TMP$1496$2 == (struct $N4MATH4VEC2E*)0ull ) goto label$3641;
		TMP$1498$2 = TMP$1496$2;
		TMP$1497$2 = *(uint64*)L$1;
		label$3642:;
		if( TMP$1497$2 == 0ull ) goto label$3643;
		_ZN4MATH4VEC2C1Ev( TMP$1498$2 );
		TMP$1498$2 = (struct $N4MATH4VEC2E*)((uint8*)TMP$1498$2 + 16ll);
		TMP$1497$2 = TMP$1497$2 + 18446744073709551615ull;
		goto label$3642;
		label$3643:;
		label$3641:;
		*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) = TMP$1496$2;
	}
	label$3640:;
	label$3639:;
	label$3638:;
}

void _ZN4MATH7V2ARRAYC1ERKu7INTEGERPFvRNS_4VEC2EERKb( struct $N4MATH7V2ARRAYE* THIS$1, int64* L$1, tmp$1491 F$1, boolean* R$1 )
{
	label$3644:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC2C1Ev( (struct $N4MATH4VEC2E*)((uint8*)THIS$1 + 16ll) );
	if( *L$1 <= 0ll ) goto label$3647;
	{
		struct $N4MATH4VEC2E* TMP$1499$2;
		uint64 TMP$1500$2;
		struct $N4MATH4VEC2E* TMP$1501$2;
		*(int64*)THIS$1 = *L$1;
		void* vr$11 = malloc( *(uint64*)L$1 << (4ull & 63ll) );
		TMP$1499$2 = (struct $N4MATH4VEC2E*)vr$11;
		if( TMP$1499$2 == (struct $N4MATH4VEC2E*)0ull ) goto label$3648;
		TMP$1501$2 = TMP$1499$2;
		TMP$1500$2 = *(uint64*)L$1;
		label$3649:;
		if( TMP$1500$2 == 0ull ) goto label$3650;
		_ZN4MATH4VEC2C1Ev( TMP$1501$2 );
		TMP$1501$2 = (struct $N4MATH4VEC2E*)((uint8*)TMP$1501$2 + 16ll);
		TMP$1500$2 = TMP$1500$2 + 18446744073709551615ull;
		goto label$3649;
		label$3650:;
		label$3648:;
		*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) = TMP$1499$2;
		if( F$1 == (tmp$1491)0ull ) goto label$3652;
		{
			if( *R$1 == (boolean)0ll ) goto label$3654;
			{
				{
					int64 I$5;
					I$5 = *L$1 + -1ll;
					goto label$3655;
					label$3658:;
					{
						(F$1)( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
					}
					label$3656:;
					I$5 = I$5 + -1ll;
					label$3655:;
					if( I$5 >= 0ll ) goto label$3658;
					label$3657:;
				}
			}
			goto label$3653;
			label$3654:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1502$5;
					TMP$1502$5 = *L$1 + -1ll;
					goto label$3659;
					label$3662:;
					{
						(F$1)( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
					}
					label$3660:;
					I$5 = I$5 + 1ll;
					label$3659:;
					if( I$5 <= TMP$1502$5 ) goto label$3662;
					label$3661:;
				}
			}
			label$3653:;
		}
		label$3652:;
		label$3651:;
	}
	label$3647:;
	label$3646:;
	label$3645:;
}

void _ZN4MATH7V2ARRAYC1ERKu7INTEGERPFvRNS_4VEC2ES3_ERKb( struct $N4MATH7V2ARRAYE* THIS$1, int64* L$1, tmp$1492 F$1, boolean* R$1 )
{
	label$3663:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC2C1Ev( (struct $N4MATH4VEC2E*)((uint8*)THIS$1 + 16ll) );
	if( *L$1 <= 0ll ) goto label$3666;
	{
		struct $N4MATH4VEC2E* TMP$1503$2;
		uint64 TMP$1504$2;
		struct $N4MATH4VEC2E* TMP$1505$2;
		*(int64*)THIS$1 = *L$1;
		void* vr$11 = malloc( *(uint64*)L$1 << (4ull & 63ll) );
		TMP$1503$2 = (struct $N4MATH4VEC2E*)vr$11;
		if( TMP$1503$2 == (struct $N4MATH4VEC2E*)0ull ) goto label$3667;
		TMP$1505$2 = TMP$1503$2;
		TMP$1504$2 = *(uint64*)L$1;
		label$3668:;
		if( TMP$1504$2 == 0ull ) goto label$3669;
		_ZN4MATH4VEC2C1Ev( TMP$1505$2 );
		TMP$1505$2 = (struct $N4MATH4VEC2E*)((uint8*)TMP$1505$2 + 16ll);
		TMP$1504$2 = TMP$1504$2 + 18446744073709551615ull;
		goto label$3668;
		label$3669:;
		label$3667:;
		*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) = TMP$1503$2;
		if( F$1 == (tmp$1492)0ull ) goto label$3671;
		{
			if( *R$1 == (boolean)0ll ) goto label$3673;
			{
				{
					int64 I$5;
					I$5 = *L$1 + -1ll;
					goto label$3674;
					label$3677:;
					{
						(F$1)( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
					}
					label$3675:;
					I$5 = I$5 + -1ll;
					label$3674:;
					if( I$5 >= 0ll ) goto label$3677;
					label$3676:;
				}
			}
			goto label$3672;
			label$3673:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1506$5;
					TMP$1506$5 = *L$1 + -1ll;
					goto label$3678;
					label$3681:;
					{
						(F$1)( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
					}
					label$3679:;
					I$5 = I$5 + 1ll;
					label$3678:;
					if( I$5 <= TMP$1506$5 ) goto label$3681;
					label$3680:;
				}
			}
			label$3672:;
		}
		label$3671:;
		label$3670:;
	}
	label$3666:;
	label$3665:;
	label$3664:;
}

void _ZN4MATH7V2ARRAYC1ERKNS_5ARRAYES3_( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A1$1, struct $N4MATH5ARRAYE* A2$1 )
{
	label$3682:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC2C1Ev( (struct $N4MATH4VEC2E*)((uint8*)THIS$1 + 16ll) );
	if( ((int64)-(*(int64*)A1$1 > 0ll) & (int64)-(*(int64*)A1$1 == *(int64*)A2$1)) == 0ll ) goto label$3685;
	{
		struct $N4MATH4VEC2E* TMP$1507$2;
		uint64 TMP$1508$2;
		struct $N4MATH4VEC2E* TMP$1509$2;
		*(int64*)THIS$1 = *(int64*)A1$1;
		void* vr$16 = malloc( *(uint64*)A1$1 << (4ull & 63ll) );
		TMP$1507$2 = (struct $N4MATH4VEC2E*)vr$16;
		if( TMP$1507$2 == (struct $N4MATH4VEC2E*)0ull ) goto label$3686;
		TMP$1509$2 = TMP$1507$2;
		TMP$1508$2 = *(uint64*)A1$1;
		label$3687:;
		if( TMP$1508$2 == 0ull ) goto label$3688;
		_ZN4MATH4VEC2C1Ev( TMP$1509$2 );
		TMP$1509$2 = (struct $N4MATH4VEC2E*)((uint8*)TMP$1509$2 + 16ll);
		TMP$1508$2 = TMP$1508$2 + 18446744073709551615ull;
		goto label$3687;
		label$3688:;
		label$3686:;
		*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) = TMP$1507$2;
		double* P1$2;
		double* vr$21 = _ZNK4MATH5ARRAY11DATA__get__Ev( A1$1 );
		P1$2 = vr$21;
		double* P2$2;
		double* vr$22 = _ZNK4MATH5ARRAY11DATA__get__Ev( A2$1 );
		P2$2 = vr$22;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1510$3;
			TMP$1510$3 = *(int64*)THIS$1 + -1ll;
			goto label$3689;
			label$3692:;
			{
				*(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) = *(double*)((uint8*)P1$2 + (I$3 << (3ll & 63ll)));
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) = *(double*)((uint8*)P2$2 + (I$3 << (3ll & 63ll)));
			}
			label$3690:;
			I$3 = I$3 + 1ll;
			label$3689:;
			if( I$3 <= TMP$1510$3 ) goto label$3692;
			label$3691:;
		}
	}
	label$3685:;
	label$3684:;
	label$3683:;
}

void _ZN4MATH7V2ARRAYC1ERKS0_( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH7V2ARRAYE* A$1 )
{
	label$3693:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC2C1Ev( (struct $N4MATH4VEC2E*)((uint8*)THIS$1 + 16ll) );
	if( *(int64*)A$1 == 0ll ) goto label$3696;
	{
		struct $N4MATH4VEC2E* TMP$1511$2;
		uint64 TMP$1512$2;
		struct $N4MATH4VEC2E* TMP$1513$2;
		*(int64*)THIS$1 = *(int64*)A$1;
		void* vr$11 = malloc( *(uint64*)A$1 << (4ull & 63ll) );
		TMP$1511$2 = (struct $N4MATH4VEC2E*)vr$11;
		if( TMP$1511$2 == (struct $N4MATH4VEC2E*)0ull ) goto label$3697;
		TMP$1513$2 = TMP$1511$2;
		TMP$1512$2 = *(uint64*)A$1;
		label$3698:;
		if( TMP$1512$2 == 0ull ) goto label$3699;
		_ZN4MATH4VEC2C1Ev( TMP$1513$2 );
		TMP$1513$2 = (struct $N4MATH4VEC2E*)((uint8*)TMP$1513$2 + 16ll);
		TMP$1512$2 = TMP$1512$2 + 18446744073709551615ull;
		goto label$3698;
		label$3699:;
		label$3697:;
		*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) = TMP$1511$2;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1514$3;
			TMP$1514$3 = *(int64*)A$1 + -1ll;
			goto label$3700;
			label$3703:;
			{
				_ZN4MATH4VEC2aSERKS0_( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)A$1 + 8ll) + (I$3 << (4ll & 63ll))) );
			}
			label$3701:;
			I$3 = I$3 + 1ll;
			label$3700:;
			if( I$3 <= TMP$1514$3 ) goto label$3703;
			label$3702:;
		}
	}
	label$3696:;
	label$3695:;
	label$3694:;
}

void _ZN4MATH7V2ARRAYD1Ev( struct $N4MATH7V2ARRAYE* THIS$1 )
{
	label$3704:;
	if( *(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC2E*)0ull ) goto label$3707;
	{
		if( *(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC2E*)0ull ) goto label$3708;
		free( *(void**)((uint8*)THIS$1 + 8ll) );
		label$3708:;
		label$3707:;
	}
	label$3705:;
}

void _ZN4MATH7V2ARRAYv27selfcatERKNS_4VEC2E( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	label$3709:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3712;
	{
		struct $N4MATH4VEC2E* TMP$1515$2;
		uint64 TMP$1516$2;
		struct $N4MATH4VEC2E* TMP$1517$2;
		*(int64*)THIS$1 = *(int64*)THIS$1 + 1ll;
		struct $N4MATH4VEC2E* Q$2;
		void* vr$6 = malloc( *(uint64*)THIS$1 << (4ull & 63ll) );
		TMP$1515$2 = (struct $N4MATH4VEC2E*)vr$6;
		if( TMP$1515$2 == (struct $N4MATH4VEC2E*)0ull ) goto label$3713;
		TMP$1517$2 = TMP$1515$2;
		TMP$1516$2 = *(uint64*)THIS$1;
		label$3714:;
		if( TMP$1516$2 == 0ull ) goto label$3715;
		_ZN4MATH4VEC2C1Ev( TMP$1517$2 );
		TMP$1517$2 = (struct $N4MATH4VEC2E*)((uint8*)TMP$1517$2 + 16ll);
		TMP$1516$2 = TMP$1516$2 + 18446744073709551615ull;
		goto label$3714;
		label$3715:;
		label$3713:;
		Q$2 = TMP$1515$2;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1518$3;
			TMP$1518$3 = *(int64*)THIS$1 + -2ll;
			goto label$3716;
			label$3719:;
			{
				_ZN4MATH4VEC2aSERKS0_( (struct $N4MATH4VEC2E*)((uint8*)Q$2 + (I$3 << (4ll & 63ll))), (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) );
			}
			label$3717:;
			I$3 = I$3 + 1ll;
			label$3716:;
			if( I$3 <= TMP$1518$3 ) goto label$3719;
			label$3718:;
		}
		_ZN4MATH4VEC2aSERKS0_( (struct $N4MATH4VEC2E*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (*(int64*)THIS$1 << (4ll & 63ll))) + -16ll), V$1 );
		if( *(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC2E*)0ull ) goto label$3720;
		free( *(void**)((uint8*)THIS$1 + 8ll) );
		label$3720:;
		*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) = Q$2;
	}
	goto label$3711;
	label$3712:;
	{
		struct $N4MATH4VEC2E* TMP$1519$2;
		uint64 TMP$1520$2;
		struct $N4MATH4VEC2E* TMP$1521$2;
		*(int64*)THIS$1 = 1ll;
		void* vr$27 = malloc( 16ull );
		TMP$1519$2 = (struct $N4MATH4VEC2E*)vr$27;
		if( TMP$1519$2 == (struct $N4MATH4VEC2E*)0ull ) goto label$3721;
		TMP$1521$2 = TMP$1519$2;
		TMP$1520$2 = 1ull;
		label$3722:;
		if( TMP$1520$2 == 0ull ) goto label$3723;
		_ZN4MATH4VEC2C1Ev( TMP$1521$2 );
		TMP$1521$2 = (struct $N4MATH4VEC2E*)((uint8*)TMP$1521$2 + 16ll);
		TMP$1520$2 = TMP$1520$2 + 18446744073709551615ull;
		goto label$3722;
		label$3723:;
		label$3721:;
		*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) = TMP$1519$2;
		_ZN4MATH4VEC2aSERKS0_( *(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll), V$1 );
	}
	label$3711:;
	label$3710:;
}

void _ZN4MATH7V2ARRAYv27selfcatERKNS_4PVECE( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH4PVECE* V$1 )
{
	label$3724:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3727;
	{
		struct $N4MATH4VEC2E* TMP$1522$2;
		uint64 TMP$1523$2;
		struct $N4MATH4VEC2E* TMP$1524$2;
		struct $N4MATH4VEC2E TMP$1526$2;
		double TMP$1527$2;
		double TMP$1528$2;
		*(int64*)THIS$1 = *(int64*)THIS$1 + 1ll;
		struct $N4MATH4VEC2E* Q$2;
		void* vr$6 = malloc( *(uint64*)THIS$1 << (4ull & 63ll) );
		TMP$1522$2 = (struct $N4MATH4VEC2E*)vr$6;
		if( TMP$1522$2 == (struct $N4MATH4VEC2E*)0ull ) goto label$3728;
		TMP$1524$2 = TMP$1522$2;
		TMP$1523$2 = *(uint64*)THIS$1;
		label$3729:;
		if( TMP$1523$2 == 0ull ) goto label$3730;
		_ZN4MATH4VEC2C1Ev( TMP$1524$2 );
		TMP$1524$2 = (struct $N4MATH4VEC2E*)((uint8*)TMP$1524$2 + 16ll);
		TMP$1523$2 = TMP$1523$2 + 18446744073709551615ull;
		goto label$3729;
		label$3730:;
		label$3728:;
		Q$2 = TMP$1522$2;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1525$3;
			TMP$1525$3 = *(int64*)THIS$1 + -2ll;
			goto label$3731;
			label$3734:;
			{
				_ZN4MATH4VEC2aSERKS0_( (struct $N4MATH4VEC2E*)((uint8*)Q$2 + (I$3 << (4ll & 63ll))), (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) );
			}
			label$3732:;
			I$3 = I$3 + 1ll;
			label$3731:;
			if( I$3 <= TMP$1525$3 ) goto label$3734;
			label$3733:;
		}
		double vr$18 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
		TMP$1528$2 = vr$18;
		double vr$20 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
		TMP$1527$2 = vr$20;
		_ZN4MATH4VEC2C1ERKdS2_( &TMP$1526$2, (double*)&TMP$1527$2, (double*)&TMP$1528$2 );
		_ZN4MATH4VEC2aSERKS0_( (struct $N4MATH4VEC2E*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (*(int64*)THIS$1 << (4ll & 63ll))) + -16ll), (struct $N4MATH4VEC2E*)&TMP$1526$2 );
		if( *(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC2E*)0ull ) goto label$3735;
		free( *(void**)((uint8*)THIS$1 + 8ll) );
		label$3735:;
		*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) = Q$2;
	}
	goto label$3726;
	label$3727:;
	{
		struct $N4MATH4VEC2E* TMP$1529$2;
		uint64 TMP$1530$2;
		struct $N4MATH4VEC2E* TMP$1531$2;
		struct $N4MATH4VEC2E TMP$1532$2;
		double TMP$1533$2;
		double TMP$1534$2;
		*(int64*)THIS$1 = 1ll;
		void* vr$33 = malloc( 16ull );
		TMP$1529$2 = (struct $N4MATH4VEC2E*)vr$33;
		if( TMP$1529$2 == (struct $N4MATH4VEC2E*)0ull ) goto label$3736;
		TMP$1531$2 = TMP$1529$2;
		TMP$1530$2 = 1ull;
		label$3737:;
		if( TMP$1530$2 == 0ull ) goto label$3738;
		_ZN4MATH4VEC2C1Ev( TMP$1531$2 );
		TMP$1531$2 = (struct $N4MATH4VEC2E*)((uint8*)TMP$1531$2 + 16ll);
		TMP$1530$2 = TMP$1530$2 + 18446744073709551615ull;
		goto label$3737;
		label$3738:;
		label$3736:;
		*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) = TMP$1529$2;
		double vr$37 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
		TMP$1534$2 = vr$37;
		double vr$39 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
		TMP$1533$2 = vr$39;
		_ZN4MATH4VEC2C1ERKdS2_( &TMP$1532$2, (double*)&TMP$1533$2, (double*)&TMP$1534$2 );
		_ZN4MATH4VEC2aSERKS0_( *(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll), (struct $N4MATH4VEC2E*)&TMP$1532$2 );
	}
	label$3726:;
	label$3725:;
}

void _ZN4MATH7V2ARRAYv27selfcatERKS0_( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH7V2ARRAYE* A$1 )
{
	label$3739:;
	if( THIS$1 == A$1 ) goto label$3742;
	{
		if( *(int64*)A$1 == 0ll ) goto label$3744;
		{
			if( *(int64*)THIS$1 == 0ll ) goto label$3746;
			{
				struct $N4MATH4VEC2E* TMP$1535$4;
				uint64 TMP$1536$4;
				struct $N4MATH4VEC2E* TMP$1537$4;
				struct $N4MATH4VEC2E* Q$4;
				void* vr$6 = malloc( (uint64)(*(int64*)THIS$1 + *(int64*)A$1) << (4ull & 63ll) );
				TMP$1535$4 = (struct $N4MATH4VEC2E*)vr$6;
				if( TMP$1535$4 == (struct $N4MATH4VEC2E*)0ull ) goto label$3747;
				TMP$1537$4 = TMP$1535$4;
				TMP$1536$4 = (uint64)(*(int64*)THIS$1 + *(int64*)A$1);
				label$3748:;
				if( TMP$1536$4 == 0ull ) goto label$3749;
				_ZN4MATH4VEC2C1Ev( TMP$1537$4 );
				TMP$1537$4 = (struct $N4MATH4VEC2E*)((uint8*)TMP$1537$4 + 16ll);
				TMP$1536$4 = TMP$1536$4 + 18446744073709551615ull;
				goto label$3748;
				label$3749:;
				label$3747:;
				Q$4 = TMP$1535$4;
				int64 I$4;
				__builtin_memset( &I$4, 0, 8ll );
				{
					I$4 = 0ll;
					int64 TMP$1538$5;
					TMP$1538$5 = *(int64*)THIS$1 + -1ll;
					goto label$3750;
					label$3753:;
					{
						_ZN4MATH4VEC2aSERKS0_( (struct $N4MATH4VEC2E*)((uint8*)Q$4 + (I$4 << (4ll & 63ll))), (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) );
					}
					label$3751:;
					I$4 = I$4 + 1ll;
					label$3750:;
					if( I$4 <= TMP$1538$5 ) goto label$3753;
					label$3752:;
				}
				{
					I$4 = 0ll;
					int64 TMP$1539$5;
					TMP$1539$5 = *(int64*)A$1 + -1ll;
					goto label$3754;
					label$3757:;
					{
						_ZN4MATH4VEC2aSERKS0_( (struct $N4MATH4VEC2E*)((uint8*)Q$4 + ((*(int64*)THIS$1 + I$4) << (4ll & 63ll))), (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)A$1 + 8ll) + (I$4 << (4ll & 63ll))) );
					}
					label$3755:;
					I$4 = I$4 + 1ll;
					label$3754:;
					if( I$4 <= TMP$1539$5 ) goto label$3757;
					label$3756:;
				}
				*(int64*)THIS$1 = *(int64*)THIS$1 + *(int64*)A$1;
				if( *(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC2E*)0ull ) goto label$3758;
				free( *(void**)((uint8*)THIS$1 + 8ll) );
				label$3758:;
				*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) = Q$4;
			}
			goto label$3745;
			label$3746:;
			{
				struct $N4MATH4VEC2E* TMP$1540$4;
				uint64 TMP$1541$4;
				struct $N4MATH4VEC2E* TMP$1542$4;
				*(int64*)THIS$1 = *(int64*)A$1;
				void* vr$42 = malloc( *(uint64*)THIS$1 << (4ull & 63ll) );
				TMP$1540$4 = (struct $N4MATH4VEC2E*)vr$42;
				if( TMP$1540$4 == (struct $N4MATH4VEC2E*)0ull ) goto label$3759;
				TMP$1542$4 = TMP$1540$4;
				TMP$1541$4 = *(uint64*)THIS$1;
				label$3760:;
				if( TMP$1541$4 == 0ull ) goto label$3761;
				_ZN4MATH4VEC2C1Ev( TMP$1542$4 );
				TMP$1542$4 = (struct $N4MATH4VEC2E*)((uint8*)TMP$1542$4 + 16ll);
				TMP$1541$4 = TMP$1541$4 + 18446744073709551615ull;
				goto label$3760;
				label$3761:;
				label$3759:;
				*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) = TMP$1540$4;
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1543$5;
					TMP$1543$5 = *(int64*)THIS$1 + -1ll;
					goto label$3762;
					label$3765:;
					{
						_ZN4MATH4VEC2aSERKS0_( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)A$1 + 8ll) + (I$5 << (4ll & 63ll))) );
					}
					label$3763:;
					I$5 = I$5 + 1ll;
					label$3762:;
					if( I$5 <= TMP$1543$5 ) goto label$3765;
					label$3764:;
				}
			}
			label$3745:;
		}
		label$3744:;
		label$3743:;
	}
	goto label$3741;
	label$3742:;
	{
		if( *(int64*)THIS$1 == 0ll ) goto label$3767;
		{
			struct $N4MATH4VEC2E* TMP$1544$3;
			uint64 TMP$1545$3;
			struct $N4MATH4VEC2E* TMP$1546$3;
			struct $N4MATH4VEC2E* Q$3;
			void* vr$60 = malloc( (uint64)(*(int64*)THIS$1 << (1ll & 63ll)) << (4ull & 63ll) );
			TMP$1544$3 = (struct $N4MATH4VEC2E*)vr$60;
			if( TMP$1544$3 == (struct $N4MATH4VEC2E*)0ull ) goto label$3768;
			TMP$1546$3 = TMP$1544$3;
			TMP$1545$3 = (uint64)(*(int64*)THIS$1 << (1ll & 63ll));
			label$3769:;
			if( TMP$1545$3 == 0ull ) goto label$3770;
			_ZN4MATH4VEC2C1Ev( TMP$1546$3 );
			TMP$1546$3 = (struct $N4MATH4VEC2E*)((uint8*)TMP$1546$3 + 16ll);
			TMP$1545$3 = TMP$1545$3 + 18446744073709551615ull;
			goto label$3769;
			label$3770:;
			label$3768:;
			Q$3 = TMP$1544$3;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1547$4;
				TMP$1547$4 = *(int64*)THIS$1 + -1ll;
				goto label$3771;
				label$3774:;
				{
					_ZN4MATH4VEC2aSERKS0_( (struct $N4MATH4VEC2E*)((uint8*)Q$3 + (I$4 << (4ll & 63ll))), (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) );
					_ZN4MATH4VEC2aSERKS0_( (struct $N4MATH4VEC2E*)((uint8*)Q$3 + ((*(int64*)THIS$1 + I$4) << (4ll & 63ll))), (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) );
				}
				label$3772:;
				I$4 = I$4 + 1ll;
				label$3771:;
				if( I$4 <= TMP$1547$4 ) goto label$3774;
				label$3773:;
			}
			*(int64*)THIS$1 = *(int64*)THIS$1 << (1ll & 63ll);
			if( *(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC2E*)0ull ) goto label$3775;
			free( *(void**)((uint8*)THIS$1 + 8ll) );
			label$3775:;
			*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) = Q$3;
		}
		label$3767:;
		label$3766:;
	}
	label$3741:;
	label$3740:;
}

struct $N4MATH4VEC2E* _ZN4MATH7V2ARRAYixERKu7INTEGER( struct $N4MATH7V2ARRAYE* THIS$1, int64* I$1 )
{
	struct $N4MATH4VEC2E* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$3776:;
	if( ((int64)-(*I$1 >= 0ll) & (int64)-(*I$1 < *(int64*)THIS$1)) == 0ll ) goto label$3779;
	{
		fb$result$1 = (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (*I$1 << (4ll & 63ll)));
		goto label$3777;
		label$3779:;
	}
	*(double*)((uint8*)THIS$1 + 16ll) = 0x0p+0;
	*(double*)((uint8*)THIS$1 + 24ll) = 0x0p+0;
	fb$result$1 = (struct $N4MATH4VEC2E*)((uint8*)THIS$1 + 16ll);
	goto label$3777;
	label$3777:;
	return fb$result$1;
}

void _ZN4MATH7V2ARRAYpLERKNS_4VEC2E( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	label$3780:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3783;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1548$3;
			TMP$1548$3 = *(int64*)THIS$1 + -1ll;
			goto label$3784;
			label$3787:;
			{
				_ZN4MATH4VEC2pLERKS0_( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), V$1 );
			}
			label$3785:;
			I$3 = I$3 + 1ll;
			label$3784:;
			if( I$3 <= TMP$1548$3 ) goto label$3787;
			label$3786:;
		}
	}
	label$3783:;
	label$3782:;
	label$3781:;
}

void _ZN4MATH7V2ARRAYpLERKNS_4PVECE( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH4PVECE* V$1 )
{
	label$3788:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3791;
	{
		double X$2;
		double vr$1 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
		X$2 = vr$1;
		double Y$2;
		double vr$2 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
		Y$2 = vr$2;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1549$3;
			TMP$1549$3 = *(int64*)THIS$1 + -1ll;
			goto label$3792;
			label$3795:;
			{
				*(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) = *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + X$2;
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) + Y$2;
			}
			label$3793:;
			I$3 = I$3 + 1ll;
			label$3792:;
			if( I$3 <= TMP$1549$3 ) goto label$3795;
			label$3794:;
		}
	}
	label$3791:;
	label$3790:;
	label$3789:;
}

void _ZN4MATH7V2ARRAYpLERKS0_( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH7V2ARRAYE* A$1 )
{
	label$3796:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$3799;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1550$3;
			TMP$1550$3 = *(int64*)THIS$1 + -1ll;
			goto label$3800;
			label$3803:;
			{
				_ZN4MATH4VEC2pLERKS0_( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)A$1 + 8ll) + (I$3 << (4ll & 63ll))) );
			}
			label$3801:;
			I$3 = I$3 + 1ll;
			label$3800:;
			if( I$3 <= TMP$1550$3 ) goto label$3803;
			label$3802:;
		}
	}
	label$3799:;
	label$3798:;
	label$3797:;
}

void _ZN4MATH7V2ARRAYmIERKNS_4VEC2E( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	label$3804:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3807;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1551$3;
			TMP$1551$3 = *(int64*)THIS$1 + -1ll;
			goto label$3808;
			label$3811:;
			{
				_ZN4MATH4VEC2mIERKS0_( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), V$1 );
			}
			label$3809:;
			I$3 = I$3 + 1ll;
			label$3808:;
			if( I$3 <= TMP$1551$3 ) goto label$3811;
			label$3810:;
		}
	}
	label$3807:;
	label$3806:;
	label$3805:;
}

void _ZN4MATH7V2ARRAYmIERKNS_4PVECE( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH4PVECE* V$1 )
{
	label$3812:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3815;
	{
		double X$2;
		double vr$1 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
		X$2 = vr$1;
		double Y$2;
		double vr$2 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
		Y$2 = vr$2;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1552$3;
			TMP$1552$3 = *(int64*)THIS$1 + -1ll;
			goto label$3816;
			label$3819:;
			{
				*(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) = *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) - X$2;
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) - Y$2;
			}
			label$3817:;
			I$3 = I$3 + 1ll;
			label$3816:;
			if( I$3 <= TMP$1552$3 ) goto label$3819;
			label$3818:;
		}
	}
	label$3815:;
	label$3814:;
	label$3813:;
}

void _ZN4MATH7V2ARRAYmIERKS0_( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH7V2ARRAYE* A$1 )
{
	label$3820:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$3823;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1553$3;
			TMP$1553$3 = *(int64*)THIS$1 + -1ll;
			goto label$3824;
			label$3827:;
			{
				_ZN4MATH4VEC2mIERKS0_( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)A$1 + 8ll) + (I$3 << (4ll & 63ll))) );
			}
			label$3825:;
			I$3 = I$3 + 1ll;
			label$3824:;
			if( I$3 <= TMP$1553$3 ) goto label$3827;
			label$3826:;
		}
	}
	label$3823:;
	label$3822:;
	label$3821:;
}

void _ZN4MATH7V2ARRAYmLERKd( struct $N4MATH7V2ARRAYE* THIS$1, double* N$1 )
{
	label$3828:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3831;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1554$3;
			TMP$1554$3 = *(int64*)THIS$1 + -1ll;
			goto label$3832;
			label$3835:;
			{
				*(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) = *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) * *N$1;
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) * *N$1;
			}
			label$3833:;
			I$3 = I$3 + 1ll;
			label$3832:;
			if( I$3 <= TMP$1554$3 ) goto label$3835;
			label$3834:;
		}
	}
	label$3831:;
	label$3830:;
	label$3829:;
}

void _ZN4MATH7V2ARRAYmLERKNS_5ARRAYE( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	label$3836:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$3839;
	{
		double* P$2;
		double* vr$6 = _ZNK4MATH5ARRAY11DATA__get__Ev( A$1 );
		P$2 = vr$6;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1555$3;
			TMP$1555$3 = *(int64*)THIS$1 + -1ll;
			goto label$3840;
			label$3843:;
			{
				_ZN4MATH4VEC2mLERKd( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), (double*)((uint8*)P$2 + (I$3 << (3ll & 63ll))) );
			}
			label$3841:;
			I$3 = I$3 + 1ll;
			label$3840:;
			if( I$3 <= TMP$1555$3 ) goto label$3843;
			label$3842:;
		}
	}
	label$3839:;
	label$3838:;
	label$3837:;
}

void _ZN4MATH7V2ARRAYmLERKNS_4VEC2E( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	label$3844:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3847;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1556$3;
			TMP$1556$3 = *(int64*)THIS$1 + -1ll;
			goto label$3848;
			label$3851:;
			{
				_ZN4MATH4VEC2mLERKS0_( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), V$1 );
			}
			label$3849:;
			I$3 = I$3 + 1ll;
			label$3848:;
			if( I$3 <= TMP$1556$3 ) goto label$3851;
			label$3850:;
		}
	}
	label$3847:;
	label$3846:;
	label$3845:;
}

void _ZN4MATH7V2ARRAYmLERKNS_4PVECE( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH4PVECE* V$1 )
{
	label$3852:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3855;
	{
		double X$2;
		double vr$1 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
		X$2 = vr$1;
		double Y$2;
		double vr$2 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
		Y$2 = vr$2;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1557$3;
			TMP$1557$3 = *(int64*)THIS$1 + -1ll;
			goto label$3856;
			label$3859:;
			{
				*(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) = *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) * X$2;
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) * Y$2;
			}
			label$3857:;
			I$3 = I$3 + 1ll;
			label$3856:;
			if( I$3 <= TMP$1557$3 ) goto label$3859;
			label$3858:;
		}
	}
	label$3855:;
	label$3854:;
	label$3853:;
}

void _ZN4MATH7V2ARRAYmLERKS0_( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH7V2ARRAYE* A$1 )
{
	label$3860:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$3863;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1558$3;
			TMP$1558$3 = *(int64*)THIS$1 + -1ll;
			goto label$3864;
			label$3867:;
			{
				_ZN4MATH4VEC2mLERKS0_( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)A$1 + 8ll) + (I$3 << (4ll & 63ll))) );
			}
			label$3865:;
			I$3 = I$3 + 1ll;
			label$3864:;
			if( I$3 <= TMP$1558$3 ) goto label$3867;
			label$3866:;
		}
	}
	label$3863:;
	label$3862:;
	label$3861:;
}

void _ZN4MATH7V2ARRAYdVERKd( struct $N4MATH7V2ARRAYE* THIS$1, double* N$1 )
{
	label$3868:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3871;
	{
		if( *N$1 == 0x0p+0 ) goto label$3873;
		{
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1559$4;
				TMP$1559$4 = *(int64*)THIS$1 + -1ll;
				goto label$3874;
				label$3877:;
				{
					*(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) = *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) / *N$1;
					*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) + 8ll) / *N$1;
				}
				label$3875:;
				I$4 = I$4 + 1ll;
				label$3874:;
				if( I$4 <= TMP$1559$4 ) goto label$3877;
				label$3876:;
			}
		}
		goto label$3872;
		label$3873:;
		{
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1560$4;
				TMP$1560$4 = *(int64*)THIS$1 + -1ll;
				goto label$3878;
				label$3881:;
				{
					*(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) = 0x0p+0;
					*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) + 8ll) = 0x0p+0;
				}
				label$3879:;
				I$4 = I$4 + 1ll;
				label$3878:;
				if( I$4 <= TMP$1560$4 ) goto label$3881;
				label$3880:;
			}
		}
		label$3872:;
	}
	label$3871:;
	label$3870:;
	label$3869:;
}

void _ZN4MATH7V2ARRAYdVERKNS_5ARRAYE( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	label$3882:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$3885;
	{
		double* P$2;
		double* vr$6 = _ZNK4MATH5ARRAY11DATA__get__Ev( A$1 );
		P$2 = vr$6;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1561$3;
			TMP$1561$3 = *(int64*)THIS$1 + -1ll;
			goto label$3886;
			label$3889:;
			{
				if( *(double*)((uint8*)P$2 + (I$3 << (3ll & 63ll))) == 0x0p+0 ) goto label$3891;
				{
					*(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) = *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) / *(double*)((uint8*)P$2 + (I$3 << (3ll & 63ll)));
					*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) / *(double*)((uint8*)P$2 + (I$3 << (3ll & 63ll)));
				}
				goto label$3890;
				label$3891:;
				{
					*(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) = 0x0p+0;
					*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) = 0x0p+0;
				}
				label$3890:;
			}
			label$3887:;
			I$3 = I$3 + 1ll;
			label$3886:;
			if( I$3 <= TMP$1561$3 ) goto label$3889;
			label$3888:;
		}
	}
	label$3885:;
	label$3884:;
	label$3883:;
}

void _ZN4MATH7V2ARRAYdVERKNS_4VEC2E( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	label$3892:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3895;
	{
		if( *(double*)V$1 == 0x0p+0 ) goto label$3897;
		{
			if( *(double*)((uint8*)V$1 + 8ll) == 0x0p+0 ) goto label$3899;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1562$5;
					TMP$1562$5 = *(int64*)THIS$1 + -1ll;
					goto label$3900;
					label$3903:;
					{
						*(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) = *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) / *(double*)V$1;
						*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) / *(double*)((uint8*)V$1 + 8ll);
					}
					label$3901:;
					I$5 = I$5 + 1ll;
					label$3900:;
					if( I$5 <= TMP$1562$5 ) goto label$3903;
					label$3902:;
				}
			}
			goto label$3898;
			label$3899:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1563$5;
					TMP$1563$5 = *(int64*)THIS$1 + -1ll;
					goto label$3904;
					label$3907:;
					{
						*(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) = *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) / *(double*)V$1;
						*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) = 0x0p+0;
					}
					label$3905:;
					I$5 = I$5 + 1ll;
					label$3904:;
					if( I$5 <= TMP$1563$5 ) goto label$3907;
					label$3906:;
				}
			}
			label$3898:;
		}
		goto label$3896;
		label$3897:;
		{
			if( *(double*)((uint8*)V$1 + 8ll) == 0x0p+0 ) goto label$3909;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1564$5;
					TMP$1564$5 = *(int64*)THIS$1 + -1ll;
					goto label$3910;
					label$3913:;
					{
						*(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) = 0x0p+0;
						*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) / *(double*)((uint8*)V$1 + 8ll);
					}
					label$3911:;
					I$5 = I$5 + 1ll;
					label$3910:;
					if( I$5 <= TMP$1564$5 ) goto label$3913;
					label$3912:;
				}
			}
			goto label$3908;
			label$3909:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1565$5;
					TMP$1565$5 = *(int64*)THIS$1 + -1ll;
					goto label$3914;
					label$3917:;
					{
						*(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) = 0x0p+0;
						*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) = 0x0p+0;
					}
					label$3915:;
					I$5 = I$5 + 1ll;
					label$3914:;
					if( I$5 <= TMP$1565$5 ) goto label$3917;
					label$3916:;
				}
			}
			label$3908:;
		}
		label$3896:;
	}
	label$3895:;
	label$3894:;
	label$3893:;
}

void _ZN4MATH7V2ARRAYdVERKNS_4PVECE( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH4PVECE* V$1 )
{
	label$3918:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3921;
	{
		double X$2;
		double vr$1 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
		X$2 = vr$1;
		double Y$2;
		double vr$2 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
		Y$2 = vr$2;
		if( X$2 == 0x0p+0 ) goto label$3923;
		{
			if( Y$2 == 0x0p+0 ) goto label$3925;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1566$5;
					TMP$1566$5 = *(int64*)THIS$1 + -1ll;
					goto label$3926;
					label$3929:;
					{
						*(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) = *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) / X$2;
						*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) / Y$2;
					}
					label$3927:;
					I$5 = I$5 + 1ll;
					label$3926:;
					if( I$5 <= TMP$1566$5 ) goto label$3929;
					label$3928:;
				}
			}
			goto label$3924;
			label$3925:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1567$5;
					TMP$1567$5 = *(int64*)THIS$1 + -1ll;
					goto label$3930;
					label$3933:;
					{
						*(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) = *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) / X$2;
						*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) = 0x0p+0;
					}
					label$3931:;
					I$5 = I$5 + 1ll;
					label$3930:;
					if( I$5 <= TMP$1567$5 ) goto label$3933;
					label$3932:;
				}
			}
			label$3924:;
		}
		goto label$3922;
		label$3923:;
		{
			if( Y$2 == 0x0p+0 ) goto label$3935;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1568$5;
					TMP$1568$5 = *(int64*)THIS$1 + -1ll;
					goto label$3936;
					label$3939:;
					{
						*(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) = 0x0p+0;
						*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) / Y$2;
					}
					label$3937:;
					I$5 = I$5 + 1ll;
					label$3936:;
					if( I$5 <= TMP$1568$5 ) goto label$3939;
					label$3938:;
				}
			}
			goto label$3934;
			label$3935:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1569$5;
					TMP$1569$5 = *(int64*)THIS$1 + -1ll;
					goto label$3940;
					label$3943:;
					{
						*(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) = 0x0p+0;
						*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) = 0x0p+0;
					}
					label$3941:;
					I$5 = I$5 + 1ll;
					label$3940:;
					if( I$5 <= TMP$1569$5 ) goto label$3943;
					label$3942:;
				}
			}
			label$3934:;
		}
		label$3922:;
	}
	label$3921:;
	label$3920:;
	label$3919:;
}

void _ZN4MATH7V2ARRAYdVERKS0_( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH7V2ARRAYE* A$1 )
{
	label$3944:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$3947;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1570$3;
			TMP$1570$3 = *(int64*)THIS$1 + -1ll;
			goto label$3948;
			label$3951:;
			{
				double TMP$1571$4;
				double TMP$1572$4;
				if( *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)A$1 + 8ll) + (I$3 << (4ll & 63ll))) == 0x0p+0 ) goto label$3952;
				TMP$1571$4 = *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) / *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)A$1 + 8ll) + (I$3 << (4ll & 63ll)));
				goto label$3954;
				label$3952:;
				TMP$1571$4 = 0x0p+0;
				label$3954:;
				*(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) = TMP$1571$4;
				if( *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)A$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) == 0x0p+0 ) goto label$3953;
				TMP$1572$4 = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) / *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)A$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll);
				goto label$3955;
				label$3953:;
				TMP$1572$4 = 0x0p+0;
				label$3955:;
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) = TMP$1572$4;
			}
			label$3949:;
			I$3 = I$3 + 1ll;
			label$3948:;
			if( I$3 <= TMP$1570$3 ) goto label$3951;
			label$3950:;
		}
	}
	label$3947:;
	label$3946:;
	label$3945:;
}

FBSTRING* _ZNK4MATH7V2ARRAYcv8FBSTRINGEv( struct $N4MATH7V2ARRAYE* THIS$1 )
{
	FBSTRING TMP$1574$1;
	FBSTRING TMP$1575$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$3956:;
	FBSTRING* vr$2 = fb_LongintToStr( *(int64*)THIS$1 );
	__builtin_memset( &TMP$1574$1, 0, 24ll );
	FBSTRING* vr$5 = fb_StrConcat( &TMP$1574$1, (void*)"<math.v2array>{ length : ", 26ll, (void*)vr$2, -1ll );
	__builtin_memset( &TMP$1575$1, 0, 24ll );
	FBSTRING* vr$8 = fb_StrConcat( &TMP$1575$1, (void*)vr$5, -1ll, (void*)" }", 3ll );
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$8, -1ll, 0 );
	goto label$3957;
	label$3957:;
	FBSTRING* vr$11 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$11;
}

void _ZN4MATH7V2ARRAYaSERKS0_( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH7V2ARRAYE* A$1 )
{
	label$3958:;
	if( THIS$1 == A$1 ) goto label$3961;
	{
		*(int64*)THIS$1 = 0ll;
		if( *(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC2E*)0ull ) goto label$3963;
		{
			if( *(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC2E*)0ull ) goto label$3964;
			free( *(void**)((uint8*)THIS$1 + 8ll) );
			label$3964:;
			*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) = (struct $N4MATH4VEC2E*)0ull;
		}
		label$3963:;
		label$3962:;
		if( *(int64*)A$1 == 0ll ) goto label$3966;
		{
			struct $N4MATH4VEC2E* TMP$1576$3;
			uint64 TMP$1577$3;
			struct $N4MATH4VEC2E* TMP$1578$3;
			*(int64*)THIS$1 = *(int64*)A$1;
			void* vr$10 = malloc( *(uint64*)A$1 << (4ull & 63ll) );
			TMP$1576$3 = (struct $N4MATH4VEC2E*)vr$10;
			if( TMP$1576$3 == (struct $N4MATH4VEC2E*)0ull ) goto label$3967;
			TMP$1578$3 = TMP$1576$3;
			TMP$1577$3 = *(uint64*)A$1;
			label$3968:;
			if( TMP$1577$3 == 0ull ) goto label$3969;
			_ZN4MATH4VEC2C1Ev( TMP$1578$3 );
			TMP$1578$3 = (struct $N4MATH4VEC2E*)((uint8*)TMP$1578$3 + 16ll);
			TMP$1577$3 = TMP$1577$3 + 18446744073709551615ull;
			goto label$3968;
			label$3969:;
			label$3967:;
			*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) = TMP$1576$3;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1579$4;
				TMP$1579$4 = *(int64*)A$1 + -1ll;
				goto label$3970;
				label$3973:;
				{
					_ZN4MATH4VEC2aSERKS0_( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))), (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)A$1 + 8ll) + (I$4 << (4ll & 63ll))) );
				}
				label$3971:;
				I$4 = I$4 + 1ll;
				label$3970:;
				if( I$4 <= TMP$1579$4 ) goto label$3973;
				label$3972:;
			}
		}
		label$3966:;
		label$3965:;
	}
	label$3961:;
	label$3960:;
	label$3959:;
}

struct $N4MATH4VEC2E* _ZNK4MATH7V2ARRAY11DATA__get__Ev( struct $N4MATH7V2ARRAYE* THIS$1 )
{
	struct $N4MATH4VEC2E* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$3974:;
	fb$result$1 = *(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll);
	goto label$3975;
	label$3975:;
	return fb$result$1;
}

void _ZN4MATH7V2ARRAY13LENGTH__set__ERKu7INTEGER( struct $N4MATH7V2ARRAYE* THIS$1, int64* L$1 )
{
	label$3976:;
	if( *L$1 <= 0ll ) goto label$3979;
	{
		if( *(int64*)THIS$1 <= 0ll ) goto label$3981;
		{
			if( *L$1 == *(int64*)THIS$1 ) goto label$3983;
			{
				struct $N4MATH4VEC2E* TMP$1580$4;
				uint64 TMP$1581$4;
				struct $N4MATH4VEC2E* TMP$1582$4;
				struct $N4MATH4VEC2E* Q$4;
				void* vr$6 = malloc( *(uint64*)L$1 << (4ull & 63ll) );
				TMP$1580$4 = (struct $N4MATH4VEC2E*)vr$6;
				if( TMP$1580$4 == (struct $N4MATH4VEC2E*)0ull ) goto label$3984;
				TMP$1582$4 = TMP$1580$4;
				TMP$1581$4 = *(uint64*)L$1;
				label$3985:;
				if( TMP$1581$4 == 0ull ) goto label$3986;
				_ZN4MATH4VEC2C1Ev( TMP$1582$4 );
				TMP$1582$4 = (struct $N4MATH4VEC2E*)((uint8*)TMP$1582$4 + 16ll);
				TMP$1581$4 = TMP$1581$4 + 18446744073709551615ull;
				goto label$3985;
				label$3986:;
				label$3984:;
				Q$4 = TMP$1580$4;
				{
					int64 TMP$1583$5;
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1584$5;
					if( *L$1 >= *(int64*)THIS$1 ) goto label$3987;
					TMP$1583$5 = *L$1;
					goto label$4000;
					label$3987:;
					TMP$1583$5 = *(int64*)THIS$1;
					label$4000:;
					TMP$1584$5 = TMP$1583$5 + -1ll;
					goto label$3988;
					label$3991:;
					{
						_ZN4MATH4VEC2aSERKS0_( (struct $N4MATH4VEC2E*)((uint8*)Q$4 + (I$5 << (4ll & 63ll))), (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
					}
					label$3989:;
					I$5 = I$5 + 1ll;
					label$3988:;
					if( I$5 <= TMP$1584$5 ) goto label$3991;
					label$3990:;
				}
				*(int64*)THIS$1 = *L$1;
				if( *(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC2E*)0ull ) goto label$3992;
				free( *(void**)((uint8*)THIS$1 + 8ll) );
				label$3992:;
				*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) = Q$4;
			}
			label$3983:;
			label$3982:;
		}
		goto label$3980;
		label$3981:;
		{
			struct $N4MATH4VEC2E* TMP$1585$3;
			uint64 TMP$1586$3;
			struct $N4MATH4VEC2E* TMP$1587$3;
			*(int64*)THIS$1 = *L$1;
			void* vr$30 = malloc( *(uint64*)THIS$1 << (4ull & 63ll) );
			TMP$1585$3 = (struct $N4MATH4VEC2E*)vr$30;
			if( TMP$1585$3 == (struct $N4MATH4VEC2E*)0ull ) goto label$3993;
			TMP$1587$3 = TMP$1585$3;
			TMP$1586$3 = *(uint64*)THIS$1;
			label$3994:;
			if( TMP$1586$3 == 0ull ) goto label$3995;
			_ZN4MATH4VEC2C1Ev( TMP$1587$3 );
			TMP$1587$3 = (struct $N4MATH4VEC2E*)((uint8*)TMP$1587$3 + 16ll);
			TMP$1586$3 = TMP$1586$3 + 18446744073709551615ull;
			goto label$3994;
			label$3995:;
			label$3993:;
			*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) = TMP$1585$3;
		}
		label$3980:;
	}
	goto label$3978;
	label$3979:;
	if( *L$1 != 0ll ) goto label$3996;
	{
		if( *(int64*)THIS$1 <= 0ll ) goto label$3998;
		{
			*(int64*)THIS$1 = 0ll;
			if( *(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC2E*)0ull ) goto label$3999;
			free( *(void**)((uint8*)THIS$1 + 8ll) );
			label$3999:;
			*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) = (struct $N4MATH4VEC2E*)0ull;
		}
		label$3998:;
		label$3997:;
	}
	label$3996:;
	label$3978:;
	label$3977:;
}

double _ZNK4MATH7V2ARRAY11XMAX__get__Ev( struct $N4MATH7V2ARRAYE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$4001:;
	{
		int64 TMP$1588$2;
		TMP$1588$2 = *(int64*)THIS$1;
		if( TMP$1588$2 != 0ll ) goto label$4004;
		label$4005:;
		{
			fb$result$1 = 0x0p+0;
			goto label$4002;
		}
		goto label$4003;
		label$4004:;
		if( TMP$1588$2 != 1ll ) goto label$4006;
		label$4007:;
		{
			fb$result$1 = *(double*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll);
			goto label$4002;
		}
		goto label$4003;
		label$4006:;
		{
			double R$3;
			R$3 = *(double*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll);
			{
				int64 I$4;
				I$4 = 1ll;
				int64 TMP$1589$4;
				TMP$1589$4 = *(int64*)THIS$1 + -1ll;
				goto label$4009;
				label$4012:;
				{
					if( R$3 >= *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) ) goto label$4014;
					{
						R$3 = *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll)));
						label$4014:;
					}
				}
				label$4010:;
				I$4 = I$4 + 1ll;
				label$4009:;
				if( I$4 <= TMP$1589$4 ) goto label$4012;
				label$4011:;
			}
			fb$result$1 = R$3;
			goto label$4002;
		}
		label$4008:;
		label$4003:;
	}
	label$4002:;
	return fb$result$1;
}

double _ZNK4MATH7V2ARRAY11XMIN__get__Ev( struct $N4MATH7V2ARRAYE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$4015:;
	{
		int64 TMP$1590$2;
		TMP$1590$2 = *(int64*)THIS$1;
		if( TMP$1590$2 != 0ll ) goto label$4018;
		label$4019:;
		{
			fb$result$1 = 0x0p+0;
			goto label$4016;
		}
		goto label$4017;
		label$4018:;
		if( TMP$1590$2 != 1ll ) goto label$4020;
		label$4021:;
		{
			fb$result$1 = *(double*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll);
			goto label$4016;
		}
		goto label$4017;
		label$4020:;
		{
			double R$3;
			R$3 = *(double*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll);
			{
				int64 I$4;
				I$4 = 1ll;
				int64 TMP$1591$4;
				TMP$1591$4 = *(int64*)THIS$1 + -1ll;
				goto label$4023;
				label$4026:;
				{
					if( *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) >= R$3 ) goto label$4028;
					{
						R$3 = *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll)));
						label$4028:;
					}
				}
				label$4024:;
				I$4 = I$4 + 1ll;
				label$4023:;
				if( I$4 <= TMP$1591$4 ) goto label$4026;
				label$4025:;
			}
			fb$result$1 = R$3;
			goto label$4016;
		}
		label$4022:;
		label$4017:;
	}
	label$4016:;
	return fb$result$1;
}

double _ZNK4MATH7V2ARRAY11YMAX__get__Ev( struct $N4MATH7V2ARRAYE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$4029:;
	{
		int64 TMP$1592$2;
		TMP$1592$2 = *(int64*)THIS$1;
		if( TMP$1592$2 != 0ll ) goto label$4032;
		label$4033:;
		{
			fb$result$1 = 0x0p+0;
			goto label$4030;
		}
		goto label$4031;
		label$4032:;
		if( TMP$1592$2 != 1ll ) goto label$4034;
		label$4035:;
		{
			fb$result$1 = *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + 8ll);
			goto label$4030;
		}
		goto label$4031;
		label$4034:;
		{
			double R$3;
			R$3 = *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + 8ll);
			{
				int64 I$4;
				I$4 = 1ll;
				int64 TMP$1593$4;
				TMP$1593$4 = *(int64*)THIS$1 + -1ll;
				goto label$4037;
				label$4040:;
				{
					if( R$3 >= *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) + 8ll) ) goto label$4042;
					{
						R$3 = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) + 8ll);
						label$4042:;
					}
				}
				label$4038:;
				I$4 = I$4 + 1ll;
				label$4037:;
				if( I$4 <= TMP$1593$4 ) goto label$4040;
				label$4039:;
			}
			fb$result$1 = R$3;
			goto label$4030;
		}
		label$4036:;
		label$4031:;
	}
	label$4030:;
	return fb$result$1;
}

double _ZNK4MATH7V2ARRAY11YMIN__get__Ev( struct $N4MATH7V2ARRAYE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$4043:;
	{
		int64 TMP$1594$2;
		TMP$1594$2 = *(int64*)THIS$1;
		if( TMP$1594$2 != 0ll ) goto label$4046;
		label$4047:;
		{
			fb$result$1 = 0x0p+0;
			goto label$4044;
		}
		goto label$4045;
		label$4046:;
		if( TMP$1594$2 != 1ll ) goto label$4048;
		label$4049:;
		{
			fb$result$1 = *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + 8ll);
			goto label$4044;
		}
		goto label$4045;
		label$4048:;
		{
			double R$3;
			R$3 = *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + 8ll);
			{
				int64 I$4;
				I$4 = 1ll;
				int64 TMP$1595$4;
				TMP$1595$4 = *(int64*)THIS$1 + -1ll;
				goto label$4051;
				label$4054:;
				{
					if( *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) + 8ll) >= R$3 ) goto label$4056;
					{
						R$3 = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) + 8ll);
						label$4056:;
					}
				}
				label$4052:;
				I$4 = I$4 + 1ll;
				label$4051:;
				if( I$4 <= TMP$1595$4 ) goto label$4054;
				label$4053:;
			}
			fb$result$1 = R$3;
			goto label$4044;
		}
		label$4050:;
		label$4045:;
	}
	label$4044:;
	return fb$result$1;
}

boolean _ZN4MATH7V2ARRAY7FOREACHEPFvRNS_4VEC2EERKb( struct $N4MATH7V2ARRAYE* THIS$1, tmp$1491 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4057:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4060;
	{
		if( F$1 == (tmp$1491)0ull ) goto label$4062;
		{
			if( *R$1 == (boolean)0ll ) goto label$4064;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4065;
					label$4068:;
					{
						(F$1)( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
					}
					label$4066:;
					I$5 = I$5 + -1ll;
					label$4065:;
					if( I$5 >= 0ll ) goto label$4068;
					label$4067:;
				}
			}
			goto label$4063;
			label$4064:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1596$5;
					TMP$1596$5 = *(int64*)THIS$1 + -1ll;
					goto label$4069;
					label$4072:;
					{
						(F$1)( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
					}
					label$4070:;
					I$5 = I$5 + 1ll;
					label$4069:;
					if( I$5 <= TMP$1596$5 ) goto label$4072;
					label$4071:;
				}
			}
			label$4063:;
			fb$result$1 = (boolean)1ll;
			goto label$4058;
		}
		label$4062:;
		label$4061:;
	}
	label$4060:;
	label$4059:;
	fb$result$1 = (boolean)0ll;
	goto label$4058;
	label$4058:;
	return fb$result$1;
}

boolean _ZN4MATH7V2ARRAY7FOREACHEPFbRNS_4VEC2EERKb( struct $N4MATH7V2ARRAYE* THIS$1, tmp$1493 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4073:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4076;
	{
		if( F$1 == (tmp$1493)0ull ) goto label$4078;
		{
			if( *R$1 == (boolean)0ll ) goto label$4080;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4081;
					label$4084:;
					{
						boolean vr$8 = (F$1)( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
						if( vr$8 != (boolean)0ll ) goto label$4086;
						{
							goto label$4083;
						}
						label$4086:;
						label$4085:;
					}
					label$4082:;
					I$5 = I$5 + -1ll;
					label$4081:;
					if( I$5 >= 0ll ) goto label$4084;
					label$4083:;
				}
			}
			goto label$4079;
			label$4080:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1597$5;
					TMP$1597$5 = *(int64*)THIS$1 + -1ll;
					goto label$4087;
					label$4090:;
					{
						boolean vr$15 = (F$1)( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
						if( vr$15 != (boolean)0ll ) goto label$4092;
						{
							goto label$4089;
						}
						label$4092:;
						label$4091:;
					}
					label$4088:;
					I$5 = I$5 + 1ll;
					label$4087:;
					if( I$5 <= TMP$1597$5 ) goto label$4090;
					label$4089:;
				}
			}
			label$4079:;
			fb$result$1 = (boolean)1ll;
			goto label$4074;
		}
		label$4078:;
		label$4077:;
	}
	label$4076:;
	label$4075:;
	fb$result$1 = (boolean)0ll;
	goto label$4074;
	label$4074:;
	return fb$result$1;
}

boolean _ZN4MATH7V2ARRAY7FOREACHEPFvRNS_4VEC2ERKu7INTEGERERKb( struct $N4MATH7V2ARRAYE* THIS$1, tmp$1492 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4093:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4096;
	{
		if( F$1 == (tmp$1492)0ull ) goto label$4098;
		{
			if( *R$1 == (boolean)0ll ) goto label$4100;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4101;
					label$4104:;
					{
						(F$1)( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
					}
					label$4102:;
					I$5 = I$5 + -1ll;
					label$4101:;
					if( I$5 >= 0ll ) goto label$4104;
					label$4103:;
				}
			}
			goto label$4099;
			label$4100:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1598$5;
					TMP$1598$5 = *(int64*)THIS$1 + -1ll;
					goto label$4105;
					label$4108:;
					{
						(F$1)( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
					}
					label$4106:;
					I$5 = I$5 + 1ll;
					label$4105:;
					if( I$5 <= TMP$1598$5 ) goto label$4108;
					label$4107:;
				}
			}
			label$4099:;
			fb$result$1 = (boolean)1ll;
			goto label$4094;
		}
		label$4098:;
		label$4097:;
	}
	label$4096:;
	label$4095:;
	fb$result$1 = (boolean)0ll;
	goto label$4094;
	label$4094:;
	return fb$result$1;
}

boolean _ZN4MATH7V2ARRAY7FOREACHEPFbRNS_4VEC2ERKu7INTEGERERKb( struct $N4MATH7V2ARRAYE* THIS$1, tmp$1494 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4109:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4112;
	{
		if( F$1 == (tmp$1494)0ull ) goto label$4114;
		{
			if( *R$1 == (boolean)0ll ) goto label$4116;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4117;
					label$4120:;
					{
						boolean vr$9 = (F$1)( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
						if( vr$9 != (boolean)0ll ) goto label$4122;
						{
							goto label$4119;
						}
						label$4122:;
						label$4121:;
					}
					label$4118:;
					I$5 = I$5 + -1ll;
					label$4117:;
					if( I$5 >= 0ll ) goto label$4120;
					label$4119:;
				}
			}
			goto label$4115;
			label$4116:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1599$5;
					TMP$1599$5 = *(int64*)THIS$1 + -1ll;
					goto label$4123;
					label$4126:;
					{
						boolean vr$17 = (F$1)( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
						if( vr$17 != (boolean)0ll ) goto label$4128;
						{
							goto label$4125;
						}
						label$4128:;
						label$4127:;
					}
					label$4124:;
					I$5 = I$5 + 1ll;
					label$4123:;
					if( I$5 <= TMP$1599$5 ) goto label$4126;
					label$4125:;
				}
			}
			label$4115:;
			fb$result$1 = (boolean)1ll;
			goto label$4110;
		}
		label$4114:;
		label$4113:;
	}
	label$4112:;
	label$4111:;
	fb$result$1 = (boolean)0ll;
	goto label$4110;
	label$4110:;
	return fb$result$1;
}

boolean _ZN4MATH7V2ARRAY8FOREACHXEPFvRdERKb( struct $N4MATH7V2ARRAYE* THIS$1, tmp$1293 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4129:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4132;
	{
		if( F$1 == (tmp$1293)0ull ) goto label$4134;
		{
			if( *R$1 == (boolean)0ll ) goto label$4136;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4137;
					label$4140:;
					{
						(F$1)( (double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
					}
					label$4138:;
					I$5 = I$5 + -1ll;
					label$4137:;
					if( I$5 >= 0ll ) goto label$4140;
					label$4139:;
				}
			}
			goto label$4135;
			label$4136:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1600$5;
					TMP$1600$5 = *(int64*)THIS$1 + -1ll;
					goto label$4141;
					label$4144:;
					{
						(F$1)( (double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
					}
					label$4142:;
					I$5 = I$5 + 1ll;
					label$4141:;
					if( I$5 <= TMP$1600$5 ) goto label$4144;
					label$4143:;
				}
			}
			label$4135:;
			fb$result$1 = (boolean)1ll;
			goto label$4130;
		}
		label$4134:;
		label$4133:;
	}
	label$4132:;
	label$4131:;
	fb$result$1 = (boolean)0ll;
	goto label$4130;
	label$4130:;
	return fb$result$1;
}

boolean _ZN4MATH7V2ARRAY8FOREACHXEPFbRdERKb( struct $N4MATH7V2ARRAYE* THIS$1, tmp$1295 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4145:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4148;
	{
		if( F$1 == (tmp$1295)0ull ) goto label$4150;
		{
			if( *R$1 == (boolean)0ll ) goto label$4152;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4153;
					label$4156:;
					{
						boolean vr$9 = (F$1)( (double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
						if( vr$9 != (boolean)0ll ) goto label$4158;
						{
							goto label$4155;
						}
						label$4158:;
						label$4157:;
					}
					label$4154:;
					I$5 = I$5 + -1ll;
					label$4153:;
					if( I$5 >= 0ll ) goto label$4156;
					label$4155:;
				}
			}
			goto label$4151;
			label$4152:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1601$5;
					TMP$1601$5 = *(int64*)THIS$1 + -1ll;
					goto label$4159;
					label$4162:;
					{
						boolean vr$17 = (F$1)( (double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
						if( vr$17 != (boolean)0ll ) goto label$4164;
						{
							goto label$4161;
						}
						label$4164:;
						label$4163:;
					}
					label$4160:;
					I$5 = I$5 + 1ll;
					label$4159:;
					if( I$5 <= TMP$1601$5 ) goto label$4162;
					label$4161:;
				}
			}
			label$4151:;
			fb$result$1 = (boolean)1ll;
			goto label$4146;
		}
		label$4150:;
		label$4149:;
	}
	label$4148:;
	label$4147:;
	fb$result$1 = (boolean)0ll;
	goto label$4146;
	label$4146:;
	return fb$result$1;
}

boolean _ZN4MATH7V2ARRAY8FOREACHXEPFvRdRKu7INTEGERERKb( struct $N4MATH7V2ARRAYE* THIS$1, tmp$1294 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4165:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4168;
	{
		if( F$1 == (tmp$1294)0ull ) goto label$4170;
		{
			if( *R$1 == (boolean)0ll ) goto label$4172;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4173;
					label$4176:;
					{
						(F$1)( (double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
					}
					label$4174:;
					I$5 = I$5 + -1ll;
					label$4173:;
					if( I$5 >= 0ll ) goto label$4176;
					label$4175:;
				}
			}
			goto label$4171;
			label$4172:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1602$5;
					TMP$1602$5 = *(int64*)THIS$1 + -1ll;
					goto label$4177;
					label$4180:;
					{
						(F$1)( (double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
					}
					label$4178:;
					I$5 = I$5 + 1ll;
					label$4177:;
					if( I$5 <= TMP$1602$5 ) goto label$4180;
					label$4179:;
				}
			}
			label$4171:;
			fb$result$1 = (boolean)1ll;
			goto label$4166;
		}
		label$4170:;
		label$4169:;
	}
	label$4168:;
	label$4167:;
	fb$result$1 = (boolean)0ll;
	goto label$4166;
	label$4166:;
	return fb$result$1;
}

boolean _ZN4MATH7V2ARRAY8FOREACHXEPFbRdRKu7INTEGERERKb( struct $N4MATH7V2ARRAYE* THIS$1, tmp$1296 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4181:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4184;
	{
		if( F$1 == (tmp$1296)0ull ) goto label$4186;
		{
			if( *R$1 == (boolean)0ll ) goto label$4188;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4189;
					label$4192:;
					{
						boolean vr$10 = (F$1)( (double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
						if( vr$10 != (boolean)0ll ) goto label$4194;
						{
							goto label$4191;
						}
						label$4194:;
						label$4193:;
					}
					label$4190:;
					I$5 = I$5 + -1ll;
					label$4189:;
					if( I$5 >= 0ll ) goto label$4192;
					label$4191:;
				}
			}
			goto label$4187;
			label$4188:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1603$5;
					TMP$1603$5 = *(int64*)THIS$1 + -1ll;
					goto label$4195;
					label$4198:;
					{
						boolean vr$19 = (F$1)( (double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
						if( vr$19 != (boolean)0ll ) goto label$4200;
						{
							goto label$4197;
						}
						label$4200:;
						label$4199:;
					}
					label$4196:;
					I$5 = I$5 + 1ll;
					label$4195:;
					if( I$5 <= TMP$1603$5 ) goto label$4198;
					label$4197:;
				}
			}
			label$4187:;
			fb$result$1 = (boolean)1ll;
			goto label$4182;
		}
		label$4186:;
		label$4185:;
	}
	label$4184:;
	label$4183:;
	fb$result$1 = (boolean)0ll;
	goto label$4182;
	label$4182:;
	return fb$result$1;
}

boolean _ZN4MATH7V2ARRAY8FOREACHYEPFvRdERKb( struct $N4MATH7V2ARRAYE* THIS$1, tmp$1293 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4201:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4204;
	{
		if( F$1 == (tmp$1293)0ull ) goto label$4206;
		{
			if( *R$1 == (boolean)0ll ) goto label$4208;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4209;
					label$4212:;
					{
						(F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) );
					}
					label$4210:;
					I$5 = I$5 + -1ll;
					label$4209:;
					if( I$5 >= 0ll ) goto label$4212;
					label$4211:;
				}
			}
			goto label$4207;
			label$4208:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1604$5;
					TMP$1604$5 = *(int64*)THIS$1 + -1ll;
					goto label$4213;
					label$4216:;
					{
						(F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) );
					}
					label$4214:;
					I$5 = I$5 + 1ll;
					label$4213:;
					if( I$5 <= TMP$1604$5 ) goto label$4216;
					label$4215:;
				}
			}
			label$4207:;
			fb$result$1 = (boolean)1ll;
			goto label$4202;
		}
		label$4206:;
		label$4205:;
	}
	label$4204:;
	label$4203:;
	fb$result$1 = (boolean)0ll;
	goto label$4202;
	label$4202:;
	return fb$result$1;
}

boolean _ZN4MATH7V2ARRAY8FOREACHYEPFbRdERKb( struct $N4MATH7V2ARRAYE* THIS$1, tmp$1295 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4217:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4220;
	{
		if( F$1 == (tmp$1295)0ull ) goto label$4222;
		{
			if( *R$1 == (boolean)0ll ) goto label$4224;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4225;
					label$4228:;
					{
						boolean vr$9 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) );
						if( vr$9 != (boolean)0ll ) goto label$4230;
						{
							goto label$4227;
						}
						label$4230:;
						label$4229:;
					}
					label$4226:;
					I$5 = I$5 + -1ll;
					label$4225:;
					if( I$5 >= 0ll ) goto label$4228;
					label$4227:;
				}
			}
			goto label$4223;
			label$4224:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1605$5;
					TMP$1605$5 = *(int64*)THIS$1 + -1ll;
					goto label$4231;
					label$4234:;
					{
						boolean vr$17 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) );
						if( vr$17 != (boolean)0ll ) goto label$4236;
						{
							goto label$4233;
						}
						label$4236:;
						label$4235:;
					}
					label$4232:;
					I$5 = I$5 + 1ll;
					label$4231:;
					if( I$5 <= TMP$1605$5 ) goto label$4234;
					label$4233:;
				}
			}
			label$4223:;
			fb$result$1 = (boolean)1ll;
			goto label$4218;
		}
		label$4222:;
		label$4221:;
	}
	label$4220:;
	label$4219:;
	fb$result$1 = (boolean)0ll;
	goto label$4218;
	label$4218:;
	return fb$result$1;
}

boolean _ZN4MATH7V2ARRAY8FOREACHYEPFvRdRKu7INTEGERERKb( struct $N4MATH7V2ARRAYE* THIS$1, tmp$1294 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4237:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4240;
	{
		if( F$1 == (tmp$1294)0ull ) goto label$4242;
		{
			if( *R$1 == (boolean)0ll ) goto label$4244;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4245;
					label$4248:;
					{
						(F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll), (int64*)&I$5 );
					}
					label$4246:;
					I$5 = I$5 + -1ll;
					label$4245:;
					if( I$5 >= 0ll ) goto label$4248;
					label$4247:;
				}
			}
			goto label$4243;
			label$4244:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1606$5;
					TMP$1606$5 = *(int64*)THIS$1 + -1ll;
					goto label$4249;
					label$4252:;
					{
						(F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll), (int64*)&I$5 );
					}
					label$4250:;
					I$5 = I$5 + 1ll;
					label$4249:;
					if( I$5 <= TMP$1606$5 ) goto label$4252;
					label$4251:;
				}
			}
			label$4243:;
			fb$result$1 = (boolean)1ll;
			goto label$4238;
		}
		label$4242:;
		label$4241:;
	}
	label$4240:;
	label$4239:;
	fb$result$1 = (boolean)0ll;
	goto label$4238;
	label$4238:;
	return fb$result$1;
}

boolean _ZN4MATH7V2ARRAY8FOREACHYEPFbRdRKu7INTEGERERKb( struct $N4MATH7V2ARRAYE* THIS$1, tmp$1296 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4253:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4256;
	{
		if( F$1 == (tmp$1296)0ull ) goto label$4258;
		{
			if( *R$1 == (boolean)0ll ) goto label$4260;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4261;
					label$4264:;
					{
						boolean vr$10 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll), (int64*)&I$5 );
						if( vr$10 != (boolean)0ll ) goto label$4266;
						{
							goto label$4263;
						}
						label$4266:;
						label$4265:;
					}
					label$4262:;
					I$5 = I$5 + -1ll;
					label$4261:;
					if( I$5 >= 0ll ) goto label$4264;
					label$4263:;
				}
			}
			goto label$4259;
			label$4260:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1607$5;
					TMP$1607$5 = *(int64*)THIS$1 + -1ll;
					goto label$4267;
					label$4270:;
					{
						boolean vr$19 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll), (int64*)&I$5 );
						if( vr$19 != (boolean)0ll ) goto label$4272;
						{
							goto label$4269;
						}
						label$4272:;
						label$4271:;
					}
					label$4268:;
					I$5 = I$5 + 1ll;
					label$4267:;
					if( I$5 <= TMP$1607$5 ) goto label$4270;
					label$4269:;
				}
			}
			label$4259:;
			fb$result$1 = (boolean)1ll;
			goto label$4254;
		}
		label$4258:;
		label$4257:;
	}
	label$4256:;
	label$4255:;
	fb$result$1 = (boolean)0ll;
	goto label$4254;
	label$4254:;
	return fb$result$1;
}

boolean _ZNK4MATH7V2ARRAY3MAPERS0_PFNS_4VEC2ERKS2_E( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH7V2ARRAYE* A$1, tmp$1495 F$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4273:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4276;
	{
		if( F$1 == (tmp$1495)0ull ) goto label$4278;
		{
			_ZN4MATH7V2ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1608$4;
				TMP$1608$4 = *(int64*)THIS$1 + -1ll;
				goto label$4279;
				label$4282:;
				{
					struct $N4MATH4VEC2E TMP$1609$5;
					struct $N4MATH4VEC2E vr$9 = (F$1)( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) );
					TMP$1609$5 = vr$9;
					_ZN4MATH4VEC2aSERKS0_( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)A$1 + 8ll) + (I$4 << (4ll & 63ll))), (struct $N4MATH4VEC2E*)&TMP$1609$5 );
				}
				label$4280:;
				I$4 = I$4 + 1ll;
				label$4279:;
				if( I$4 <= TMP$1608$4 ) goto label$4282;
				label$4281:;
			}
			fb$result$1 = (boolean)1ll;
			goto label$4274;
		}
		label$4278:;
		label$4277:;
	}
	label$4276:;
	label$4275:;
	fb$result$1 = (boolean)0ll;
	goto label$4274;
	label$4274:;
	return fb$result$1;
}

boolean _ZNK4MATH7V2ARRAY4MAPXERNS_5ARRAYE( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4283:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4286;
	{
		_ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
		double* P$2;
		double* vr$4 = _ZNK4MATH5ARRAY11DATA__get__Ev( (struct $N4MATH5ARRAYE*)A$1 );
		P$2 = vr$4;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1610$3;
			TMP$1610$3 = *(int64*)THIS$1 + -1ll;
			goto label$4287;
			label$4290:;
			{
				*(double*)((uint8*)P$2 + (I$3 << (3ll & 63ll))) = *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll)));
			}
			label$4288:;
			I$3 = I$3 + 1ll;
			label$4287:;
			if( I$3 <= TMP$1610$3 ) goto label$4290;
			label$4289:;
		}
		fb$result$1 = (boolean)1ll;
		goto label$4284;
	}
	label$4286:;
	label$4285:;
	fb$result$1 = (boolean)0ll;
	goto label$4284;
	label$4284:;
	return fb$result$1;
}

boolean _ZNK4MATH7V2ARRAY4MAPXERNS_5ARRAYEPFdRKdE( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1, tmp$1297 F$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4291:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4294;
	{
		if( F$1 == (tmp$1297)0ull ) goto label$4296;
		{
			_ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
			double* P$3;
			double* vr$4 = _ZNK4MATH5ARRAY11DATA__get__Ev( (struct $N4MATH5ARRAYE*)A$1 );
			P$3 = vr$4;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1611$4;
				TMP$1611$4 = *(int64*)THIS$1 + -1ll;
				goto label$4297;
				label$4300:;
				{
					double vr$11 = (F$1)( (double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) );
					*(double*)((uint8*)P$3 + (I$4 << (3ll & 63ll))) = vr$11;
				}
				label$4298:;
				I$4 = I$4 + 1ll;
				label$4297:;
				if( I$4 <= TMP$1611$4 ) goto label$4300;
				label$4299:;
			}
			fb$result$1 = (boolean)1ll;
			goto label$4292;
		}
		label$4296:;
		label$4295:;
	}
	label$4294:;
	label$4293:;
	fb$result$1 = (boolean)0ll;
	goto label$4292;
	label$4292:;
	return fb$result$1;
}

boolean _ZNK4MATH7V2ARRAY4MAPYERNS_5ARRAYE( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4301:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4304;
	{
		_ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
		double* P$2;
		double* vr$4 = _ZNK4MATH5ARRAY11DATA__get__Ev( (struct $N4MATH5ARRAYE*)A$1 );
		P$2 = vr$4;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1612$3;
			TMP$1612$3 = *(int64*)THIS$1 + -1ll;
			goto label$4305;
			label$4308:;
			{
				*(double*)((uint8*)P$2 + (I$3 << (3ll & 63ll))) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll);
			}
			label$4306:;
			I$3 = I$3 + 1ll;
			label$4305:;
			if( I$3 <= TMP$1612$3 ) goto label$4308;
			label$4307:;
		}
		fb$result$1 = (boolean)1ll;
		goto label$4302;
	}
	label$4304:;
	label$4303:;
	fb$result$1 = (boolean)0ll;
	goto label$4302;
	label$4302:;
	return fb$result$1;
}

boolean _ZNK4MATH7V2ARRAY4MAPYERNS_5ARRAYEPFdRKdE( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1, tmp$1297 F$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4309:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4312;
	{
		if( F$1 == (tmp$1297)0ull ) goto label$4314;
		{
			_ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
			double* P$3;
			double* vr$4 = _ZNK4MATH5ARRAY11DATA__get__Ev( (struct $N4MATH5ARRAYE*)A$1 );
			P$3 = vr$4;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1613$4;
				TMP$1613$4 = *(int64*)THIS$1 + -1ll;
				goto label$4315;
				label$4318:;
				{
					double vr$11 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) + 8ll) );
					*(double*)((uint8*)P$3 + (I$4 << (3ll & 63ll))) = vr$11;
				}
				label$4316:;
				I$4 = I$4 + 1ll;
				label$4315:;
				if( I$4 <= TMP$1613$4 ) goto label$4318;
				label$4317:;
			}
			fb$result$1 = (boolean)1ll;
			goto label$4310;
		}
		label$4314:;
		label$4313:;
	}
	label$4312:;
	label$4311:;
	fb$result$1 = (boolean)0ll;
	goto label$4310;
	label$4310:;
	return fb$result$1;
}

FBSTRING* _ZNK4MATH7V2ARRAY6TOJSONERKb( struct $N4MATH7V2ARRAYE* THIS$1, boolean* A$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$4319:;
	{
		int64 TMP$1614$2;
		TMP$1614$2 = *(int64*)THIS$1;
		if( TMP$1614$2 != 0ll ) goto label$4322;
		label$4323:;
		{
			fb_StrInit( (void*)&fb$result$1, -1ll, (void*)"[]", 3ll, 0 );
			goto label$4320;
		}
		goto label$4321;
		label$4322:;
		if( TMP$1614$2 != 1ll ) goto label$4324;
		label$4325:;
		{
			FBSTRING TMP$1615$3;
			FBSTRING TMP$1616$3;
			FBSTRING* vr$4 = _ZNK4MATH4VEC26TOJSONERKb( *(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll), A$1 );
			__builtin_memset( &TMP$1615$3, 0, 24ll );
			FBSTRING* vr$7 = fb_StrConcat( &TMP$1615$3, (void*)"[", 2ll, (void*)vr$4, -1ll );
			__builtin_memset( &TMP$1616$3, 0, 24ll );
			FBSTRING* vr$10 = fb_StrConcat( &TMP$1616$3, (void*)vr$7, -1ll, (void*)"]", 2ll );
			fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$10, -1ll, 0 );
			goto label$4320;
		}
		goto label$4321;
		label$4324:;
		{
			FBSTRING TMP$1617$3;
			FBSTRING TMP$1621$3;
			FBSTRING R$3;
			FBSTRING* vr$13 = _ZNK4MATH4VEC26TOJSONERKb( *(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll), A$1 );
			__builtin_memset( &TMP$1617$3, 0, 24ll );
			FBSTRING* vr$16 = fb_StrConcat( &TMP$1617$3, (void*)"[", 2ll, (void*)vr$13, -1ll );
			fb_StrInit( (void*)&R$3, -1ll, (void*)vr$16, -1ll, 0 );
			{
				int64 I$4;
				I$4 = 1ll;
				int64 TMP$1618$4;
				TMP$1618$4 = *(int64*)THIS$1 + -1ll;
				goto label$4327;
				label$4330:;
				{
					FBSTRING TMP$1619$5;
					FBSTRING TMP$1620$5;
					FBSTRING* vr$23 = _ZNK4MATH4VEC26TOJSONERKb( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))), A$1 );
					__builtin_memset( &TMP$1619$5, 0, 24ll );
					FBSTRING* vr$26 = fb_StrConcat( &TMP$1619$5, (void*)",", 2ll, (void*)vr$23, -1ll );
					__builtin_memset( &TMP$1620$5, 0, 24ll );
					FBSTRING* vr$30 = fb_StrConcat( &TMP$1620$5, (void*)&R$3, -1ll, (void*)vr$26, -1ll );
					fb_StrAssign( (void*)&R$3, -1ll, (void*)vr$30, -1ll, 0 );
				}
				label$4328:;
				I$4 = I$4 + 1ll;
				label$4327:;
				if( I$4 <= TMP$1618$4 ) goto label$4330;
				label$4329:;
			}
			__builtin_memset( &TMP$1621$3, 0, 24ll );
			FBSTRING* vr$36 = fb_StrConcat( &TMP$1621$3, (void*)&R$3, -1ll, (void*)"]", 2ll );
			fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$36, -1ll, 0 );
			fb_StrDelete( (FBSTRING*)&R$3 );
			goto label$4320;
			fb_StrDelete( (FBSTRING*)&R$3 );
		}
		label$4326:;
		label$4321:;
	}
	label$4320:;
	FBSTRING* vr$41 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$41;
}

void _ZN4MATH7V3ARRAYC1Ev( struct $N4MATH7V3ARRAYE* THIS$1 )
{
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC3C1Ev( (struct $N4MATH4VEC3E*)((uint8*)THIS$1 + 16ll) );
	label$4331:;
	label$4332:;
}

void _ZN4MATH7V3ARRAYC1ERKu7INTEGER( struct $N4MATH7V3ARRAYE* THIS$1, int64* L$1 )
{
	label$4333:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC3C1Ev( (struct $N4MATH4VEC3E*)((uint8*)THIS$1 + 16ll) );
	if( *L$1 <= 0ll ) goto label$4336;
	{
		struct $N4MATH4VEC3E* TMP$1627$2;
		uint64 TMP$1628$2;
		struct $N4MATH4VEC3E* TMP$1629$2;
		*(int64*)THIS$1 = *L$1;
		void* vr$11 = malloc( *(uint64*)L$1 * 24ull );
		TMP$1627$2 = (struct $N4MATH4VEC3E*)vr$11;
		if( TMP$1627$2 == (struct $N4MATH4VEC3E*)0ull ) goto label$4337;
		TMP$1629$2 = TMP$1627$2;
		TMP$1628$2 = *(uint64*)L$1;
		label$4338:;
		if( TMP$1628$2 == 0ull ) goto label$4339;
		_ZN4MATH4VEC3C1Ev( TMP$1629$2 );
		TMP$1629$2 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1629$2 + 24ll);
		TMP$1628$2 = TMP$1628$2 + 18446744073709551615ull;
		goto label$4338;
		label$4339:;
		label$4337:;
		*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = TMP$1627$2;
	}
	label$4336:;
	label$4335:;
	label$4334:;
}

void _ZN4MATH7V3ARRAYC1ERKu7INTEGERPFvRNS_4VEC3EERKb( struct $N4MATH7V3ARRAYE* THIS$1, int64* L$1, tmp$1622 F$1, boolean* R$1 )
{
	label$4340:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC3C1Ev( (struct $N4MATH4VEC3E*)((uint8*)THIS$1 + 16ll) );
	if( *L$1 <= 0ll ) goto label$4343;
	{
		struct $N4MATH4VEC3E* TMP$1630$2;
		uint64 TMP$1631$2;
		struct $N4MATH4VEC3E* TMP$1632$2;
		*(int64*)THIS$1 = *L$1;
		void* vr$11 = malloc( *(uint64*)L$1 * 24ull );
		TMP$1630$2 = (struct $N4MATH4VEC3E*)vr$11;
		if( TMP$1630$2 == (struct $N4MATH4VEC3E*)0ull ) goto label$4344;
		TMP$1632$2 = TMP$1630$2;
		TMP$1631$2 = *(uint64*)L$1;
		label$4345:;
		if( TMP$1631$2 == 0ull ) goto label$4346;
		_ZN4MATH4VEC3C1Ev( TMP$1632$2 );
		TMP$1632$2 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1632$2 + 24ll);
		TMP$1631$2 = TMP$1631$2 + 18446744073709551615ull;
		goto label$4345;
		label$4346:;
		label$4344:;
		*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = TMP$1630$2;
		if( F$1 == (tmp$1622)0ull ) goto label$4348;
		{
			if( *R$1 == (boolean)0ll ) goto label$4350;
			{
				{
					int64 I$5;
					I$5 = *L$1 + -1ll;
					goto label$4351;
					label$4354:;
					{
						(F$1)( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) );
					}
					label$4352:;
					I$5 = I$5 + -1ll;
					label$4351:;
					if( I$5 >= 0ll ) goto label$4354;
					label$4353:;
				}
			}
			goto label$4349;
			label$4350:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1633$5;
					TMP$1633$5 = *L$1 + -1ll;
					goto label$4355;
					label$4358:;
					{
						(F$1)( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) );
					}
					label$4356:;
					I$5 = I$5 + 1ll;
					label$4355:;
					if( I$5 <= TMP$1633$5 ) goto label$4358;
					label$4357:;
				}
			}
			label$4349:;
		}
		label$4348:;
		label$4347:;
	}
	label$4343:;
	label$4342:;
	label$4341:;
}

void _ZN4MATH7V3ARRAYC1ERKu7INTEGERPFvRNS_4VEC3ES3_ERKb( struct $N4MATH7V3ARRAYE* THIS$1, int64* L$1, tmp$1623 F$1, boolean* R$1 )
{
	label$4359:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC3C1Ev( (struct $N4MATH4VEC3E*)((uint8*)THIS$1 + 16ll) );
	if( *L$1 <= 0ll ) goto label$4362;
	{
		struct $N4MATH4VEC3E* TMP$1634$2;
		uint64 TMP$1635$2;
		struct $N4MATH4VEC3E* TMP$1636$2;
		*(int64*)THIS$1 = *L$1;
		void* vr$11 = malloc( *(uint64*)L$1 * 24ull );
		TMP$1634$2 = (struct $N4MATH4VEC3E*)vr$11;
		if( TMP$1634$2 == (struct $N4MATH4VEC3E*)0ull ) goto label$4363;
		TMP$1636$2 = TMP$1634$2;
		TMP$1635$2 = *(uint64*)L$1;
		label$4364:;
		if( TMP$1635$2 == 0ull ) goto label$4365;
		_ZN4MATH4VEC3C1Ev( TMP$1636$2 );
		TMP$1636$2 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1636$2 + 24ll);
		TMP$1635$2 = TMP$1635$2 + 18446744073709551615ull;
		goto label$4364;
		label$4365:;
		label$4363:;
		*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = TMP$1634$2;
		if( F$1 == (tmp$1623)0ull ) goto label$4367;
		{
			if( *R$1 == (boolean)0ll ) goto label$4369;
			{
				{
					int64 I$5;
					I$5 = *L$1 + -1ll;
					goto label$4370;
					label$4373:;
					{
						(F$1)( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)), (int64*)&I$5 );
					}
					label$4371:;
					I$5 = I$5 + -1ll;
					label$4370:;
					if( I$5 >= 0ll ) goto label$4373;
					label$4372:;
				}
			}
			goto label$4368;
			label$4369:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1637$5;
					TMP$1637$5 = *L$1 + -1ll;
					goto label$4374;
					label$4377:;
					{
						(F$1)( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)), (int64*)&I$5 );
					}
					label$4375:;
					I$5 = I$5 + 1ll;
					label$4374:;
					if( I$5 <= TMP$1637$5 ) goto label$4377;
					label$4376:;
				}
			}
			label$4368:;
		}
		label$4367:;
		label$4366:;
	}
	label$4362:;
	label$4361:;
	label$4360:;
}

void _ZN4MATH7V3ARRAYC1ERKNS_5ARRAYES3_S3_( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A1$1, struct $N4MATH5ARRAYE* A2$1, struct $N4MATH5ARRAYE* A3$1 )
{
	label$4378:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC3C1Ev( (struct $N4MATH4VEC3E*)((uint8*)THIS$1 + 16ll) );
	if( (((int64)-(*(int64*)A1$1 > 0ll) & (int64)-(*(int64*)A1$1 == *(int64*)A2$1)) & (int64)-(*(int64*)A2$1 == *(int64*)A3$1)) == 0ll ) goto label$4381;
	{
		struct $N4MATH4VEC3E* TMP$1638$2;
		uint64 TMP$1639$2;
		struct $N4MATH4VEC3E* TMP$1640$2;
		*(int64*)THIS$1 = *(int64*)A1$1;
		void* vr$20 = malloc( *(uint64*)A1$1 * 24ull );
		TMP$1638$2 = (struct $N4MATH4VEC3E*)vr$20;
		if( TMP$1638$2 == (struct $N4MATH4VEC3E*)0ull ) goto label$4382;
		TMP$1640$2 = TMP$1638$2;
		TMP$1639$2 = *(uint64*)A1$1;
		label$4383:;
		if( TMP$1639$2 == 0ull ) goto label$4384;
		_ZN4MATH4VEC3C1Ev( TMP$1640$2 );
		TMP$1640$2 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1640$2 + 24ll);
		TMP$1639$2 = TMP$1639$2 + 18446744073709551615ull;
		goto label$4383;
		label$4384:;
		label$4382:;
		*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = TMP$1638$2;
		double* P1$2;
		double* vr$25 = _ZNK4MATH5ARRAY11DATA__get__Ev( A1$1 );
		P1$2 = vr$25;
		double* P2$2;
		double* vr$26 = _ZNK4MATH5ARRAY11DATA__get__Ev( A2$1 );
		P2$2 = vr$26;
		double* P3$2;
		double* vr$27 = _ZNK4MATH5ARRAY11DATA__get__Ev( A3$1 );
		P3$2 = vr$27;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1641$3;
			TMP$1641$3 = *(int64*)A1$1 + -1ll;
			goto label$4385;
			label$4388:;
			{
				*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) = *(double*)((uint8*)P1$2 + (I$3 << (3ll & 63ll)));
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 8ll) = *(double*)((uint8*)P2$2 + (I$3 << (3ll & 63ll)));
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 16ll) = *(double*)((uint8*)P3$2 + (I$3 << (3ll & 63ll)));
			}
			label$4386:;
			I$3 = I$3 + 1ll;
			label$4385:;
			if( I$3 <= TMP$1641$3 ) goto label$4388;
			label$4387:;
		}
	}
	label$4381:;
	label$4380:;
	label$4379:;
}

void _ZN4MATH7V3ARRAYC1ERKNS_7V2ARRAYE( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH7V2ARRAYE* A$1 )
{
	label$4389:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC3C1Ev( (struct $N4MATH4VEC3E*)((uint8*)THIS$1 + 16ll) );
	if( *(int64*)A$1 == 0ll ) goto label$4392;
	{
		struct $N4MATH4VEC3E* TMP$1642$2;
		uint64 TMP$1643$2;
		struct $N4MATH4VEC3E* TMP$1644$2;
		*(int64*)THIS$1 = *(int64*)A$1;
		void* vr$11 = malloc( *(uint64*)A$1 * 24ull );
		TMP$1642$2 = (struct $N4MATH4VEC3E*)vr$11;
		if( TMP$1642$2 == (struct $N4MATH4VEC3E*)0ull ) goto label$4393;
		TMP$1644$2 = TMP$1642$2;
		TMP$1643$2 = *(uint64*)A$1;
		label$4394:;
		if( TMP$1643$2 == 0ull ) goto label$4395;
		_ZN4MATH4VEC3C1Ev( TMP$1644$2 );
		TMP$1644$2 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1644$2 + 24ll);
		TMP$1643$2 = TMP$1643$2 + 18446744073709551615ull;
		goto label$4394;
		label$4395:;
		label$4393:;
		*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = TMP$1642$2;
		struct $N4MATH4VEC2E* P$2;
		struct $N4MATH4VEC2E* vr$16 = _ZNK4MATH7V2ARRAY11DATA__get__Ev( A$1 );
		P$2 = vr$16;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1645$3;
			TMP$1645$3 = *(int64*)A$1 + -1ll;
			goto label$4396;
			label$4399:;
			{
				*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) = *(double*)((uint8*)P$2 + (I$3 << (4ll & 63ll)));
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 8ll) = *(double*)((uint8*)((uint8*)P$2 + (I$3 << (4ll & 63ll))) + 8ll);
			}
			label$4397:;
			I$3 = I$3 + 1ll;
			label$4396:;
			if( I$3 <= TMP$1645$3 ) goto label$4399;
			label$4398:;
		}
	}
	label$4392:;
	label$4391:;
	label$4390:;
}

void _ZN4MATH7V3ARRAYC1ERKNS_7V2ARRAYERKNS_5ARRAYE( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH7V2ARRAYE* A12$1, struct $N4MATH5ARRAYE* A3$1 )
{
	label$4400:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC3C1Ev( (struct $N4MATH4VEC3E*)((uint8*)THIS$1 + 16ll) );
	if( ((int64)-(*(int64*)A12$1 > 0ll) & (int64)-(*(int64*)A12$1 == *(int64*)A3$1)) == 0ll ) goto label$4403;
	{
		struct $N4MATH4VEC3E* TMP$1646$2;
		uint64 TMP$1647$2;
		struct $N4MATH4VEC3E* TMP$1648$2;
		*(int64*)THIS$1 = *(int64*)A12$1;
		void* vr$16 = malloc( *(uint64*)A12$1 * 24ull );
		TMP$1646$2 = (struct $N4MATH4VEC3E*)vr$16;
		if( TMP$1646$2 == (struct $N4MATH4VEC3E*)0ull ) goto label$4404;
		TMP$1648$2 = TMP$1646$2;
		TMP$1647$2 = *(uint64*)A12$1;
		label$4405:;
		if( TMP$1647$2 == 0ull ) goto label$4406;
		_ZN4MATH4VEC3C1Ev( TMP$1648$2 );
		TMP$1648$2 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1648$2 + 24ll);
		TMP$1647$2 = TMP$1647$2 + 18446744073709551615ull;
		goto label$4405;
		label$4406:;
		label$4404:;
		*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = TMP$1646$2;
		struct $N4MATH4VEC2E* P12$2;
		struct $N4MATH4VEC2E* vr$21 = _ZNK4MATH7V2ARRAY11DATA__get__Ev( A12$1 );
		P12$2 = vr$21;
		double* P3$2;
		double* vr$22 = _ZNK4MATH5ARRAY11DATA__get__Ev( A3$1 );
		P3$2 = vr$22;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1649$3;
			TMP$1649$3 = *(int64*)A12$1 + -1ll;
			goto label$4407;
			label$4410:;
			{
				*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) = *(double*)((uint8*)P12$2 + (I$3 << (4ll & 63ll)));
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 8ll) = *(double*)((uint8*)((uint8*)P12$2 + (I$3 << (4ll & 63ll))) + 8ll);
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 16ll) = *(double*)((uint8*)P3$2 + (I$3 << (3ll & 63ll)));
			}
			label$4408:;
			I$3 = I$3 + 1ll;
			label$4407:;
			if( I$3 <= TMP$1649$3 ) goto label$4410;
			label$4409:;
		}
	}
	label$4403:;
	label$4402:;
	label$4401:;
}

void _ZN4MATH7V3ARRAYC1ERKS0_( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH7V3ARRAYE* A$1 )
{
	label$4411:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC3C1Ev( (struct $N4MATH4VEC3E*)((uint8*)THIS$1 + 16ll) );
	if( *(int64*)A$1 == 0ll ) goto label$4414;
	{
		struct $N4MATH4VEC3E* TMP$1650$2;
		uint64 TMP$1651$2;
		struct $N4MATH4VEC3E* TMP$1652$2;
		*(int64*)THIS$1 = *(int64*)A$1;
		void* vr$11 = malloc( *(uint64*)A$1 * 24ull );
		TMP$1650$2 = (struct $N4MATH4VEC3E*)vr$11;
		if( TMP$1650$2 == (struct $N4MATH4VEC3E*)0ull ) goto label$4415;
		TMP$1652$2 = TMP$1650$2;
		TMP$1651$2 = *(uint64*)A$1;
		label$4416:;
		if( TMP$1651$2 == 0ull ) goto label$4417;
		_ZN4MATH4VEC3C1Ev( TMP$1652$2 );
		TMP$1652$2 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1652$2 + 24ll);
		TMP$1651$2 = TMP$1651$2 + 18446744073709551615ull;
		goto label$4416;
		label$4417:;
		label$4415:;
		*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = TMP$1650$2;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1653$3;
			TMP$1653$3 = *(int64*)A$1 + -1ll;
			goto label$4418;
			label$4421:;
			{
				_ZN4MATH4VEC3aSERKS0_( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)), (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)A$1 + 8ll) + (I$3 * 24ll)) );
			}
			label$4419:;
			I$3 = I$3 + 1ll;
			label$4418:;
			if( I$3 <= TMP$1653$3 ) goto label$4421;
			label$4420:;
		}
	}
	label$4414:;
	label$4413:;
	label$4412:;
}

void _ZN4MATH7V3ARRAYD1Ev( struct $N4MATH7V3ARRAYE* THIS$1 )
{
	label$4422:;
	if( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC3E*)0ull ) goto label$4425;
	{
		if( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC3E*)0ull ) goto label$4426;
		free( *(void**)((uint8*)THIS$1 + 8ll) );
		label$4426:;
		label$4425:;
	}
	label$4423:;
}

void _ZN4MATH7V3ARRAYv27selfcatERKNS_4VEC2E( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	label$4427:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4430;
	{
		struct $N4MATH4VEC3E* TMP$1654$2;
		uint64 TMP$1655$2;
		struct $N4MATH4VEC3E* TMP$1656$2;
		*(int64*)THIS$1 = *(int64*)THIS$1 + 1ll;
		struct $N4MATH4VEC3E* Q$2;
		void* vr$6 = malloc( *(uint64*)THIS$1 * 24ull );
		TMP$1654$2 = (struct $N4MATH4VEC3E*)vr$6;
		if( TMP$1654$2 == (struct $N4MATH4VEC3E*)0ull ) goto label$4431;
		TMP$1656$2 = TMP$1654$2;
		TMP$1655$2 = *(uint64*)THIS$1;
		label$4432:;
		if( TMP$1655$2 == 0ull ) goto label$4433;
		_ZN4MATH4VEC3C1Ev( TMP$1656$2 );
		TMP$1656$2 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1656$2 + 24ll);
		TMP$1655$2 = TMP$1655$2 + 18446744073709551615ull;
		goto label$4432;
		label$4433:;
		label$4431:;
		Q$2 = TMP$1654$2;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1657$3;
			TMP$1657$3 = *(int64*)THIS$1 + -2ll;
			goto label$4434;
			label$4437:;
			{
				_ZN4MATH4VEC3aSERKS0_( (struct $N4MATH4VEC3E*)((uint8*)Q$2 + (I$3 * 24ll)), (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) );
			}
			label$4435:;
			I$3 = I$3 + 1ll;
			label$4434:;
			if( I$3 <= TMP$1657$3 ) goto label$4437;
			label$4436:;
		}
		_ZN4MATH4VEC3aSERKNS_4VEC2E( (struct $N4MATH4VEC3E*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (*(int64*)THIS$1 * 24ll)) + -24ll), V$1 );
		if( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC3E*)0ull ) goto label$4438;
		free( *(void**)((uint8*)THIS$1 + 8ll) );
		label$4438:;
		*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = Q$2;
	}
	goto label$4429;
	label$4430:;
	{
		struct $N4MATH4VEC3E* TMP$1658$2;
		uint64 TMP$1659$2;
		struct $N4MATH4VEC3E* TMP$1660$2;
		*(int64*)THIS$1 = 1ll;
		void* vr$27 = malloc( 24ull );
		TMP$1658$2 = (struct $N4MATH4VEC3E*)vr$27;
		if( TMP$1658$2 == (struct $N4MATH4VEC3E*)0ull ) goto label$4439;
		TMP$1660$2 = TMP$1658$2;
		TMP$1659$2 = 1ull;
		label$4440:;
		if( TMP$1659$2 == 0ull ) goto label$4441;
		_ZN4MATH4VEC3C1Ev( TMP$1660$2 );
		TMP$1660$2 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1660$2 + 24ll);
		TMP$1659$2 = TMP$1659$2 + 18446744073709551615ull;
		goto label$4440;
		label$4441:;
		label$4439:;
		*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = TMP$1658$2;
		_ZN4MATH4VEC3aSERKNS_4VEC2E( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll), V$1 );
	}
	label$4429:;
	label$4428:;
}

void _ZN4MATH7V3ARRAYv27selfcatERKNS_4PVECE( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH4PVECE* V$1 )
{
	label$4442:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4445;
	{
		struct $N4MATH4VEC3E* TMP$1661$2;
		uint64 TMP$1662$2;
		struct $N4MATH4VEC3E* TMP$1663$2;
		*(int64*)THIS$1 = *(int64*)THIS$1 + 1ll;
		struct $N4MATH4VEC3E* Q$2;
		void* vr$6 = malloc( *(uint64*)THIS$1 * 24ull );
		TMP$1661$2 = (struct $N4MATH4VEC3E*)vr$6;
		if( TMP$1661$2 == (struct $N4MATH4VEC3E*)0ull ) goto label$4446;
		TMP$1663$2 = TMP$1661$2;
		TMP$1662$2 = *(uint64*)THIS$1;
		label$4447:;
		if( TMP$1662$2 == 0ull ) goto label$4448;
		_ZN4MATH4VEC3C1Ev( TMP$1663$2 );
		TMP$1663$2 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1663$2 + 24ll);
		TMP$1662$2 = TMP$1662$2 + 18446744073709551615ull;
		goto label$4447;
		label$4448:;
		label$4446:;
		Q$2 = TMP$1661$2;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1664$3;
			TMP$1664$3 = *(int64*)THIS$1 + -2ll;
			goto label$4449;
			label$4452:;
			{
				_ZN4MATH4VEC3aSERKS0_( (struct $N4MATH4VEC3E*)((uint8*)Q$2 + (I$3 * 24ll)), (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) );
			}
			label$4450:;
			I$3 = I$3 + 1ll;
			label$4449:;
			if( I$3 <= TMP$1664$3 ) goto label$4452;
			label$4451:;
		}
		_ZN4MATH4VEC3aSERKNS_4PVECE( (struct $N4MATH4VEC3E*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (*(int64*)THIS$1 * 24ll)) + -24ll), V$1 );
		if( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC3E*)0ull ) goto label$4453;
		free( *(void**)((uint8*)THIS$1 + 8ll) );
		label$4453:;
		*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = Q$2;
	}
	goto label$4444;
	label$4445:;
	{
		struct $N4MATH4VEC3E* TMP$1665$2;
		uint64 TMP$1666$2;
		struct $N4MATH4VEC3E* TMP$1667$2;
		*(int64*)THIS$1 = 1ll;
		void* vr$27 = malloc( 24ull );
		TMP$1665$2 = (struct $N4MATH4VEC3E*)vr$27;
		if( TMP$1665$2 == (struct $N4MATH4VEC3E*)0ull ) goto label$4454;
		TMP$1667$2 = TMP$1665$2;
		TMP$1666$2 = 1ull;
		label$4455:;
		if( TMP$1666$2 == 0ull ) goto label$4456;
		_ZN4MATH4VEC3C1Ev( TMP$1667$2 );
		TMP$1667$2 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1667$2 + 24ll);
		TMP$1666$2 = TMP$1666$2 + 18446744073709551615ull;
		goto label$4455;
		label$4456:;
		label$4454:;
		*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = TMP$1665$2;
		_ZN4MATH4VEC3aSERKNS_4PVECE( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll), V$1 );
	}
	label$4444:;
	label$4443:;
}

void _ZN4MATH7V3ARRAYv27selfcatERKNS_4VEC3E( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH4VEC3E* V$1 )
{
	label$4457:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4460;
	{
		struct $N4MATH4VEC3E* TMP$1668$2;
		uint64 TMP$1669$2;
		struct $N4MATH4VEC3E* TMP$1670$2;
		*(int64*)THIS$1 = *(int64*)THIS$1 + 1ll;
		struct $N4MATH4VEC3E* Q$2;
		void* vr$6 = malloc( *(uint64*)THIS$1 * 24ull );
		TMP$1668$2 = (struct $N4MATH4VEC3E*)vr$6;
		if( TMP$1668$2 == (struct $N4MATH4VEC3E*)0ull ) goto label$4461;
		TMP$1670$2 = TMP$1668$2;
		TMP$1669$2 = *(uint64*)THIS$1;
		label$4462:;
		if( TMP$1669$2 == 0ull ) goto label$4463;
		_ZN4MATH4VEC3C1Ev( TMP$1670$2 );
		TMP$1670$2 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1670$2 + 24ll);
		TMP$1669$2 = TMP$1669$2 + 18446744073709551615ull;
		goto label$4462;
		label$4463:;
		label$4461:;
		Q$2 = TMP$1668$2;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1671$3;
			TMP$1671$3 = *(int64*)THIS$1 + -2ll;
			goto label$4464;
			label$4467:;
			{
				_ZN4MATH4VEC3aSERKS0_( (struct $N4MATH4VEC3E*)((uint8*)Q$2 + (I$3 * 24ll)), (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) );
			}
			label$4465:;
			I$3 = I$3 + 1ll;
			label$4464:;
			if( I$3 <= TMP$1671$3 ) goto label$4467;
			label$4466:;
		}
		_ZN4MATH4VEC3aSERKS0_( (struct $N4MATH4VEC3E*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (*(int64*)THIS$1 * 24ll)) + -24ll), V$1 );
		if( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC3E*)0ull ) goto label$4468;
		free( *(void**)((uint8*)THIS$1 + 8ll) );
		label$4468:;
		*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = Q$2;
	}
	goto label$4459;
	label$4460:;
	{
		struct $N4MATH4VEC3E* TMP$1672$2;
		uint64 TMP$1673$2;
		struct $N4MATH4VEC3E* TMP$1674$2;
		*(int64*)THIS$1 = 1ll;
		void* vr$27 = malloc( 24ull );
		TMP$1672$2 = (struct $N4MATH4VEC3E*)vr$27;
		if( TMP$1672$2 == (struct $N4MATH4VEC3E*)0ull ) goto label$4469;
		TMP$1674$2 = TMP$1672$2;
		TMP$1673$2 = 1ull;
		label$4470:;
		if( TMP$1673$2 == 0ull ) goto label$4471;
		_ZN4MATH4VEC3C1Ev( TMP$1674$2 );
		TMP$1674$2 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1674$2 + 24ll);
		TMP$1673$2 = TMP$1673$2 + 18446744073709551615ull;
		goto label$4470;
		label$4471:;
		label$4469:;
		*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = TMP$1672$2;
		_ZN4MATH4VEC3aSERKS0_( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll), V$1 );
	}
	label$4459:;
	label$4458:;
}

void _ZN4MATH7V3ARRAYv27selfcatERKNS_4CVECE( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH4CVECE* V$1 )
{
	label$4472:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4475;
	{
		struct $N4MATH4VEC3E* TMP$1675$2;
		uint64 TMP$1676$2;
		struct $N4MATH4VEC3E* TMP$1677$2;
		*(int64*)THIS$1 = *(int64*)THIS$1 + 1ll;
		struct $N4MATH4VEC3E* Q$2;
		void* vr$6 = malloc( *(uint64*)THIS$1 * 24ull );
		TMP$1675$2 = (struct $N4MATH4VEC3E*)vr$6;
		if( TMP$1675$2 == (struct $N4MATH4VEC3E*)0ull ) goto label$4476;
		TMP$1677$2 = TMP$1675$2;
		TMP$1676$2 = *(uint64*)THIS$1;
		label$4477:;
		if( TMP$1676$2 == 0ull ) goto label$4478;
		_ZN4MATH4VEC3C1Ev( TMP$1677$2 );
		TMP$1677$2 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1677$2 + 24ll);
		TMP$1676$2 = TMP$1676$2 + 18446744073709551615ull;
		goto label$4477;
		label$4478:;
		label$4476:;
		Q$2 = TMP$1675$2;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1678$3;
			TMP$1678$3 = *(int64*)THIS$1 + -2ll;
			goto label$4479;
			label$4482:;
			{
				_ZN4MATH4VEC3aSERKS0_( (struct $N4MATH4VEC3E*)((uint8*)Q$2 + (I$3 * 24ll)), (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) );
			}
			label$4480:;
			I$3 = I$3 + 1ll;
			label$4479:;
			if( I$3 <= TMP$1678$3 ) goto label$4482;
			label$4481:;
		}
		struct $N4MATH4VEC3E vr$18 = _ZNK4MATH4CVECcvNS_4VEC3EEv( V$1 );
		*(struct $N4MATH4VEC3E*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (*(int64*)THIS$1 * 24ll)) + -24ll) = vr$18;
		if( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC3E*)0ull ) goto label$4483;
		free( *(void**)((uint8*)THIS$1 + 8ll) );
		label$4483:;
		*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = Q$2;
	}
	goto label$4474;
	label$4475:;
	{
		struct $N4MATH4VEC3E* TMP$1679$2;
		uint64 TMP$1680$2;
		struct $N4MATH4VEC3E* TMP$1681$2;
		*(int64*)THIS$1 = 1ll;
		void* vr$27 = malloc( 24ull );
		TMP$1679$2 = (struct $N4MATH4VEC3E*)vr$27;
		if( TMP$1679$2 == (struct $N4MATH4VEC3E*)0ull ) goto label$4484;
		TMP$1681$2 = TMP$1679$2;
		TMP$1680$2 = 1ull;
		label$4485:;
		if( TMP$1680$2 == 0ull ) goto label$4486;
		_ZN4MATH4VEC3C1Ev( TMP$1681$2 );
		TMP$1681$2 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1681$2 + 24ll);
		TMP$1680$2 = TMP$1680$2 + 18446744073709551615ull;
		goto label$4485;
		label$4486:;
		label$4484:;
		*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = TMP$1679$2;
		struct $N4MATH4VEC3E vr$31 = _ZNK4MATH4CVECcvNS_4VEC3EEv( V$1 );
		*(*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll)) = vr$31;
	}
	label$4474:;
	label$4473:;
}

void _ZN4MATH7V3ARRAYv27selfcatERKNS_7V2ARRAYE( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH7V2ARRAYE* A$1 )
{
	label$4487:;
	if( *(int64*)A$1 == 0ll ) goto label$4490;
	{
		if( *(int64*)THIS$1 == 0ll ) goto label$4492;
		{
			struct $N4MATH4VEC3E* TMP$1682$3;
			uint64 TMP$1683$3;
			struct $N4MATH4VEC3E* TMP$1684$3;
			struct $N4MATH4VEC3E* Q$3;
			void* vr$6 = malloc( (uint64)(*(int64*)THIS$1 + *(int64*)A$1) * 24ull );
			TMP$1682$3 = (struct $N4MATH4VEC3E*)vr$6;
			if( TMP$1682$3 == (struct $N4MATH4VEC3E*)0ull ) goto label$4493;
			TMP$1684$3 = TMP$1682$3;
			TMP$1683$3 = (uint64)(*(int64*)THIS$1 + *(int64*)A$1);
			label$4494:;
			if( TMP$1683$3 == 0ull ) goto label$4495;
			_ZN4MATH4VEC3C1Ev( TMP$1684$3 );
			TMP$1684$3 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1684$3 + 24ll);
			TMP$1683$3 = TMP$1683$3 + 18446744073709551615ull;
			goto label$4494;
			label$4495:;
			label$4493:;
			Q$3 = TMP$1682$3;
			int64 I$3;
			__builtin_memset( &I$3, 0, 8ll );
			{
				I$3 = 0ll;
				int64 TMP$1685$4;
				TMP$1685$4 = *(int64*)THIS$1 + -1ll;
				goto label$4496;
				label$4499:;
				{
					_ZN4MATH4VEC3aSERKS0_( (struct $N4MATH4VEC3E*)((uint8*)Q$3 + (I$3 * 24ll)), (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) );
				}
				label$4497:;
				I$3 = I$3 + 1ll;
				label$4496:;
				if( I$3 <= TMP$1685$4 ) goto label$4499;
				label$4498:;
			}
			struct $N4MATH4VEC2E* P$3;
			struct $N4MATH4VEC2E* vr$21 = _ZNK4MATH7V2ARRAY11DATA__get__Ev( A$1 );
			P$3 = vr$21;
			{
				I$3 = 0ll;
				int64 TMP$1686$4;
				TMP$1686$4 = *(int64*)A$1 + -1ll;
				goto label$4500;
				label$4503:;
				{
					_ZN4MATH4VEC3aSERKNS_4VEC2E( (struct $N4MATH4VEC3E*)((uint8*)Q$3 + ((*(int64*)THIS$1 + I$3) * 24ll)), (struct $N4MATH4VEC2E*)((uint8*)P$3 + (I$3 << (4ll & 63ll))) );
				}
				label$4501:;
				I$3 = I$3 + 1ll;
				label$4500:;
				if( I$3 <= TMP$1686$4 ) goto label$4503;
				label$4502:;
			}
			*(int64*)THIS$1 = *(int64*)THIS$1 + *(int64*)A$1;
			if( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC3E*)0ull ) goto label$4504;
			free( *(void**)((uint8*)THIS$1 + 8ll) );
			label$4504:;
			*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = Q$3;
		}
		goto label$4491;
		label$4492:;
		{
			struct $N4MATH4VEC3E* TMP$1687$3;
			uint64 TMP$1688$3;
			struct $N4MATH4VEC3E* TMP$1689$3;
			*(int64*)THIS$1 = *(int64*)A$1;
			void* vr$42 = malloc( *(uint64*)THIS$1 * 24ull );
			TMP$1687$3 = (struct $N4MATH4VEC3E*)vr$42;
			if( TMP$1687$3 == (struct $N4MATH4VEC3E*)0ull ) goto label$4505;
			TMP$1689$3 = TMP$1687$3;
			TMP$1688$3 = *(uint64*)THIS$1;
			label$4506:;
			if( TMP$1688$3 == 0ull ) goto label$4507;
			_ZN4MATH4VEC3C1Ev( TMP$1689$3 );
			TMP$1689$3 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1689$3 + 24ll);
			TMP$1688$3 = TMP$1688$3 + 18446744073709551615ull;
			goto label$4506;
			label$4507:;
			label$4505:;
			*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = TMP$1687$3;
			struct $N4MATH4VEC2E* P$3;
			struct $N4MATH4VEC2E* vr$47 = _ZNK4MATH7V2ARRAY11DATA__get__Ev( A$1 );
			P$3 = vr$47;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1690$4;
				TMP$1690$4 = *(int64*)THIS$1 + -1ll;
				goto label$4508;
				label$4511:;
				{
					_ZN4MATH4VEC3aSERKNS_4VEC2E( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)), (struct $N4MATH4VEC2E*)((uint8*)P$3 + (I$4 << (4ll & 63ll))) );
				}
				label$4509:;
				I$4 = I$4 + 1ll;
				label$4508:;
				if( I$4 <= TMP$1690$4 ) goto label$4511;
				label$4510:;
			}
		}
		label$4491:;
	}
	label$4490:;
	label$4489:;
	label$4488:;
}

void _ZN4MATH7V3ARRAYv27selfcatERKS0_( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH7V3ARRAYE* A$1 )
{
	label$4512:;
	if( THIS$1 == A$1 ) goto label$4515;
	{
		if( *(int64*)A$1 == 0ll ) goto label$4517;
		{
			if( *(int64*)THIS$1 == 0ll ) goto label$4519;
			{
				struct $N4MATH4VEC3E* TMP$1691$4;
				uint64 TMP$1692$4;
				struct $N4MATH4VEC3E* TMP$1693$4;
				struct $N4MATH4VEC3E* Q$4;
				void* vr$6 = malloc( (uint64)(*(int64*)THIS$1 + *(int64*)A$1) * 24ull );
				TMP$1691$4 = (struct $N4MATH4VEC3E*)vr$6;
				if( TMP$1691$4 == (struct $N4MATH4VEC3E*)0ull ) goto label$4520;
				TMP$1693$4 = TMP$1691$4;
				TMP$1692$4 = (uint64)(*(int64*)THIS$1 + *(int64*)A$1);
				label$4521:;
				if( TMP$1692$4 == 0ull ) goto label$4522;
				_ZN4MATH4VEC3C1Ev( TMP$1693$4 );
				TMP$1693$4 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1693$4 + 24ll);
				TMP$1692$4 = TMP$1692$4 + 18446744073709551615ull;
				goto label$4521;
				label$4522:;
				label$4520:;
				Q$4 = TMP$1691$4;
				int64 I$4;
				__builtin_memset( &I$4, 0, 8ll );
				{
					I$4 = 0ll;
					int64 TMP$1694$5;
					TMP$1694$5 = *(int64*)THIS$1 + -1ll;
					goto label$4523;
					label$4526:;
					{
						_ZN4MATH4VEC3aSERKS0_( (struct $N4MATH4VEC3E*)((uint8*)Q$4 + (I$4 * 24ll)), (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) );
					}
					label$4524:;
					I$4 = I$4 + 1ll;
					label$4523:;
					if( I$4 <= TMP$1694$5 ) goto label$4526;
					label$4525:;
				}
				{
					I$4 = 0ll;
					int64 TMP$1695$5;
					TMP$1695$5 = *(int64*)A$1 + -1ll;
					goto label$4527;
					label$4530:;
					{
						_ZN4MATH4VEC3aSERKS0_( (struct $N4MATH4VEC3E*)((uint8*)Q$4 + ((*(int64*)THIS$1 + I$4) * 24ll)), (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)A$1 + 8ll) + (I$4 * 24ll)) );
					}
					label$4528:;
					I$4 = I$4 + 1ll;
					label$4527:;
					if( I$4 <= TMP$1695$5 ) goto label$4530;
					label$4529:;
				}
				*(int64*)THIS$1 = *(int64*)THIS$1 + *(int64*)A$1;
				if( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC3E*)0ull ) goto label$4531;
				free( *(void**)((uint8*)THIS$1 + 8ll) );
				label$4531:;
				*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = Q$4;
			}
			goto label$4518;
			label$4519:;
			{
				struct $N4MATH4VEC3E* TMP$1696$4;
				uint64 TMP$1697$4;
				struct $N4MATH4VEC3E* TMP$1698$4;
				*(int64*)THIS$1 = *(int64*)A$1;
				void* vr$42 = malloc( *(uint64*)THIS$1 * 24ull );
				TMP$1696$4 = (struct $N4MATH4VEC3E*)vr$42;
				if( TMP$1696$4 == (struct $N4MATH4VEC3E*)0ull ) goto label$4532;
				TMP$1698$4 = TMP$1696$4;
				TMP$1697$4 = *(uint64*)THIS$1;
				label$4533:;
				if( TMP$1697$4 == 0ull ) goto label$4534;
				_ZN4MATH4VEC3C1Ev( TMP$1698$4 );
				TMP$1698$4 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1698$4 + 24ll);
				TMP$1697$4 = TMP$1697$4 + 18446744073709551615ull;
				goto label$4533;
				label$4534:;
				label$4532:;
				*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = TMP$1696$4;
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1699$5;
					TMP$1699$5 = *(int64*)THIS$1 + -1ll;
					goto label$4535;
					label$4538:;
					{
						_ZN4MATH4VEC3aSERKS0_( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)), (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)A$1 + 8ll) + (I$5 * 24ll)) );
					}
					label$4536:;
					I$5 = I$5 + 1ll;
					label$4535:;
					if( I$5 <= TMP$1699$5 ) goto label$4538;
					label$4537:;
				}
			}
			label$4518:;
		}
		label$4517:;
		label$4516:;
	}
	goto label$4514;
	label$4515:;
	{
		if( *(int64*)THIS$1 == 0ll ) goto label$4540;
		{
			struct $N4MATH4VEC3E* TMP$1700$3;
			uint64 TMP$1701$3;
			struct $N4MATH4VEC3E* TMP$1702$3;
			struct $N4MATH4VEC3E* Q$3;
			void* vr$60 = malloc( (uint64)(*(int64*)THIS$1 << (1ll & 63ll)) * 24ull );
			TMP$1700$3 = (struct $N4MATH4VEC3E*)vr$60;
			if( TMP$1700$3 == (struct $N4MATH4VEC3E*)0ull ) goto label$4541;
			TMP$1702$3 = TMP$1700$3;
			TMP$1701$3 = (uint64)(*(int64*)THIS$1 << (1ll & 63ll));
			label$4542:;
			if( TMP$1701$3 == 0ull ) goto label$4543;
			_ZN4MATH4VEC3C1Ev( TMP$1702$3 );
			TMP$1702$3 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1702$3 + 24ll);
			TMP$1701$3 = TMP$1701$3 + 18446744073709551615ull;
			goto label$4542;
			label$4543:;
			label$4541:;
			Q$3 = TMP$1700$3;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1703$4;
				TMP$1703$4 = *(int64*)THIS$1 + -1ll;
				goto label$4544;
				label$4547:;
				{
					_ZN4MATH4VEC3aSERKS0_( (struct $N4MATH4VEC3E*)((uint8*)Q$3 + (I$4 * 24ll)), (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) );
					_ZN4MATH4VEC3aSERKS0_( (struct $N4MATH4VEC3E*)((uint8*)Q$3 + ((*(int64*)THIS$1 + I$4) * 24ll)), (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) );
				}
				label$4545:;
				I$4 = I$4 + 1ll;
				label$4544:;
				if( I$4 <= TMP$1703$4 ) goto label$4547;
				label$4546:;
			}
			*(int64*)THIS$1 = *(int64*)THIS$1 << (1ll & 63ll);
			if( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC3E*)0ull ) goto label$4548;
			free( *(void**)((uint8*)THIS$1 + 8ll) );
			label$4548:;
			*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = Q$3;
		}
		label$4540:;
		label$4539:;
	}
	label$4514:;
	label$4513:;
}

struct $N4MATH4VEC3E* _ZN4MATH7V3ARRAYixERKu7INTEGER( struct $N4MATH7V3ARRAYE* THIS$1, int64* I$1 )
{
	struct $N4MATH4VEC3E* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$4549:;
	if( ((int64)-(*I$1 >= 0ll) & (int64)-(*I$1 < *(int64*)THIS$1)) == 0ll ) goto label$4552;
	{
		fb$result$1 = (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (*I$1 * 24ll));
		goto label$4550;
		label$4552:;
	}
	*(double*)((uint8*)THIS$1 + 16ll) = 0x0p+0;
	*(double*)((uint8*)THIS$1 + 24ll) = 0x0p+0;
	*(double*)((uint8*)THIS$1 + 32ll) = 0x0p+0;
	fb$result$1 = (struct $N4MATH4VEC3E*)((uint8*)THIS$1 + 16ll);
	goto label$4550;
	label$4550:;
	return fb$result$1;
}

void _ZN4MATH7V3ARRAYpLERKNS_4VEC3E( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH4VEC3E* V$1 )
{
	label$4553:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4556;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1704$3;
			TMP$1704$3 = *(int64*)THIS$1 + -1ll;
			goto label$4557;
			label$4560:;
			{
				_ZN4MATH4VEC3pLERKS0_( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)), V$1 );
			}
			label$4558:;
			I$3 = I$3 + 1ll;
			label$4557:;
			if( I$3 <= TMP$1704$3 ) goto label$4560;
			label$4559:;
		}
	}
	label$4556:;
	label$4555:;
	label$4554:;
}

void _ZN4MATH7V3ARRAYpLERKNS_4CVECE( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH4CVECE* V$1 )
{
	label$4561:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4564;
	{
		double X$2;
		double vr$1 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
		X$2 = vr$1;
		double Y$2;
		double vr$2 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
		Y$2 = vr$2;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1705$3;
			TMP$1705$3 = *(int64*)THIS$1 + -1ll;
			goto label$4565;
			label$4568:;
			{
				*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + X$2;
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 8ll) + Y$2;
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 16ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 16ll) + *(double*)V$1;
			}
			label$4566:;
			I$3 = I$3 + 1ll;
			label$4565:;
			if( I$3 <= TMP$1705$3 ) goto label$4568;
			label$4567:;
		}
	}
	label$4564:;
	label$4563:;
	label$4562:;
}

void _ZN4MATH7V3ARRAYpLERKS0_( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH7V3ARRAYE* A$1 )
{
	label$4569:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$4572;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1706$3;
			TMP$1706$3 = *(int64*)THIS$1 + -1ll;
			goto label$4573;
			label$4576:;
			{
				_ZN4MATH4VEC3pLERKS0_( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)), (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)A$1 + 8ll) + (I$3 * 24ll)) );
			}
			label$4574:;
			I$3 = I$3 + 1ll;
			label$4573:;
			if( I$3 <= TMP$1706$3 ) goto label$4576;
			label$4575:;
		}
	}
	label$4572:;
	label$4571:;
	label$4570:;
}

void _ZN4MATH7V3ARRAYmIERKNS_4VEC3E( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH4VEC3E* V$1 )
{
	label$4577:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4580;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1707$3;
			TMP$1707$3 = *(int64*)THIS$1 + -1ll;
			goto label$4581;
			label$4584:;
			{
				_ZN4MATH4VEC3mIERKS0_( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)), V$1 );
			}
			label$4582:;
			I$3 = I$3 + 1ll;
			label$4581:;
			if( I$3 <= TMP$1707$3 ) goto label$4584;
			label$4583:;
		}
	}
	label$4580:;
	label$4579:;
	label$4578:;
}

void _ZN4MATH7V3ARRAYmIERKNS_4CVECE( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH4CVECE* V$1 )
{
	label$4585:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4588;
	{
		double X$2;
		double vr$1 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
		X$2 = vr$1;
		double Y$2;
		double vr$2 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
		Y$2 = vr$2;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1708$3;
			TMP$1708$3 = *(int64*)THIS$1 + -1ll;
			goto label$4589;
			label$4592:;
			{
				*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) - X$2;
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 8ll) - Y$2;
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 16ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 16ll) - *(double*)V$1;
			}
			label$4590:;
			I$3 = I$3 + 1ll;
			label$4589:;
			if( I$3 <= TMP$1708$3 ) goto label$4592;
			label$4591:;
		}
	}
	label$4588:;
	label$4587:;
	label$4586:;
}

void _ZN4MATH7V3ARRAYmIERKS0_( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH7V3ARRAYE* A$1 )
{
	label$4593:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$4596;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1709$3;
			TMP$1709$3 = *(int64*)THIS$1 + -1ll;
			goto label$4597;
			label$4600:;
			{
				_ZN4MATH4VEC3mIERKS0_( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)), (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)A$1 + 8ll) + (I$3 * 24ll)) );
			}
			label$4598:;
			I$3 = I$3 + 1ll;
			label$4597:;
			if( I$3 <= TMP$1709$3 ) goto label$4600;
			label$4599:;
		}
	}
	label$4596:;
	label$4595:;
	label$4594:;
}

void _ZN4MATH7V3ARRAYmLERKd( struct $N4MATH7V3ARRAYE* THIS$1, double* N$1 )
{
	label$4601:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4604;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1710$3;
			TMP$1710$3 = *(int64*)THIS$1 + -1ll;
			goto label$4605;
			label$4608:;
			{
				*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) * *N$1;
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 8ll) * *N$1;
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 16ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 16ll) * *N$1;
			}
			label$4606:;
			I$3 = I$3 + 1ll;
			label$4605:;
			if( I$3 <= TMP$1710$3 ) goto label$4608;
			label$4607:;
		}
	}
	label$4604:;
	label$4603:;
	label$4602:;
}

void _ZN4MATH7V3ARRAYmLERKNS_4VEC3E( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH4VEC3E* V$1 )
{
	label$4609:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4612;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1711$3;
			TMP$1711$3 = *(int64*)THIS$1 + -1ll;
			goto label$4613;
			label$4616:;
			{
				_ZN4MATH4VEC3mLERKS0_( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)), V$1 );
			}
			label$4614:;
			I$3 = I$3 + 1ll;
			label$4613:;
			if( I$3 <= TMP$1711$3 ) goto label$4616;
			label$4615:;
		}
	}
	label$4612:;
	label$4611:;
	label$4610:;
}

void _ZN4MATH7V3ARRAYmLERKNS_4CVECE( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH4CVECE* V$1 )
{
	label$4617:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4620;
	{
		double X$2;
		double vr$1 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
		X$2 = vr$1;
		double Y$2;
		double vr$2 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
		Y$2 = vr$2;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1712$3;
			TMP$1712$3 = *(int64*)THIS$1 + -1ll;
			goto label$4621;
			label$4624:;
			{
				*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) * X$2;
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 8ll) * Y$2;
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 16ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 16ll) * *(double*)V$1;
			}
			label$4622:;
			I$3 = I$3 + 1ll;
			label$4621:;
			if( I$3 <= TMP$1712$3 ) goto label$4624;
			label$4623:;
		}
	}
	label$4620:;
	label$4619:;
	label$4618:;
}

void _ZN4MATH7V3ARRAYmLERKS0_( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH7V3ARRAYE* A$1 )
{
	label$4625:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$4628;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1713$3;
			TMP$1713$3 = *(int64*)THIS$1 + -1ll;
			goto label$4629;
			label$4632:;
			{
				_ZN4MATH4VEC3mLERKS0_( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)), (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)A$1 + 8ll) + (I$3 * 24ll)) );
			}
			label$4630:;
			I$3 = I$3 + 1ll;
			label$4629:;
			if( I$3 <= TMP$1713$3 ) goto label$4632;
			label$4631:;
		}
	}
	label$4628:;
	label$4627:;
	label$4626:;
}

void _ZN4MATH7V3ARRAYdVERKd( struct $N4MATH7V3ARRAYE* THIS$1, double* N$1 )
{
	label$4633:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4636;
	{
		if( *N$1 == 0x0p+0 ) goto label$4638;
		{
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1714$4;
				TMP$1714$4 = *(int64*)THIS$1 + -1ll;
				goto label$4639;
				label$4642:;
				{
					*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) / *N$1;
					*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) + 8ll) / *N$1;
					*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) + 16ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) + 16ll) / *N$1;
				}
				label$4640:;
				I$4 = I$4 + 1ll;
				label$4639:;
				if( I$4 <= TMP$1714$4 ) goto label$4642;
				label$4641:;
			}
		}
		goto label$4637;
		label$4638:;
		{
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1715$4;
				TMP$1715$4 = *(int64*)THIS$1 + -1ll;
				goto label$4643;
				label$4646:;
				{
					*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) = 0x0p+0;
					*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) + 8ll) = 0x0p+0;
					*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) + 16ll) = 0x0p+0;
				}
				label$4644:;
				I$4 = I$4 + 1ll;
				label$4643:;
				if( I$4 <= TMP$1715$4 ) goto label$4646;
				label$4645:;
			}
		}
		label$4637:;
	}
	label$4636:;
	label$4635:;
	label$4634:;
}

void _ZN4MATH7V3ARRAYdVERKNS_4VEC3E( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH4VEC3E* V$1 )
{
	label$4647:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4650;
	{
		if( *(double*)V$1 == 0x0p+0 ) goto label$4652;
		{
			if( *(double*)((uint8*)V$1 + 8ll) == 0x0p+0 ) goto label$4654;
			{
				if( *(double*)((uint8*)V$1 + 16ll) == 0x0p+0 ) goto label$4656;
				{
					{
						int64 I$6;
						I$6 = 0ll;
						int64 TMP$1716$6;
						TMP$1716$6 = *(int64*)THIS$1 + -1ll;
						goto label$4657;
						label$4660:;
						{
							*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) / *(double*)V$1;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) / *(double*)((uint8*)V$1 + 8ll);
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) / *(double*)((uint8*)V$1 + 16ll);
						}
						label$4658:;
						I$6 = I$6 + 1ll;
						label$4657:;
						if( I$6 <= TMP$1716$6 ) goto label$4660;
						label$4659:;
					}
				}
				goto label$4655;
				label$4656:;
				{
					{
						int64 I$6;
						I$6 = 0ll;
						int64 TMP$1717$6;
						TMP$1717$6 = *(int64*)THIS$1 + -1ll;
						goto label$4661;
						label$4664:;
						{
							*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) / *(double*)V$1;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) / *(double*)((uint8*)V$1 + 8ll);
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) = 0x0p+0;
						}
						label$4662:;
						I$6 = I$6 + 1ll;
						label$4661:;
						if( I$6 <= TMP$1717$6 ) goto label$4664;
						label$4663:;
					}
				}
				label$4655:;
			}
			goto label$4653;
			label$4654:;
			{
				if( *(double*)((uint8*)V$1 + 16ll) == 0x0p+0 ) goto label$4666;
				{
					{
						int64 I$6;
						I$6 = 0ll;
						int64 TMP$1718$6;
						TMP$1718$6 = *(int64*)THIS$1 + -1ll;
						goto label$4667;
						label$4670:;
						{
							*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) / *(double*)V$1;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) = 0x0p+0;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) / *(double*)((uint8*)V$1 + 16ll);
						}
						label$4668:;
						I$6 = I$6 + 1ll;
						label$4667:;
						if( I$6 <= TMP$1718$6 ) goto label$4670;
						label$4669:;
					}
				}
				goto label$4665;
				label$4666:;
				{
					{
						int64 I$6;
						I$6 = 0ll;
						int64 TMP$1719$6;
						TMP$1719$6 = *(int64*)THIS$1 + -1ll;
						goto label$4671;
						label$4674:;
						{
							*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) / *(double*)V$1;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) = 0x0p+0;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) = 0x0p+0;
						}
						label$4672:;
						I$6 = I$6 + 1ll;
						label$4671:;
						if( I$6 <= TMP$1719$6 ) goto label$4674;
						label$4673:;
					}
				}
				label$4665:;
			}
			label$4653:;
		}
		goto label$4651;
		label$4652:;
		{
			if( *(double*)((uint8*)V$1 + 8ll) == 0x0p+0 ) goto label$4676;
			{
				if( *(double*)((uint8*)V$1 + 16ll) == 0x0p+0 ) goto label$4678;
				{
					{
						int64 I$6;
						I$6 = 0ll;
						int64 TMP$1720$6;
						TMP$1720$6 = *(int64*)THIS$1 + -1ll;
						goto label$4679;
						label$4682:;
						{
							*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) = 0x0p+0;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) / *(double*)((uint8*)V$1 + 8ll);
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) / *(double*)((uint8*)V$1 + 16ll);
						}
						label$4680:;
						I$6 = I$6 + 1ll;
						label$4679:;
						if( I$6 <= TMP$1720$6 ) goto label$4682;
						label$4681:;
					}
				}
				goto label$4677;
				label$4678:;
				{
					{
						int64 I$6;
						I$6 = 0ll;
						int64 TMP$1721$6;
						TMP$1721$6 = *(int64*)THIS$1 + -1ll;
						goto label$4683;
						label$4686:;
						{
							*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) = 0x0p+0;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) / *(double*)((uint8*)V$1 + 8ll);
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) = 0x0p+0;
						}
						label$4684:;
						I$6 = I$6 + 1ll;
						label$4683:;
						if( I$6 <= TMP$1721$6 ) goto label$4686;
						label$4685:;
					}
				}
				label$4677:;
			}
			goto label$4675;
			label$4676:;
			{
				if( *(double*)((uint8*)V$1 + 16ll) == 0x0p+0 ) goto label$4688;
				{
					{
						int64 I$6;
						I$6 = 0ll;
						int64 TMP$1722$6;
						TMP$1722$6 = *(int64*)THIS$1 + -1ll;
						goto label$4689;
						label$4692:;
						{
							*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) = 0x0p+0;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) = 0x0p+0;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) / *(double*)((uint8*)V$1 + 16ll);
						}
						label$4690:;
						I$6 = I$6 + 1ll;
						label$4689:;
						if( I$6 <= TMP$1722$6 ) goto label$4692;
						label$4691:;
					}
				}
				goto label$4687;
				label$4688:;
				{
					{
						int64 I$6;
						I$6 = 0ll;
						int64 TMP$1723$6;
						TMP$1723$6 = *(int64*)THIS$1 + -1ll;
						goto label$4693;
						label$4696:;
						{
							*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) = 0x0p+0;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) = 0x0p+0;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) = 0x0p+0;
						}
						label$4694:;
						I$6 = I$6 + 1ll;
						label$4693:;
						if( I$6 <= TMP$1723$6 ) goto label$4696;
						label$4695:;
					}
				}
				label$4687:;
			}
			label$4675:;
		}
		label$4651:;
	}
	label$4650:;
	label$4649:;
	label$4648:;
}

void _ZN4MATH7V3ARRAYdVERKNS_4CVECE( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH4CVECE* V$1 )
{
	label$4697:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4700;
	{
		double X$2;
		double vr$1 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
		X$2 = vr$1;
		double Y$2;
		double vr$2 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
		Y$2 = vr$2;
		if( X$2 == 0x0p+0 ) goto label$4702;
		{
			if( Y$2 == 0x0p+0 ) goto label$4704;
			{
				if( *(double*)V$1 == 0x0p+0 ) goto label$4706;
				{
					{
						int64 I$6;
						I$6 = 0ll;
						int64 TMP$1724$6;
						TMP$1724$6 = *(int64*)THIS$1 + -1ll;
						goto label$4707;
						label$4710:;
						{
							*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) / X$2;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) / Y$2;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) / *(double*)V$1;
						}
						label$4708:;
						I$6 = I$6 + 1ll;
						label$4707:;
						if( I$6 <= TMP$1724$6 ) goto label$4710;
						label$4709:;
					}
				}
				goto label$4705;
				label$4706:;
				{
					{
						int64 I$6;
						I$6 = 0ll;
						int64 TMP$1725$6;
						TMP$1725$6 = *(int64*)THIS$1 + -1ll;
						goto label$4711;
						label$4714:;
						{
							*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) / X$2;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) / Y$2;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) = 0x0p+0;
						}
						label$4712:;
						I$6 = I$6 + 1ll;
						label$4711:;
						if( I$6 <= TMP$1725$6 ) goto label$4714;
						label$4713:;
					}
				}
				label$4705:;
			}
			goto label$4703;
			label$4704:;
			{
				if( *(double*)V$1 == 0x0p+0 ) goto label$4716;
				{
					{
						int64 I$6;
						I$6 = 0ll;
						int64 TMP$1726$6;
						TMP$1726$6 = *(int64*)THIS$1 + -1ll;
						goto label$4717;
						label$4720:;
						{
							*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) / X$2;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) = 0x0p+0;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) / *(double*)V$1;
						}
						label$4718:;
						I$6 = I$6 + 1ll;
						label$4717:;
						if( I$6 <= TMP$1726$6 ) goto label$4720;
						label$4719:;
					}
				}
				goto label$4715;
				label$4716:;
				{
					{
						int64 I$6;
						I$6 = 0ll;
						int64 TMP$1727$6;
						TMP$1727$6 = *(int64*)THIS$1 + -1ll;
						goto label$4721;
						label$4724:;
						{
							*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) / X$2;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) = 0x0p+0;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) = 0x0p+0;
						}
						label$4722:;
						I$6 = I$6 + 1ll;
						label$4721:;
						if( I$6 <= TMP$1727$6 ) goto label$4724;
						label$4723:;
					}
				}
				label$4715:;
			}
			label$4703:;
		}
		goto label$4701;
		label$4702:;
		{
			if( Y$2 == 0x0p+0 ) goto label$4726;
			{
				if( *(double*)V$1 == 0x0p+0 ) goto label$4728;
				{
					{
						int64 I$6;
						I$6 = 0ll;
						int64 TMP$1728$6;
						TMP$1728$6 = *(int64*)THIS$1 + -1ll;
						goto label$4729;
						label$4732:;
						{
							*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) = 0x0p+0;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) / Y$2;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) / *(double*)V$1;
						}
						label$4730:;
						I$6 = I$6 + 1ll;
						label$4729:;
						if( I$6 <= TMP$1728$6 ) goto label$4732;
						label$4731:;
					}
				}
				goto label$4727;
				label$4728:;
				{
					{
						int64 I$6;
						I$6 = 0ll;
						int64 TMP$1729$6;
						TMP$1729$6 = *(int64*)THIS$1 + -1ll;
						goto label$4733;
						label$4736:;
						{
							*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) = 0x0p+0;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) / Y$2;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) = 0x0p+0;
						}
						label$4734:;
						I$6 = I$6 + 1ll;
						label$4733:;
						if( I$6 <= TMP$1729$6 ) goto label$4736;
						label$4735:;
					}
				}
				label$4727:;
			}
			goto label$4725;
			label$4726:;
			{
				if( *(double*)V$1 == 0x0p+0 ) goto label$4738;
				{
					{
						int64 I$6;
						I$6 = 0ll;
						int64 TMP$1730$6;
						TMP$1730$6 = *(int64*)THIS$1 + -1ll;
						goto label$4739;
						label$4742:;
						{
							*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) = 0x0p+0;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) = 0x0p+0;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) / *(double*)V$1;
						}
						label$4740:;
						I$6 = I$6 + 1ll;
						label$4739:;
						if( I$6 <= TMP$1730$6 ) goto label$4742;
						label$4741:;
					}
				}
				goto label$4737;
				label$4738:;
				{
					{
						int64 I$6;
						I$6 = 0ll;
						int64 TMP$1731$6;
						TMP$1731$6 = *(int64*)THIS$1 + -1ll;
						goto label$4743;
						label$4746:;
						{
							*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) = 0x0p+0;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) = 0x0p+0;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) = 0x0p+0;
						}
						label$4744:;
						I$6 = I$6 + 1ll;
						label$4743:;
						if( I$6 <= TMP$1731$6 ) goto label$4746;
						label$4745:;
					}
				}
				label$4737:;
			}
			label$4725:;
		}
		label$4701:;
	}
	label$4700:;
	label$4699:;
	label$4698:;
}

void _ZN4MATH7V3ARRAYdVERKS0_( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH7V3ARRAYE* A$1 )
{
	label$4747:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$4750;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1732$3;
			TMP$1732$3 = *(int64*)THIS$1 + -1ll;
			goto label$4751;
			label$4754:;
			{
				double TMP$1733$4;
				double TMP$1734$4;
				double TMP$1735$4;
				if( *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)A$1 + 8ll) + (I$3 * 24ll)) == 0x0p+0 ) goto label$4755;
				TMP$1733$4 = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) / *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)A$1 + 8ll) + (I$3 * 24ll));
				goto label$4758;
				label$4755:;
				TMP$1733$4 = 0x0p+0;
				label$4758:;
				*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) = TMP$1733$4;
				if( *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)A$1 + 8ll) + (I$3 * 24ll)) + 8ll) == 0x0p+0 ) goto label$4756;
				TMP$1734$4 = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 8ll) / *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)A$1 + 8ll) + (I$3 * 24ll)) + 8ll);
				goto label$4759;
				label$4756:;
				TMP$1734$4 = 0x0p+0;
				label$4759:;
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 8ll) = TMP$1734$4;
				if( *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)A$1 + 8ll) + (I$3 * 24ll)) + 16ll) == 0x0p+0 ) goto label$4757;
				TMP$1735$4 = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 16ll) / *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)A$1 + 8ll) + (I$3 * 24ll)) + 16ll);
				goto label$4760;
				label$4757:;
				TMP$1735$4 = 0x0p+0;
				label$4760:;
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 16ll) = TMP$1735$4;
			}
			label$4752:;
			I$3 = I$3 + 1ll;
			label$4751:;
			if( I$3 <= TMP$1732$3 ) goto label$4754;
			label$4753:;
		}
	}
	label$4750:;
	label$4749:;
	label$4748:;
}

FBSTRING* _ZNK4MATH7V3ARRAYcv8FBSTRINGEv( struct $N4MATH7V3ARRAYE* THIS$1 )
{
	FBSTRING TMP$1737$1;
	FBSTRING TMP$1738$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$4761:;
	FBSTRING* vr$2 = fb_LongintToStr( *(int64*)THIS$1 );
	__builtin_memset( &TMP$1737$1, 0, 24ll );
	FBSTRING* vr$5 = fb_StrConcat( &TMP$1737$1, (void*)"<math.v3array>{ length : ", 26ll, (void*)vr$2, -1ll );
	__builtin_memset( &TMP$1738$1, 0, 24ll );
	FBSTRING* vr$8 = fb_StrConcat( &TMP$1738$1, (void*)vr$5, -1ll, (void*)" }", 3ll );
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$8, -1ll, 0 );
	goto label$4762;
	label$4762:;
	FBSTRING* vr$11 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$11;
}

void _ZN4MATH7V3ARRAYaSERKS0_( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH7V3ARRAYE* A$1 )
{
	label$4763:;
	if( THIS$1 == A$1 ) goto label$4766;
	{
		*(int64*)THIS$1 = 0ll;
		if( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC3E*)0ull ) goto label$4768;
		{
			if( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC3E*)0ull ) goto label$4769;
			free( *(void**)((uint8*)THIS$1 + 8ll) );
			label$4769:;
			*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = (struct $N4MATH4VEC3E*)0ull;
		}
		label$4768:;
		label$4767:;
		if( *(int64*)A$1 == 0ll ) goto label$4771;
		{
			struct $N4MATH4VEC3E* TMP$1739$3;
			uint64 TMP$1740$3;
			struct $N4MATH4VEC3E* TMP$1741$3;
			*(int64*)THIS$1 = *(int64*)A$1;
			void* vr$10 = malloc( *(uint64*)A$1 * 24ull );
			TMP$1739$3 = (struct $N4MATH4VEC3E*)vr$10;
			if( TMP$1739$3 == (struct $N4MATH4VEC3E*)0ull ) goto label$4772;
			TMP$1741$3 = TMP$1739$3;
			TMP$1740$3 = *(uint64*)A$1;
			label$4773:;
			if( TMP$1740$3 == 0ull ) goto label$4774;
			_ZN4MATH4VEC3C1Ev( TMP$1741$3 );
			TMP$1741$3 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1741$3 + 24ll);
			TMP$1740$3 = TMP$1740$3 + 18446744073709551615ull;
			goto label$4773;
			label$4774:;
			label$4772:;
			*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = TMP$1739$3;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1742$4;
				TMP$1742$4 = *(int64*)A$1 + -1ll;
				goto label$4775;
				label$4778:;
				{
					_ZN4MATH4VEC3aSERKS0_( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)), (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)A$1 + 8ll) + (I$4 * 24ll)) );
				}
				label$4776:;
				I$4 = I$4 + 1ll;
				label$4775:;
				if( I$4 <= TMP$1742$4 ) goto label$4778;
				label$4777:;
			}
		}
		label$4771:;
		label$4770:;
	}
	label$4766:;
	label$4765:;
	label$4764:;
}

struct $N4MATH4VEC3E* _ZNK4MATH7V3ARRAY11DATA__get__Ev( struct $N4MATH7V3ARRAYE* THIS$1 )
{
	struct $N4MATH4VEC3E* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$4779:;
	fb$result$1 = *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll);
	goto label$4780;
	label$4780:;
	return fb$result$1;
}

void _ZN4MATH7V3ARRAY13LENGTH__set__ERKu7INTEGER( struct $N4MATH7V3ARRAYE* THIS$1, int64* L$1 )
{
	label$4781:;
	if( *L$1 <= 0ll ) goto label$4784;
	{
		if( *(int64*)THIS$1 <= 0ll ) goto label$4786;
		{
			if( *L$1 == *(int64*)THIS$1 ) goto label$4788;
			{
				struct $N4MATH4VEC3E* TMP$1743$4;
				uint64 TMP$1744$4;
				struct $N4MATH4VEC3E* TMP$1745$4;
				struct $N4MATH4VEC3E* Q$4;
				void* vr$6 = malloc( *(uint64*)L$1 * 24ull );
				TMP$1743$4 = (struct $N4MATH4VEC3E*)vr$6;
				if( TMP$1743$4 == (struct $N4MATH4VEC3E*)0ull ) goto label$4789;
				TMP$1745$4 = TMP$1743$4;
				TMP$1744$4 = *(uint64*)L$1;
				label$4790:;
				if( TMP$1744$4 == 0ull ) goto label$4791;
				_ZN4MATH4VEC3C1Ev( TMP$1745$4 );
				TMP$1745$4 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1745$4 + 24ll);
				TMP$1744$4 = TMP$1744$4 + 18446744073709551615ull;
				goto label$4790;
				label$4791:;
				label$4789:;
				Q$4 = TMP$1743$4;
				{
					int64 TMP$1746$5;
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1747$5;
					if( *L$1 >= *(int64*)THIS$1 ) goto label$4792;
					TMP$1746$5 = *L$1;
					goto label$4805;
					label$4792:;
					TMP$1746$5 = *(int64*)THIS$1;
					label$4805:;
					TMP$1747$5 = TMP$1746$5 + -1ll;
					goto label$4793;
					label$4796:;
					{
						_ZN4MATH4VEC3aSERKS0_( (struct $N4MATH4VEC3E*)((uint8*)Q$4 + (I$5 * 24ll)), (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) );
					}
					label$4794:;
					I$5 = I$5 + 1ll;
					label$4793:;
					if( I$5 <= TMP$1747$5 ) goto label$4796;
					label$4795:;
				}
				*(int64*)THIS$1 = *L$1;
				if( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC3E*)0ull ) goto label$4797;
				free( *(void**)((uint8*)THIS$1 + 8ll) );
				label$4797:;
				*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = Q$4;
			}
			label$4788:;
			label$4787:;
		}
		goto label$4785;
		label$4786:;
		{
			struct $N4MATH4VEC3E* TMP$1748$3;
			uint64 TMP$1749$3;
			struct $N4MATH4VEC3E* TMP$1750$3;
			*(int64*)THIS$1 = *L$1;
			void* vr$30 = malloc( *(uint64*)THIS$1 * 24ull );
			TMP$1748$3 = (struct $N4MATH4VEC3E*)vr$30;
			if( TMP$1748$3 == (struct $N4MATH4VEC3E*)0ull ) goto label$4798;
			TMP$1750$3 = TMP$1748$3;
			TMP$1749$3 = *(uint64*)THIS$1;
			label$4799:;
			if( TMP$1749$3 == 0ull ) goto label$4800;
			_ZN4MATH4VEC3C1Ev( TMP$1750$3 );
			TMP$1750$3 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1750$3 + 24ll);
			TMP$1749$3 = TMP$1749$3 + 18446744073709551615ull;
			goto label$4799;
			label$4800:;
			label$4798:;
			*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = TMP$1748$3;
		}
		label$4785:;
	}
	goto label$4783;
	label$4784:;
	if( *L$1 != 0ll ) goto label$4801;
	{
		if( *(int64*)THIS$1 <= 0ll ) goto label$4803;
		{
			*(int64*)THIS$1 = 0ll;
			if( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC3E*)0ull ) goto label$4804;
			free( *(void**)((uint8*)THIS$1 + 8ll) );
			label$4804:;
			*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = (struct $N4MATH4VEC3E*)0ull;
		}
		label$4803:;
		label$4802:;
	}
	label$4801:;
	label$4783:;
	label$4782:;
}

double _ZNK4MATH7V3ARRAY11XMAX__get__Ev( struct $N4MATH7V3ARRAYE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$4806:;
	{
		int64 TMP$1751$2;
		TMP$1751$2 = *(int64*)THIS$1;
		if( TMP$1751$2 != 0ll ) goto label$4809;
		label$4810:;
		{
			fb$result$1 = 0x0p+0;
			goto label$4807;
		}
		goto label$4808;
		label$4809:;
		if( TMP$1751$2 != 1ll ) goto label$4811;
		label$4812:;
		{
			fb$result$1 = *(double*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll);
			goto label$4807;
		}
		goto label$4808;
		label$4811:;
		{
			double R$3;
			R$3 = *(double*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll);
			{
				int64 I$4;
				I$4 = 1ll;
				int64 TMP$1752$4;
				TMP$1752$4 = *(int64*)THIS$1 + -1ll;
				goto label$4814;
				label$4817:;
				{
					if( R$3 >= *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) ) goto label$4819;
					{
						R$3 = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll));
						label$4819:;
					}
				}
				label$4815:;
				I$4 = I$4 + 1ll;
				label$4814:;
				if( I$4 <= TMP$1752$4 ) goto label$4817;
				label$4816:;
			}
			fb$result$1 = R$3;
			goto label$4807;
		}
		label$4813:;
		label$4808:;
	}
	label$4807:;
	return fb$result$1;
}

double _ZNK4MATH7V3ARRAY11XMIN__get__Ev( struct $N4MATH7V3ARRAYE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$4820:;
	{
		int64 TMP$1753$2;
		TMP$1753$2 = *(int64*)THIS$1;
		if( TMP$1753$2 != 0ll ) goto label$4823;
		label$4824:;
		{
			fb$result$1 = 0x0p+0;
			goto label$4821;
		}
		goto label$4822;
		label$4823:;
		if( TMP$1753$2 != 1ll ) goto label$4825;
		label$4826:;
		{
			fb$result$1 = *(double*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll);
			goto label$4821;
		}
		goto label$4822;
		label$4825:;
		{
			double R$3;
			R$3 = *(double*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll);
			{
				int64 I$4;
				I$4 = 1ll;
				int64 TMP$1754$4;
				TMP$1754$4 = *(int64*)THIS$1 + -1ll;
				goto label$4828;
				label$4831:;
				{
					if( *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) >= R$3 ) goto label$4833;
					{
						R$3 = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll));
						label$4833:;
					}
				}
				label$4829:;
				I$4 = I$4 + 1ll;
				label$4828:;
				if( I$4 <= TMP$1754$4 ) goto label$4831;
				label$4830:;
			}
			fb$result$1 = R$3;
			goto label$4821;
		}
		label$4827:;
		label$4822:;
	}
	label$4821:;
	return fb$result$1;
}

double _ZNK4MATH7V3ARRAY11YMAX__get__Ev( struct $N4MATH7V3ARRAYE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$4834:;
	{
		int64 TMP$1755$2;
		TMP$1755$2 = *(int64*)THIS$1;
		if( TMP$1755$2 != 0ll ) goto label$4837;
		label$4838:;
		{
			fb$result$1 = 0x0p+0;
			goto label$4835;
		}
		goto label$4836;
		label$4837:;
		if( TMP$1755$2 != 1ll ) goto label$4839;
		label$4840:;
		{
			fb$result$1 = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + 8ll);
			goto label$4835;
		}
		goto label$4836;
		label$4839:;
		{
			double R$3;
			R$3 = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + 8ll);
			{
				int64 I$4;
				I$4 = 1ll;
				int64 TMP$1756$4;
				TMP$1756$4 = *(int64*)THIS$1 + -1ll;
				goto label$4842;
				label$4845:;
				{
					if( R$3 >= *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) + 8ll) ) goto label$4847;
					{
						R$3 = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) + 8ll);
						label$4847:;
					}
				}
				label$4843:;
				I$4 = I$4 + 1ll;
				label$4842:;
				if( I$4 <= TMP$1756$4 ) goto label$4845;
				label$4844:;
			}
			fb$result$1 = R$3;
			goto label$4835;
		}
		label$4841:;
		label$4836:;
	}
	label$4835:;
	return fb$result$1;
}

double _ZNK4MATH7V3ARRAY11YMIN__get__Ev( struct $N4MATH7V3ARRAYE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$4848:;
	{
		int64 TMP$1757$2;
		TMP$1757$2 = *(int64*)THIS$1;
		if( TMP$1757$2 != 0ll ) goto label$4851;
		label$4852:;
		{
			fb$result$1 = 0x0p+0;
			goto label$4849;
		}
		goto label$4850;
		label$4851:;
		if( TMP$1757$2 != 1ll ) goto label$4853;
		label$4854:;
		{
			fb$result$1 = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + 8ll);
			goto label$4849;
		}
		goto label$4850;
		label$4853:;
		{
			double R$3;
			R$3 = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + 8ll);
			{
				int64 I$4;
				I$4 = 1ll;
				int64 TMP$1758$4;
				TMP$1758$4 = *(int64*)THIS$1 + -1ll;
				goto label$4856;
				label$4859:;
				{
					if( *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) + 8ll) >= R$3 ) goto label$4861;
					{
						R$3 = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) + 8ll);
						label$4861:;
					}
				}
				label$4857:;
				I$4 = I$4 + 1ll;
				label$4856:;
				if( I$4 <= TMP$1758$4 ) goto label$4859;
				label$4858:;
			}
			fb$result$1 = R$3;
			goto label$4849;
		}
		label$4855:;
		label$4850:;
	}
	label$4849:;
	return fb$result$1;
}

double _ZNK4MATH7V3ARRAY11ZMAX__get__Ev( struct $N4MATH7V3ARRAYE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$4862:;
	{
		int64 TMP$1759$2;
		TMP$1759$2 = *(int64*)THIS$1;
		if( TMP$1759$2 != 0ll ) goto label$4865;
		label$4866:;
		{
			fb$result$1 = 0x0p+0;
			goto label$4863;
		}
		goto label$4864;
		label$4865:;
		if( TMP$1759$2 != 1ll ) goto label$4867;
		label$4868:;
		{
			fb$result$1 = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + 16ll);
			goto label$4863;
		}
		goto label$4864;
		label$4867:;
		{
			double R$3;
			R$3 = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + 16ll);
			{
				int64 I$4;
				I$4 = 1ll;
				int64 TMP$1760$4;
				TMP$1760$4 = *(int64*)THIS$1 + -1ll;
				goto label$4870;
				label$4873:;
				{
					if( R$3 >= *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) + 16ll) ) goto label$4875;
					{
						R$3 = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) + 16ll);
						label$4875:;
					}
				}
				label$4871:;
				I$4 = I$4 + 1ll;
				label$4870:;
				if( I$4 <= TMP$1760$4 ) goto label$4873;
				label$4872:;
			}
			fb$result$1 = R$3;
			goto label$4863;
		}
		label$4869:;
		label$4864:;
	}
	label$4863:;
	return fb$result$1;
}

double _ZNK4MATH7V3ARRAY11ZMIN__get__Ev( struct $N4MATH7V3ARRAYE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$4876:;
	{
		int64 TMP$1761$2;
		TMP$1761$2 = *(int64*)THIS$1;
		if( TMP$1761$2 != 0ll ) goto label$4879;
		label$4880:;
		{
			fb$result$1 = 0x0p+0;
			goto label$4877;
		}
		goto label$4878;
		label$4879:;
		if( TMP$1761$2 != 1ll ) goto label$4881;
		label$4882:;
		{
			fb$result$1 = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + 16ll);
			goto label$4877;
		}
		goto label$4878;
		label$4881:;
		{
			double R$3;
			R$3 = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + 16ll);
			{
				int64 I$4;
				I$4 = 1ll;
				int64 TMP$1762$4;
				TMP$1762$4 = *(int64*)THIS$1 + -1ll;
				goto label$4884;
				label$4887:;
				{
					if( *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) + 16ll) >= R$3 ) goto label$4889;
					{
						R$3 = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) + 16ll);
						label$4889:;
					}
				}
				label$4885:;
				I$4 = I$4 + 1ll;
				label$4884:;
				if( I$4 <= TMP$1762$4 ) goto label$4887;
				label$4886:;
			}
			fb$result$1 = R$3;
			goto label$4877;
		}
		label$4883:;
		label$4878:;
	}
	label$4877:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY7FOREACHEPFvRNS_4VEC3EERKb( struct $N4MATH7V3ARRAYE* THIS$1, tmp$1622 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4890:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4893;
	{
		if( F$1 == (tmp$1622)0ull ) goto label$4895;
		{
			if( *R$1 == (boolean)0ll ) goto label$4897;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4898;
					label$4901:;
					{
						(F$1)( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) );
					}
					label$4899:;
					I$5 = I$5 + -1ll;
					label$4898:;
					if( I$5 >= 0ll ) goto label$4901;
					label$4900:;
				}
			}
			goto label$4896;
			label$4897:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1763$5;
					TMP$1763$5 = *(int64*)THIS$1 + -1ll;
					goto label$4902;
					label$4905:;
					{
						(F$1)( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) );
					}
					label$4903:;
					I$5 = I$5 + 1ll;
					label$4902:;
					if( I$5 <= TMP$1763$5 ) goto label$4905;
					label$4904:;
				}
			}
			label$4896:;
			fb$result$1 = (boolean)1ll;
			goto label$4891;
		}
		label$4895:;
		label$4894:;
	}
	label$4893:;
	label$4892:;
	fb$result$1 = (boolean)0ll;
	goto label$4891;
	label$4891:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY7FOREACHEPFbRNS_4VEC3EERKb( struct $N4MATH7V3ARRAYE* THIS$1, tmp$1624 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4906:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4909;
	{
		if( F$1 == (tmp$1624)0ull ) goto label$4911;
		{
			if( *R$1 == (boolean)0ll ) goto label$4913;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4914;
					label$4917:;
					{
						boolean vr$8 = (F$1)( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) );
						if( vr$8 != (boolean)0ll ) goto label$4919;
						{
							goto label$4916;
						}
						label$4919:;
						label$4918:;
					}
					label$4915:;
					I$5 = I$5 + -1ll;
					label$4914:;
					if( I$5 >= 0ll ) goto label$4917;
					label$4916:;
				}
			}
			goto label$4912;
			label$4913:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1764$5;
					TMP$1764$5 = *(int64*)THIS$1 + -1ll;
					goto label$4920;
					label$4923:;
					{
						boolean vr$15 = (F$1)( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) );
						if( vr$15 != (boolean)0ll ) goto label$4925;
						{
							goto label$4922;
						}
						label$4925:;
						label$4924:;
					}
					label$4921:;
					I$5 = I$5 + 1ll;
					label$4920:;
					if( I$5 <= TMP$1764$5 ) goto label$4923;
					label$4922:;
				}
			}
			label$4912:;
			fb$result$1 = (boolean)1ll;
			goto label$4907;
		}
		label$4911:;
		label$4910:;
	}
	label$4909:;
	label$4908:;
	fb$result$1 = (boolean)0ll;
	goto label$4907;
	label$4907:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY7FOREACHEPFvRNS_4VEC3ERKu7INTEGERERKb( struct $N4MATH7V3ARRAYE* THIS$1, tmp$1623 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4926:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4929;
	{
		if( F$1 == (tmp$1623)0ull ) goto label$4931;
		{
			if( *R$1 == (boolean)0ll ) goto label$4933;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4934;
					label$4937:;
					{
						(F$1)( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)), (int64*)&I$5 );
					}
					label$4935:;
					I$5 = I$5 + -1ll;
					label$4934:;
					if( I$5 >= 0ll ) goto label$4937;
					label$4936:;
				}
			}
			goto label$4932;
			label$4933:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1765$5;
					TMP$1765$5 = *(int64*)THIS$1 + -1ll;
					goto label$4938;
					label$4941:;
					{
						(F$1)( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)), (int64*)&I$5 );
					}
					label$4939:;
					I$5 = I$5 + 1ll;
					label$4938:;
					if( I$5 <= TMP$1765$5 ) goto label$4941;
					label$4940:;
				}
			}
			label$4932:;
			fb$result$1 = (boolean)1ll;
			goto label$4927;
		}
		label$4931:;
		label$4930:;
	}
	label$4929:;
	label$4928:;
	fb$result$1 = (boolean)0ll;
	goto label$4927;
	label$4927:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY7FOREACHEPFbRNS_4VEC3ERKu7INTEGERERKb( struct $N4MATH7V3ARRAYE* THIS$1, tmp$1625 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4942:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4945;
	{
		if( F$1 == (tmp$1625)0ull ) goto label$4947;
		{
			if( *R$1 == (boolean)0ll ) goto label$4949;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4950;
					label$4953:;
					{
						boolean vr$9 = (F$1)( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)), (int64*)&I$5 );
						if( vr$9 != (boolean)0ll ) goto label$4955;
						{
							goto label$4952;
						}
						label$4955:;
						label$4954:;
					}
					label$4951:;
					I$5 = I$5 + -1ll;
					label$4950:;
					if( I$5 >= 0ll ) goto label$4953;
					label$4952:;
				}
			}
			goto label$4948;
			label$4949:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1766$5;
					TMP$1766$5 = *(int64*)THIS$1 + -1ll;
					goto label$4956;
					label$4959:;
					{
						boolean vr$17 = (F$1)( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)), (int64*)&I$5 );
						if( vr$17 != (boolean)0ll ) goto label$4961;
						{
							goto label$4958;
						}
						label$4961:;
						label$4960:;
					}
					label$4957:;
					I$5 = I$5 + 1ll;
					label$4956:;
					if( I$5 <= TMP$1766$5 ) goto label$4959;
					label$4958:;
				}
			}
			label$4948:;
			fb$result$1 = (boolean)1ll;
			goto label$4943;
		}
		label$4947:;
		label$4946:;
	}
	label$4945:;
	label$4944:;
	fb$result$1 = (boolean)0ll;
	goto label$4943;
	label$4943:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY8FOREACHXEPFvRdERKb( struct $N4MATH7V3ARRAYE* THIS$1, tmp$1293 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4962:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4965;
	{
		if( F$1 == (tmp$1293)0ull ) goto label$4967;
		{
			if( *R$1 == (boolean)0ll ) goto label$4969;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4970;
					label$4973:;
					{
						(F$1)( (double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) );
					}
					label$4971:;
					I$5 = I$5 + -1ll;
					label$4970:;
					if( I$5 >= 0ll ) goto label$4973;
					label$4972:;
				}
			}
			goto label$4968;
			label$4969:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1767$5;
					TMP$1767$5 = *(int64*)THIS$1 + -1ll;
					goto label$4974;
					label$4977:;
					{
						(F$1)( (double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) );
					}
					label$4975:;
					I$5 = I$5 + 1ll;
					label$4974:;
					if( I$5 <= TMP$1767$5 ) goto label$4977;
					label$4976:;
				}
			}
			label$4968:;
			fb$result$1 = (boolean)1ll;
			goto label$4963;
		}
		label$4967:;
		label$4966:;
	}
	label$4965:;
	label$4964:;
	fb$result$1 = (boolean)0ll;
	goto label$4963;
	label$4963:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY8FOREACHXEPFbRdERKb( struct $N4MATH7V3ARRAYE* THIS$1, tmp$1295 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4978:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4981;
	{
		if( F$1 == (tmp$1295)0ull ) goto label$4983;
		{
			if( *R$1 == (boolean)0ll ) goto label$4985;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4986;
					label$4989:;
					{
						boolean vr$9 = (F$1)( (double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) );
						if( vr$9 != (boolean)0ll ) goto label$4991;
						{
							goto label$4988;
						}
						label$4991:;
						label$4990:;
					}
					label$4987:;
					I$5 = I$5 + -1ll;
					label$4986:;
					if( I$5 >= 0ll ) goto label$4989;
					label$4988:;
				}
			}
			goto label$4984;
			label$4985:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1768$5;
					TMP$1768$5 = *(int64*)THIS$1 + -1ll;
					goto label$4992;
					label$4995:;
					{
						boolean vr$17 = (F$1)( (double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) );
						if( vr$17 != (boolean)0ll ) goto label$4997;
						{
							goto label$4994;
						}
						label$4997:;
						label$4996:;
					}
					label$4993:;
					I$5 = I$5 + 1ll;
					label$4992:;
					if( I$5 <= TMP$1768$5 ) goto label$4995;
					label$4994:;
				}
			}
			label$4984:;
			fb$result$1 = (boolean)1ll;
			goto label$4979;
		}
		label$4983:;
		label$4982:;
	}
	label$4981:;
	label$4980:;
	fb$result$1 = (boolean)0ll;
	goto label$4979;
	label$4979:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY8FOREACHXEPFvRdRKu7INTEGERERKb( struct $N4MATH7V3ARRAYE* THIS$1, tmp$1294 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4998:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5001;
	{
		if( F$1 == (tmp$1294)0ull ) goto label$5003;
		{
			if( *R$1 == (boolean)0ll ) goto label$5005;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$5006;
					label$5009:;
					{
						(F$1)( (double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)), (int64*)&I$5 );
					}
					label$5007:;
					I$5 = I$5 + -1ll;
					label$5006:;
					if( I$5 >= 0ll ) goto label$5009;
					label$5008:;
				}
			}
			goto label$5004;
			label$5005:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1769$5;
					TMP$1769$5 = *(int64*)THIS$1 + -1ll;
					goto label$5010;
					label$5013:;
					{
						(F$1)( (double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)), (int64*)&I$5 );
					}
					label$5011:;
					I$5 = I$5 + 1ll;
					label$5010:;
					if( I$5 <= TMP$1769$5 ) goto label$5013;
					label$5012:;
				}
			}
			label$5004:;
			fb$result$1 = (boolean)1ll;
			goto label$4999;
		}
		label$5003:;
		label$5002:;
	}
	label$5001:;
	label$5000:;
	fb$result$1 = (boolean)0ll;
	goto label$4999;
	label$4999:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY8FOREACHXEPFbRdRKu7INTEGERERKb( struct $N4MATH7V3ARRAYE* THIS$1, tmp$1296 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5014:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5017;
	{
		if( F$1 == (tmp$1296)0ull ) goto label$5019;
		{
			if( *R$1 == (boolean)0ll ) goto label$5021;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$5022;
					label$5025:;
					{
						boolean vr$10 = (F$1)( (double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)), (int64*)&I$5 );
						if( vr$10 != (boolean)0ll ) goto label$5027;
						{
							goto label$5024;
						}
						label$5027:;
						label$5026:;
					}
					label$5023:;
					I$5 = I$5 + -1ll;
					label$5022:;
					if( I$5 >= 0ll ) goto label$5025;
					label$5024:;
				}
			}
			goto label$5020;
			label$5021:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1770$5;
					TMP$1770$5 = *(int64*)THIS$1 + -1ll;
					goto label$5028;
					label$5031:;
					{
						boolean vr$19 = (F$1)( (double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)), (int64*)&I$5 );
						if( vr$19 != (boolean)0ll ) goto label$5033;
						{
							goto label$5030;
						}
						label$5033:;
						label$5032:;
					}
					label$5029:;
					I$5 = I$5 + 1ll;
					label$5028:;
					if( I$5 <= TMP$1770$5 ) goto label$5031;
					label$5030:;
				}
			}
			label$5020:;
			fb$result$1 = (boolean)1ll;
			goto label$5015;
		}
		label$5019:;
		label$5018:;
	}
	label$5017:;
	label$5016:;
	fb$result$1 = (boolean)0ll;
	goto label$5015;
	label$5015:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY8FOREACHYEPFvRdERKb( struct $N4MATH7V3ARRAYE* THIS$1, tmp$1293 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5034:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5037;
	{
		if( F$1 == (tmp$1293)0ull ) goto label$5039;
		{
			if( *R$1 == (boolean)0ll ) goto label$5041;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$5042;
					label$5045:;
					{
						(F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) + 8ll) );
					}
					label$5043:;
					I$5 = I$5 + -1ll;
					label$5042:;
					if( I$5 >= 0ll ) goto label$5045;
					label$5044:;
				}
			}
			goto label$5040;
			label$5041:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1771$5;
					TMP$1771$5 = *(int64*)THIS$1 + -1ll;
					goto label$5046;
					label$5049:;
					{
						(F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) + 8ll) );
					}
					label$5047:;
					I$5 = I$5 + 1ll;
					label$5046:;
					if( I$5 <= TMP$1771$5 ) goto label$5049;
					label$5048:;
				}
			}
			label$5040:;
			fb$result$1 = (boolean)1ll;
			goto label$5035;
		}
		label$5039:;
		label$5038:;
	}
	label$5037:;
	label$5036:;
	fb$result$1 = (boolean)0ll;
	goto label$5035;
	label$5035:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY8FOREACHYEPFbRdERKb( struct $N4MATH7V3ARRAYE* THIS$1, tmp$1295 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5050:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5053;
	{
		if( F$1 == (tmp$1295)0ull ) goto label$5055;
		{
			if( *R$1 == (boolean)0ll ) goto label$5057;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$5058;
					label$5061:;
					{
						boolean vr$9 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) + 8ll) );
						if( vr$9 != (boolean)0ll ) goto label$5063;
						{
							goto label$5060;
						}
						label$5063:;
						label$5062:;
					}
					label$5059:;
					I$5 = I$5 + -1ll;
					label$5058:;
					if( I$5 >= 0ll ) goto label$5061;
					label$5060:;
				}
			}
			goto label$5056;
			label$5057:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1772$5;
					TMP$1772$5 = *(int64*)THIS$1 + -1ll;
					goto label$5064;
					label$5067:;
					{
						boolean vr$17 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) + 8ll) );
						if( vr$17 != (boolean)0ll ) goto label$5069;
						{
							goto label$5066;
						}
						label$5069:;
						label$5068:;
					}
					label$5065:;
					I$5 = I$5 + 1ll;
					label$5064:;
					if( I$5 <= TMP$1772$5 ) goto label$5067;
					label$5066:;
				}
			}
			label$5056:;
			fb$result$1 = (boolean)1ll;
			goto label$5051;
		}
		label$5055:;
		label$5054:;
	}
	label$5053:;
	label$5052:;
	fb$result$1 = (boolean)0ll;
	goto label$5051;
	label$5051:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY8FOREACHYEPFvRdRKu7INTEGERERKb( struct $N4MATH7V3ARRAYE* THIS$1, tmp$1294 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5070:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5073;
	{
		if( F$1 == (tmp$1294)0ull ) goto label$5075;
		{
			if( *R$1 == (boolean)0ll ) goto label$5077;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$5078;
					label$5081:;
					{
						(F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) + 8ll), (int64*)&I$5 );
					}
					label$5079:;
					I$5 = I$5 + -1ll;
					label$5078:;
					if( I$5 >= 0ll ) goto label$5081;
					label$5080:;
				}
			}
			goto label$5076;
			label$5077:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1773$5;
					TMP$1773$5 = *(int64*)THIS$1 + -1ll;
					goto label$5082;
					label$5085:;
					{
						(F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) + 8ll), (int64*)&I$5 );
					}
					label$5083:;
					I$5 = I$5 + 1ll;
					label$5082:;
					if( I$5 <= TMP$1773$5 ) goto label$5085;
					label$5084:;
				}
			}
			label$5076:;
			fb$result$1 = (boolean)1ll;
			goto label$5071;
		}
		label$5075:;
		label$5074:;
	}
	label$5073:;
	label$5072:;
	fb$result$1 = (boolean)0ll;
	goto label$5071;
	label$5071:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY8FOREACHYEPFbRdRKu7INTEGERERKb( struct $N4MATH7V3ARRAYE* THIS$1, tmp$1296 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5086:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5089;
	{
		if( F$1 == (tmp$1296)0ull ) goto label$5091;
		{
			if( *R$1 == (boolean)0ll ) goto label$5093;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$5094;
					label$5097:;
					{
						boolean vr$10 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) + 8ll), (int64*)&I$5 );
						if( vr$10 != (boolean)0ll ) goto label$5099;
						{
							goto label$5096;
						}
						label$5099:;
						label$5098:;
					}
					label$5095:;
					I$5 = I$5 + -1ll;
					label$5094:;
					if( I$5 >= 0ll ) goto label$5097;
					label$5096:;
				}
			}
			goto label$5092;
			label$5093:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1774$5;
					TMP$1774$5 = *(int64*)THIS$1 + -1ll;
					goto label$5100;
					label$5103:;
					{
						boolean vr$19 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) + 8ll), (int64*)&I$5 );
						if( vr$19 != (boolean)0ll ) goto label$5105;
						{
							goto label$5102;
						}
						label$5105:;
						label$5104:;
					}
					label$5101:;
					I$5 = I$5 + 1ll;
					label$5100:;
					if( I$5 <= TMP$1774$5 ) goto label$5103;
					label$5102:;
				}
			}
			label$5092:;
			fb$result$1 = (boolean)1ll;
			goto label$5087;
		}
		label$5091:;
		label$5090:;
	}
	label$5089:;
	label$5088:;
	fb$result$1 = (boolean)0ll;
	goto label$5087;
	label$5087:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY8FOREACHZEPFvRdERKb( struct $N4MATH7V3ARRAYE* THIS$1, tmp$1293 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5106:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5109;
	{
		if( F$1 == (tmp$1293)0ull ) goto label$5111;
		{
			if( *R$1 == (boolean)0ll ) goto label$5113;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$5114;
					label$5117:;
					{
						(F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) + 16ll) );
					}
					label$5115:;
					I$5 = I$5 + -1ll;
					label$5114:;
					if( I$5 >= 0ll ) goto label$5117;
					label$5116:;
				}
			}
			goto label$5112;
			label$5113:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1775$5;
					TMP$1775$5 = *(int64*)THIS$1 + -1ll;
					goto label$5118;
					label$5121:;
					{
						(F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) + 16ll) );
					}
					label$5119:;
					I$5 = I$5 + 1ll;
					label$5118:;
					if( I$5 <= TMP$1775$5 ) goto label$5121;
					label$5120:;
				}
			}
			label$5112:;
			fb$result$1 = (boolean)1ll;
			goto label$5107;
		}
		label$5111:;
		label$5110:;
	}
	label$5109:;
	label$5108:;
	fb$result$1 = (boolean)0ll;
	goto label$5107;
	label$5107:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY8FOREACHZEPFbRdERKb( struct $N4MATH7V3ARRAYE* THIS$1, tmp$1295 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5122:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5125;
	{
		if( F$1 == (tmp$1295)0ull ) goto label$5127;
		{
			if( *R$1 == (boolean)0ll ) goto label$5129;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$5130;
					label$5133:;
					{
						boolean vr$9 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) + 16ll) );
						if( vr$9 != (boolean)0ll ) goto label$5135;
						{
							goto label$5132;
						}
						label$5135:;
						label$5134:;
					}
					label$5131:;
					I$5 = I$5 + -1ll;
					label$5130:;
					if( I$5 >= 0ll ) goto label$5133;
					label$5132:;
				}
			}
			goto label$5128;
			label$5129:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1776$5;
					TMP$1776$5 = *(int64*)THIS$1 + -1ll;
					goto label$5136;
					label$5139:;
					{
						boolean vr$17 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) + 16ll) );
						if( vr$17 != (boolean)0ll ) goto label$5141;
						{
							goto label$5138;
						}
						label$5141:;
						label$5140:;
					}
					label$5137:;
					I$5 = I$5 + 1ll;
					label$5136:;
					if( I$5 <= TMP$1776$5 ) goto label$5139;
					label$5138:;
				}
			}
			label$5128:;
			fb$result$1 = (boolean)1ll;
			goto label$5123;
		}
		label$5127:;
		label$5126:;
	}
	label$5125:;
	label$5124:;
	fb$result$1 = (boolean)0ll;
	goto label$5123;
	label$5123:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY8FOREACHZEPFvRdRKu7INTEGERERKb( struct $N4MATH7V3ARRAYE* THIS$1, tmp$1294 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5142:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5145;
	{
		if( F$1 == (tmp$1294)0ull ) goto label$5147;
		{
			if( *R$1 == (boolean)0ll ) goto label$5149;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$5150;
					label$5153:;
					{
						(F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) + 16ll), (int64*)&I$5 );
					}
					label$5151:;
					I$5 = I$5 + -1ll;
					label$5150:;
					if( I$5 >= 0ll ) goto label$5153;
					label$5152:;
				}
			}
			goto label$5148;
			label$5149:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1777$5;
					TMP$1777$5 = *(int64*)THIS$1 + -1ll;
					goto label$5154;
					label$5157:;
					{
						(F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) + 16ll), (int64*)&I$5 );
					}
					label$5155:;
					I$5 = I$5 + 1ll;
					label$5154:;
					if( I$5 <= TMP$1777$5 ) goto label$5157;
					label$5156:;
				}
			}
			label$5148:;
			fb$result$1 = (boolean)1ll;
			goto label$5143;
		}
		label$5147:;
		label$5146:;
	}
	label$5145:;
	label$5144:;
	fb$result$1 = (boolean)0ll;
	goto label$5143;
	label$5143:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY8FOREACHZEPFbRdRKu7INTEGERERKb( struct $N4MATH7V3ARRAYE* THIS$1, tmp$1296 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5158:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5161;
	{
		if( F$1 == (tmp$1296)0ull ) goto label$5163;
		{
			if( *R$1 == (boolean)0ll ) goto label$5165;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$5166;
					label$5169:;
					{
						boolean vr$10 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) + 16ll), (int64*)&I$5 );
						if( vr$10 != (boolean)0ll ) goto label$5171;
						{
							goto label$5168;
						}
						label$5171:;
						label$5170:;
					}
					label$5167:;
					I$5 = I$5 + -1ll;
					label$5166:;
					if( I$5 >= 0ll ) goto label$5169;
					label$5168:;
				}
			}
			goto label$5164;
			label$5165:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1778$5;
					TMP$1778$5 = *(int64*)THIS$1 + -1ll;
					goto label$5172;
					label$5175:;
					{
						boolean vr$19 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) + 16ll), (int64*)&I$5 );
						if( vr$19 != (boolean)0ll ) goto label$5177;
						{
							goto label$5174;
						}
						label$5177:;
						label$5176:;
					}
					label$5173:;
					I$5 = I$5 + 1ll;
					label$5172:;
					if( I$5 <= TMP$1778$5 ) goto label$5175;
					label$5174:;
				}
			}
			label$5164:;
			fb$result$1 = (boolean)1ll;
			goto label$5159;
		}
		label$5163:;
		label$5162:;
	}
	label$5161:;
	label$5160:;
	fb$result$1 = (boolean)0ll;
	goto label$5159;
	label$5159:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY3MAPERS0_PFNS_4VEC3ERKS2_E( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH7V3ARRAYE* A$1, tmp$1626 F$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5178:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5181;
	{
		if( F$1 == (tmp$1626)0ull ) goto label$5183;
		{
			_ZN4MATH7V3ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1779$4;
				TMP$1779$4 = *(int64*)THIS$1 + -1ll;
				goto label$5184;
				label$5187:;
				{
					struct $N4MATH4VEC3E TMP$1780$5;
					struct $N4MATH4VEC3E vr$9 = (F$1)( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) );
					TMP$1780$5 = vr$9;
					_ZN4MATH4VEC3aSERKS0_( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)A$1 + 8ll) + (I$4 * 24ll)), (struct $N4MATH4VEC3E*)&TMP$1780$5 );
				}
				label$5185:;
				I$4 = I$4 + 1ll;
				label$5184:;
				if( I$4 <= TMP$1779$4 ) goto label$5187;
				label$5186:;
			}
			fb$result$1 = (boolean)1ll;
			goto label$5179;
		}
		label$5183:;
		label$5182:;
	}
	label$5181:;
	label$5180:;
	fb$result$1 = (boolean)0ll;
	goto label$5179;
	label$5179:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY4MAPXERNS_5ARRAYE( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5188:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5191;
	{
		_ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
		double* P$2;
		double* vr$4 = _ZNK4MATH5ARRAY11DATA__get__Ev( (struct $N4MATH5ARRAYE*)A$1 );
		P$2 = vr$4;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1781$3;
			TMP$1781$3 = *(int64*)THIS$1 + -1ll;
			goto label$5192;
			label$5195:;
			{
				*(double*)((uint8*)P$2 + (I$3 << (3ll & 63ll))) = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll));
			}
			label$5193:;
			I$3 = I$3 + 1ll;
			label$5192:;
			if( I$3 <= TMP$1781$3 ) goto label$5195;
			label$5194:;
		}
		fb$result$1 = (boolean)1ll;
		goto label$5189;
	}
	label$5191:;
	label$5190:;
	fb$result$1 = (boolean)0ll;
	goto label$5189;
	label$5189:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY4MAPXERNS_5ARRAYEPFdRKdE( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1, tmp$1297 F$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5196:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5199;
	{
		if( F$1 == (tmp$1297)0ull ) goto label$5201;
		{
			_ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
			double* P$3;
			double* vr$4 = _ZNK4MATH5ARRAY11DATA__get__Ev( (struct $N4MATH5ARRAYE*)A$1 );
			P$3 = vr$4;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1782$4;
				TMP$1782$4 = *(int64*)THIS$1 + -1ll;
				goto label$5202;
				label$5205:;
				{
					double vr$11 = (F$1)( (double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) );
					*(double*)((uint8*)P$3 + (I$4 << (3ll & 63ll))) = vr$11;
				}
				label$5203:;
				I$4 = I$4 + 1ll;
				label$5202:;
				if( I$4 <= TMP$1782$4 ) goto label$5205;
				label$5204:;
			}
			fb$result$1 = (boolean)1ll;
			goto label$5197;
		}
		label$5201:;
		label$5200:;
	}
	label$5199:;
	label$5198:;
	fb$result$1 = (boolean)0ll;
	goto label$5197;
	label$5197:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY4MAPYERNS_5ARRAYE( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5206:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5209;
	{
		_ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
		double* P$2;
		double* vr$4 = _ZNK4MATH5ARRAY11DATA__get__Ev( (struct $N4MATH5ARRAYE*)A$1 );
		P$2 = vr$4;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1783$3;
			TMP$1783$3 = *(int64*)THIS$1 + -1ll;
			goto label$5210;
			label$5213:;
			{
				*(double*)((uint8*)P$2 + (I$3 << (3ll & 63ll))) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 8ll);
			}
			label$5211:;
			I$3 = I$3 + 1ll;
			label$5210:;
			if( I$3 <= TMP$1783$3 ) goto label$5213;
			label$5212:;
		}
		fb$result$1 = (boolean)1ll;
		goto label$5207;
	}
	label$5209:;
	label$5208:;
	fb$result$1 = (boolean)0ll;
	goto label$5207;
	label$5207:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY4MAPYERNS_5ARRAYEPFdRKdE( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1, tmp$1297 F$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5214:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5217;
	{
		if( F$1 == (tmp$1297)0ull ) goto label$5219;
		{
			_ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
			double* P$3;
			double* vr$4 = _ZNK4MATH5ARRAY11DATA__get__Ev( (struct $N4MATH5ARRAYE*)A$1 );
			P$3 = vr$4;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1784$4;
				TMP$1784$4 = *(int64*)THIS$1 + -1ll;
				goto label$5220;
				label$5223:;
				{
					double vr$11 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) + 8ll) );
					*(double*)((uint8*)P$3 + (I$4 << (3ll & 63ll))) = vr$11;
				}
				label$5221:;
				I$4 = I$4 + 1ll;
				label$5220:;
				if( I$4 <= TMP$1784$4 ) goto label$5223;
				label$5222:;
			}
			fb$result$1 = (boolean)1ll;
			goto label$5215;
		}
		label$5219:;
		label$5218:;
	}
	label$5217:;
	label$5216:;
	fb$result$1 = (boolean)0ll;
	goto label$5215;
	label$5215:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY4MAPZERNS_5ARRAYE( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5224:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5227;
	{
		_ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
		double* P$2;
		double* vr$4 = _ZNK4MATH5ARRAY11DATA__get__Ev( (struct $N4MATH5ARRAYE*)A$1 );
		P$2 = vr$4;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1785$3;
			TMP$1785$3 = *(int64*)THIS$1 + -1ll;
			goto label$5228;
			label$5231:;
			{
				*(double*)((uint8*)P$2 + (I$3 << (3ll & 63ll))) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 16ll);
			}
			label$5229:;
			I$3 = I$3 + 1ll;
			label$5228:;
			if( I$3 <= TMP$1785$3 ) goto label$5231;
			label$5230:;
		}
		fb$result$1 = (boolean)1ll;
		goto label$5225;
	}
	label$5227:;
	label$5226:;
	fb$result$1 = (boolean)0ll;
	goto label$5225;
	label$5225:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY4MAPZERNS_5ARRAYEPFdRKdE( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1, tmp$1297 F$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5232:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5235;
	{
		if( F$1 == (tmp$1297)0ull ) goto label$5237;
		{
			_ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
			double* P$3;
			double* vr$4 = _ZNK4MATH5ARRAY11DATA__get__Ev( (struct $N4MATH5ARRAYE*)A$1 );
			P$3 = vr$4;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1786$4;
				TMP$1786$4 = *(int64*)THIS$1 + -1ll;
				goto label$5238;
				label$5241:;
				{
					double vr$11 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) + 16ll) );
					*(double*)((uint8*)P$3 + (I$4 << (3ll & 63ll))) = vr$11;
				}
				label$5239:;
				I$4 = I$4 + 1ll;
				label$5238:;
				if( I$4 <= TMP$1786$4 ) goto label$5241;
				label$5240:;
			}
			fb$result$1 = (boolean)1ll;
			goto label$5233;
		}
		label$5237:;
		label$5236:;
	}
	label$5235:;
	label$5234:;
	fb$result$1 = (boolean)0ll;
	goto label$5233;
	label$5233:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY9NORMALISEEv( struct $N4MATH7V3ARRAYE* THIS$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5242:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5245;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1787$3;
			TMP$1787$3 = *(int64*)THIS$1 + -1ll;
			goto label$5246;
			label$5249:;
			{
				_ZN4MATH4VEC39NORMALISEEv( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) );
			}
			label$5247:;
			I$3 = I$3 + 1ll;
			label$5246:;
			if( I$3 <= TMP$1787$3 ) goto label$5249;
			label$5248:;
		}
		fb$result$1 = (boolean)1ll;
		goto label$5243;
	}
	label$5245:;
	label$5244:;
	fb$result$1 = (boolean)0ll;
	goto label$5243;
	label$5243:;
	return fb$result$1;
}

FBSTRING* _ZNK4MATH7V3ARRAY6TOJSONERKb( struct $N4MATH7V3ARRAYE* THIS$1, boolean* A$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$5250:;
	{
		int64 TMP$1788$2;
		TMP$1788$2 = *(int64*)THIS$1;
		if( TMP$1788$2 != 0ll ) goto label$5253;
		label$5254:;
		{
			fb_StrInit( (void*)&fb$result$1, -1ll, (void*)"[]", 3ll, 0 );
			goto label$5251;
		}
		goto label$5252;
		label$5253:;
		if( TMP$1788$2 != 1ll ) goto label$5255;
		label$5256:;
		{
			FBSTRING TMP$1789$3;
			FBSTRING TMP$1790$3;
			FBSTRING* vr$4 = _ZNK4MATH4VEC36TOJSONERKb( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll), A$1 );
			__builtin_memset( &TMP$1789$3, 0, 24ll );
			FBSTRING* vr$7 = fb_StrConcat( &TMP$1789$3, (void*)"[", 2ll, (void*)vr$4, -1ll );
			__builtin_memset( &TMP$1790$3, 0, 24ll );
			FBSTRING* vr$10 = fb_StrConcat( &TMP$1790$3, (void*)vr$7, -1ll, (void*)"]", 2ll );
			fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$10, -1ll, 0 );
			goto label$5251;
		}
		goto label$5252;
		label$5255:;
		{
			FBSTRING TMP$1791$3;
			FBSTRING TMP$1795$3;
			FBSTRING R$3;
			FBSTRING* vr$13 = _ZNK4MATH4VEC36TOJSONERKb( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll), A$1 );
			__builtin_memset( &TMP$1791$3, 0, 24ll );
			FBSTRING* vr$16 = fb_StrConcat( &TMP$1791$3, (void*)"[", 2ll, (void*)vr$13, -1ll );
			fb_StrInit( (void*)&R$3, -1ll, (void*)vr$16, -1ll, 0 );
			{
				int64 I$4;
				I$4 = 1ll;
				int64 TMP$1792$4;
				TMP$1792$4 = *(int64*)THIS$1 + -1ll;
				goto label$5258;
				label$5261:;
				{
					FBSTRING TMP$1793$5;
					FBSTRING TMP$1794$5;
					FBSTRING* vr$23 = _ZNK4MATH4VEC36TOJSONERKb( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)), A$1 );
					__builtin_memset( &TMP$1793$5, 0, 24ll );
					FBSTRING* vr$26 = fb_StrConcat( &TMP$1793$5, (void*)",", 2ll, (void*)vr$23, -1ll );
					__builtin_memset( &TMP$1794$5, 0, 24ll );
					FBSTRING* vr$30 = fb_StrConcat( &TMP$1794$5, (void*)&R$3, -1ll, (void*)vr$26, -1ll );
					fb_StrAssign( (void*)&R$3, -1ll, (void*)vr$30, -1ll, 0 );
				}
				label$5259:;
				I$4 = I$4 + 1ll;
				label$5258:;
				if( I$4 <= TMP$1792$4 ) goto label$5261;
				label$5260:;
			}
			__builtin_memset( &TMP$1795$3, 0, 24ll );
			FBSTRING* vr$36 = fb_StrConcat( &TMP$1795$3, (void*)&R$3, -1ll, (void*)"]", 2ll );
			fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$36, -1ll, 0 );
			fb_StrDelete( (FBSTRING*)&R$3 );
			goto label$5251;
			fb_StrDelete( (FBSTRING*)&R$3 );
		}
		label$5257:;
		label$5252:;
	}
	label$5251:;
	FBSTRING* vr$41 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$41;
}

void _ZN4MATH7V4ARRAYC1Ev( struct $N4MATH7V4ARRAYE* THIS$1 )
{
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC4C1Ev( (struct $N4MATH4VEC4E*)((uint8*)THIS$1 + 16ll) );
	label$5262:;
	label$5263:;
}

void _ZN4MATH7V4ARRAYC1ERKNS_5ARRAYES3_S3_S3_( struct $N4MATH7V4ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A1$1, struct $N4MATH5ARRAYE* A2$1, struct $N4MATH5ARRAYE* A3$1, struct $N4MATH5ARRAYE* A4$1 )
{
	label$5264:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC4C1Ev( (struct $N4MATH4VEC4E*)((uint8*)THIS$1 + 16ll) );
	if( ((((int64)-(*(int64*)A1$1 > 0ll) & (int64)-(*(int64*)A1$1 == *(int64*)A2$1)) & (int64)-(*(int64*)A2$1 == *(int64*)A3$1)) & (int64)-(*(int64*)A3$1 == *(int64*)A4$1)) == 0ll ) goto label$5267;
	{
		struct $N4MATH4VEC4E* TMP$1801$2;
		uint64 TMP$1802$2;
		struct $N4MATH4VEC4E* TMP$1803$2;
		*(int64*)THIS$1 = *(int64*)A1$1;
		void* vr$24 = malloc( *(uint64*)A1$1 << (5ull & 63ll) );
		TMP$1801$2 = (struct $N4MATH4VEC4E*)vr$24;
		if( TMP$1801$2 == (struct $N4MATH4VEC4E*)0ull ) goto label$5268;
		TMP$1803$2 = TMP$1801$2;
		TMP$1802$2 = *(uint64*)A1$1;
		label$5269:;
		if( TMP$1802$2 == 0ull ) goto label$5270;
		_ZN4MATH4VEC4C1Ev( TMP$1803$2 );
		TMP$1803$2 = (struct $N4MATH4VEC4E*)((uint8*)TMP$1803$2 + 32ll);
		TMP$1802$2 = TMP$1802$2 + 18446744073709551615ull;
		goto label$5269;
		label$5270:;
		label$5268:;
		*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) = TMP$1801$2;
		double* P1$2;
		double* vr$29 = _ZNK4MATH5ARRAY11DATA__get__Ev( A1$1 );
		P1$2 = vr$29;
		double* P2$2;
		double* vr$30 = _ZNK4MATH5ARRAY11DATA__get__Ev( A2$1 );
		P2$2 = vr$30;
		double* P3$2;
		double* vr$31 = _ZNK4MATH5ARRAY11DATA__get__Ev( A3$1 );
		P3$2 = vr$31;
		double* P4$2;
		double* vr$32 = _ZNK4MATH5ARRAY11DATA__get__Ev( A4$1 );
		P4$2 = vr$32;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1804$3;
			TMP$1804$3 = *(int64*)A1$1 + -1ll;
			goto label$5271;
			label$5274:;
			{
				*(double*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))) = *(double*)((uint8*)P1$2 + (I$3 << (3ll & 63ll)));
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))) + 8ll) = *(double*)((uint8*)P2$2 + (I$3 << (3ll & 63ll)));
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))) + 16ll) = *(double*)((uint8*)P3$2 + (I$3 << (3ll & 63ll)));
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))) + 24ll) = *(double*)((uint8*)P4$2 + (I$3 << (3ll & 63ll)));
			}
			label$5272:;
			I$3 = I$3 + 1ll;
			label$5271:;
			if( I$3 <= TMP$1804$3 ) goto label$5274;
			label$5273:;
		}
	}
	label$5267:;
	label$5266:;
	label$5265:;
}

void _ZN4MATH7V4ARRAYC1ERKNS_7V2ARRAYE( struct $N4MATH7V4ARRAYE* THIS$1, struct $N4MATH7V2ARRAYE* A$1 )
{
	label$5275:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC4C1Ev( (struct $N4MATH4VEC4E*)((uint8*)THIS$1 + 16ll) );
	if( *(int64*)A$1 == 0ll ) goto label$5278;
	{
		struct $N4MATH4VEC4E* TMP$1805$2;
		uint64 TMP$1806$2;
		struct $N4MATH4VEC4E* TMP$1807$2;
		*(int64*)THIS$1 = *(int64*)A$1;
		void* vr$11 = malloc( *(uint64*)A$1 << (5ull & 63ll) );
		TMP$1805$2 = (struct $N4MATH4VEC4E*)vr$11;
		if( TMP$1805$2 == (struct $N4MATH4VEC4E*)0ull ) goto label$5279;
		TMP$1807$2 = TMP$1805$2;
		TMP$1806$2 = *(uint64*)A$1;
		label$5280:;
		if( TMP$1806$2 == 0ull ) goto label$5281;
		_ZN4MATH4VEC4C1Ev( TMP$1807$2 );
		TMP$1807$2 = (struct $N4MATH4VEC4E*)((uint8*)TMP$1807$2 + 32ll);
		TMP$1806$2 = TMP$1806$2 + 18446744073709551615ull;
		goto label$5280;
		label$5281:;
		label$5279:;
		*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) = TMP$1805$2;
		struct $N4MATH4VEC2E* P$2;
		struct $N4MATH4VEC2E* vr$16 = _ZNK4MATH7V2ARRAY11DATA__get__Ev( A$1 );
		P$2 = vr$16;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1808$3;
			TMP$1808$3 = *(int64*)THIS$1 + -1ll;
			goto label$5282;
			label$5285:;
			{
				*(double*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))) = *(double*)((uint8*)P$2 + (I$3 << (4ll & 63ll)));
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))) + 8ll) = *(double*)((uint8*)((uint8*)P$2 + (I$3 << (4ll & 63ll))) + 8ll);
			}
			label$5283:;
			I$3 = I$3 + 1ll;
			label$5282:;
			if( I$3 <= TMP$1808$3 ) goto label$5285;
			label$5284:;
		}
	}
	label$5278:;
	label$5277:;
	label$5276:;
}

void _ZN4MATH7V4ARRAYC1ERKNS_7V2ARRAYERKNS_5ARRAYES6_( struct $N4MATH7V4ARRAYE* THIS$1, struct $N4MATH7V2ARRAYE* A12$1, struct $N4MATH5ARRAYE* A3$1, struct $N4MATH5ARRAYE* A4$1 )
{
	label$5286:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC4C1Ev( (struct $N4MATH4VEC4E*)((uint8*)THIS$1 + 16ll) );
	if( (((int64)-(*(int64*)A12$1 > 0ll) & (int64)-(*(int64*)A12$1 == *(int64*)A3$1)) & (int64)-(*(int64*)A3$1 == *(int64*)A4$1)) == 0ll ) goto label$5289;
	{
		struct $N4MATH4VEC4E* TMP$1809$2;
		uint64 TMP$1810$2;
		struct $N4MATH4VEC4E* TMP$1811$2;
		*(int64*)THIS$1 = *(int64*)A12$1;
		void* vr$20 = malloc( *(uint64*)A12$1 << (5ull & 63ll) );
		TMP$1809$2 = (struct $N4MATH4VEC4E*)vr$20;
		if( TMP$1809$2 == (struct $N4MATH4VEC4E*)0ull ) goto label$5290;
		TMP$1811$2 = TMP$1809$2;
		TMP$1810$2 = *(uint64*)A12$1;
		label$5291:;
		if( TMP$1810$2 == 0ull ) goto label$5292;
		_ZN4MATH4VEC4C1Ev( TMP$1811$2 );
		TMP$1811$2 = (struct $N4MATH4VEC4E*)((uint8*)TMP$1811$2 + 32ll);
		TMP$1810$2 = TMP$1810$2 + 18446744073709551615ull;
		goto label$5291;
		label$5292:;
		label$5290:;
		*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) = TMP$1809$2;
		struct $N4MATH4VEC2E* P12$2;
		struct $N4MATH4VEC2E* vr$25 = _ZNK4MATH7V2ARRAY11DATA__get__Ev( A12$1 );
		P12$2 = vr$25;
		double* P3$2;
		double* vr$26 = _ZNK4MATH5ARRAY11DATA__get__Ev( A3$1 );
		P3$2 = vr$26;
		double* P4$2;
		double* vr$27 = _ZNK4MATH5ARRAY11DATA__get__Ev( A4$1 );
		P4$2 = vr$27;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1812$3;
			TMP$1812$3 = *(int64*)A12$1 + -1ll;
			goto label$5293;
			label$5296:;
			{
				*(double*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))) = *(double*)((uint8*)P12$2 + (I$3 << (4ll & 63ll)));
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))) + 8ll) = *(double*)((uint8*)((uint8*)P12$2 + (I$3 << (4ll & 63ll))) + 8ll);
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))) + 16ll) = *(double*)((uint8*)P3$2 + (I$3 << (3ll & 63ll)));
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))) + 24ll) = *(double*)((uint8*)P4$2 + (I$3 << (3ll & 63ll)));
			}
			label$5294:;
			I$3 = I$3 + 1ll;
			label$5293:;
			if( I$3 <= TMP$1812$3 ) goto label$5296;
			label$5295:;
		}
	}
	label$5289:;
	label$5288:;
	label$5287:;
}

void _ZN4MATH7V4ARRAYC1ERKNS_7V3ARRAYE( struct $N4MATH7V4ARRAYE* THIS$1, struct $N4MATH7V3ARRAYE* A$1 )
{
	label$5297:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC4C1Ev( (struct $N4MATH4VEC4E*)((uint8*)THIS$1 + 16ll) );
	if( *(int64*)A$1 == 0ll ) goto label$5300;
	{
		struct $N4MATH4VEC4E* TMP$1813$2;
		uint64 TMP$1814$2;
		struct $N4MATH4VEC4E* TMP$1815$2;
		*(int64*)THIS$1 = *(int64*)A$1;
		void* vr$11 = malloc( *(uint64*)A$1 << (5ull & 63ll) );
		TMP$1813$2 = (struct $N4MATH4VEC4E*)vr$11;
		if( TMP$1813$2 == (struct $N4MATH4VEC4E*)0ull ) goto label$5301;
		TMP$1815$2 = TMP$1813$2;
		TMP$1814$2 = *(uint64*)A$1;
		label$5302:;
		if( TMP$1814$2 == 0ull ) goto label$5303;
		_ZN4MATH4VEC4C1Ev( TMP$1815$2 );
		TMP$1815$2 = (struct $N4MATH4VEC4E*)((uint8*)TMP$1815$2 + 32ll);
		TMP$1814$2 = TMP$1814$2 + 18446744073709551615ull;
		goto label$5302;
		label$5303:;
		label$5301:;
		*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) = TMP$1813$2;
		struct $N4MATH4VEC3E* P$2;
		struct $N4MATH4VEC3E* vr$16 = _ZNK4MATH7V3ARRAY11DATA__get__Ev( A$1 );
		P$2 = vr$16;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1816$3;
			TMP$1816$3 = *(int64*)THIS$1 + -1ll;
			goto label$5304;
			label$5307:;
			{
				*(double*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))) = *(double*)((uint8*)P$2 + (I$3 * 24ll));
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))) + 8ll) = *(double*)((uint8*)((uint8*)P$2 + (I$3 * 24ll)) + 8ll);
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))) + 16ll) = *(double*)((uint8*)((uint8*)P$2 + (I$3 * 24ll)) + 16ll);
			}
			label$5305:;
			I$3 = I$3 + 1ll;
			label$5304:;
			if( I$3 <= TMP$1816$3 ) goto label$5307;
			label$5306:;
		}
	}
	label$5300:;
	label$5299:;
	label$5298:;
}

void _ZN4MATH7V4ARRAYC1ERKNS_7V3ARRAYERKNS_5ARRAYE( struct $N4MATH7V4ARRAYE* THIS$1, struct $N4MATH7V3ARRAYE* A123$1, struct $N4MATH5ARRAYE* A4$1 )
{
	label$5308:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC4C1Ev( (struct $N4MATH4VEC4E*)((uint8*)THIS$1 + 16ll) );
	if( ((int64)-(*(int64*)A123$1 > 0ll) & (int64)-(*(int64*)A123$1 == *(int64*)A4$1)) == 0ll ) goto label$5311;
	{
		struct $N4MATH4VEC4E* TMP$1817$2;
		uint64 TMP$1818$2;
		struct $N4MATH4VEC4E* TMP$1819$2;
		*(int64*)THIS$1 = *(int64*)A123$1;
		void* vr$16 = malloc( *(uint64*)A123$1 << (5ull & 63ll) );
		TMP$1817$2 = (struct $N4MATH4VEC4E*)vr$16;
		if( TMP$1817$2 == (struct $N4MATH4VEC4E*)0ull ) goto label$5312;
		TMP$1819$2 = TMP$1817$2;
		TMP$1818$2 = *(uint64*)A123$1;
		label$5313:;
		if( TMP$1818$2 == 0ull ) goto label$5314;
		_ZN4MATH4VEC4C1Ev( TMP$1819$2 );
		TMP$1819$2 = (struct $N4MATH4VEC4E*)((uint8*)TMP$1819$2 + 32ll);
		TMP$1818$2 = TMP$1818$2 + 18446744073709551615ull;
		goto label$5313;
		label$5314:;
		label$5312:;
		*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) = TMP$1817$2;
		struct $N4MATH4VEC3E* P123$2;
		struct $N4MATH4VEC3E* vr$21 = _ZNK4MATH7V3ARRAY11DATA__get__Ev( A123$1 );
		P123$2 = vr$21;
		double* P4$2;
		double* vr$22 = _ZNK4MATH5ARRAY11DATA__get__Ev( A4$1 );
		P4$2 = vr$22;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1820$3;
			TMP$1820$3 = *(int64*)A123$1 + -1ll;
			goto label$5315;
			label$5318:;
			{
				*(double*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))) = *(double*)((uint8*)P123$2 + (I$3 * 24ll));
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))) + 8ll) = *(double*)((uint8*)((uint8*)P123$2 + (I$3 * 24ll)) + 8ll);
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))) + 16ll) = *(double*)((uint8*)((uint8*)P123$2 + (I$3 * 24ll)) + 16ll);
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))) + 24ll) = *(double*)((uint8*)P4$2 + (I$3 << (3ll & 63ll)));
			}
			label$5316:;
			I$3 = I$3 + 1ll;
			label$5315:;
			if( I$3 <= TMP$1820$3 ) goto label$5318;
			label$5317:;
		}
	}
	label$5311:;
	label$5310:;
	label$5309:;
}

void _ZN4MATH7V4ARRAYC1ERKS0_( struct $N4MATH7V4ARRAYE* THIS$1, struct $N4MATH7V4ARRAYE* A$1 )
{
	label$5319:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC4C1Ev( (struct $N4MATH4VEC4E*)((uint8*)THIS$1 + 16ll) );
	if( *(int64*)A$1 == 0ll ) goto label$5322;
	{
		struct $N4MATH4VEC4E* TMP$1821$2;
		uint64 TMP$1822$2;
		struct $N4MATH4VEC4E* TMP$1823$2;
		*(int64*)THIS$1 = *(int64*)A$1;
		void* vr$11 = malloc( *(uint64*)A$1 << (5ull & 63ll) );
		TMP$1821$2 = (struct $N4MATH4VEC4E*)vr$11;
		if( TMP$1821$2 == (struct $N4MATH4VEC4E*)0ull ) goto label$5323;
		TMP$1823$2 = TMP$1821$2;
		TMP$1822$2 = *(uint64*)A$1;
		label$5324:;
		if( TMP$1822$2 == 0ull ) goto label$5325;
		_ZN4MATH4VEC4C1Ev( TMP$1823$2 );
		TMP$1823$2 = (struct $N4MATH4VEC4E*)((uint8*)TMP$1823$2 + 32ll);
		TMP$1822$2 = TMP$1822$2 + 18446744073709551615ull;
		goto label$5324;
		label$5325:;
		label$5323:;
		*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) = TMP$1821$2;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1824$3;
			TMP$1824$3 = *(int64*)THIS$1 + -1ll;
			goto label$5326;
			label$5329:;
			{
				_ZN4MATH4VEC4aSERKS0_( (struct $N4MATH4VEC4E*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))), (struct $N4MATH4VEC4E*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)A$1 + 8ll) + (I$3 << (5ll & 63ll))) );
			}
			label$5327:;
			I$3 = I$3 + 1ll;
			label$5326:;
			if( I$3 <= TMP$1824$3 ) goto label$5329;
			label$5328:;
		}
	}
	label$5322:;
	label$5321:;
	label$5320:;
}

void _ZN4MATH7V4ARRAYD1Ev( struct $N4MATH7V4ARRAYE* THIS$1 )
{
	label$5330:;
	if( *(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC4E*)0ull ) goto label$5333;
	{
		if( *(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC4E*)0ull ) goto label$5334;
		free( *(void**)((uint8*)THIS$1 + 8ll) );
		label$5334:;
		label$5333:;
	}
	label$5331:;
}

FBSTRING* _ZNK4MATH7V4ARRAYcv8FBSTRINGEv( struct $N4MATH7V4ARRAYE* THIS$1 )
{
	FBSTRING TMP$1826$1;
	FBSTRING TMP$1827$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$5335:;
	FBSTRING* vr$2 = fb_LongintToStr( *(int64*)THIS$1 );
	__builtin_memset( &TMP$1826$1, 0, 24ll );
	FBSTRING* vr$5 = fb_StrConcat( &TMP$1826$1, (void*)"<math.v4array>{ length : ", 26ll, (void*)vr$2, -1ll );
	__builtin_memset( &TMP$1827$1, 0, 24ll );
	FBSTRING* vr$8 = fb_StrConcat( &TMP$1827$1, (void*)vr$5, -1ll, (void*)" }", 3ll );
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$8, -1ll, 0 );
	goto label$5336;
	label$5336:;
	FBSTRING* vr$11 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$11;
}

int32 main( int32 __FB_ARGC__$0, char** __FB_ARGV__$0 )
{
	double TMP$1835$0;
	double TMP$1836$0;
	double TMP$1837$0;
	int32 fb$result$0;
	__builtin_memset( &fb$result$0, 0, 4ll );
	fb_Init( __FB_ARGC__$0, (char**)__FB_ARGV__$0, 0 );
	label$0:;
	FBSTRING* vr$1 = fb_StrAllocTempDescZEx( (char*)"Done compiling math v0.4.\x0A", 26ll );
	fb_PrintString( 0, (FBSTRING*)vr$1, 1 );
	FBSTRING* vr$2 = fb_StrAllocTempDescZEx( (char*)"Angles are not activated.", 25ll );
	fb_PrintString( 0, (FBSTRING*)vr$2, 1 );
	FBSTRING* vr$3 = fb_StrAllocTempDescZEx( (char*)"Graphical plane is not flipped.", 31ll );
	fb_PrintString( 0, (FBSTRING*)vr$3, 1 );
	struct $N4MATH4VEC2E V$0;
	TMP$1836$0 = 0x1.p+1;
	TMP$1835$0 = 0x1.8p+1;
	_ZN4MATH4VEC2C1ERKdS2_( &V$0, (double*)&TMP$1835$0, (double*)&TMP$1836$0 );
	FBSTRING* vr$8 = _ZNK4MATH4VEC2cv8FBSTRINGEv( (struct $N4MATH4VEC2E*)&V$0 );
	fb_PrintString( 0, (FBSTRING*)vr$8, 1 );
	TMP$1837$0 = 0x1.921FB54442D18p+0;
	_ZN4MATH4VEC26ROTATEERKd( &V$0, (double*)&TMP$1837$0 );
	FBSTRING* vr$12 = _ZNK4MATH4VEC2cv8FBSTRINGEv( (struct $N4MATH4VEC2E*)&V$0 );
	fb_PrintString( 0, (FBSTRING*)vr$12, 1 );
	fb_Sleep( -1 );
	label$1:;
	fb_End( 0 );
	return fb$result$0;
}

static void _ZN4MATH4MAT2D1Ev( struct $N4MATH4MAT2E* THIS$1 )
{
	label$2020:;
	label$2021:;
	_ZN4MATH10BASEMATRIXD1Ev( (struct $N4MATH10BASEMATRIXE*)THIS$1 );
}

static void _ZN4MATH4MAT3D1Ev( struct $N4MATH4MAT3E* THIS$1 )
{
	label$2146:;
	label$2147:;
	_ZN4MATH10BASEMATRIXD1Ev( (struct $N4MATH10BASEMATRIXE*)THIS$1 );
}

static void _ZN4MATH4MAT4D1Ev( struct $N4MATH4MAT4E* THIS$1 )
{
	label$2337:;
	label$2338:;
	_ZN4MATH10BASEMATRIXD1Ev( (struct $N4MATH10BASEMATRIXE*)THIS$1 );
}
