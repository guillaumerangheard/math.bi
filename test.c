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
typedef void (*tmp$1294)( double* );
typedef void (*tmp$1295)( double*, int64* );
typedef boolean (*tmp$1296)( double* );
typedef boolean (*tmp$1297)( double*, int64* );
typedef double (*tmp$1298)( double* );
typedef double (*tmp$1299)( double*, int64* );
struct $N4MATH12COMPLEXARRAYE {
	struct $N4MATH9BASEARRAYE BASE$;
	struct $N4MATH7COMPLEXE* _P;
	struct $N4MATH7COMPLEXE _D;
};
__FB_STATIC_ASSERT( sizeof( struct $N4MATH12COMPLEXARRAYE ) == 32 );
typedef void (*tmp$1359)( struct $N4MATH7COMPLEXE* );
typedef void (*tmp$1360)( struct $N4MATH7COMPLEXE*, int64* );
typedef boolean (*tmp$1361)( struct $N4MATH7COMPLEXE* );
typedef boolean (*tmp$1362)( struct $N4MATH7COMPLEXE*, int64* );
typedef struct $N4MATH7COMPLEXE (*tmp$1363)( struct $N4MATH7COMPLEXE* );
struct $N4MATH7V2ARRAYE {
	struct $N4MATH9BASEARRAYE BASE$;
	struct $N4MATH4VEC2E* _P;
	struct $N4MATH4VEC2E _D;
};
__FB_STATIC_ASSERT( sizeof( struct $N4MATH7V2ARRAYE ) == 32 );
typedef void (*tmp$1492)( struct $N4MATH4VEC2E* );
typedef void (*tmp$1493)( struct $N4MATH4VEC2E*, int64* );
typedef boolean (*tmp$1494)( struct $N4MATH4VEC2E* );
typedef boolean (*tmp$1495)( struct $N4MATH4VEC2E*, int64* );
typedef struct $N4MATH4VEC2E (*tmp$1496)( struct $N4MATH4VEC2E* );
struct $N4MATH7V3ARRAYE {
	struct $N4MATH9BASEARRAYE BASE$;
	struct $N4MATH4VEC3E* _P;
	struct $N4MATH4VEC3E _D;
};
__FB_STATIC_ASSERT( sizeof( struct $N4MATH7V3ARRAYE ) == 40 );
typedef void (*tmp$1623)( struct $N4MATH4VEC3E* );
typedef void (*tmp$1624)( struct $N4MATH4VEC3E*, int64* );
typedef boolean (*tmp$1625)( struct $N4MATH4VEC3E* );
typedef boolean (*tmp$1626)( struct $N4MATH4VEC3E*, int64* );
typedef struct $N4MATH4VEC3E (*tmp$1627)( struct $N4MATH4VEC3E* );
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
double _ZN4MATH3SECERKd( double* );
double _ZN4MATH4SECHERKd( double* );
double _ZN4MATH4SINHERKd( double* );
double _ZN4MATH4TANHERKd( double* );
double _ZN4MATH5THETAERKdS1_( double*, double* );
double _ZN4MATH4VCOSERKd( double* );
double _ZN4MATH4VSINERKd( double* );
double _ZN4MATH4WRAPERKd( double* );
double _ZN4MATH4WRAPERKdS1_( double*, double* );
void _ZN4MATH4ZROTERdS0_RKd( double*, double*, double* );
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

double _ZN4MATH3SECERKd( double* T$1 )
{
	double TMP$37$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$236:;
	double C$1;
	C$1 = __builtin_cos( *T$1 );
	if( C$1 == 0x0p+0 ) goto label$238;
	TMP$37$1 = 0x1.p+0 / C$1;
	goto label$239;
	label$238:;
	TMP$37$1 = 0x0p+0;
	label$239:;
	fb$result$1 = TMP$37$1;
	goto label$237;
	label$237:;
	return fb$result$1;
}

double _ZN4MATH4SECHERKd( double* T$1 )
{
	double TMP$38$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$240:;
	double C$1;
	double vr$1 = _ZN4MATH4COSHERKd( T$1 );
	C$1 = vr$1;
	if( C$1 == 0x0p+0 ) goto label$242;
	TMP$38$1 = 0x1.p+0 / C$1;
	goto label$243;
	label$242:;
	TMP$38$1 = 0x0p+0;
	label$243:;
	fb$result$1 = TMP$38$1;
	goto label$241;
	label$241:;
	return fb$result$1;
}

double _ZN4MATH4SINHERKd( double* T$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$244:;
	fb$result$1 = (__builtin_exp( *T$1 ) - __builtin_exp( -(*T$1) )) * 0x1.p-1;
	goto label$245;
	label$245:;
	return fb$result$1;
}

double _ZN4MATH4TANHERKd( double* T$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$246:;
	double X$1;
	X$1 = __builtin_exp( (*T$1 * 0x1.p+1) );
	fb$result$1 = (X$1 + -0x1.p+0) / (X$1 + 0x1.p+0);
	goto label$247;
	label$247:;
	return fb$result$1;
}

double _ZN4MATH5THETAERKdS1_( double* X$1, double* Y$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$248:;
	if( *X$1 >= 0x0p+0 ) goto label$251;
	{
		if( *Y$1 >= 0x0p+0 ) goto label$253;
		{
			double vr$4 = _ZN4MATH5HYPOTERKdS1_( X$1, Y$1 );
			fb$result$1 = -(__builtin_acos( (*X$1 / vr$4) )) + 0x1.921FB54442D18p+2;
			goto label$249;
		}
		goto label$252;
		label$253:;
		if( *Y$1 <= 0x0p+0 ) goto label$254;
		{
			double vr$11 = _ZN4MATH5HYPOTERKdS1_( X$1, Y$1 );
			fb$result$1 = __builtin_acos( (*X$1 / vr$11) );
			goto label$249;
		}
		goto label$252;
		label$254:;
		{
			fb$result$1 = 0x1.921FB54442D18p+1;
			goto label$249;
		}
		label$252:;
	}
	goto label$250;
	label$251:;
	if( *X$1 <= 0x0p+0 ) goto label$255;
	{
		if( *Y$1 >= 0x0p+0 ) goto label$257;
		{
			double vr$17 = _ZN4MATH5HYPOTERKdS1_( X$1, Y$1 );
			fb$result$1 = -(__builtin_acos( (*X$1 / vr$17) )) + 0x1.921FB54442D18p+2;
			goto label$249;
		}
		goto label$256;
		label$257:;
		if( *Y$1 <= 0x0p+0 ) goto label$258;
		{
			double vr$24 = _ZN4MATH5HYPOTERKdS1_( X$1, Y$1 );
			fb$result$1 = __builtin_acos( (*X$1 / vr$24) );
			goto label$249;
		}
		goto label$256;
		label$258:;
		{
			fb$result$1 = 0x0p+0;
			goto label$249;
		}
		label$256:;
	}
	goto label$250;
	label$255:;
	{
		if( *Y$1 >= 0x0p+0 ) goto label$260;
		{
			fb$result$1 = 0x1.2D97C7F3321D2p+2;
			goto label$249;
		}
		goto label$259;
		label$260:;
		if( *Y$1 <= 0x0p+0 ) goto label$261;
		{
			fb$result$1 = 0x1.921FB54442D18p+0;
			goto label$249;
		}
		goto label$259;
		label$261:;
		{
			fb$result$1 = 0x0p+0;
			goto label$249;
		}
		label$259:;
	}
	label$250:;
	label$249:;
	return fb$result$1;
}

double _ZN4MATH4VCOSERKd( double* T$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$262:;
	fb$result$1 = __builtin_cos( *T$1 ) + 0x1.p+0;
	goto label$263;
	label$263:;
	return fb$result$1;
}

double _ZN4MATH4VSINERKd( double* T$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$264:;
	fb$result$1 = -(__builtin_cos( *T$1 )) + 0x1.p+0;
	goto label$265;
	label$265:;
	return fb$result$1;
}

double _ZN4MATH4WRAPERKd( double* N$1 )
{
	double TMP$39$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$266:;
	if( *N$1 >= 0x0p+0 ) goto label$268;
	double vr$3 = fb_FRACd( *N$1 );
	TMP$39$1 = vr$3 + 0x1.p+0;
	goto label$269;
	label$268:;
	double vr$6 = fb_FRACd( *N$1 );
	TMP$39$1 = vr$6;
	label$269:;
	fb$result$1 = TMP$39$1;
	goto label$267;
	label$267:;
	return fb$result$1;
}

double _ZN4MATH4WRAPERKdS1_( double* N$1, double* NMAX$1 )
{
	double TMP$40$1;
	double TMP$41$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$270:;
	if( *NMAX$1 == 0x0p+0 ) goto label$272;
	TMP$40$1 = *N$1 / *NMAX$1;
	double vr$6 = _ZN4MATH4WRAPERKd( &TMP$40$1 );
	TMP$41$1 = vr$6 * *NMAX$1;
	goto label$273;
	label$272:;
	TMP$41$1 = 0x0p+0;
	label$273:;
	fb$result$1 = TMP$41$1;
	goto label$271;
	label$271:;
	return fb$result$1;
}

void _ZN4MATH4ZROTERdS0_RKd( double* X$1, double* Y$1, double* T$1 )
{
	label$274:;
	if( *T$1 == 0x0p+0 ) goto label$277;
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
	label$277:;
	label$276:;
	label$275:;
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
	_ZN4MATH4ZROTERdS0_RKd( (double*)THIS$1, (double*)((uint8*)THIS$1 + 8ll), (double*)&TMP$430$1 );
	label$1137:;
}

void _ZN4MATH4VEC26ROTATEERKd( struct $N4MATH4VEC2E* THIS$1, double* N$1 )
{
	label$1138:;
	_ZN4MATH4ZROTERdS0_RKd( (double*)THIS$1, (double*)((uint8*)THIS$1 + 8ll), N$1 );
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

void _ZN4MATH4VEC37ZROTATEERKNS_8RATIONALE( struct $N4MATH4VEC3E* THIS$1, struct $N4MATH8RATIONALE* R$1 )
{
	double TMP$692$1;
	label$1552:;
	double vr$0 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	TMP$692$1 = vr$0;
	_ZN4MATH4ZROTERdS0_RKd( (double*)THIS$1, (double*)((uint8*)THIS$1 + 8ll), (double*)&TMP$692$1 );
	label$1553:;
}

void _ZN4MATH4VEC37ZROTATEERKd( struct $N4MATH4VEC3E* THIS$1, double* N$1 )
{
	label$1554:;
	_ZN4MATH4ZROTERdS0_RKd( (double*)THIS$1, (double*)((uint8*)THIS$1 + 8ll), N$1 );
	label$1555:;
}

struct $N4MATH4VEC3E _ZN4MATHplERKNS_4VEC3ES2_( struct $N4MATH4VEC3E* V1$1, struct $N4MATH4VEC3E* V2$1 )
{
	double TMP$694$1;
	double TMP$695$1;
	double TMP$696$1;
	struct $N4MATH4VEC3E fb$result$1;
	label$1556:;
	TMP$696$1 = *(double*)((uint8*)V1$1 + 16ll) + *(double*)((uint8*)V2$1 + 16ll);
	TMP$695$1 = *(double*)((uint8*)V1$1 + 8ll) + *(double*)((uint8*)V2$1 + 8ll);
	TMP$694$1 = *(double*)V1$1 + *(double*)V2$1;
	_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, &TMP$694$1, &TMP$695$1, &TMP$696$1 );
	goto label$1557;
	label$1557:;
	return fb$result$1;
}

struct $N4MATH4VEC3E _ZN4MATHngERKNS_4VEC3E( struct $N4MATH4VEC3E* V$1 )
{
	double TMP$698$1;
	double TMP$699$1;
	double TMP$700$1;
	struct $N4MATH4VEC3E fb$result$1;
	label$1558:;
	TMP$700$1 = -(*(double*)((uint8*)V$1 + 16ll));
	TMP$699$1 = -(*(double*)((uint8*)V$1 + 8ll));
	TMP$698$1 = -(*(double*)V$1);
	_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, &TMP$698$1, &TMP$699$1, &TMP$700$1 );
	goto label$1559;
	label$1559:;
	return fb$result$1;
}

struct $N4MATH4VEC3E _ZN4MATHmiERKNS_4VEC3ES2_( struct $N4MATH4VEC3E* V1$1, struct $N4MATH4VEC3E* V2$1 )
{
	double TMP$702$1;
	double TMP$703$1;
	double TMP$704$1;
	struct $N4MATH4VEC3E fb$result$1;
	label$1560:;
	TMP$704$1 = *(double*)((uint8*)V1$1 + 16ll) - *(double*)((uint8*)V2$1 + 16ll);
	TMP$703$1 = *(double*)((uint8*)V1$1 + 8ll) - *(double*)((uint8*)V2$1 + 8ll);
	TMP$702$1 = *(double*)V1$1 - *(double*)V2$1;
	_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, &TMP$702$1, &TMP$703$1, &TMP$704$1 );
	goto label$1561;
	label$1561:;
	return fb$result$1;
}

struct $N4MATH4VEC3E _ZN4MATHmlERKNS_4VEC3ERKd( struct $N4MATH4VEC3E* V$1, double* N$1 )
{
	double TMP$706$1;
	double TMP$707$1;
	double TMP$708$1;
	struct $N4MATH4VEC3E fb$result$1;
	label$1562:;
	TMP$708$1 = *(double*)((uint8*)V$1 + 16ll) * *N$1;
	TMP$707$1 = *(double*)((uint8*)V$1 + 8ll) * *N$1;
	TMP$706$1 = *(double*)V$1 * *N$1;
	_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, &TMP$706$1, &TMP$707$1, &TMP$708$1 );
	goto label$1563;
	label$1563:;
	return fb$result$1;
}

struct $N4MATH4VEC3E _ZN4MATHmlERKdRKNS_4VEC3E( double* N$1, struct $N4MATH4VEC3E* V$1 )
{
	double TMP$710$1;
	double TMP$711$1;
	double TMP$712$1;
	struct $N4MATH4VEC3E fb$result$1;
	label$1564:;
	TMP$712$1 = *N$1 * *(double*)((uint8*)V$1 + 16ll);
	TMP$711$1 = *N$1 * *(double*)((uint8*)V$1 + 8ll);
	TMP$710$1 = *N$1 * *(double*)V$1;
	_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, &TMP$710$1, &TMP$711$1, &TMP$712$1 );
	goto label$1565;
	label$1565:;
	return fb$result$1;
}

struct $N4MATH4VEC3E _ZN4MATHmlERKNS_4VEC3ES2_( struct $N4MATH4VEC3E* V1$1, struct $N4MATH4VEC3E* V2$1 )
{
	double TMP$714$1;
	double TMP$715$1;
	double TMP$716$1;
	struct $N4MATH4VEC3E fb$result$1;
	label$1566:;
	TMP$716$1 = *(double*)((uint8*)V1$1 + 16ll) * *(double*)((uint8*)V2$1 + 16ll);
	TMP$715$1 = *(double*)((uint8*)V1$1 + 8ll) * *(double*)((uint8*)V2$1 + 8ll);
	TMP$714$1 = *(double*)V1$1 * *(double*)V2$1;
	_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, &TMP$714$1, &TMP$715$1, &TMP$716$1 );
	goto label$1567;
	label$1567:;
	return fb$result$1;
}

struct $N4MATH4VEC3E _ZN4MATHdvERKNS_4VEC3ERKd( struct $N4MATH4VEC3E* V$1, double* N$1 )
{
	double TMP$718$1;
	double TMP$719$1;
	double TMP$720$1;
	struct $N4MATH4VEC3E TMP$722$1;
	struct $N4MATH4VEC3E fb$result$1;
	label$1568:;
	if( *N$1 == 0x0p+0 ) goto label$1570;
	TMP$720$1 = *(double*)((uint8*)V$1 + 16ll) / *N$1;
	TMP$719$1 = *(double*)((uint8*)V$1 + 8ll) / *N$1;
	TMP$718$1 = *(double*)V$1 / *N$1;
	_ZN4MATH4VEC3C1ERKdS2_S2_( &TMP$722$1, &TMP$718$1, &TMP$719$1, &TMP$720$1 );
	goto label$1571;
	label$1570:;
	_ZN4MATH4VEC3C1Ev( &TMP$722$1 );
	label$1571:;
	_ZN4MATH4VEC3C1ERKS0_( &fb$result$1, (struct $N4MATH4VEC3E*)&TMP$722$1 );
	goto label$1569;
	label$1569:;
	return fb$result$1;
}

struct $N4MATH4VEC3E _ZN4MATHdvERKNS_4VEC3ES2_( struct $N4MATH4VEC3E* V1$1, struct $N4MATH4VEC3E* V2$1 )
{
	double TMP$724$1;
	double TMP$725$1;
	double TMP$726$1;
	struct $N4MATH4VEC3E fb$result$1;
	label$1572:;
	if( *(double*)((uint8*)V2$1 + 16ll) == 0x0p+0 ) goto label$1576;
	TMP$726$1 = *(double*)((uint8*)V1$1 + 16ll) / *(double*)((uint8*)V2$1 + 16ll);
	goto label$1577;
	label$1576:;
	TMP$726$1 = 0x0p+0;
	label$1577:;
	if( *(double*)((uint8*)V2$1 + 8ll) == 0x0p+0 ) goto label$1575;
	TMP$725$1 = *(double*)((uint8*)V1$1 + 8ll) / *(double*)((uint8*)V2$1 + 8ll);
	goto label$1578;
	label$1575:;
	TMP$725$1 = 0x0p+0;
	label$1578:;
	if( *(double*)V2$1 == 0x0p+0 ) goto label$1574;
	TMP$724$1 = *(double*)V1$1 / *(double*)V2$1;
	goto label$1579;
	label$1574:;
	TMP$724$1 = 0x0p+0;
	label$1579:;
	_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, &TMP$724$1, &TMP$725$1, &TMP$726$1 );
	goto label$1573;
	label$1573:;
	return fb$result$1;
}

boolean _ZN4MATHeqERKNS_4VEC3ES2_( struct $N4MATH4VEC3E* V1$1, struct $N4MATH4VEC3E* V2$1 )
{
	boolean TMP$727$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1580:;
	if( (((int64)-(*(double*)V1$1 == *(double*)V2$1) & (int64)-(*(double*)((uint8*)V1$1 + 8ll) == *(double*)((uint8*)V2$1 + 8ll))) & (int64)-(*(double*)((uint8*)V1$1 + 16ll) == *(double*)((uint8*)V2$1 + 16ll))) == 0ll ) goto label$1582;
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

boolean _ZN4MATHneERKNS_4VEC3ES2_( struct $N4MATH4VEC3E* V1$1, struct $N4MATH4VEC3E* V2$1 )
{
	boolean TMP$728$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1584:;
	if( (((int64)-(*(double*)V1$1 != *(double*)V2$1) | (int64)-(*(double*)((uint8*)V1$1 + 8ll) != *(double*)((uint8*)V2$1 + 8ll))) | (int64)-(*(double*)((uint8*)V1$1 + 16ll) != *(double*)((uint8*)V2$1 + 16ll))) == 0ll ) goto label$1586;
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

boolean _ZN4MATH3CMPERKNS_4VEC3ES2_RKd( struct $N4MATH4VEC3E* V1$1, struct $N4MATH4VEC3E* V2$1, double* S$1 )
{
	boolean TMP$729$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1588:;
	double T$1;
	T$1 = __builtin_fabs( *S$1 );
	if( (((int64)-(__builtin_fabs( (*(double*)V1$1 - *(double*)V2$1) ) <= T$1) & (int64)-(__builtin_fabs( (*(double*)((uint8*)V1$1 + 8ll) - *(double*)((uint8*)V2$1 + 8ll)) ) <= T$1)) & (int64)-(__builtin_fabs( (*(double*)((uint8*)V1$1 + 16ll) - *(double*)((uint8*)V2$1 + 16ll)) ) <= T$1)) == 0ll ) goto label$1590;
	TMP$729$1 = (boolean)1ll;
	goto label$1591;
	label$1590:;
	TMP$729$1 = (boolean)0ll;
	label$1591:;
	fb$result$1 = TMP$729$1;
	goto label$1589;
	label$1589:;
	return fb$result$1;
}

struct $N4MATH4VEC3E _ZN4MATH5CROSSERKNS_4VEC3ES2_( struct $N4MATH4VEC3E* V1$1, struct $N4MATH4VEC3E* V2$1 )
{
	double TMP$731$1;
	double TMP$732$1;
	double TMP$733$1;
	struct $N4MATH4VEC3E fb$result$1;
	label$1592:;
	TMP$733$1 = (*(double*)V1$1 * *(double*)((uint8*)V2$1 + 8ll)) - (*(double*)((uint8*)V1$1 + 8ll) * *(double*)V2$1);
	TMP$732$1 = (*(double*)((uint8*)V1$1 + 16ll) * *(double*)V2$1) - (*(double*)V1$1 * *(double*)((uint8*)V2$1 + 16ll));
	TMP$731$1 = (*(double*)((uint8*)V1$1 + 8ll) * *(double*)((uint8*)V2$1 + 16ll)) - (*(double*)((uint8*)V1$1 + 16ll) * *(double*)((uint8*)V2$1 + 8ll));
	_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, &TMP$731$1, &TMP$732$1, &TMP$733$1 );
	goto label$1593;
	label$1593:;
	return fb$result$1;
}

double _ZN4MATH3DOTERKNS_4VEC3ES2_( struct $N4MATH4VEC3E* V1$1, struct $N4MATH4VEC3E* V2$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1594:;
	fb$result$1 = ((*(double*)V1$1 * *(double*)V2$1) + (*(double*)((uint8*)V1$1 + 8ll) * *(double*)((uint8*)V2$1 + 8ll))) + (*(double*)((uint8*)V1$1 + 16ll) * *(double*)((uint8*)V2$1 + 16ll));
	goto label$1595;
	label$1595:;
	return fb$result$1;
}

struct $N4MATH4VEC3E _ZN4MATH4LERPERKNS_4VEC3ES2_RKd( struct $N4MATH4VEC3E* V1$1, struct $N4MATH4VEC3E* V2$1, double* S$1 )
{
	double TMP$735$1;
	double TMP$736$1;
	double TMP$737$1;
	struct $N4MATH4VEC3E fb$result$1;
	label$1596:;
	double T$1;
	double vr$0 = _ZN4MATH5CLAMPERKd( S$1 );
	T$1 = vr$0;
	double U$1;
	U$1 = 0x1.p+0 - T$1;
	TMP$737$1 = (*(double*)((uint8*)V1$1 + 16ll) * U$1) + (*(double*)((uint8*)V2$1 + 16ll) * T$1);
	TMP$736$1 = (*(double*)((uint8*)V1$1 + 8ll) * U$1) + (*(double*)((uint8*)V2$1 + 8ll) * T$1);
	TMP$735$1 = (*(double*)V1$1 * U$1) + (*(double*)V2$1 * T$1);
	_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, &TMP$735$1, &TMP$736$1, &TMP$737$1 );
	goto label$1597;
	label$1597:;
	return fb$result$1;
}

void _ZN4MATH4CVECC1Ev( struct $N4MATH4CVECE* THIS$1 )
{
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	label$1598:;
	label$1599:;
}

void _ZN4MATH4CVECC1ERKdS2_S2_( struct $N4MATH4CVECE* THIS$1, double* N1$1, double* N2$1, double* N3$1 )
{
	label$1600:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	if( *N2$1 < 0x0p+0 ) goto label$1603;
	{
		double TMP$738$2;
		TMP$738$2 = 0x1.921FB54442D18p+2;
		double vr$8 = _ZN4MATH4WRAPERKdS1_( N1$1, (double*)&TMP$738$2 );
		*(double*)((uint8*)THIS$1 + 8ll) = vr$8;
		*(double*)((uint8*)THIS$1 + 16ll) = *N2$1;
	}
	goto label$1602;
	label$1603:;
	{
		double TMP$739$2;
		double TMP$740$2;
		TMP$740$2 = 0x1.921FB54442D18p+2;
		TMP$739$2 = *N1$1 + 0x1.921FB54442D18p+1;
		double vr$16 = _ZN4MATH4WRAPERKdS1_( &TMP$739$2, (double*)&TMP$740$2 );
		*(double*)((uint8*)THIS$1 + 8ll) = vr$16;
		*(double*)((uint8*)THIS$1 + 16ll) = -(*N2$1);
	}
	label$1602:;
	*(double*)THIS$1 = *N3$1;
	label$1601:;
}

void _ZN4MATH4CVECC1ERKNS_4VEC2ERKd( struct $N4MATH4CVECE* THIS$1, struct $N4MATH4VEC2E* V$1, double* N$1 )
{
	label$1604:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	double vr$6 = _ZNK4MATH4VEC212THETA__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$6;
	double vr$8 = _ZNK4MATH4VEC211NORM__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$8;
	*(double*)THIS$1 = *N$1;
	label$1605:;
}

void _ZN4MATH4CVECC1ERKNS_4PVECERKd( struct $N4MATH4CVECE* THIS$1, struct $N4MATH4PVECE* V$1, double* N$1 )
{
	label$1606:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	double vr$6 = _ZNK4MATH4PVEC12THETA__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$6;
	double vr$8 = _ZNK4MATH4PVEC10RHO__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$8;
	*(double*)THIS$1 = *N$1;
	label$1607:;
}

void _ZN4MATH4CVECC1ERKNS_4VEC3E( struct $N4MATH4CVECE* THIS$1, struct $N4MATH4VEC3E* V$1 )
{
	label$1608:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	double vr$6 = _ZNK4MATH4VEC312THETA__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$6;
	double vr$12 = _ZN4MATH5HYPOTERKdS1_( (double*)V$1, (double*)((uint8*)V$1 + 8ll) );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$12;
	*(double*)THIS$1 = *(double*)((uint8*)V$1 + 16ll);
	label$1609:;
}

void _ZN4MATH4CVECC1ERKS0_( struct $N4MATH4CVECE* THIS$1, struct $N4MATH4CVECE* V$1 )
{
	label$1610:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)V$1 + 16ll);
	*(double*)THIS$1 = *(double*)V$1;
	label$1611:;
}

void _ZN4MATH4CVECpLERKNS_4VEC3E( struct $N4MATH4CVECE* THIS$1, struct $N4MATH4VEC3E* V$1 )
{
	label$1612:;
	double I$1;
	I$1 = (__builtin_cos( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll)) + *(double*)V$1;
	double J$1;
	J$1 = (-(__builtin_sin( *(double*)((uint8*)THIS$1 + 8ll) )) * *(double*)((uint8*)THIS$1 + 16ll)) + *(double*)((uint8*)V$1 + 8ll);
	double vr$15 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$15;
	double vr$19 = _ZN4MATH5HYPOTERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$19;
	*(double*)THIS$1 = *(double*)THIS$1 + *(double*)((uint8*)V$1 + 16ll);
	label$1613:;
}

void _ZN4MATH4CVECpLERKS0_( struct $N4MATH4CVECE* THIS$1, struct $N4MATH4CVECE* V$1 )
{
	label$1614:;
	double I$1;
	I$1 = (__builtin_cos( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll)) + (__builtin_cos( *(double*)((uint8*)V$1 + 8ll) ) * *(double*)((uint8*)V$1 + 16ll));
	double J$1;
	J$1 = (-(__builtin_sin( *(double*)((uint8*)THIS$1 + 8ll) )) * *(double*)((uint8*)THIS$1 + 16ll)) - (__builtin_sin( *(double*)((uint8*)V$1 + 8ll) ) * *(double*)((uint8*)V$1 + 16ll));
	double vr$21 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$21;
	double vr$25 = _ZN4MATH5HYPOTERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$25;
	*(double*)THIS$1 = *(double*)THIS$1 + *(double*)V$1;
	label$1615:;
}

void _ZN4MATH4CVECmIERKNS_4VEC3E( struct $N4MATH4CVECE* THIS$1, struct $N4MATH4VEC3E* V$1 )
{
	label$1616:;
	double I$1;
	I$1 = (__builtin_cos( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll)) - *(double*)V$1;
	double J$1;
	J$1 = (-(__builtin_sin( *(double*)((uint8*)THIS$1 + 8ll) )) * *(double*)((uint8*)THIS$1 + 16ll)) - *(double*)((uint8*)V$1 + 8ll);
	double vr$15 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$15;
	double vr$19 = _ZN4MATH5HYPOTERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$19;
	*(double*)THIS$1 = *(double*)THIS$1 - *(double*)((uint8*)V$1 + 16ll);
	label$1617:;
}

void _ZN4MATH4CVECmIERKS0_( struct $N4MATH4CVECE* THIS$1, struct $N4MATH4CVECE* V$1 )
{
	label$1618:;
	double I$1;
	I$1 = (__builtin_cos( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll)) - (__builtin_cos( *(double*)((uint8*)V$1 + 8ll) ) * *(double*)((uint8*)V$1 + 16ll));
	double J$1;
	J$1 = (-(__builtin_sin( *(double*)((uint8*)THIS$1 + 8ll) )) * *(double*)((uint8*)THIS$1 + 16ll)) + (__builtin_sin( *(double*)((uint8*)V$1 + 8ll) ) * *(double*)((uint8*)V$1 + 16ll));
	double vr$21 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$21;
	double vr$25 = _ZN4MATH5HYPOTERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$25;
	*(double*)THIS$1 = *(double*)THIS$1 - *(double*)V$1;
	label$1619:;
}

void _ZN4MATH4CVECmLERKd( struct $N4MATH4CVECE* THIS$1, double* N$1 )
{
	label$1620:;
	if( *N$1 < 0x0p+0 ) goto label$1623;
	{
		*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) * *N$1;
		*(double*)THIS$1 = *(double*)THIS$1 * *N$1;
	}
	goto label$1622;
	label$1623:;
	{
		double TMP$741$2;
		double TMP$742$2;
		TMP$742$2 = 0x1.921FB54442D18p+2;
		TMP$741$2 = *(double*)((uint8*)THIS$1 + 8ll) + 0x1.921FB54442D18p+1;
		double vr$13 = _ZN4MATH4WRAPERKdS1_( (double*)&TMP$741$2, (double*)&TMP$742$2 );
		*(double*)((uint8*)THIS$1 + 8ll) = vr$13;
		*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) * -(*N$1);
		*(double*)THIS$1 = *(double*)THIS$1 * -(*N$1);
	}
	label$1622:;
	label$1621:;
}

void _ZN4MATH4CVECmLERKNS_4VEC3E( struct $N4MATH4CVECE* THIS$1, struct $N4MATH4VEC3E* V$1 )
{
	label$1624:;
	double I$1;
	I$1 = (__builtin_cos( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll)) * *(double*)V$1;
	double J$1;
	J$1 = (-(__builtin_sin( *(double*)((uint8*)THIS$1 + 8ll) )) * *(double*)((uint8*)THIS$1 + 16ll)) * *(double*)((uint8*)V$1 + 8ll);
	double vr$15 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$15;
	double vr$19 = _ZN4MATH5HYPOTERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$19;
	*(double*)THIS$1 = *(double*)THIS$1 * *(double*)((uint8*)V$1 + 16ll);
	label$1625:;
}

void _ZN4MATH4CVECmLERKS0_( struct $N4MATH4CVECE* THIS$1, struct $N4MATH4CVECE* V$1 )
{
	label$1626:;
	double I$1;
	I$1 = ((__builtin_cos( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll)) * __builtin_cos( *(double*)((uint8*)V$1 + 8ll) )) * *(double*)((uint8*)V$1 + 16ll);
	double J$1;
	J$1 = ((-(__builtin_sin( *(double*)((uint8*)THIS$1 + 8ll) )) * *(double*)((uint8*)THIS$1 + 16ll)) * -(__builtin_sin( *(double*)((uint8*)V$1 + 8ll) ))) * *(double*)((uint8*)V$1 + 16ll);
	double vr$22 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$22;
	double vr$26 = _ZN4MATH5HYPOTERKdS1_( (double*)&I$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$26;
	*(double*)THIS$1 = *(double*)THIS$1 * *(double*)V$1;
	label$1627:;
}

void _ZN4MATH4CVECdVERKd( struct $N4MATH4CVECE* THIS$1, double* N$1 )
{
	label$1628:;
	if( *N$1 <= 0x0p+0 ) goto label$1631;
	{
		*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) / *N$1;
		*(double*)THIS$1 = *(double*)THIS$1 / *N$1;
	}
	goto label$1630;
	label$1631:;
	if( *N$1 > 0x0p+0 ) goto label$1632;
	{
		double TMP$743$2;
		double TMP$744$2;
		TMP$744$2 = 0x1.921FB54442D18p+2;
		TMP$743$2 = *(double*)((uint8*)THIS$1 + 8ll) + 0x1.921FB54442D18p+1;
		double vr$14 = _ZN4MATH4WRAPERKdS1_( (double*)&TMP$743$2, (double*)&TMP$744$2 );
		*(double*)((uint8*)THIS$1 + 8ll) = vr$14;
		*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) / -(*N$1);
		*(double*)THIS$1 = *(double*)THIS$1 / *N$1;
	}
	goto label$1630;
	label$1632:;
	{
		*(double*)((uint8*)THIS$1 + 8ll) = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 16ll) = 0x0p+0;
		*(double*)THIS$1 = 0x0p+0;
	}
	label$1630:;
	label$1629:;
}

struct $N4MATH4VEC3E _ZNK4MATH4CVECcvNS_4VEC3EEv( struct $N4MATH4CVECE* THIS$1 )
{
	double TMP$746$1;
	double TMP$747$1;
	struct $N4MATH4VEC3E fb$result$1;
	label$1633:;
	TMP$747$1 = -(__builtin_sin( *(double*)((uint8*)THIS$1 + 8ll) )) * *(double*)((uint8*)THIS$1 + 16ll);
	TMP$746$1 = __builtin_cos( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll);
	_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, &TMP$746$1, &TMP$747$1, (double*)THIS$1 );
	goto label$1634;
	label$1634:;
	return fb$result$1;
}

FBSTRING* _ZNK4MATH4CVECcv8FBSTRINGEv( struct $N4MATH4CVECE* THIS$1 )
{
	FBSTRING TMP$749$1;
	FBSTRING TMP$750$1;
	FBSTRING TMP$751$1;
	FBSTRING TMP$752$1;
	FBSTRING TMP$753$1;
	FBSTRING TMP$754$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$1635:;
	FBSTRING* vr$2 = fb_DoubleToStr( *(double*)THIS$1 );
	FBSTRING* vr$4 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 16ll) );
	FBSTRING* vr$6 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 8ll) );
	__builtin_memset( &TMP$749$1, 0, 24ll );
	FBSTRING* vr$9 = fb_StrConcat( &TMP$749$1, (void*)"<math.cvec>{ theta : ", 22ll, (void*)vr$6, -1ll );
	__builtin_memset( &TMP$750$1, 0, 24ll );
	FBSTRING* vr$12 = fb_StrConcat( &TMP$750$1, (void*)vr$9, -1ll, (void*)" , rho : ", 10ll );
	__builtin_memset( &TMP$751$1, 0, 24ll );
	FBSTRING* vr$15 = fb_StrConcat( &TMP$751$1, (void*)vr$12, -1ll, (void*)vr$4, -1ll );
	__builtin_memset( &TMP$752$1, 0, 24ll );
	FBSTRING* vr$18 = fb_StrConcat( &TMP$752$1, (void*)vr$15, -1ll, (void*)" , z : ", 8ll );
	__builtin_memset( &TMP$753$1, 0, 24ll );
	FBSTRING* vr$21 = fb_StrConcat( &TMP$753$1, (void*)vr$18, -1ll, (void*)vr$2, -1ll );
	__builtin_memset( &TMP$754$1, 0, 24ll );
	FBSTRING* vr$24 = fb_StrConcat( &TMP$754$1, (void*)vr$21, -1ll, (void*)" }", 3ll );
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$24, -1ll, 0 );
	goto label$1636;
	label$1636:;
	FBSTRING* vr$27 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$27;
}

void _ZN4MATH4CVECaSERKNS_4VEC2E( struct $N4MATH4CVECE* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	label$1637:;
	double vr$0 = _ZNK4MATH4VEC212THETA__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$0;
	double vr$2 = _ZNK4MATH4VEC211NORM__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$2;
	*(double*)THIS$1 = 0x0p+0;
	label$1638:;
}

void _ZN4MATH4CVECaSERKNS_4PVECE( struct $N4MATH4CVECE* THIS$1, struct $N4MATH4PVECE* V$1 )
{
	label$1639:;
	double vr$0 = _ZNK4MATH4PVEC12THETA__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$0;
	double vr$2 = _ZNK4MATH4PVEC10RHO__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$2;
	*(double*)THIS$1 = 0x0p+0;
	label$1640:;
}

void _ZN4MATH4CVECaSERKNS_4VEC3E( struct $N4MATH4CVECE* THIS$1, struct $N4MATH4VEC3E* V$1 )
{
	label$1641:;
	double vr$0 = _ZNK4MATH4VEC312THETA__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$0;
	double vr$6 = _ZN4MATH5HYPOTERKdS1_( (double*)V$1, (double*)((uint8*)V$1 + 8ll) );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$6;
	*(double*)THIS$1 = *(double*)((uint8*)V$1 + 16ll);
	label$1642:;
}

void _ZN4MATH4CVECaSERKS0_( struct $N4MATH4CVECE* THIS$1, struct $N4MATH4CVECE* V$1 )
{
	label$1643:;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)V$1 + 16ll);
	*(double*)THIS$1 = *(double*)V$1;
	label$1644:;
}

double _ZNK4MATH4CVEC13CHNORM__get__Ev( struct $N4MATH4CVECE* THIS$1 )
{
	double TMP$755$1;
	double TMP$756$1;
	double TMP$757$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1645:;
	TMP$757$1 = __builtin_fabs( *(double*)THIS$1 );
	TMP$756$1 = __builtin_fabs( (__builtin_sin( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll)) );
	TMP$755$1 = __builtin_fabs( (__builtin_cos( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll)) );
	double vr$16 = _ZN4MATH3MAXERKdS1_S1_( &TMP$755$1, &TMP$756$1, &TMP$757$1 );
	fb$result$1 = vr$16;
	goto label$1646;
	label$1646:;
	return fb$result$1;
}

double _ZNK4MATH4CVEC13MANORM__get__Ev( struct $N4MATH4CVECE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1647:;
	fb$result$1 = (__builtin_fabs( (__builtin_cos( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll)) ) + __builtin_fabs( (__builtin_sin( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll)) )) + __builtin_fabs( *(double*)THIS$1 );
	goto label$1648;
	label$1648:;
	return fb$result$1;
}

double _ZNK4MATH4CVEC11NORM__get__Ev( struct $N4MATH4CVECE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1649:;
	double I$1;
	I$1 = __builtin_cos( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll);
	double J$1;
	J$1 = -(__builtin_sin( *(double*)((uint8*)THIS$1 + 8ll) )) * *(double*)((uint8*)THIS$1 + 16ll);
	fb$result$1 = __builtin_sqrt( (((I$1 * I$1) + (J$1 * J$1)) + (*(double*)THIS$1 * *(double*)THIS$1)) );
	goto label$1650;
	label$1650:;
	return fb$result$1;
}

double _ZNK4MATH4CVEC10RHO__get__Ev( struct $N4MATH4CVECE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1651:;
	fb$result$1 = *(double*)((uint8*)THIS$1 + 16ll);
	goto label$1652;
	label$1652:;
	return fb$result$1;
}

void _ZN4MATH4CVEC10RHO__set__ERKd( struct $N4MATH4CVECE* THIS$1, double* N$1 )
{
	label$1653:;
	if( *N$1 < 0x0p+0 ) goto label$1656;
	{
		*(double*)((uint8*)THIS$1 + 16ll) = *N$1;
	}
	goto label$1655;
	label$1656:;
	{
		double TMP$758$2;
		double TMP$759$2;
		TMP$759$2 = 0x1.921FB54442D18p+2;
		TMP$758$2 = *(double*)((uint8*)THIS$1 + 16ll) + 0x1.921FB54442D18p+1;
		double vr$7 = _ZN4MATH4WRAPERKdS1_( (double*)&TMP$758$2, (double*)&TMP$759$2 );
		*(double*)((uint8*)THIS$1 + 8ll) = vr$7;
		*(double*)((uint8*)THIS$1 + 16ll) = -(*N$1);
	}
	label$1655:;
	label$1654:;
}

double _ZNK4MATH4CVEC13SQNORM__get__Ev( struct $N4MATH4CVECE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1657:;
	double I$1;
	I$1 = __builtin_cos( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll);
	double J$1;
	J$1 = -(__builtin_sin( *(double*)((uint8*)THIS$1 + 8ll) )) * *(double*)((uint8*)THIS$1 + 16ll);
	fb$result$1 = ((I$1 * I$1) + (J$1 * J$1)) + (*(double*)THIS$1 * *(double*)THIS$1);
	goto label$1658;
	label$1658:;
	return fb$result$1;
}

double _ZNK4MATH4CVEC12THETA__get__Ev( struct $N4MATH4CVECE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1659:;
	fb$result$1 = *(double*)((uint8*)THIS$1 + 8ll);
	goto label$1660;
	label$1660:;
	return fb$result$1;
}

void _ZN4MATH4CVEC12THETA__set__ERKd( struct $N4MATH4CVECE* THIS$1, double* N$1 )
{
	double TMP$760$1;
	label$1661:;
	TMP$760$1 = 0x1.921FB54442D18p+2;
	double vr$1 = _ZN4MATH4WRAPERKdS1_( N$1, (double*)&TMP$760$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$1;
	label$1662:;
}

double _ZNK4MATH4CVEC8X__get__Ev( struct $N4MATH4CVECE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1663:;
	fb$result$1 = __builtin_cos( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll);
	goto label$1664;
	label$1664:;
	return fb$result$1;
}

void _ZN4MATH4CVEC8X__set__ERKd( struct $N4MATH4CVECE* THIS$1, double* N$1 )
{
	label$1665:;
	double J$1;
	J$1 = -(__builtin_sin( *(double*)((uint8*)THIS$1 + 8ll) )) * *(double*)((uint8*)THIS$1 + 16ll);
	double vr$6 = _ZN4MATH5THETAERKdS1_( N$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$6;
	double vr$9 = _ZN4MATH5HYPOTERKdS1_( N$1, (double*)&J$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$9;
	label$1666:;
}

struct $N4MATH4VEC2E _ZNK4MATH4CVEC9XY__get__Ev( struct $N4MATH4CVECE* THIS$1 )
{
	double TMP$762$1;
	double TMP$763$1;
	struct $N4MATH4VEC2E fb$result$1;
	label$1667:;
	TMP$763$1 = -(__builtin_sin( *(double*)((uint8*)THIS$1 + 8ll) )) * *(double*)((uint8*)THIS$1 + 16ll);
	TMP$762$1 = __builtin_cos( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll);
	_ZN4MATH4VEC2C1ERKdS2_( &fb$result$1, &TMP$762$1, &TMP$763$1 );
	goto label$1668;
	label$1668:;
	return fb$result$1;
}

void _ZN4MATH4CVEC9XY__set__ERKNS_4VEC2E( struct $N4MATH4CVECE* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	label$1669:;
	double vr$0 = _ZNK4MATH4VEC212THETA__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$0;
	double vr$2 = _ZNK4MATH4VEC211NORM__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$2;
	label$1670:;
}

void _ZN4MATH4CVEC9XY__set__ERKNS_4PVECE( struct $N4MATH4CVECE* THIS$1, struct $N4MATH4PVECE* V$1 )
{
	label$1671:;
	double vr$0 = _ZNK4MATH4PVEC12THETA__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$0;
	double vr$2 = _ZNK4MATH4PVEC10RHO__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$2;
	label$1672:;
}

double _ZNK4MATH4CVEC8Y__get__Ev( struct $N4MATH4CVECE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1673:;
	fb$result$1 = -(__builtin_sin( *(double*)((uint8*)THIS$1 + 8ll) )) * *(double*)((uint8*)THIS$1 + 16ll);
	goto label$1674;
	label$1674:;
	return fb$result$1;
}

void _ZN4MATH4CVEC8Y__set__ERKd( struct $N4MATH4CVECE* THIS$1, double* N$1 )
{
	label$1675:;
	double I$1;
	I$1 = __builtin_cos( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll);
	double vr$5 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, N$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$5;
	double vr$8 = _ZN4MATH5HYPOTERKdS1_( (double*)&I$1, N$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$8;
	label$1676:;
}

struct $N4MATH4CVECE _ZN4MATH4CVEC13FROMCARTESIANERKdS2_S2_( double* N1$1, double* N2$1, double* N3$1 )
{
	double TMP$765$1;
	double TMP$766$1;
	struct $N4MATH4CVECE fb$result$1;
	label$1677:;
	double vr$0 = _ZN4MATH5HYPOTERKdS1_( N1$1, N2$1 );
	TMP$766$1 = vr$0;
	double vr$2 = _ZN4MATH5THETAERKdS1_( N1$1, N2$1 );
	TMP$765$1 = vr$2;
	_ZN4MATH4CVECC1ERKdS2_S2_( &fb$result$1, (double*)&TMP$765$1, (double*)&TMP$766$1, N3$1 );
	goto label$1678;
	label$1678:;
	return fb$result$1;
}

boolean _ZNK4MATH4CVEC6ISNULLEv( struct $N4MATH4CVECE* THIS$1 )
{
	boolean TMP$767$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1679:;
	double vr$1 = _ZNK4MATH4CVEC11NORM__get__Ev( THIS$1 );
	if( vr$1 != 0x0p+0 ) goto label$1681;
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

boolean _ZNK4MATH4CVEC6ISNULLERKd( struct $N4MATH4CVECE* THIS$1, double* T$1 )
{
	boolean TMP$768$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1683:;
	double vr$1 = _ZNK4MATH4CVEC11NORM__get__Ev( THIS$1 );
	if( vr$1 > __builtin_fabs( *T$1 ) ) goto label$1685;
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

boolean _ZNK4MATH4CVEC6ISUNITEv( struct $N4MATH4CVECE* THIS$1 )
{
	boolean TMP$769$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1687:;
	double vr$1 = _ZNK4MATH4CVEC11NORM__get__Ev( THIS$1 );
	if( vr$1 != 0x1.p+0 ) goto label$1689;
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

boolean _ZNK4MATH4CVEC6ISUNITERKd( struct $N4MATH4CVECE* THIS$1, double* T$1 )
{
	boolean TMP$770$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1691:;
	double vr$1 = _ZNK4MATH4CVEC11NORM__get__Ev( THIS$1 );
	if( __builtin_fabs( (-vr$1 + 0x1.p+0) ) > __builtin_fabs( *T$1 ) ) goto label$1693;
	TMP$770$1 = (boolean)1ll;
	goto label$1694;
	label$1693:;
	TMP$770$1 = (boolean)0ll;
	label$1694:;
	fb$result$1 = TMP$770$1;
	goto label$1692;
	label$1692:;
	return fb$result$1;
}

double _ZNK4MATH4CVEC6MINORMERKd( struct $N4MATH4CVECE* THIS$1, double* E$1 )
{
	double TMP$771$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1695:;
	if( *E$1 == 0x0p+0 ) goto label$1697;
	double vr$10 = pow( __builtin_fabs( (__builtin_cos( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll)) ), *E$1 );
	double vr$17 = pow( __builtin_fabs( (__builtin_sin( *(double*)((uint8*)THIS$1 + 8ll) ) * *(double*)((uint8*)THIS$1 + 16ll)) ), *E$1 );
	double vr$22 = pow( __builtin_fabs( *(double*)THIS$1 ), *E$1 );
	double vr$24 = pow( (vr$10 + vr$17) + vr$22, 0x1.p+0 / *E$1 );
	TMP$771$1 = vr$24;
	goto label$1698;
	label$1697:;
	TMP$771$1 = 0x0p+0;
	label$1698:;
	fb$result$1 = TMP$771$1;
	goto label$1696;
	label$1696:;
	return fb$result$1;
}

FBSTRING* _ZNK4MATH4CVEC6TOJSONERKb( struct $N4MATH4CVECE* THIS$1, boolean* A$1 )
{
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
	FBSTRING TMP$785$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$1699:;
	if( *A$1 == (boolean)0ll ) goto label$1701;
	FBSTRING* vr$3 = fb_DoubleToStr( *(double*)THIS$1 );
	FBSTRING* vr$5 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 16ll) );
	FBSTRING* vr$7 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 8ll) );
	__builtin_memset( &TMP$774$1, 0, 24ll );
	FBSTRING* vr$10 = fb_StrConcat( &TMP$774$1, (void*)"[", 2ll, (void*)vr$7, -1ll );
	__builtin_memset( &TMP$775$1, 0, 24ll );
	FBSTRING* vr$13 = fb_StrConcat( &TMP$775$1, (void*)vr$10, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$776$1, 0, 24ll );
	FBSTRING* vr$16 = fb_StrConcat( &TMP$776$1, (void*)vr$13, -1ll, (void*)vr$5, -1ll );
	__builtin_memset( &TMP$777$1, 0, 24ll );
	FBSTRING* vr$19 = fb_StrConcat( &TMP$777$1, (void*)vr$16, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$778$1, 0, 24ll );
	FBSTRING* vr$22 = fb_StrConcat( &TMP$778$1, (void*)vr$19, -1ll, (void*)vr$3, -1ll );
	__builtin_memset( &TMP$779$1, 0, 24ll );
	FBSTRING* vr$25 = fb_StrConcat( &TMP$779$1, (void*)vr$22, -1ll, (void*)"]", 2ll );
	fb_StrInit( (void*)&TMP$773$1, -1ll, (void*)vr$25, -1ll, 0 );
	goto label$1702;
	label$1701:;
	FBSTRING* vr$28 = fb_DoubleToStr( *(double*)THIS$1 );
	FBSTRING* vr$30 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 16ll) );
	FBSTRING* vr$32 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 8ll) );
	__builtin_memset( &TMP$780$1, 0, 24ll );
	FBSTRING* vr$35 = fb_StrConcat( &TMP$780$1, (void*)"{\x22phi\x22:", 8ll, (void*)vr$32, -1ll );
	__builtin_memset( &TMP$781$1, 0, 24ll );
	FBSTRING* vr$38 = fb_StrConcat( &TMP$781$1, (void*)vr$35, -1ll, (void*)",\x22rho\x22:", 8ll );
	__builtin_memset( &TMP$782$1, 0, 24ll );
	FBSTRING* vr$41 = fb_StrConcat( &TMP$782$1, (void*)vr$38, -1ll, (void*)vr$30, -1ll );
	__builtin_memset( &TMP$783$1, 0, 24ll );
	FBSTRING* vr$44 = fb_StrConcat( &TMP$783$1, (void*)vr$41, -1ll, (void*)",\x22z\x22:", 6ll );
	__builtin_memset( &TMP$784$1, 0, 24ll );
	FBSTRING* vr$47 = fb_StrConcat( &TMP$784$1, (void*)vr$44, -1ll, (void*)vr$28, -1ll );
	__builtin_memset( &TMP$785$1, 0, 24ll );
	FBSTRING* vr$50 = fb_StrConcat( &TMP$785$1, (void*)vr$47, -1ll, (void*)"}", 2ll );
	fb_StrInit( (void*)&TMP$773$1, -1ll, (void*)vr$50, -1ll, 0 );
	label$1702:;
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)&TMP$773$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&TMP$773$1 );
	goto label$1700;
	label$1700:;
	FBSTRING* vr$56 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$56;
}

struct $N4MATH4CVECE _ZN4MATH4CVEC5UNITXEv( void )
{
	double TMP$787$1;
	double TMP$788$1;
	double TMP$789$1;
	struct $N4MATH4CVECE fb$result$1;
	label$1703:;
	TMP$789$1 = 0x0p+0;
	TMP$788$1 = 0x1.p+0;
	TMP$787$1 = 0x0p+0;
	_ZN4MATH4CVECC1ERKdS2_S2_( &fb$result$1, (double*)&TMP$787$1, (double*)&TMP$788$1, (double*)&TMP$789$1 );
	goto label$1704;
	label$1704:;
	return fb$result$1;
}

struct $N4MATH4CVECE _ZN4MATH4CVEC5UNITYEv( void )
{
	double TMP$791$1;
	double TMP$792$1;
	double TMP$793$1;
	struct $N4MATH4CVECE fb$result$1;
	label$1705:;
	TMP$793$1 = 0x0p+0;
	TMP$792$1 = 0x1.p+0;
	TMP$791$1 = 0x1.2D97C7F3321D2p+2;
	_ZN4MATH4CVECC1ERKdS2_S2_( &fb$result$1, (double*)&TMP$791$1, (double*)&TMP$792$1, (double*)&TMP$793$1 );
	goto label$1706;
	label$1706:;
	return fb$result$1;
}

struct $N4MATH4CVECE _ZN4MATH4CVEC5UNITZEv( void )
{
	double TMP$795$1;
	double TMP$796$1;
	double TMP$797$1;
	struct $N4MATH4CVECE fb$result$1;
	label$1707:;
	TMP$797$1 = 0x1.p+0;
	TMP$796$1 = 0x0p+0;
	TMP$795$1 = 0x0p+0;
	_ZN4MATH4CVECC1ERKdS2_S2_( &fb$result$1, (double*)&TMP$795$1, (double*)&TMP$796$1, (double*)&TMP$797$1 );
	goto label$1708;
	label$1708:;
	return fb$result$1;
}

void _ZN4MATH4VEC4C1Ev( struct $N4MATH4VEC4E* THIS$1 )
{
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	label$1709:;
	label$1710:;
}

void _ZN4MATH4VEC4C1ERKNS_8RATIONALES3_S3_S3_( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH8RATIONALE* R1$1, struct $N4MATH8RATIONALE* R2$1, struct $N4MATH8RATIONALE* R3$1, struct $N4MATH8RATIONALE* R4$1 )
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
	double vr$12 = _ZNK4MATH8RATIONALcvdEv( R3$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$12;
	double vr$14 = _ZNK4MATH8RATIONALcvdEv( R4$1 );
	*(double*)((uint8*)THIS$1 + 24ll) = vr$14;
	label$1712:;
}

void _ZN4MATH4VEC4C1ERKNS_8RATIONALES3_S3_RKd( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH8RATIONALE* R1$1, struct $N4MATH8RATIONALE* R2$1, struct $N4MATH8RATIONALE* R3$1, double* N4$1 )
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
	double vr$12 = _ZNK4MATH8RATIONALcvdEv( R3$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$12;
	*(double*)((uint8*)THIS$1 + 24ll) = *N4$1;
	label$1714:;
}

void _ZN4MATH4VEC4C1ERKNS_8RATIONALES3_RKdS3_( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH8RATIONALE* R1$1, struct $N4MATH8RATIONALE* R2$1, double* N3$1, struct $N4MATH8RATIONALE* R4$1 )
{
	label$1715:;
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
	label$1716:;
}

void _ZN4MATH4VEC4C1ERKNS_8RATIONALES3_RKdS5_( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH8RATIONALE* R1$1, struct $N4MATH8RATIONALE* R2$1, double* N3$1, double* N4$1 )
{
	label$1717:;
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
	label$1718:;
}

void _ZN4MATH4VEC4C1ERKNS_8RATIONALERKdS3_S3_( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH8RATIONALE* R1$1, double* N2$1, struct $N4MATH8RATIONALE* R3$1, struct $N4MATH8RATIONALE* R4$1 )
{
	label$1719:;
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
	label$1720:;
}

void _ZN4MATH4VEC4C1ERKNS_8RATIONALERKdS3_S5_( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH8RATIONALE* R1$1, double* N2$1, struct $N4MATH8RATIONALE* R3$1, double* N4$1 )
{
	label$1721:;
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
	label$1722:;
}

void _ZN4MATH4VEC4C1ERKNS_8RATIONALERKdS5_S3_( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH8RATIONALE* R1$1, double* N2$1, double* N3$1, struct $N4MATH8RATIONALE* R4$1 )
{
	label$1723:;
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
	label$1724:;
}

void _ZN4MATH4VEC4C1ERKNS_8RATIONALERKdS5_S5_( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH8RATIONALE* R1$1, double* N2$1, double* N3$1, double* N4$1 )
{
	label$1725:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	double vr$8 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	*(double*)THIS$1 = vr$8;
	*(double*)((uint8*)THIS$1 + 8ll) = *N2$1;
	*(double*)((uint8*)THIS$1 + 16ll) = *N3$1;
	*(double*)((uint8*)THIS$1 + 24ll) = *N4$1;
	label$1726:;
}

void _ZN4MATH4VEC4C1ERKdRKNS_8RATIONALES5_S5_( struct $N4MATH4VEC4E* THIS$1, double* N1$1, struct $N4MATH8RATIONALE* R2$1, struct $N4MATH8RATIONALE* R3$1, struct $N4MATH8RATIONALE* R4$1 )
{
	label$1727:;
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
	label$1728:;
}

void _ZN4MATH4VEC4C1ERKdRKNS_8RATIONALES5_S2_( struct $N4MATH4VEC4E* THIS$1, double* N1$1, struct $N4MATH8RATIONALE* R2$1, struct $N4MATH8RATIONALE* R3$1, double* N4$1 )
{
	label$1729:;
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
	label$1730:;
}

void _ZN4MATH4VEC4C1ERKdRKNS_8RATIONALES2_S5_( struct $N4MATH4VEC4E* THIS$1, double* N1$1, struct $N4MATH8RATIONALE* R2$1, double* N3$1, struct $N4MATH8RATIONALE* R4$1 )
{
	label$1731:;
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
	label$1732:;
}

void _ZN4MATH4VEC4C1ERKdRKNS_8RATIONALES2_S2_( struct $N4MATH4VEC4E* THIS$1, double* N1$1, struct $N4MATH8RATIONALE* R2$1, double* N3$1, double* N4$1 )
{
	label$1733:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *N1$1;
	double vr$10 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$10;
	*(double*)((uint8*)THIS$1 + 16ll) = *N3$1;
	*(double*)((uint8*)THIS$1 + 24ll) = *N4$1;
	label$1734:;
}

void _ZN4MATH4VEC4C1ERKdS2_RKNS_8RATIONALES5_( struct $N4MATH4VEC4E* THIS$1, double* N1$1, double* N2$1, struct $N4MATH8RATIONALE* R3$1, struct $N4MATH8RATIONALE* R4$1 )
{
	label$1735:;
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
	label$1736:;
}

void _ZN4MATH4VEC4C1ERKdS2_RKNS_8RATIONALES2_( struct $N4MATH4VEC4E* THIS$1, double* N1$1, double* N2$1, struct $N4MATH8RATIONALE* R3$1, double* N4$1 )
{
	label$1737:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *N1$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *N2$1;
	double vr$12 = _ZNK4MATH8RATIONALcvdEv( R3$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$12;
	*(double*)((uint8*)THIS$1 + 24ll) = *N4$1;
	label$1738:;
}

void _ZN4MATH4VEC4C1ERKdS2_S2_RKNS_8RATIONALE( struct $N4MATH4VEC4E* THIS$1, double* N1$1, double* N2$1, double* N3$1, struct $N4MATH8RATIONALE* R4$1 )
{
	label$1739:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *N1$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *N2$1;
	*(double*)((uint8*)THIS$1 + 16ll) = *N3$1;
	double vr$14 = _ZNK4MATH8RATIONALcvdEv( R4$1 );
	*(double*)((uint8*)THIS$1 + 24ll) = vr$14;
	label$1740:;
}

void _ZN4MATH4VEC4C1ERKdS2_S2_S2_( struct $N4MATH4VEC4E* THIS$1, double* N1$1, double* N2$1, double* N3$1, double* N4$1 )
{
	label$1741:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *N1$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *N2$1;
	*(double*)((uint8*)THIS$1 + 16ll) = *N3$1;
	*(double*)((uint8*)THIS$1 + 24ll) = *N4$1;
	label$1742:;
}

void _ZN4MATH4VEC4C1ERKNS_4VEC2ERKNS_8RATIONALES6_( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4VEC2E* V$1, struct $N4MATH8RATIONALE* R1$1, struct $N4MATH8RATIONALE* R2$1 )
{
	label$1743:;
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
	label$1744:;
}

void _ZN4MATH4VEC4C1ERKNS_4VEC2ERKNS_8RATIONALERKd( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4VEC2E* V$1, struct $N4MATH8RATIONALE* R1$1, double* N2$1 )
{
	label$1745:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	double vr$12 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$12;
	*(double*)((uint8*)THIS$1 + 24ll) = *N2$1;
	label$1746:;
}

void _ZN4MATH4VEC4C1ERKNS_4VEC2ERKdRKNS_8RATIONALE( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4VEC2E* V$1, double* N1$1, struct $N4MATH8RATIONALE* R2$1 )
{
	label$1747:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *N1$1;
	double vr$14 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	*(double*)((uint8*)THIS$1 + 24ll) = vr$14;
	label$1748:;
}

void _ZN4MATH4VEC4C1ERKNS_4VEC2ERKdS5_( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4VEC2E* V$1, double* N1$1, double* N2$1 )
{
	label$1749:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *N1$1;
	*(double*)((uint8*)THIS$1 + 24ll) = *N2$1;
	label$1750:;
}

void _ZN4MATH4VEC4C1ERKNS_4PVECERKNS_8RATIONALES6_( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4PVECE* V$1, struct $N4MATH8RATIONALE* R1$1, struct $N4MATH8RATIONALE* R2$1 )
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
	double vr$12 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$12;
	double vr$14 = _ZNK4MATH8RATIONALcvdEv( R2$1 );
	*(double*)((uint8*)THIS$1 + 24ll) = vr$14;
	label$1752:;
}

void _ZN4MATH4VEC4C1ERKNS_4PVECERKNS_8RATIONALERKd( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4PVECE* V$1, struct $N4MATH8RATIONALE* R1$1, double* N2$1 )
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
	double vr$12 = _ZNK4MATH8RATIONALcvdEv( R1$1 );
	*(double*)((uint8*)THIS$1 + 16ll) = vr$12;
	*(double*)((uint8*)THIS$1 + 24ll) = *N2$1;
	label$1754:;
}

void _ZN4MATH4VEC4C1ERKNS_4PVECERKdRKNS_8RATIONALE( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4PVECE* V$1, double* N1$1, struct $N4MATH8RATIONALE* R2$1 )
{
	label$1755:;
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
	label$1756:;
}

void _ZN4MATH4VEC4C1ERKNS_4PVECERKdS5_( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4PVECE* V$1, double* N1$1, double* N2$1 )
{
	label$1757:;
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
	label$1758:;
}

void _ZN4MATH4VEC4C1ERKNS_4VEC3ERKNS_8RATIONALE( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4VEC3E* V$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$1759:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)V$1 + 16ll);
	double vr$14 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	*(double*)((uint8*)THIS$1 + 24ll) = vr$14;
	label$1760:;
}

void _ZN4MATH4VEC4C1ERKNS_4VEC3ERKd( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4VEC3E* V$1, double* N$1 )
{
	label$1761:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)V$1 + 16ll);
	*(double*)((uint8*)THIS$1 + 24ll) = *N$1;
	label$1762:;
}

void _ZN4MATH4VEC4C1ERKNS_4CVECERKNS_8RATIONALE( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4CVECE* V$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$1763:;
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
	label$1764:;
}

void _ZN4MATH4VEC4C1ERKNS_4CVECERKd( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4CVECE* V$1, double* N$1 )
{
	label$1765:;
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
	label$1766:;
}

void _ZN4MATH4VEC4C1ERKS0_( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4VEC4E* V$1 )
{
	label$1767:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)V$1 + 16ll);
	*(double*)((uint8*)THIS$1 + 24ll) = *(double*)((uint8*)V$1 + 24ll);
	label$1768:;
}

void _ZN4MATH4VEC4pLERKS0_( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4VEC4E* V$1 )
{
	label$1769:;
	*(double*)THIS$1 = *(double*)THIS$1 + *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) + *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) + *(double*)((uint8*)V$1 + 16ll);
	*(double*)((uint8*)THIS$1 + 24ll) = *(double*)((uint8*)THIS$1 + 24ll) + *(double*)((uint8*)V$1 + 24ll);
	label$1770:;
}

void _ZN4MATH4VEC4mIERKS0_( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4VEC4E* V$1 )
{
	label$1771:;
	*(double*)THIS$1 = *(double*)THIS$1 - *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) - *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) - *(double*)((uint8*)V$1 + 16ll);
	*(double*)((uint8*)THIS$1 + 24ll) = *(double*)((uint8*)THIS$1 + 24ll) - *(double*)((uint8*)V$1 + 24ll);
	label$1772:;
}

void _ZN4MATH4VEC4mLERKNS_8RATIONALE( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$1773:;
	double N$1;
	double vr$0 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	N$1 = vr$0;
	*(double*)THIS$1 = *(double*)THIS$1 * N$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) * N$1;
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) * N$1;
	*(double*)((uint8*)THIS$1 + 24ll) = *(double*)((uint8*)THIS$1 + 24ll) * N$1;
	label$1774:;
}

void _ZN4MATH4VEC4mLERKd( struct $N4MATH4VEC4E* THIS$1, double* N$1 )
{
	label$1775:;
	*(double*)THIS$1 = *(double*)THIS$1 * *N$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) * *N$1;
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) * *N$1;
	*(double*)((uint8*)THIS$1 + 24ll) = *(double*)((uint8*)THIS$1 + 24ll) * *N$1;
	label$1776:;
}

void _ZN4MATH4VEC4mLERKS0_( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4VEC4E* V$1 )
{
	label$1777:;
	*(double*)THIS$1 = *(double*)THIS$1 * *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) * *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) * *(double*)((uint8*)V$1 + 16ll);
	*(double*)((uint8*)THIS$1 + 24ll) = *(double*)((uint8*)THIS$1 + 24ll) * *(double*)((uint8*)V$1 + 24ll);
	label$1778:;
}

void _ZN4MATH4VEC4dVERKNS_8RATIONALE( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$1779:;
	double N$1;
	double vr$0 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	N$1 = vr$0;
	if( N$1 == 0x0p+0 ) goto label$1782;
	{
		*(double*)THIS$1 = *(double*)THIS$1 / N$1;
		*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) / N$1;
		*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) / N$1;
		*(double*)((uint8*)THIS$1 + 24ll) = *(double*)((uint8*)THIS$1 + 24ll) / N$1;
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

void _ZN4MATH4VEC4dVERKd( struct $N4MATH4VEC4E* THIS$1, double* N$1 )
{
	label$1783:;
	if( *N$1 == 0x0p+0 ) goto label$1786;
	{
		*(double*)THIS$1 = *(double*)THIS$1 / *N$1;
		*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) / *N$1;
		*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) / *N$1;
		*(double*)((uint8*)THIS$1 + 24ll) = *(double*)((uint8*)THIS$1 + 24ll) / *N$1;
	}
	goto label$1785;
	label$1786:;
	{
		*(double*)THIS$1 = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 8ll) = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 16ll) = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 24ll) = 0x0p+0;
	}
	label$1785:;
	label$1784:;
}

void _ZN4MATH4VEC4dVERKS0_( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4VEC4E* V$1 )
{
	double TMP$798$1;
	double TMP$799$1;
	double TMP$800$1;
	double TMP$801$1;
	label$1787:;
	if( *(double*)V$1 == 0x0p+0 ) goto label$1789;
	TMP$798$1 = *(double*)THIS$1 / *(double*)V$1;
	goto label$1793;
	label$1789:;
	TMP$798$1 = 0x0p+0;
	label$1793:;
	*(double*)THIS$1 = TMP$798$1;
	if( *(double*)((uint8*)V$1 + 8ll) == 0x0p+0 ) goto label$1790;
	TMP$799$1 = *(double*)((uint8*)THIS$1 + 8ll) / *(double*)((uint8*)V$1 + 8ll);
	goto label$1794;
	label$1790:;
	TMP$799$1 = 0x0p+0;
	label$1794:;
	*(double*)((uint8*)THIS$1 + 8ll) = TMP$799$1;
	if( *(double*)((uint8*)V$1 + 16ll) == 0x0p+0 ) goto label$1791;
	TMP$800$1 = *(double*)((uint8*)THIS$1 + 16ll) / *(double*)((uint8*)V$1 + 16ll);
	goto label$1795;
	label$1791:;
	TMP$800$1 = 0x0p+0;
	label$1795:;
	*(double*)((uint8*)THIS$1 + 16ll) = TMP$800$1;
	if( *(double*)((uint8*)V$1 + 24ll) == 0x0p+0 ) goto label$1792;
	TMP$801$1 = *(double*)((uint8*)THIS$1 + 24ll) / *(double*)((uint8*)V$1 + 24ll);
	goto label$1796;
	label$1792:;
	TMP$801$1 = 0x0p+0;
	label$1796:;
	*(double*)((uint8*)THIS$1 + 24ll) = TMP$801$1;
	label$1788:;
}

FBSTRING* _ZNK4MATH4VEC4cv8FBSTRINGEv( struct $N4MATH4VEC4E* THIS$1 )
{
	FBSTRING TMP$804$1;
	FBSTRING TMP$805$1;
	FBSTRING TMP$806$1;
	FBSTRING TMP$807$1;
	FBSTRING TMP$808$1;
	FBSTRING TMP$809$1;
	FBSTRING TMP$810$1;
	FBSTRING TMP$811$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$1797:;
	FBSTRING* vr$2 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 24ll) );
	FBSTRING* vr$4 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 16ll) );
	FBSTRING* vr$6 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 8ll) );
	FBSTRING* vr$8 = fb_DoubleToStr( *(double*)THIS$1 );
	__builtin_memset( &TMP$804$1, 0, 24ll );
	FBSTRING* vr$11 = fb_StrConcat( &TMP$804$1, (void*)"<math.vec4>{ x : ", 18ll, (void*)vr$8, -1ll );
	__builtin_memset( &TMP$805$1, 0, 24ll );
	FBSTRING* vr$14 = fb_StrConcat( &TMP$805$1, (void*)vr$11, -1ll, (void*)" , y : ", 8ll );
	__builtin_memset( &TMP$806$1, 0, 24ll );
	FBSTRING* vr$17 = fb_StrConcat( &TMP$806$1, (void*)vr$14, -1ll, (void*)vr$6, -1ll );
	__builtin_memset( &TMP$807$1, 0, 24ll );
	FBSTRING* vr$20 = fb_StrConcat( &TMP$807$1, (void*)vr$17, -1ll, (void*)" , z : ", 8ll );
	__builtin_memset( &TMP$808$1, 0, 24ll );
	FBSTRING* vr$23 = fb_StrConcat( &TMP$808$1, (void*)vr$20, -1ll, (void*)vr$4, -1ll );
	__builtin_memset( &TMP$809$1, 0, 24ll );
	FBSTRING* vr$26 = fb_StrConcat( &TMP$809$1, (void*)vr$23, -1ll, (void*)" , w : ", 8ll );
	__builtin_memset( &TMP$810$1, 0, 24ll );
	FBSTRING* vr$29 = fb_StrConcat( &TMP$810$1, (void*)vr$26, -1ll, (void*)vr$2, -1ll );
	__builtin_memset( &TMP$811$1, 0, 24ll );
	FBSTRING* vr$32 = fb_StrConcat( &TMP$811$1, (void*)vr$29, -1ll, (void*)" }", 3ll );
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$32, -1ll, 0 );
	goto label$1798;
	label$1798:;
	FBSTRING* vr$35 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$35;
}

void _ZN4MATH4VEC4aSERKNS_4VEC2E( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	label$1799:;
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = 0x0p+0;
	*(double*)((uint8*)THIS$1 + 24ll) = 0x0p+0;
	label$1800:;
}

void _ZN4MATH4VEC4aSERKNS_4PVECE( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4PVECE* V$1 )
{
	label$1801:;
	double vr$0 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
	*(double*)THIS$1 = vr$0;
	double vr$2 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$2;
	*(double*)((uint8*)THIS$1 + 16ll) = 0x0p+0;
	*(double*)((uint8*)THIS$1 + 24ll) = 0x0p+0;
	label$1802:;
}

void _ZN4MATH4VEC4aSERKNS_4VEC3E( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4VEC3E* V$1 )
{
	label$1803:;
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)V$1 + 16ll);
	*(double*)((uint8*)THIS$1 + 24ll) = 0x0p+0;
	label$1804:;
}

void _ZN4MATH4VEC4aSERKNS_4CVECE( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4CVECE* V$1 )
{
	label$1805:;
	double vr$0 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
	*(double*)THIS$1 = vr$0;
	double vr$2 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$2;
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 24ll) = 0x0p+0;
	label$1806:;
}

void _ZN4MATH4VEC4aSERKS0_( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4VEC4E* V$1 )
{
	label$1807:;
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)V$1 + 16ll);
	*(double*)((uint8*)THIS$1 + 24ll) = *(double*)((uint8*)V$1 + 24ll);
	label$1808:;
}

double _ZNK4MATH4VEC413CHNORM__get__Ev( struct $N4MATH4VEC4E* THIS$1 )
{
	double TMP$812$1;
	double TMP$813$1;
	double TMP$814$1;
	double TMP$815$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1809:;
	TMP$815$1 = __builtin_fabs( *(double*)((uint8*)THIS$1 + 24ll) );
	TMP$814$1 = __builtin_fabs( *(double*)((uint8*)THIS$1 + 16ll) );
	TMP$813$1 = __builtin_fabs( *(double*)((uint8*)THIS$1 + 8ll) );
	TMP$812$1 = __builtin_fabs( *(double*)THIS$1 );
	double vr$13 = _ZN4MATH3MAXERKdS1_S1_S1_( &TMP$812$1, &TMP$813$1, &TMP$814$1, &TMP$815$1 );
	fb$result$1 = vr$13;
	goto label$1810;
	label$1810:;
	return fb$result$1;
}

double _ZNK4MATH4VEC413MANORM__get__Ev( struct $N4MATH4VEC4E* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1811:;
	fb$result$1 = ((__builtin_fabs( *(double*)THIS$1 ) + __builtin_fabs( *(double*)((uint8*)THIS$1 + 8ll) )) + __builtin_fabs( *(double*)((uint8*)THIS$1 + 16ll) )) + __builtin_fabs( *(double*)((uint8*)THIS$1 + 24ll) );
	goto label$1812;
	label$1812:;
	return fb$result$1;
}

double _ZNK4MATH4VEC411NORM__get__Ev( struct $N4MATH4VEC4E* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1813:;
	fb$result$1 = __builtin_sqrt( (((*(double*)THIS$1 * *(double*)THIS$1) + (*(double*)((uint8*)THIS$1 + 8ll) * *(double*)((uint8*)THIS$1 + 8ll))) + (((*(double*)((uint8*)THIS$1 + 16ll) * *(double*)((uint8*)THIS$1 + 16ll)) * *(double*)((uint8*)THIS$1 + 24ll)) * *(double*)((uint8*)THIS$1 + 24ll))) );
	goto label$1814;
	label$1814:;
	return fb$result$1;
}

void _ZN4MATH4VEC411NORM__set__ERKNS_8RATIONALE( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$1815:;
	double N$1;
	double vr$0 = _ZNK4MATH8RATIONALcvdEv( R$1 );
	N$1 = vr$0;
	if( N$1 == 0x0p+0 ) goto label$1818;
	{
		double H$2;
		double vr$1 = _ZNK4MATH4VEC411NORM__get__Ev( (struct $N4MATH4VEC4E*)THIS$1 );
		H$2 = vr$1;
		if( H$2 == 0x0p+0 ) goto label$1820;
		{
			*(double*)THIS$1 = (*(double*)THIS$1 / H$2) * N$1;
			*(double*)((uint8*)THIS$1 + 8ll) = (*(double*)((uint8*)THIS$1 + 8ll) / H$2) * N$1;
			*(double*)((uint8*)THIS$1 + 16ll) = (*(double*)((uint8*)THIS$1 + 16ll) / H$2) * N$1;
			*(double*)((uint8*)THIS$1 + 24ll) = (*(double*)((uint8*)THIS$1 + 24ll) / H$2) * N$1;
		}
		label$1820:;
		label$1819:;
	}
	goto label$1817;
	label$1818:;
	{
		*(double*)THIS$1 = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 8ll) = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 16ll) = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 24ll) = 0x0p+0;
	}
	label$1817:;
	label$1816:;
}

void _ZN4MATH4VEC411NORM__set__ERKd( struct $N4MATH4VEC4E* THIS$1, double* N$1 )
{
	label$1821:;
	if( *N$1 == 0x0p+0 ) goto label$1824;
	{
		double H$2;
		double vr$1 = _ZNK4MATH4VEC411NORM__get__Ev( (struct $N4MATH4VEC4E*)THIS$1 );
		H$2 = vr$1;
		if( H$2 == 0x0p+0 ) goto label$1826;
		{
			*(double*)THIS$1 = (*(double*)THIS$1 / H$2) * *N$1;
			*(double*)((uint8*)THIS$1 + 8ll) = (*(double*)((uint8*)THIS$1 + 8ll) / H$2) * *N$1;
			*(double*)((uint8*)THIS$1 + 16ll) = (*(double*)((uint8*)THIS$1 + 16ll) / H$2) * *N$1;
			*(double*)((uint8*)THIS$1 + 24ll) = (*(double*)((uint8*)THIS$1 + 24ll) / H$2) * *N$1;
		}
		label$1826:;
		label$1825:;
	}
	goto label$1823;
	label$1824:;
	{
		*(double*)THIS$1 = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 8ll) = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 16ll) = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 24ll) = 0x0p+0;
	}
	label$1823:;
	label$1822:;
}

double _ZNK4MATH4VEC413SQNORM__get__Ev( struct $N4MATH4VEC4E* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1827:;
	fb$result$1 = ((*(double*)THIS$1 * *(double*)THIS$1) + (*(double*)((uint8*)THIS$1 + 8ll) * *(double*)((uint8*)THIS$1 + 8ll))) + (((*(double*)((uint8*)THIS$1 + 16ll) * *(double*)((uint8*)THIS$1 + 16ll)) * *(double*)((uint8*)THIS$1 + 24ll)) * *(double*)((uint8*)THIS$1 + 24ll));
	goto label$1828;
	label$1828:;
	return fb$result$1;
}

double _ZNK4MATH4VEC412THETA__get__Ev( struct $N4MATH4VEC4E* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1829:;
	double vr$5 = _ZN4MATH5THETAERKdS1_( (double*)THIS$1, (double*)((uint8*)THIS$1 + 8ll) );
	fb$result$1 = vr$5;
	goto label$1830;
	label$1830:;
	return fb$result$1;
}

void _ZN4MATH4VEC412THETA__set__ERKNS_8RATIONALE( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH8RATIONALE* R$1 )
{
	label$1831:;
	double H$1;
	double vr$4 = _ZN4MATH5HYPOTERKdS1_( (double*)THIS$1, (double*)((uint8*)THIS$1 + 8ll) );
	H$1 = vr$4;
	if( H$1 == 0x0p+0 ) goto label$1834;
	{
		double N$2;
		double vr$5 = _ZNK4MATH8RATIONALcvdEv( R$1 );
		N$2 = vr$5;
		*(double*)THIS$1 = __builtin_cos( N$2 ) * H$1;
		*(double*)((uint8*)THIS$1 + 8ll) = __builtin_sin( N$2 ) * H$1;
	}
	label$1834:;
	label$1833:;
	label$1832:;
}

void _ZN4MATH4VEC412THETA__set__ERKd( struct $N4MATH4VEC4E* THIS$1, double* N$1 )
{
	label$1835:;
	double H$1;
	double vr$4 = _ZN4MATH5HYPOTERKdS1_( (double*)THIS$1, (double*)((uint8*)THIS$1 + 8ll) );
	H$1 = vr$4;
	if( H$1 == 0x0p+0 ) goto label$1838;
	{
		*(double*)THIS$1 = __builtin_cos( *N$1 ) * H$1;
		*(double*)((uint8*)THIS$1 + 8ll) = __builtin_sin( *N$1 ) * H$1;
	}
	label$1838:;
	label$1837:;
	label$1836:;
}

struct $N4MATH4VEC2E _ZNK4MATH4VEC49XY__get__Ev( struct $N4MATH4VEC4E* THIS$1 )
{
	struct $N4MATH4VEC2E fb$result$1;
	label$1839:;
	_ZN4MATH4VEC2C1ERKdS2_( &fb$result$1, (double*)THIS$1, (double*)((uint8*)THIS$1 + 8ll) );
	goto label$1840;
	label$1840:;
	return fb$result$1;
}

void _ZN4MATH4VEC49XY__set__ERKNS_4VEC2E( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	label$1841:;
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	label$1842:;
}

void _ZN4MATH4VEC49XY__set__ERKNS_4PVECE( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4PVECE* V$1 )
{
	label$1843:;
	double vr$0 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
	*(double*)THIS$1 = vr$0;
	double vr$2 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$2;
	label$1844:;
}

struct $N4MATH4VEC3E _ZNK4MATH4VEC410XYZ__get__Ev( struct $N4MATH4VEC4E* THIS$1 )
{
	struct $N4MATH4VEC3E fb$result$1;
	label$1845:;
	_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, (double*)THIS$1, (double*)((uint8*)THIS$1 + 8ll), (double*)((uint8*)THIS$1 + 16ll) );
	goto label$1846;
	label$1846:;
	return fb$result$1;
}

void _ZN4MATH4VEC410XYZ__set__ERKNS_4VEC3E( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4VEC3E* V$1 )
{
	label$1847:;
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)V$1 + 16ll);
	label$1848:;
}

void _ZN4MATH4VEC410XYZ__set__ERKNS_4CVECE( struct $N4MATH4VEC4E* THIS$1, struct $N4MATH4CVECE* V$1 )
{
	label$1849:;
	double vr$0 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
	*(double*)THIS$1 = vr$0;
	double vr$2 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$2;
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)V$1;
	label$1850:;
}

boolean _ZNK4MATH4VEC46ISNULLEv( struct $N4MATH4VEC4E* THIS$1 )
{
	boolean TMP$818$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1851:;
	double vr$1 = _ZNK4MATH4VEC411NORM__get__Ev( THIS$1 );
	if( vr$1 != 0x0p+0 ) goto label$1853;
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

boolean _ZNK4MATH4VEC46ISNULLERKd( struct $N4MATH4VEC4E* THIS$1, double* T$1 )
{
	boolean TMP$819$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1855:;
	double vr$1 = _ZNK4MATH4VEC411NORM__get__Ev( THIS$1 );
	if( vr$1 > __builtin_fabs( *T$1 ) ) goto label$1857;
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

boolean _ZNK4MATH4VEC46ISUNITEv( struct $N4MATH4VEC4E* THIS$1 )
{
	boolean TMP$820$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1859:;
	double vr$1 = _ZNK4MATH4VEC411NORM__get__Ev( THIS$1 );
	if( vr$1 != 0x1.p+0 ) goto label$1861;
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

boolean _ZNK4MATH4VEC46ISUNITERKd( struct $N4MATH4VEC4E* THIS$1, double* T$1 )
{
	boolean TMP$821$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1863:;
	double vr$1 = _ZNK4MATH4VEC411NORM__get__Ev( THIS$1 );
	if( __builtin_fabs( (-vr$1 + 0x1.p+0) ) > __builtin_fabs( *T$1 ) ) goto label$1865;
	TMP$821$1 = (boolean)1ll;
	goto label$1866;
	label$1865:;
	TMP$821$1 = (boolean)0ll;
	label$1866:;
	fb$result$1 = TMP$821$1;
	goto label$1864;
	label$1864:;
	return fb$result$1;
}

double _ZNK4MATH4VEC46MINORMERKd( struct $N4MATH4VEC4E* THIS$1, double* E$1 )
{
	double TMP$822$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1867:;
	if( *E$1 == 0x0p+0 ) goto label$1869;
	double vr$7 = pow( __builtin_fabs( *(double*)THIS$1 ), *E$1 );
	double vr$11 = pow( __builtin_fabs( *(double*)((uint8*)THIS$1 + 8ll) ), *E$1 );
	double vr$16 = pow( __builtin_fabs( *(double*)((uint8*)THIS$1 + 16ll) ), *E$1 );
	double vr$21 = pow( __builtin_fabs( *(double*)((uint8*)THIS$1 + 24ll) ), *E$1 );
	double vr$23 = pow( ((vr$7 + vr$11) + vr$16) + vr$21, 0x1.p+0 / *E$1 );
	TMP$822$1 = vr$23;
	goto label$1870;
	label$1869:;
	TMP$822$1 = 0x0p+0;
	label$1870:;
	fb$result$1 = TMP$822$1;
	goto label$1868;
	label$1868:;
	return fb$result$1;
}

void _ZN4MATH4VEC49NORMALISEEv( struct $N4MATH4VEC4E* THIS$1 )
{
	label$1871:;
	double H$1;
	double vr$0 = _ZNK4MATH4VEC411NORM__get__Ev( (struct $N4MATH4VEC4E*)THIS$1 );
	H$1 = vr$0;
	if( ((int64)-(H$1 > 0x0p+0) & (int64)-(H$1 != 0x1.p+0)) == 0ll ) goto label$1874;
	{
		*(double*)THIS$1 = *(double*)THIS$1 / H$1;
		*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) / H$1;
		*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) / H$1;
		*(double*)((uint8*)THIS$1 + 24ll) = *(double*)((uint8*)THIS$1 + 24ll) / H$1;
	}
	label$1874:;
	label$1873:;
	label$1872:;
}

FBSTRING* _ZNK4MATH4VEC46TOJSONERKb( struct $N4MATH4VEC4E* THIS$1, boolean* A$1 )
{
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
	FBSTRING TMP$840$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$1875:;
	if( *A$1 == (boolean)0ll ) goto label$1877;
	FBSTRING* vr$3 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 24ll) );
	FBSTRING* vr$5 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 16ll) );
	FBSTRING* vr$7 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 8ll) );
	FBSTRING* vr$9 = fb_DoubleToStr( *(double*)THIS$1 );
	__builtin_memset( &TMP$825$1, 0, 24ll );
	FBSTRING* vr$12 = fb_StrConcat( &TMP$825$1, (void*)"[", 2ll, (void*)vr$9, -1ll );
	__builtin_memset( &TMP$826$1, 0, 24ll );
	FBSTRING* vr$15 = fb_StrConcat( &TMP$826$1, (void*)vr$12, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$827$1, 0, 24ll );
	FBSTRING* vr$18 = fb_StrConcat( &TMP$827$1, (void*)vr$15, -1ll, (void*)vr$7, -1ll );
	__builtin_memset( &TMP$828$1, 0, 24ll );
	FBSTRING* vr$21 = fb_StrConcat( &TMP$828$1, (void*)vr$18, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$829$1, 0, 24ll );
	FBSTRING* vr$24 = fb_StrConcat( &TMP$829$1, (void*)vr$21, -1ll, (void*)vr$5, -1ll );
	__builtin_memset( &TMP$830$1, 0, 24ll );
	FBSTRING* vr$27 = fb_StrConcat( &TMP$830$1, (void*)vr$24, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$831$1, 0, 24ll );
	FBSTRING* vr$30 = fb_StrConcat( &TMP$831$1, (void*)vr$27, -1ll, (void*)vr$3, -1ll );
	__builtin_memset( &TMP$832$1, 0, 24ll );
	FBSTRING* vr$33 = fb_StrConcat( &TMP$832$1, (void*)vr$30, -1ll, (void*)"]", 2ll );
	fb_StrInit( (void*)&TMP$824$1, -1ll, (void*)vr$33, -1ll, 0 );
	goto label$1878;
	label$1877:;
	FBSTRING* vr$36 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 24ll) );
	FBSTRING* vr$38 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 16ll) );
	FBSTRING* vr$40 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 8ll) );
	FBSTRING* vr$42 = fb_DoubleToStr( *(double*)THIS$1 );
	__builtin_memset( &TMP$833$1, 0, 24ll );
	FBSTRING* vr$45 = fb_StrConcat( &TMP$833$1, (void*)"{\x22x\x22:", 6ll, (void*)vr$42, -1ll );
	__builtin_memset( &TMP$834$1, 0, 24ll );
	FBSTRING* vr$48 = fb_StrConcat( &TMP$834$1, (void*)vr$45, -1ll, (void*)",\x22y\x22:", 6ll );
	__builtin_memset( &TMP$835$1, 0, 24ll );
	FBSTRING* vr$51 = fb_StrConcat( &TMP$835$1, (void*)vr$48, -1ll, (void*)vr$40, -1ll );
	__builtin_memset( &TMP$836$1, 0, 24ll );
	FBSTRING* vr$54 = fb_StrConcat( &TMP$836$1, (void*)vr$51, -1ll, (void*)",\x22z\x22:", 6ll );
	__builtin_memset( &TMP$837$1, 0, 24ll );
	FBSTRING* vr$57 = fb_StrConcat( &TMP$837$1, (void*)vr$54, -1ll, (void*)vr$38, -1ll );
	__builtin_memset( &TMP$838$1, 0, 24ll );
	FBSTRING* vr$60 = fb_StrConcat( &TMP$838$1, (void*)vr$57, -1ll, (void*)",\x22w\x22:", 6ll );
	__builtin_memset( &TMP$839$1, 0, 24ll );
	FBSTRING* vr$63 = fb_StrConcat( &TMP$839$1, (void*)vr$60, -1ll, (void*)vr$36, -1ll );
	__builtin_memset( &TMP$840$1, 0, 24ll );
	FBSTRING* vr$66 = fb_StrConcat( &TMP$840$1, (void*)vr$63, -1ll, (void*)"}", 2ll );
	fb_StrInit( (void*)&TMP$824$1, -1ll, (void*)vr$66, -1ll, 0 );
	label$1878:;
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)&TMP$824$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&TMP$824$1 );
	goto label$1876;
	label$1876:;
	FBSTRING* vr$72 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$72;
}

struct $N4MATH4VEC4E _ZN4MATH4VEC45UNITXEv( void )
{
	double TMP$842$1;
	double TMP$843$1;
	double TMP$844$1;
	double TMP$845$1;
	struct $N4MATH4VEC4E fb$result$1;
	label$1879:;
	TMP$845$1 = 0x0p+0;
	TMP$844$1 = 0x0p+0;
	TMP$843$1 = 0x0p+0;
	TMP$842$1 = 0x1.p+0;
	_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, (double*)&TMP$842$1, (double*)&TMP$843$1, (double*)&TMP$844$1, (double*)&TMP$845$1 );
	goto label$1880;
	label$1880:;
	return fb$result$1;
}

struct $N4MATH4VEC4E _ZN4MATH4VEC45UNITYEv( void )
{
	double TMP$847$1;
	double TMP$848$1;
	double TMP$849$1;
	double TMP$850$1;
	struct $N4MATH4VEC4E fb$result$1;
	label$1881:;
	TMP$850$1 = 0x0p+0;
	TMP$849$1 = 0x0p+0;
	TMP$848$1 = 0x1.p+0;
	TMP$847$1 = 0x0p+0;
	_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, (double*)&TMP$847$1, (double*)&TMP$848$1, (double*)&TMP$849$1, (double*)&TMP$850$1 );
	goto label$1882;
	label$1882:;
	return fb$result$1;
}

struct $N4MATH4VEC4E _ZN4MATH4VEC45UNITZEv( void )
{
	double TMP$852$1;
	double TMP$853$1;
	double TMP$854$1;
	double TMP$855$1;
	struct $N4MATH4VEC4E fb$result$1;
	label$1883:;
	TMP$855$1 = 0x0p+0;
	TMP$854$1 = 0x1.p+0;
	TMP$853$1 = 0x0p+0;
	TMP$852$1 = 0x0p+0;
	_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, (double*)&TMP$852$1, (double*)&TMP$853$1, (double*)&TMP$854$1, (double*)&TMP$855$1 );
	goto label$1884;
	label$1884:;
	return fb$result$1;
}

struct $N4MATH4VEC4E _ZN4MATH4VEC45UNITWEv( void )
{
	double TMP$857$1;
	double TMP$858$1;
	double TMP$859$1;
	double TMP$860$1;
	struct $N4MATH4VEC4E fb$result$1;
	label$1885:;
	TMP$860$1 = 0x1.p+0;
	TMP$859$1 = 0x0p+0;
	TMP$858$1 = 0x0p+0;
	TMP$857$1 = 0x0p+0;
	_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, (double*)&TMP$857$1, (double*)&TMP$858$1, (double*)&TMP$859$1, (double*)&TMP$860$1 );
	goto label$1886;
	label$1886:;
	return fb$result$1;
}

struct $N4MATH4VEC4E _ZN4MATHplERKNS_4VEC4ES2_( struct $N4MATH4VEC4E* V1$1, struct $N4MATH4VEC4E* V2$1 )
{
	double TMP$862$1;
	double TMP$863$1;
	double TMP$864$1;
	double TMP$865$1;
	struct $N4MATH4VEC4E fb$result$1;
	label$1887:;
	TMP$865$1 = *(double*)((uint8*)V1$1 + 24ll) + *(double*)((uint8*)V2$1 + 24ll);
	TMP$864$1 = *(double*)((uint8*)V1$1 + 16ll) + *(double*)((uint8*)V2$1 + 16ll);
	TMP$863$1 = *(double*)((uint8*)V1$1 + 8ll) + *(double*)((uint8*)V2$1 + 8ll);
	TMP$862$1 = *(double*)V1$1 + *(double*)V2$1;
	_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, &TMP$862$1, &TMP$863$1, &TMP$864$1, &TMP$865$1 );
	goto label$1888;
	label$1888:;
	return fb$result$1;
}

struct $N4MATH4VEC4E _ZN4MATHmiERKNS_4VEC4ES2_( struct $N4MATH4VEC4E* V1$1, struct $N4MATH4VEC4E* V2$1 )
{
	double TMP$867$1;
	double TMP$868$1;
	double TMP$869$1;
	double TMP$870$1;
	struct $N4MATH4VEC4E fb$result$1;
	label$1889:;
	TMP$870$1 = *(double*)((uint8*)V1$1 + 24ll) - *(double*)((uint8*)V2$1 + 24ll);
	TMP$869$1 = *(double*)((uint8*)V1$1 + 16ll) - *(double*)((uint8*)V2$1 + 16ll);
	TMP$868$1 = *(double*)((uint8*)V1$1 + 8ll) - *(double*)((uint8*)V2$1 + 8ll);
	TMP$867$1 = *(double*)V1$1 - *(double*)V2$1;
	_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, &TMP$867$1, &TMP$868$1, &TMP$869$1, &TMP$870$1 );
	goto label$1890;
	label$1890:;
	return fb$result$1;
}

struct $N4MATH4VEC4E _ZN4MATHmlERKNS_4VEC4ERKd( struct $N4MATH4VEC4E* V$1, double* N$1 )
{
	double TMP$872$1;
	double TMP$873$1;
	double TMP$874$1;
	double TMP$875$1;
	struct $N4MATH4VEC4E fb$result$1;
	label$1891:;
	TMP$875$1 = *(double*)((uint8*)V$1 + 24ll) * *N$1;
	TMP$874$1 = *(double*)((uint8*)V$1 + 16ll) * *N$1;
	TMP$873$1 = *(double*)((uint8*)V$1 + 8ll) * *N$1;
	TMP$872$1 = *(double*)V$1 * *N$1;
	_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, &TMP$872$1, &TMP$873$1, &TMP$874$1, &TMP$875$1 );
	goto label$1892;
	label$1892:;
	return fb$result$1;
}

struct $N4MATH4VEC4E _ZN4MATHmlERKdRKNS_4VEC4E( double* N$1, struct $N4MATH4VEC4E* V$1 )
{
	double TMP$877$1;
	double TMP$878$1;
	double TMP$879$1;
	double TMP$880$1;
	struct $N4MATH4VEC4E fb$result$1;
	label$1893:;
	TMP$880$1 = *N$1 * *(double*)((uint8*)V$1 + 24ll);
	TMP$879$1 = *N$1 * *(double*)((uint8*)V$1 + 16ll);
	TMP$878$1 = *N$1 * *(double*)((uint8*)V$1 + 8ll);
	TMP$877$1 = *N$1 * *(double*)V$1;
	_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, &TMP$877$1, &TMP$878$1, &TMP$879$1, &TMP$880$1 );
	goto label$1894;
	label$1894:;
	return fb$result$1;
}

struct $N4MATH4VEC4E _ZN4MATHmlERKNS_4VEC4ES2_( struct $N4MATH4VEC4E* V1$1, struct $N4MATH4VEC4E* V2$1 )
{
	double TMP$882$1;
	double TMP$883$1;
	double TMP$884$1;
	double TMP$885$1;
	struct $N4MATH4VEC4E fb$result$1;
	label$1895:;
	TMP$885$1 = *(double*)((uint8*)V1$1 + 24ll) * *(double*)((uint8*)V2$1 + 24ll);
	TMP$884$1 = *(double*)((uint8*)V1$1 + 16ll) * *(double*)((uint8*)V2$1 + 16ll);
	TMP$883$1 = *(double*)((uint8*)V1$1 + 8ll) * *(double*)((uint8*)V2$1 + 8ll);
	TMP$882$1 = *(double*)V1$1 * *(double*)V2$1;
	_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, &TMP$882$1, &TMP$883$1, &TMP$884$1, &TMP$885$1 );
	goto label$1896;
	label$1896:;
	return fb$result$1;
}

struct $N4MATH4VEC4E _ZN4MATHdvERKNS_4VEC4ERKd( struct $N4MATH4VEC4E* V$1, double* N$1 )
{
	double TMP$887$1;
	double TMP$888$1;
	double TMP$889$1;
	double TMP$890$1;
	struct $N4MATH4VEC4E TMP$892$1;
	struct $N4MATH4VEC4E fb$result$1;
	label$1897:;
	if( *N$1 == 0x0p+0 ) goto label$1899;
	TMP$890$1 = *(double*)((uint8*)V$1 + 24ll) / *N$1;
	TMP$889$1 = *(double*)((uint8*)V$1 + 16ll) / *N$1;
	TMP$888$1 = *(double*)((uint8*)V$1 + 8ll) / *N$1;
	TMP$887$1 = *(double*)V$1 / *N$1;
	_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &TMP$892$1, &TMP$887$1, &TMP$888$1, &TMP$889$1, &TMP$890$1 );
	goto label$1900;
	label$1899:;
	_ZN4MATH4VEC4C1Ev( &TMP$892$1 );
	label$1900:;
	_ZN4MATH4VEC4C1ERKS0_( &fb$result$1, (struct $N4MATH4VEC4E*)&TMP$892$1 );
	goto label$1898;
	label$1898:;
	return fb$result$1;
}

struct $N4MATH4VEC4E _ZN4MATHdvERKNS_4VEC4ES2_( struct $N4MATH4VEC4E* V1$1, struct $N4MATH4VEC4E* V2$1 )
{
	double TMP$894$1;
	double TMP$895$1;
	double TMP$896$1;
	double TMP$897$1;
	struct $N4MATH4VEC4E fb$result$1;
	label$1901:;
	if( *(double*)((uint8*)V2$1 + 24ll) == 0x0p+0 ) goto label$1906;
	TMP$897$1 = *(double*)((uint8*)V1$1 + 24ll) / *(double*)((uint8*)V2$1 + 24ll);
	goto label$1907;
	label$1906:;
	TMP$897$1 = 0x0p+0;
	label$1907:;
	if( *(double*)((uint8*)V2$1 + 16ll) == 0x0p+0 ) goto label$1905;
	TMP$896$1 = *(double*)((uint8*)V1$1 + 16ll) / *(double*)((uint8*)V2$1 + 16ll);
	goto label$1908;
	label$1905:;
	TMP$896$1 = 0x0p+0;
	label$1908:;
	if( *(double*)((uint8*)V2$1 + 8ll) == 0x0p+0 ) goto label$1904;
	TMP$895$1 = *(double*)((uint8*)V1$1 + 8ll) / *(double*)((uint8*)V2$1 + 8ll);
	goto label$1909;
	label$1904:;
	TMP$895$1 = 0x0p+0;
	label$1909:;
	if( *(double*)V2$1 == 0x0p+0 ) goto label$1903;
	TMP$894$1 = *(double*)V1$1 / *(double*)V2$1;
	goto label$1910;
	label$1903:;
	TMP$894$1 = 0x0p+0;
	label$1910:;
	_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, &TMP$894$1, &TMP$895$1, &TMP$896$1, &TMP$897$1 );
	goto label$1902;
	label$1902:;
	return fb$result$1;
}

boolean _ZN4MATHeqERKNS_4VEC4ES2_( struct $N4MATH4VEC4E* V1$1, struct $N4MATH4VEC4E* V2$1 )
{
	boolean TMP$898$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1911:;
	if( ((((int64)-(*(double*)V1$1 == *(double*)V2$1) & (int64)-(*(double*)((uint8*)V1$1 + 8ll) == *(double*)((uint8*)V2$1 + 8ll))) & (int64)-(*(double*)((uint8*)V1$1 + 16ll) == *(double*)((uint8*)V2$1 + 16ll))) & (int64)-(*(double*)((uint8*)V1$1 + 24ll) == *(double*)((uint8*)V2$1 + 24ll))) == 0ll ) goto label$1913;
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

boolean _ZN4MATHneERKNS_4VEC4ES2_( struct $N4MATH4VEC4E* V1$1, struct $N4MATH4VEC4E* V2$1 )
{
	boolean TMP$899$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1915:;
	if( ((((int64)-(*(double*)V1$1 != *(double*)V2$1) | (int64)-(*(double*)((uint8*)V1$1 + 8ll) != *(double*)((uint8*)V2$1 + 8ll))) | (int64)-(*(double*)((uint8*)V1$1 + 16ll) != *(double*)((uint8*)V2$1 + 16ll))) | (int64)-(*(double*)((uint8*)V1$1 + 24ll) != *(double*)((uint8*)V2$1 + 24ll))) == 0ll ) goto label$1917;
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

boolean _ZN4MATH3CMPERKNS_4VEC4ES2_RKd( struct $N4MATH4VEC4E* V1$1, struct $N4MATH4VEC4E* V2$1, double* S$1 )
{
	boolean TMP$900$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1919:;
	double T$1;
	T$1 = __builtin_fabs( *S$1 );
	if( ((((int64)-(__builtin_fabs( (*(double*)V1$1 - *(double*)V2$1) ) <= T$1) & (int64)-(__builtin_fabs( (*(double*)((uint8*)V1$1 + 8ll) - *(double*)((uint8*)V2$1 + 8ll)) ) <= T$1)) & (int64)-(__builtin_fabs( (*(double*)((uint8*)V1$1 + 16ll) - *(double*)((uint8*)V2$1 + 16ll)) ) <= T$1)) & (int64)-(__builtin_fabs( (*(double*)((uint8*)V1$1 + 24ll) - *(double*)((uint8*)V2$1 + 24ll)) ) <= T$1)) == 0ll ) goto label$1921;
	TMP$900$1 = (boolean)1ll;
	goto label$1922;
	label$1921:;
	TMP$900$1 = (boolean)0ll;
	label$1922:;
	fb$result$1 = TMP$900$1;
	goto label$1920;
	label$1920:;
	return fb$result$1;
}

double _ZN4MATH3DOTERKNS_4VEC4ES2_( struct $N4MATH4VEC4E* V1$1, struct $N4MATH4VEC4E* V2$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1923:;
	fb$result$1 = (((*(double*)V1$1 * *(double*)V2$1) + (*(double*)((uint8*)V1$1 + 8ll) * *(double*)((uint8*)V2$1 + 8ll))) + (*(double*)((uint8*)V1$1 + 16ll) * *(double*)((uint8*)V2$1 + 16ll))) + (*(double*)((uint8*)V1$1 + 24ll) * *(double*)((uint8*)V2$1 + 24ll));
	goto label$1924;
	label$1924:;
	return fb$result$1;
}

struct $N4MATH4VEC4E _ZN4MATH4LERPERKNS_4VEC4ES2_RKd( struct $N4MATH4VEC4E* V1$1, struct $N4MATH4VEC4E* V2$1, double* S$1 )
{
	double TMP$902$1;
	double TMP$903$1;
	double TMP$904$1;
	double TMP$905$1;
	struct $N4MATH4VEC4E fb$result$1;
	label$1925:;
	double T$1;
	double vr$0 = _ZN4MATH5CLAMPERKd( S$1 );
	T$1 = vr$0;
	double U$1;
	U$1 = 0x1.p+0 - T$1;
	TMP$905$1 = (*(double*)((uint8*)V1$1 + 24ll) * U$1) + (*(double*)((uint8*)V2$1 + 24ll) * T$1);
	TMP$904$1 = (*(double*)((uint8*)V1$1 + 16ll) * U$1) + (*(double*)((uint8*)V2$1 + 16ll) * T$1);
	TMP$903$1 = (*(double*)((uint8*)V1$1 + 8ll) * U$1) + (*(double*)((uint8*)V2$1 + 8ll) * T$1);
	TMP$902$1 = (*(double*)V1$1 * U$1) + (*(double*)V2$1 * T$1);
	_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, &TMP$902$1, &TMP$903$1, &TMP$904$1, &TMP$905$1 );
	goto label$1926;
	label$1926:;
	return fb$result$1;
}

void _ZN4MATH10QUATERNIONC1Ev( struct $N4MATH10QUATERNIONE* THIS$1 )
{
	label$1927:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)((uint8*)THIS$1 + 24ll) = 0x1.p+0;
	label$1928:;
}

void _ZN4MATH10QUATERNIONC1ERKdS2_S2_S2_( struct $N4MATH10QUATERNIONE* THIS$1, double* N1$1, double* N2$1, double* N3$1, double* N4$1 )
{
	label$1929:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *N1$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *N2$1;
	*(double*)((uint8*)THIS$1 + 16ll) = *N3$1;
	*(double*)((uint8*)THIS$1 + 24ll) = *N4$1;
	label$1930:;
}

void _ZN4MATH10QUATERNIONC1ERKNS_4VEC2ERKdS5_( struct $N4MATH10QUATERNIONE* THIS$1, struct $N4MATH4VEC2E* V$1, double* N1$1, double* N2$1 )
{
	label$1931:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *N1$1;
	*(double*)((uint8*)THIS$1 + 24ll) = *N2$1;
	label$1932:;
}

void _ZN4MATH10QUATERNIONC1ERKNS_4PVECERKdS5_( struct $N4MATH10QUATERNIONE* THIS$1, struct $N4MATH4PVECE* V$1, double* N1$1, double* N2$1 )
{
	label$1933:;
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
	label$1934:;
}

void _ZN4MATH10QUATERNIONC1ERKNS_4VEC3ERKd( struct $N4MATH10QUATERNIONE* THIS$1, struct $N4MATH4VEC3E* V$1, double* N$1 )
{
	label$1935:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)V$1 + 16ll);
	*(double*)((uint8*)THIS$1 + 24ll) = *N$1;
	label$1936:;
}

void _ZN4MATH10QUATERNIONC1ERKNS_4CVECERKd( struct $N4MATH10QUATERNIONE* THIS$1, struct $N4MATH4CVECE* V$1, double* N$1 )
{
	label$1937:;
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
	label$1938:;
}

void _ZN4MATH10QUATERNIONC1ERKNS_4VEC4E( struct $N4MATH10QUATERNIONE* THIS$1, struct $N4MATH4VEC4E* V$1 )
{
	label$1939:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)V$1 + 16ll);
	*(double*)((uint8*)THIS$1 + 24ll) = *(double*)((uint8*)V$1 + 24ll);
	label$1940:;
}

void _ZN4MATH10QUATERNIONC1ERKS0_( struct $N4MATH10QUATERNIONE* THIS$1, struct $N4MATH10QUATERNIONE* V$1 )
{
	label$1941:;
	__builtin_memset( (double*)THIS$1, 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)V$1 + 16ll);
	*(double*)((uint8*)THIS$1 + 24ll) = *(double*)((uint8*)V$1 + 24ll);
	label$1942:;
}

void _ZN4MATH10QUATERNIONmLERKd( struct $N4MATH10QUATERNIONE* THIS$1, double* N$1 )
{
	label$1943:;
	*(double*)THIS$1 = *(double*)THIS$1 * *N$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) * *N$1;
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) * *N$1;
	*(double*)((uint8*)THIS$1 + 24ll) = *(double*)((uint8*)THIS$1 + 24ll) * *N$1;
	label$1944:;
}

void _ZN4MATH10QUATERNIONmLERKS0_( struct $N4MATH10QUATERNIONE* THIS$1, struct $N4MATH10QUATERNIONE* Q$1 )
{
	label$1945:;
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
	label$1946:;
}

void _ZN4MATH10QUATERNIONdVERKd( struct $N4MATH10QUATERNIONE* THIS$1, double* N$1 )
{
	label$1947:;
	if( *N$1 == 0x0p+0 ) goto label$1950;
	{
		*(double*)THIS$1 = *(double*)THIS$1 / *N$1;
		*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) / *N$1;
		*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) / *N$1;
		*(double*)((uint8*)THIS$1 + 24ll) = *(double*)((uint8*)THIS$1 + 24ll) / *N$1;
	}
	goto label$1949;
	label$1950:;
	{
		*(double*)THIS$1 = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 8ll) = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 16ll) = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 24ll) = 0x0p+0;
	}
	label$1949:;
	label$1948:;
}

FBSTRING* _ZNK4MATH10QUATERNIONcv8FBSTRINGEv( struct $N4MATH10QUATERNIONE* THIS$1 )
{
	FBSTRING TMP$907$1;
	FBSTRING TMP$908$1;
	FBSTRING TMP$909$1;
	FBSTRING TMP$910$1;
	FBSTRING TMP$911$1;
	FBSTRING TMP$912$1;
	FBSTRING TMP$913$1;
	FBSTRING TMP$914$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$1951:;
	FBSTRING* vr$2 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 24ll) );
	FBSTRING* vr$4 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 16ll) );
	FBSTRING* vr$6 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 8ll) );
	FBSTRING* vr$8 = fb_DoubleToStr( *(double*)THIS$1 );
	__builtin_memset( &TMP$907$1, 0, 24ll );
	FBSTRING* vr$11 = fb_StrConcat( &TMP$907$1, (void*)"<math.quaternion>{ x : ", 24ll, (void*)vr$8, -1ll );
	__builtin_memset( &TMP$908$1, 0, 24ll );
	FBSTRING* vr$14 = fb_StrConcat( &TMP$908$1, (void*)vr$11, -1ll, (void*)" , y : ", 8ll );
	__builtin_memset( &TMP$909$1, 0, 24ll );
	FBSTRING* vr$17 = fb_StrConcat( &TMP$909$1, (void*)vr$14, -1ll, (void*)vr$6, -1ll );
	__builtin_memset( &TMP$910$1, 0, 24ll );
	FBSTRING* vr$20 = fb_StrConcat( &TMP$910$1, (void*)vr$17, -1ll, (void*)" , z : ", 8ll );
	__builtin_memset( &TMP$911$1, 0, 24ll );
	FBSTRING* vr$23 = fb_StrConcat( &TMP$911$1, (void*)vr$20, -1ll, (void*)vr$4, -1ll );
	__builtin_memset( &TMP$912$1, 0, 24ll );
	FBSTRING* vr$26 = fb_StrConcat( &TMP$912$1, (void*)vr$23, -1ll, (void*)" , w : ", 8ll );
	__builtin_memset( &TMP$913$1, 0, 24ll );
	FBSTRING* vr$29 = fb_StrConcat( &TMP$913$1, (void*)vr$26, -1ll, (void*)vr$2, -1ll );
	__builtin_memset( &TMP$914$1, 0, 24ll );
	FBSTRING* vr$32 = fb_StrConcat( &TMP$914$1, (void*)vr$29, -1ll, (void*)" }", 3ll );
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$32, -1ll, 0 );
	goto label$1952;
	label$1952:;
	FBSTRING* vr$35 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$35;
}

void _ZN4MATH10QUATERNIONaSERKS0_( struct $N4MATH10QUATERNIONE* THIS$1, struct $N4MATH10QUATERNIONE* Q$1 )
{
	label$1953:;
	*(double*)THIS$1 = *(double*)Q$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)Q$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)Q$1 + 16ll);
	*(double*)((uint8*)THIS$1 + 24ll) = *(double*)((uint8*)Q$1 + 24ll);
	label$1954:;
}

struct $N4MATH10QUATERNIONE _ZNK4MATH10QUATERNION16CONJUGATE__get__Ev( struct $N4MATH10QUATERNIONE* THIS$1 )
{
	double TMP$916$1;
	double TMP$917$1;
	double TMP$918$1;
	struct $N4MATH10QUATERNIONE fb$result$1;
	label$1955:;
	TMP$918$1 = -(*(double*)((uint8*)THIS$1 + 16ll));
	TMP$917$1 = -(*(double*)((uint8*)THIS$1 + 8ll));
	TMP$916$1 = -(*(double*)THIS$1);
	_ZN4MATH10QUATERNIONC1ERKdS2_S2_S2_( &fb$result$1, &TMP$916$1, &TMP$917$1, &TMP$918$1, (double*)((uint8*)THIS$1 + 24ll) );
	goto label$1956;
	label$1956:;
	return fb$result$1;
}

struct $N4MATH10QUATERNIONE _ZNK4MATH10QUATERNION14INVERSE__get__Ev( struct $N4MATH10QUATERNIONE* THIS$1 )
{
	double TMP$920$1;
	double TMP$921$1;
	double TMP$922$1;
	double TMP$923$1;
	struct $N4MATH10QUATERNIONE TMP$925$1;
	struct $N4MATH10QUATERNIONE fb$result$1;
	label$1957:;
	double H$1;
	double vr$0 = _ZNK4MATH10QUATERNION11NORM__get__Ev( THIS$1 );
	H$1 = vr$0;
	if( H$1 <= 0x0p+0 ) goto label$1959;
	TMP$923$1 = *(double*)((uint8*)THIS$1 + 24ll) / H$1;
	TMP$922$1 = -(*(double*)((uint8*)THIS$1 + 16ll)) / H$1;
	TMP$921$1 = -(*(double*)((uint8*)THIS$1 + 8ll)) / H$1;
	TMP$920$1 = -(*(double*)THIS$1) / H$1;
	_ZN4MATH10QUATERNIONC1ERKdS2_S2_S2_( &TMP$925$1, &TMP$920$1, &TMP$921$1, &TMP$922$1, &TMP$923$1 );
	goto label$1960;
	label$1959:;
	_ZN4MATH10QUATERNIONC1Ev( &TMP$925$1 );
	label$1960:;
	_ZN4MATH10QUATERNIONC1ERKS0_( &fb$result$1, (struct $N4MATH10QUATERNIONE*)&TMP$925$1 );
	goto label$1958;
	label$1958:;
	return fb$result$1;
}

double _ZNK4MATH10QUATERNION11NORM__get__Ev( struct $N4MATH10QUATERNIONE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1961:;
	fb$result$1 = __builtin_sqrt( ((((*(double*)THIS$1 * *(double*)THIS$1) + (*(double*)((uint8*)THIS$1 + 8ll) * *(double*)((uint8*)THIS$1 + 8ll))) + (*(double*)((uint8*)THIS$1 + 16ll) * *(double*)((uint8*)THIS$1 + 16ll))) + (*(double*)((uint8*)THIS$1 + 24ll) * *(double*)((uint8*)THIS$1 + 24ll))) );
	goto label$1962;
	label$1962:;
	return fb$result$1;
}

void _ZN4MATH10QUATERNION11NORM__set__ERKd( struct $N4MATH10QUATERNIONE* THIS$1, double* N$1 )
{
	label$1963:;
	if( *N$1 <= 0x0p+0 ) goto label$1966;
	{
		double H$2;
		H$2 = __builtin_sqrt( ((((*(double*)THIS$1 * *(double*)THIS$1) + (*(double*)((uint8*)THIS$1 + 8ll) * *(double*)((uint8*)THIS$1 + 8ll))) + (*(double*)((uint8*)THIS$1 + 16ll) * *(double*)((uint8*)THIS$1 + 16ll))) + (*(double*)((uint8*)THIS$1 + 24ll) * *(double*)((uint8*)THIS$1 + 24ll))) );
		if( H$2 == 0x0p+0 ) goto label$1968;
		{
			*(double*)THIS$1 = (*(double*)THIS$1 / H$2) * *N$1;
			*(double*)((uint8*)THIS$1 + 8ll) = (*(double*)((uint8*)THIS$1 + 8ll) / H$2) * *N$1;
			*(double*)((uint8*)THIS$1 + 16ll) = (*(double*)((uint8*)THIS$1 + 16ll) / H$2) * *N$1;
			*(double*)((uint8*)THIS$1 + 24ll) = (*(double*)((uint8*)THIS$1 + 24ll) / H$2) * *N$1;
		}
		label$1968:;
		label$1967:;
	}
	goto label$1965;
	label$1966:;
	{
		*(double*)THIS$1 = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 8ll) = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 16ll) = 0x0p+0;
		*(double*)((uint8*)THIS$1 + 24ll) = 0x0p+0;
	}
	label$1965:;
	label$1964:;
}

struct $N4MATH10QUATERNIONE _ZNK4MATH10QUATERNION13VERSOR__get__Ev( struct $N4MATH10QUATERNIONE* THIS$1 )
{
	double TMP$927$1;
	double TMP$928$1;
	double TMP$929$1;
	double TMP$930$1;
	struct $N4MATH10QUATERNIONE TMP$932$1;
	struct $N4MATH10QUATERNIONE fb$result$1;
	label$1969:;
	double H$1;
	double vr$0 = _ZNK4MATH10QUATERNION11NORM__get__Ev( THIS$1 );
	H$1 = vr$0;
	if( H$1 == 0x0p+0 ) goto label$1971;
	TMP$930$1 = *(double*)((uint8*)THIS$1 + 24ll) / H$1;
	TMP$929$1 = *(double*)((uint8*)THIS$1 + 16ll) / H$1;
	TMP$928$1 = *(double*)((uint8*)THIS$1 + 8ll) / H$1;
	TMP$927$1 = *(double*)THIS$1 / H$1;
	_ZN4MATH10QUATERNIONC1ERKdS2_S2_S2_( &TMP$932$1, &TMP$927$1, &TMP$928$1, &TMP$929$1, &TMP$930$1 );
	goto label$1972;
	label$1971:;
	_ZN4MATH10QUATERNIONC1Ev( &TMP$932$1 );
	label$1972:;
	_ZN4MATH10QUATERNIONC1ERKS0_( &fb$result$1, (struct $N4MATH10QUATERNIONE*)&TMP$932$1 );
	goto label$1970;
	label$1970:;
	return fb$result$1;
}

struct $N4MATH4VEC2E _ZNK4MATH10QUATERNION9XY__get__Ev( struct $N4MATH10QUATERNIONE* THIS$1 )
{
	struct $N4MATH4VEC2E fb$result$1;
	label$1973:;
	_ZN4MATH4VEC2C1ERKdS2_( &fb$result$1, (double*)THIS$1, (double*)((uint8*)THIS$1 + 8ll) );
	goto label$1974;
	label$1974:;
	return fb$result$1;
}

void _ZN4MATH10QUATERNION9XY__set__ERKNS_4VEC2E( struct $N4MATH10QUATERNIONE* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	label$1975:;
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	label$1976:;
}

void _ZN4MATH10QUATERNION9XY__set__ERKNS_4PVECE( struct $N4MATH10QUATERNIONE* THIS$1, struct $N4MATH4PVECE* V$1 )
{
	label$1977:;
	double vr$0 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
	*(double*)THIS$1 = vr$0;
	double vr$2 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$2;
	label$1978:;
}

struct $N4MATH4VEC3E _ZNK4MATH10QUATERNION10XYZ__get__Ev( struct $N4MATH10QUATERNIONE* THIS$1 )
{
	struct $N4MATH4VEC3E fb$result$1;
	label$1979:;
	_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, (double*)THIS$1, (double*)((uint8*)THIS$1 + 8ll), (double*)((uint8*)THIS$1 + 16ll) );
	goto label$1980;
	label$1980:;
	return fb$result$1;
}

void _ZN4MATH10QUATERNION10XYZ__set__ERKNS_4VEC3E( struct $N4MATH10QUATERNIONE* THIS$1, struct $N4MATH4VEC3E* V$1 )
{
	label$1981:;
	*(double*)THIS$1 = *(double*)V$1;
	*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)V$1 + 16ll);
	label$1982:;
}

void _ZN4MATH10QUATERNION10XYZ__set__ERKNS_4CVECE( struct $N4MATH10QUATERNIONE* THIS$1, struct $N4MATH4CVECE* V$1 )
{
	label$1983:;
	double vr$0 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
	*(double*)THIS$1 = vr$0;
	double vr$2 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
	*(double*)((uint8*)THIS$1 + 8ll) = vr$2;
	*(double*)((uint8*)THIS$1 + 16ll) = *(double*)V$1;
	label$1984:;
}

boolean _ZNK4MATH10QUATERNION6ISUNITEv( struct $N4MATH10QUATERNIONE* THIS$1 )
{
	boolean TMP$935$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1985:;
	double vr$1 = _ZNK4MATH10QUATERNION11NORM__get__Ev( THIS$1 );
	if( vr$1 != 0x1.p+0 ) goto label$1987;
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

boolean _ZNK4MATH10QUATERNION6ISUNITERKd( struct $N4MATH10QUATERNIONE* THIS$1, double* T$1 )
{
	boolean TMP$936$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1989:;
	double vr$1 = _ZNK4MATH10QUATERNION11NORM__get__Ev( THIS$1 );
	if( __builtin_fabs( (-vr$1 + 0x1.p+0) ) > __builtin_fabs( *T$1 ) ) goto label$1991;
	TMP$936$1 = (boolean)1ll;
	goto label$1992;
	label$1991:;
	TMP$936$1 = (boolean)0ll;
	label$1992:;
	fb$result$1 = TMP$936$1;
	goto label$1990;
	label$1990:;
	return fb$result$1;
}

void _ZN4MATH10QUATERNION9NORMALISEEv( struct $N4MATH10QUATERNIONE* THIS$1 )
{
	label$1993:;
	double H$1;
	double vr$0 = _ZNK4MATH10QUATERNION11NORM__get__Ev( (struct $N4MATH10QUATERNIONE*)THIS$1 );
	H$1 = vr$0;
	if( ((int64)-(H$1 > 0x0p+0) & (int64)-(H$1 != 0x1.p+0)) == 0ll ) goto label$1996;
	{
		*(double*)THIS$1 = *(double*)THIS$1 / H$1;
		*(double*)((uint8*)THIS$1 + 8ll) = *(double*)((uint8*)THIS$1 + 8ll) / H$1;
		*(double*)((uint8*)THIS$1 + 16ll) = *(double*)((uint8*)THIS$1 + 16ll) / H$1;
		*(double*)((uint8*)THIS$1 + 24ll) = *(double*)((uint8*)THIS$1 + 24ll) / H$1;
	}
	label$1996:;
	label$1995:;
	label$1994:;
}

FBSTRING* _ZNK4MATH10QUATERNION6TOJSONERKb( struct $N4MATH10QUATERNIONE* THIS$1, boolean* A$1 )
{
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
	FBSTRING TMP$953$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$1997:;
	if( *A$1 == (boolean)0ll ) goto label$1999;
	FBSTRING* vr$3 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 24ll) );
	FBSTRING* vr$5 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 16ll) );
	FBSTRING* vr$7 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 8ll) );
	FBSTRING* vr$9 = fb_DoubleToStr( *(double*)THIS$1 );
	__builtin_memset( &TMP$938$1, 0, 24ll );
	FBSTRING* vr$12 = fb_StrConcat( &TMP$938$1, (void*)"[", 2ll, (void*)vr$9, -1ll );
	__builtin_memset( &TMP$939$1, 0, 24ll );
	FBSTRING* vr$15 = fb_StrConcat( &TMP$939$1, (void*)vr$12, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$940$1, 0, 24ll );
	FBSTRING* vr$18 = fb_StrConcat( &TMP$940$1, (void*)vr$15, -1ll, (void*)vr$7, -1ll );
	__builtin_memset( &TMP$941$1, 0, 24ll );
	FBSTRING* vr$21 = fb_StrConcat( &TMP$941$1, (void*)vr$18, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$942$1, 0, 24ll );
	FBSTRING* vr$24 = fb_StrConcat( &TMP$942$1, (void*)vr$21, -1ll, (void*)vr$5, -1ll );
	__builtin_memset( &TMP$943$1, 0, 24ll );
	FBSTRING* vr$27 = fb_StrConcat( &TMP$943$1, (void*)vr$24, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$944$1, 0, 24ll );
	FBSTRING* vr$30 = fb_StrConcat( &TMP$944$1, (void*)vr$27, -1ll, (void*)vr$3, -1ll );
	__builtin_memset( &TMP$945$1, 0, 24ll );
	FBSTRING* vr$33 = fb_StrConcat( &TMP$945$1, (void*)vr$30, -1ll, (void*)"]", 2ll );
	fb_StrInit( (void*)&TMP$937$1, -1ll, (void*)vr$33, -1ll, 0 );
	goto label$2000;
	label$1999:;
	FBSTRING* vr$36 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 24ll) );
	FBSTRING* vr$38 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 16ll) );
	FBSTRING* vr$40 = fb_DoubleToStr( *(double*)((uint8*)THIS$1 + 8ll) );
	FBSTRING* vr$42 = fb_DoubleToStr( *(double*)THIS$1 );
	__builtin_memset( &TMP$946$1, 0, 24ll );
	FBSTRING* vr$45 = fb_StrConcat( &TMP$946$1, (void*)"{\x22x\x22:", 6ll, (void*)vr$42, -1ll );
	__builtin_memset( &TMP$947$1, 0, 24ll );
	FBSTRING* vr$48 = fb_StrConcat( &TMP$947$1, (void*)vr$45, -1ll, (void*)",\x22y\x22:", 6ll );
	__builtin_memset( &TMP$948$1, 0, 24ll );
	FBSTRING* vr$51 = fb_StrConcat( &TMP$948$1, (void*)vr$48, -1ll, (void*)vr$40, -1ll );
	__builtin_memset( &TMP$949$1, 0, 24ll );
	FBSTRING* vr$54 = fb_StrConcat( &TMP$949$1, (void*)vr$51, -1ll, (void*)",\x22z\x22:", 6ll );
	__builtin_memset( &TMP$950$1, 0, 24ll );
	FBSTRING* vr$57 = fb_StrConcat( &TMP$950$1, (void*)vr$54, -1ll, (void*)vr$38, -1ll );
	__builtin_memset( &TMP$951$1, 0, 24ll );
	FBSTRING* vr$60 = fb_StrConcat( &TMP$951$1, (void*)vr$57, -1ll, (void*)",\x22w\x22:", 6ll );
	__builtin_memset( &TMP$952$1, 0, 24ll );
	FBSTRING* vr$63 = fb_StrConcat( &TMP$952$1, (void*)vr$60, -1ll, (void*)vr$36, -1ll );
	__builtin_memset( &TMP$953$1, 0, 24ll );
	FBSTRING* vr$66 = fb_StrConcat( &TMP$953$1, (void*)vr$63, -1ll, (void*)"}", 2ll );
	fb_StrInit( (void*)&TMP$937$1, -1ll, (void*)vr$66, -1ll, 0 );
	label$2000:;
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)&TMP$937$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&TMP$937$1 );
	goto label$1998;
	label$1998:;
	FBSTRING* vr$72 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$72;
}

struct $N4MATH10QUATERNIONE _ZN4MATHmlERKNS_10QUATERNIONERKd( struct $N4MATH10QUATERNIONE* Q$1, double* N$1 )
{
	double TMP$955$1;
	double TMP$956$1;
	double TMP$957$1;
	double TMP$958$1;
	struct $N4MATH10QUATERNIONE fb$result$1;
	label$2001:;
	TMP$958$1 = *(double*)((uint8*)Q$1 + 24ll) * *N$1;
	TMP$957$1 = *(double*)((uint8*)Q$1 + 16ll) * *N$1;
	TMP$956$1 = *(double*)((uint8*)Q$1 + 8ll) * *N$1;
	TMP$955$1 = *(double*)Q$1 * *N$1;
	_ZN4MATH10QUATERNIONC1ERKdS2_S2_S2_( &fb$result$1, &TMP$955$1, &TMP$956$1, &TMP$957$1, &TMP$958$1 );
	goto label$2002;
	label$2002:;
	return fb$result$1;
}

struct $N4MATH10QUATERNIONE _ZN4MATHmlERKdRKNS_10QUATERNIONE( double* N$1, struct $N4MATH10QUATERNIONE* Q$1 )
{
	double TMP$960$1;
	double TMP$961$1;
	double TMP$962$1;
	double TMP$963$1;
	struct $N4MATH10QUATERNIONE fb$result$1;
	label$2003:;
	TMP$963$1 = *N$1 * *(double*)((uint8*)Q$1 + 24ll);
	TMP$962$1 = *N$1 * *(double*)((uint8*)Q$1 + 16ll);
	TMP$961$1 = *N$1 * *(double*)((uint8*)Q$1 + 8ll);
	TMP$960$1 = *N$1 * *(double*)Q$1;
	_ZN4MATH10QUATERNIONC1ERKdS2_S2_S2_( &fb$result$1, &TMP$960$1, &TMP$961$1, &TMP$962$1, &TMP$963$1 );
	goto label$2004;
	label$2004:;
	return fb$result$1;
}

struct $N4MATH10QUATERNIONE _ZN4MATHmlERKNS_10QUATERNIONES2_( struct $N4MATH10QUATERNIONE* Q1$1, struct $N4MATH10QUATERNIONE* Q2$1 )
{
	double TMP$965$1;
	double TMP$966$1;
	double TMP$967$1;
	double TMP$968$1;
	struct $N4MATH10QUATERNIONE fb$result$1;
	label$2005:;
	TMP$968$1 = (((*(double*)((uint8*)Q1$1 + 24ll) * *(double*)((uint8*)Q2$1 + 24ll)) - (*(double*)Q1$1 * *(double*)Q2$1)) - (*(double*)((uint8*)Q1$1 + 8ll) * *(double*)((uint8*)Q2$1 + 8ll))) - (*(double*)((uint8*)Q1$1 + 16ll) * *(double*)((uint8*)Q2$1 + 16ll));
	TMP$967$1 = (((*(double*)((uint8*)Q1$1 + 24ll) * *(double*)((uint8*)Q2$1 + 16ll)) + (*(double*)Q1$1 * *(double*)((uint8*)Q2$1 + 8ll))) - (*(double*)((uint8*)Q1$1 + 8ll) * *(double*)Q2$1)) + (*(double*)((uint8*)Q1$1 + 16ll) * *(double*)((uint8*)Q2$1 + 24ll));
	TMP$966$1 = (((*(double*)((uint8*)Q1$1 + 24ll) * *(double*)((uint8*)Q2$1 + 8ll)) - (*(double*)Q1$1 * *(double*)((uint8*)Q2$1 + 16ll))) + (*(double*)((uint8*)Q1$1 + 8ll) * *(double*)((uint8*)Q2$1 + 24ll))) + (*(double*)((uint8*)Q1$1 + 16ll) * *(double*)Q2$1);
	TMP$965$1 = (((*(double*)((uint8*)Q1$1 + 24ll) * *(double*)Q2$1) + (*(double*)Q1$1 * *(double*)((uint8*)Q2$1 + 24ll))) + (*(double*)((uint8*)Q1$1 + 8ll) * *(double*)((uint8*)Q2$1 + 16ll))) - (*(double*)((uint8*)Q1$1 + 16ll) * *(double*)((uint8*)Q2$1 + 8ll));
	_ZN4MATH10QUATERNIONC1ERKdS2_S2_S2_( &fb$result$1, &TMP$965$1, &TMP$966$1, &TMP$967$1, &TMP$968$1 );
	goto label$2006;
	label$2006:;
	return fb$result$1;
}

boolean _ZN4MATHeqERKNS_10QUATERNIONES2_( struct $N4MATH10QUATERNIONE* Q1$1, struct $N4MATH10QUATERNIONE* Q2$1 )
{
	boolean TMP$969$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2007:;
	if( ((((int64)-(*(double*)Q1$1 == *(double*)Q2$1) & (int64)-(*(double*)((uint8*)Q1$1 + 8ll) == *(double*)((uint8*)Q2$1 + 8ll))) & (int64)-(*(double*)((uint8*)Q1$1 + 16ll) == *(double*)((uint8*)Q2$1 + 16ll))) & (int64)-(*(double*)((uint8*)Q1$1 + 24ll) == *(double*)((uint8*)Q2$1 + 24ll))) == 0ll ) goto label$2009;
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

boolean _ZN4MATHneERKNS_10QUATERNIONES2_( struct $N4MATH10QUATERNIONE* Q1$1, struct $N4MATH10QUATERNIONE* Q2$1 )
{
	boolean TMP$970$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2011:;
	if( ((((int64)-(*(double*)Q1$1 != *(double*)Q2$1) | (int64)-(*(double*)((uint8*)Q1$1 + 8ll) != *(double*)((uint8*)Q2$1 + 8ll))) | (int64)-(*(double*)((uint8*)Q1$1 + 16ll) != *(double*)((uint8*)Q2$1 + 16ll))) | (int64)-(*(double*)((uint8*)Q1$1 + 24ll) != *(double*)((uint8*)Q2$1 + 24ll))) == 0ll ) goto label$2013;
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

boolean _ZN4MATH3CMPERKNS_10QUATERNIONES2_RKd( struct $N4MATH10QUATERNIONE* Q1$1, struct $N4MATH10QUATERNIONE* Q2$1, double* S$1 )
{
	boolean TMP$971$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2015:;
	double T$1;
	T$1 = __builtin_fabs( *S$1 );
	if( ((((int64)-(__builtin_fabs( (*(double*)Q1$1 - *(double*)Q2$1) ) <= T$1) & (int64)-(__builtin_fabs( (*(double*)((uint8*)Q1$1 + 8ll) - *(double*)((uint8*)Q2$1 + 8ll)) ) <= T$1)) & (int64)-(__builtin_fabs( (*(double*)((uint8*)Q1$1 + 16ll) - *(double*)((uint8*)Q2$1 + 16ll)) ) <= T$1)) & (int64)-(__builtin_fabs( (*(double*)((uint8*)Q1$1 + 24ll) - *(double*)((uint8*)Q2$1 + 24ll)) ) <= T$1)) == 0ll ) goto label$2017;
	TMP$971$1 = (boolean)1ll;
	goto label$2018;
	label$2017:;
	TMP$971$1 = (boolean)0ll;
	label$2018:;
	fb$result$1 = TMP$971$1;
	goto label$2016;
	label$2016:;
	return fb$result$1;
}

void _ZN4MATH10BASEMATRIXD1Ev( struct $N4MATH10BASEMATRIXE* THIS$1 )
{
	label$2019:;
	if( *(double**)THIS$1 == (double*)0ull ) goto label$2021;
	free( *(void**)THIS$1 );
	label$2021:;
	label$2020:;
}

double* _ZNK4MATH10BASEMATRIX11DATA__get__Ev( struct $N4MATH10BASEMATRIXE* THIS$1 )
{
	double* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$2022:;
	fb$result$1 = *(double**)THIS$1;
	goto label$2023;
	label$2023:;
	return fb$result$1;
}

void _ZN4MATH4MAT2C1Ev( struct $N4MATH4MAT2E* THIS$1 )
{
	double* TMP$972$1;
	label$2026:;
	__builtin_memset( (struct $N4MATH10BASEMATRIXE*)THIS$1, 0, 8ll );
	void* vr$2 = malloc( 32ull );
	TMP$972$1 = (double*)vr$2;
	if( TMP$972$1 == (double*)0ull ) goto label$2028;
	__builtin_memset( TMP$972$1, 0, 32ull );
	label$2028:;
	*(double**)THIS$1 = TMP$972$1;
	*(*(double**)THIS$1) = 0x1.p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 24ll) = 0x1.p+0;
	label$2027:;
}

void _ZN4MATH4MAT2C1ERKS0_( struct $N4MATH4MAT2E* THIS$1, struct $N4MATH4MAT2E* M$1 )
{
	double* TMP$973$1;
	label$2029:;
	__builtin_memset( (struct $N4MATH10BASEMATRIXE*)THIS$1, 0, 8ll );
	void* vr$2 = malloc( 32ull );
	TMP$973$1 = (double*)vr$2;
	if( TMP$973$1 == (double*)0ull ) goto label$2031;
	__builtin_memset( TMP$973$1, 0, 32ull );
	label$2031:;
	*(double**)THIS$1 = TMP$973$1;
	*(*(double**)THIS$1) = *(double*)*(double**)M$1;
	*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)*(double**)M$1 + 8ll);
	*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)*(double**)M$1 + 16ll);
	*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)*(double**)M$1 + 24ll);
	label$2030:;
}

void _ZN4MATH4MAT2pLERKS0_( struct $N4MATH4MAT2E* THIS$1, struct $N4MATH4MAT2E* M$1 )
{
	label$2032:;
	*(*(double**)THIS$1) = *(*(double**)THIS$1) + *(double*)*(double**)M$1;
	*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)*(double**)THIS$1 + 8ll) + *(double*)((uint8*)*(double**)M$1 + 8ll);
	*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)*(double**)THIS$1 + 16ll) + *(double*)((uint8*)*(double**)M$1 + 16ll);
	*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)*(double**)THIS$1 + 24ll) + *(double*)((uint8*)*(double**)M$1 + 24ll);
	label$2033:;
}

void _ZN4MATH4MAT2mIERKS0_( struct $N4MATH4MAT2E* THIS$1, struct $N4MATH4MAT2E* M$1 )
{
	label$2034:;
	*(*(double**)THIS$1) = *(*(double**)THIS$1) - *(double*)*(double**)M$1;
	*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)*(double**)THIS$1 + 8ll) - *(double*)((uint8*)*(double**)M$1 + 8ll);
	*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)*(double**)THIS$1 + 16ll) - *(double*)((uint8*)*(double**)M$1 + 16ll);
	*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)*(double**)THIS$1 + 24ll) - *(double*)((uint8*)*(double**)M$1 + 24ll);
	label$2035:;
}

void _ZN4MATH4MAT2mLERKd( struct $N4MATH4MAT2E* THIS$1, double* N$1 )
{
	label$2036:;
	*(*(double**)THIS$1) = *(*(double**)THIS$1) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)*(double**)THIS$1 + 8ll) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)*(double**)THIS$1 + 16ll) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)*(double**)THIS$1 + 24ll) * *N$1;
	label$2037:;
}

void _ZN4MATH4MAT2mLERKS0_( struct $N4MATH4MAT2E* THIS$1, struct $N4MATH4MAT2E* M$1 )
{
	label$2038:;
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
	label$2039:;
}

void _ZN4MATH4MAT2dVERKd( struct $N4MATH4MAT2E* THIS$1, double* N$1 )
{
	label$2040:;
	if( *N$1 == 0x0p+0 ) goto label$2043;
	{
		*(*(double**)THIS$1) = *(*(double**)THIS$1) / *N$1;
		*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)*(double**)THIS$1 + 8ll) / *N$1;
		*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)*(double**)THIS$1 + 16ll) / *N$1;
		*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)*(double**)THIS$1 + 24ll) / *N$1;
	}
	goto label$2042;
	label$2043:;
	{
		*(*(double**)THIS$1) = 0x1.p+0;
		*(double*)((uint8*)*(double**)THIS$1 + 8ll) = 0x0p+0;
		*(double*)((uint8*)*(double**)THIS$1 + 16ll) = 0x0p+0;
		*(double*)((uint8*)*(double**)THIS$1 + 24ll) = 0x1.p+0;
	}
	label$2042:;
	label$2041:;
}

FBSTRING* _ZNK4MATH4MAT2cv8FBSTRINGEv( struct $N4MATH4MAT2E* THIS$1 )
{
	FBSTRING TMP$978$1;
	FBSTRING TMP$979$1;
	FBSTRING TMP$980$1;
	FBSTRING TMP$981$1;
	FBSTRING TMP$982$1;
	FBSTRING TMP$983$1;
	FBSTRING TMP$984$1;
	FBSTRING TMP$985$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$2044:;
	FBSTRING* vr$3 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 24ll) );
	FBSTRING* vr$6 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 16ll) );
	FBSTRING* vr$9 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 8ll) );
	FBSTRING* vr$12 = fb_DoubleToStr( *(double*)*(double**)THIS$1 );
	__builtin_memset( &TMP$978$1, 0, 24ll );
	FBSTRING* vr$15 = fb_StrConcat( &TMP$978$1, (void*)"<math.mat2>{\x0A    ", 18ll, (void*)vr$12, -1ll );
	__builtin_memset( &TMP$979$1, 0, 24ll );
	FBSTRING* vr$18 = fb_StrConcat( &TMP$979$1, (void*)vr$15, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$980$1, 0, 24ll );
	FBSTRING* vr$21 = fb_StrConcat( &TMP$980$1, (void*)vr$18, -1ll, (void*)vr$9, -1ll );
	__builtin_memset( &TMP$981$1, 0, 24ll );
	FBSTRING* vr$24 = fb_StrConcat( &TMP$981$1, (void*)vr$21, -1ll, (void*)",\x0A    ", 7ll );
	__builtin_memset( &TMP$982$1, 0, 24ll );
	FBSTRING* vr$27 = fb_StrConcat( &TMP$982$1, (void*)vr$24, -1ll, (void*)vr$6, -1ll );
	__builtin_memset( &TMP$983$1, 0, 24ll );
	FBSTRING* vr$30 = fb_StrConcat( &TMP$983$1, (void*)vr$27, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$984$1, 0, 24ll );
	FBSTRING* vr$33 = fb_StrConcat( &TMP$984$1, (void*)vr$30, -1ll, (void*)vr$3, -1ll );
	__builtin_memset( &TMP$985$1, 0, 24ll );
	FBSTRING* vr$36 = fb_StrConcat( &TMP$985$1, (void*)vr$33, -1ll, (void*)"\x0A}", 3ll );
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$36, -1ll, 0 );
	goto label$2045;
	label$2045:;
	FBSTRING* vr$39 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$39;
}

void _ZN4MATH4MAT2aSERKS0_( struct $N4MATH4MAT2E* THIS$1, struct $N4MATH4MAT2E* M$1 )
{
	label$2046:;
	if( THIS$1 == M$1 ) goto label$2049;
	{
		*(*(double**)THIS$1) = *(double*)*(double**)M$1;
		*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)*(double**)M$1 + 8ll);
		*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)*(double**)M$1 + 16ll);
		*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)*(double**)M$1 + 24ll);
	}
	label$2049:;
	label$2048:;
	label$2047:;
}

struct $N4MATH4MAT2E* _ZN4MATH4MAT212FROMROTATIONERKd( struct $N4MATH4MAT2E* tmp$986$1, double* T$1 )
{
	label$2050:;
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
	_ZN4MATH4MAT2C1ERKS0_( tmp$986$1, (struct $N4MATH4MAT2E*)&R$1 );
	_ZN4MATH4MAT2D1Ev( &R$1 );
	goto label$2051;
	_ZN4MATH4MAT2D1Ev( &R$1 );
	label$2051:;
	return tmp$986$1;
}

struct $N4MATH4MAT2E* _ZN4MATH4MAT29FROMSCALEERKd( struct $N4MATH4MAT2E* tmp$987$1, double* S$1 )
{
	label$2052:;
	struct $N4MATH4MAT2E R$1;
	_ZN4MATH4MAT2C1Ev( &R$1 );
	*(*(double**)&R$1) = *S$1;
	*(double*)((uint8*)*(double**)&R$1 + 24ll) = *S$1;
	_ZN4MATH4MAT2C1ERKS0_( tmp$987$1, (struct $N4MATH4MAT2E*)&R$1 );
	_ZN4MATH4MAT2D1Ev( &R$1 );
	goto label$2053;
	_ZN4MATH4MAT2D1Ev( &R$1 );
	label$2053:;
	return tmp$987$1;
}

struct $N4MATH4MAT2E* _ZN4MATH4MAT29FROMSCALEERKdS2_( struct $N4MATH4MAT2E* tmp$988$1, double* SX$1, double* SY$1 )
{
	label$2054:;
	struct $N4MATH4MAT2E R$1;
	_ZN4MATH4MAT2C1Ev( &R$1 );
	*(*(double**)&R$1) = *SX$1;
	*(double*)((uint8*)*(double**)&R$1 + 24ll) = *SY$1;
	_ZN4MATH4MAT2C1ERKS0_( tmp$988$1, (struct $N4MATH4MAT2E*)&R$1 );
	_ZN4MATH4MAT2D1Ev( &R$1 );
	goto label$2055;
	_ZN4MATH4MAT2D1Ev( &R$1 );
	label$2055:;
	return tmp$988$1;
}

double _ZNK4MATH4MAT23GETERKu7INTEGERS3_( struct $N4MATH4MAT2E* THIS$1, int64* X$1, int64* Y$1 )
{
	double TMP$989$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$2056:;
	if( ((((int64)-(*X$1 >= 0ll) & (int64)-(*X$1 < 2ll)) & (int64)-(*Y$1 >= 0ll)) & (int64)-(*Y$1 < 2ll)) == 0ll ) goto label$2058;
	TMP$989$1 = *(double*)((uint8*)*(double**)THIS$1 + ((*X$1 + (*Y$1 << (1ll & 63ll))) << (3ll & 63ll)));
	goto label$2059;
	label$2058:;
	TMP$989$1 = 0x0p+0;
	label$2059:;
	fb$result$1 = TMP$989$1;
	goto label$2057;
	label$2057:;
	return fb$result$1;
}

struct $N4MATH4VEC2E _ZNK4MATH4MAT29GETCOLUMNERKu7INTEGER( struct $N4MATH4MAT2E* THIS$1, int64* X$1 )
{
	struct $N4MATH4VEC2E fb$result$1;
	label$2060:;
	{
		int64 TMP$990$2;
		TMP$990$2 = *X$1;
		if( TMP$990$2 != 0ll ) goto label$2063;
		label$2064:;
		{
			_ZN4MATH4VEC2C1ERKdS2_( &fb$result$1, *(double**)THIS$1, (double*)((uint8*)*(double**)THIS$1 + 16ll) );
			goto label$2061;
		}
		goto label$2062;
		label$2063:;
		if( TMP$990$2 != 1ll ) goto label$2065;
		label$2066:;
		{
			_ZN4MATH4VEC2C1ERKdS2_( &fb$result$1, (double*)((uint8*)*(double**)THIS$1 + 8ll), (double*)((uint8*)*(double**)THIS$1 + 24ll) );
			goto label$2061;
		}
		goto label$2062;
		label$2065:;
		{
			_ZN4MATH4VEC2C1Ev( &fb$result$1 );
			goto label$2061;
		}
		label$2067:;
		label$2062:;
	}
	label$2061:;
	return fb$result$1;
}

struct $N4MATH4VEC2E _ZNK4MATH4MAT26GETROWERKu7INTEGER( struct $N4MATH4MAT2E* THIS$1, int64* Y$1 )
{
	struct $N4MATH4VEC2E fb$result$1;
	label$2068:;
	{
		int64 TMP$994$2;
		TMP$994$2 = *Y$1;
		if( TMP$994$2 != 0ll ) goto label$2071;
		label$2072:;
		{
			_ZN4MATH4VEC2C1ERKdS2_( &fb$result$1, *(double**)THIS$1, (double*)((uint8*)*(double**)THIS$1 + 8ll) );
			goto label$2069;
		}
		goto label$2070;
		label$2071:;
		if( TMP$994$2 != 1ll ) goto label$2073;
		label$2074:;
		{
			_ZN4MATH4VEC2C1ERKdS2_( &fb$result$1, (double*)((uint8*)*(double**)THIS$1 + 16ll), (double*)((uint8*)*(double**)THIS$1 + 24ll) );
			goto label$2069;
		}
		goto label$2070;
		label$2073:;
		{
			_ZN4MATH4VEC2C1Ev( &fb$result$1 );
			goto label$2069;
		}
		label$2075:;
		label$2070:;
	}
	label$2069:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT23SETERKu7INTEGERS3_RKd( struct $N4MATH4MAT2E* THIS$1, int64* X$1, int64* Y$1, double* N$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2076:;
	if( ((((int64)-(*X$1 >= 0ll) & (int64)-(*X$1 < 2ll)) & (int64)-(*Y$1 >= 0ll)) & (int64)-(*Y$1 < 2ll)) == 0ll ) goto label$2079;
	{
		*(double*)((uint8*)*(double**)THIS$1 + ((*X$1 + (*Y$1 << (1ll & 63ll))) << (3ll & 63ll))) = *N$1;
		fb$result$1 = (boolean)1ll;
		goto label$2077;
	}
	label$2079:;
	label$2078:;
	fb$result$1 = (boolean)0ll;
	goto label$2077;
	label$2077:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT29SETCOLUMNERKu7INTEGERRKdS5_( struct $N4MATH4MAT2E* THIS$1, int64* X$1, double* N1$1, double* N2$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2080:;
	{
		int64 TMP$998$2;
		TMP$998$2 = *X$1;
		if( TMP$998$2 != 0ll ) goto label$2083;
		label$2084:;
		{
			*(*(double**)THIS$1) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *N2$1;
		}
		goto label$2082;
		label$2083:;
		if( TMP$998$2 != 1ll ) goto label$2085;
		label$2086:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *N2$1;
		}
		goto label$2082;
		label$2085:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2081;
		}
		label$2087:;
		label$2082:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2081;
	label$2081:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT29SETCOLUMNERKu7INTEGERRKNS_4VEC2E( struct $N4MATH4MAT2E* THIS$1, int64* X$1, struct $N4MATH4VEC2E* V$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2088:;
	{
		int64 TMP$999$2;
		TMP$999$2 = *X$1;
		if( TMP$999$2 != 0ll ) goto label$2091;
		label$2092:;
		{
			*(*(double**)THIS$1) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)V$1 + 8ll);
		}
		goto label$2090;
		label$2091:;
		if( TMP$999$2 != 1ll ) goto label$2093;
		label$2094:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)V$1 + 8ll);
		}
		goto label$2090;
		label$2093:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2089;
		}
		label$2095:;
		label$2090:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2089;
	label$2089:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT29SETCOLUMNERKu7INTEGERRKNS_4PVECE( struct $N4MATH4MAT2E* THIS$1, int64* X$1, struct $N4MATH4PVECE* V$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2096:;
	{
		int64 TMP$1000$2;
		TMP$1000$2 = *X$1;
		if( TMP$1000$2 != 0ll ) goto label$2099;
		label$2100:;
		{
			double vr$2 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(*(double**)THIS$1) = vr$2;
			double vr$5 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = vr$5;
		}
		goto label$2098;
		label$2099:;
		if( TMP$1000$2 != 1ll ) goto label$2101;
		label$2102:;
		{
			double vr$8 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = vr$8;
			double vr$11 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = vr$11;
		}
		goto label$2098;
		label$2101:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2097;
		}
		label$2103:;
		label$2098:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2097;
	label$2097:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT26SETROWERKu7INTEGERRKdS5_( struct $N4MATH4MAT2E* THIS$1, int64* Y$1, double* N1$1, double* N2$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2104:;
	{
		int64 TMP$1001$2;
		TMP$1001$2 = *Y$1;
		if( TMP$1001$2 != 0ll ) goto label$2107;
		label$2108:;
		{
			*(*(double**)THIS$1) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *N2$1;
		}
		goto label$2106;
		label$2107:;
		if( TMP$1001$2 != 1ll ) goto label$2109;
		label$2110:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *N2$1;
		}
		goto label$2106;
		label$2109:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2105;
		}
		label$2111:;
		label$2106:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2105;
	label$2105:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT26SETROWERKu7INTEGERRKNS_4VEC2E( struct $N4MATH4MAT2E* THIS$1, int64* Y$1, struct $N4MATH4VEC2E* V$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2112:;
	{
		int64 TMP$1002$2;
		TMP$1002$2 = *Y$1;
		if( TMP$1002$2 != 0ll ) goto label$2115;
		label$2116:;
		{
			*(*(double**)THIS$1) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
		}
		goto label$2114;
		label$2115:;
		if( TMP$1002$2 != 1ll ) goto label$2117;
		label$2118:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)V$1 + 8ll);
		}
		goto label$2114;
		label$2117:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2113;
		}
		label$2119:;
		label$2114:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2113;
	label$2113:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT26SETROWERKu7INTEGERRKNS_4PVECE( struct $N4MATH4MAT2E* THIS$1, int64* Y$1, struct $N4MATH4PVECE* V$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2120:;
	{
		int64 TMP$1003$2;
		TMP$1003$2 = *Y$1;
		if( TMP$1003$2 != 0ll ) goto label$2123;
		label$2124:;
		{
			double vr$2 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(*(double**)THIS$1) = vr$2;
			double vr$5 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = vr$5;
		}
		goto label$2122;
		label$2123:;
		if( TMP$1003$2 != 1ll ) goto label$2125;
		label$2126:;
		{
			double vr$8 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = vr$8;
			double vr$11 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = vr$11;
		}
		goto label$2122;
		label$2125:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2121;
		}
		label$2127:;
		label$2122:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2121;
	label$2121:;
	return fb$result$1;
}

FBSTRING* _ZNK4MATH4MAT26TOJSONERKb( struct $N4MATH4MAT2E* THIS$1, boolean* C$1 )
{
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
	FBSTRING TMP$1020$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$2128:;
	if( *C$1 == (boolean)0ll ) goto label$2130;
	FBSTRING* vr$4 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 24ll) );
	FBSTRING* vr$7 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 8ll) );
	FBSTRING* vr$10 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 16ll) );
	FBSTRING* vr$13 = fb_DoubleToStr( *(double*)*(double**)THIS$1 );
	__builtin_memset( &TMP$1005$1, 0, 24ll );
	FBSTRING* vr$16 = fb_StrConcat( &TMP$1005$1, (void*)"[", 2ll, (void*)vr$13, -1ll );
	__builtin_memset( &TMP$1006$1, 0, 24ll );
	FBSTRING* vr$19 = fb_StrConcat( &TMP$1006$1, (void*)vr$16, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1007$1, 0, 24ll );
	FBSTRING* vr$22 = fb_StrConcat( &TMP$1007$1, (void*)vr$19, -1ll, (void*)vr$10, -1ll );
	__builtin_memset( &TMP$1008$1, 0, 24ll );
	FBSTRING* vr$25 = fb_StrConcat( &TMP$1008$1, (void*)vr$22, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1009$1, 0, 24ll );
	FBSTRING* vr$28 = fb_StrConcat( &TMP$1009$1, (void*)vr$25, -1ll, (void*)vr$7, -1ll );
	__builtin_memset( &TMP$1010$1, 0, 24ll );
	FBSTRING* vr$31 = fb_StrConcat( &TMP$1010$1, (void*)vr$28, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1011$1, 0, 24ll );
	FBSTRING* vr$34 = fb_StrConcat( &TMP$1011$1, (void*)vr$31, -1ll, (void*)vr$4, -1ll );
	__builtin_memset( &TMP$1012$1, 0, 24ll );
	FBSTRING* vr$37 = fb_StrConcat( &TMP$1012$1, (void*)vr$34, -1ll, (void*)"]", 2ll );
	fb_StrInit( (void*)&TMP$1004$1, -1ll, (void*)vr$37, -1ll, 0 );
	goto label$2131;
	label$2130:;
	FBSTRING* vr$41 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 24ll) );
	FBSTRING* vr$44 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 16ll) );
	FBSTRING* vr$47 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 8ll) );
	FBSTRING* vr$50 = fb_DoubleToStr( *(double*)*(double**)THIS$1 );
	__builtin_memset( &TMP$1013$1, 0, 24ll );
	FBSTRING* vr$53 = fb_StrConcat( &TMP$1013$1, (void*)"[", 2ll, (void*)vr$50, -1ll );
	__builtin_memset( &TMP$1014$1, 0, 24ll );
	FBSTRING* vr$56 = fb_StrConcat( &TMP$1014$1, (void*)vr$53, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1015$1, 0, 24ll );
	FBSTRING* vr$59 = fb_StrConcat( &TMP$1015$1, (void*)vr$56, -1ll, (void*)vr$47, -1ll );
	__builtin_memset( &TMP$1016$1, 0, 24ll );
	FBSTRING* vr$62 = fb_StrConcat( &TMP$1016$1, (void*)vr$59, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1017$1, 0, 24ll );
	FBSTRING* vr$65 = fb_StrConcat( &TMP$1017$1, (void*)vr$62, -1ll, (void*)vr$44, -1ll );
	__builtin_memset( &TMP$1018$1, 0, 24ll );
	FBSTRING* vr$68 = fb_StrConcat( &TMP$1018$1, (void*)vr$65, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1019$1, 0, 24ll );
	FBSTRING* vr$71 = fb_StrConcat( &TMP$1019$1, (void*)vr$68, -1ll, (void*)vr$41, -1ll );
	__builtin_memset( &TMP$1020$1, 0, 24ll );
	FBSTRING* vr$74 = fb_StrConcat( &TMP$1020$1, (void*)vr$71, -1ll, (void*)"]", 2ll );
	fb_StrInit( (void*)&TMP$1004$1, -1ll, (void*)vr$74, -1ll, 0 );
	label$2131:;
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)&TMP$1004$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&TMP$1004$1 );
	goto label$2129;
	label$2129:;
	FBSTRING* vr$80 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$80;
}

struct $N4MATH4MAT2E* _ZN4MATHplERKNS_4MAT2ES2_( struct $N4MATH4MAT2E* tmp$1021$1, struct $N4MATH4MAT2E* M1$1, struct $N4MATH4MAT2E* M2$1 )
{
	label$2132:;
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
	_ZN4MATH4MAT2C1ERKS0_( tmp$1021$1, (struct $N4MATH4MAT2E*)&R$1 );
	_ZN4MATH4MAT2D1Ev( &R$1 );
	goto label$2133;
	_ZN4MATH4MAT2D1Ev( &R$1 );
	label$2133:;
	return tmp$1021$1;
}

struct $N4MATH4MAT2E* _ZN4MATHmiERKNS_4MAT2ES2_( struct $N4MATH4MAT2E* tmp$1022$1, struct $N4MATH4MAT2E* M1$1, struct $N4MATH4MAT2E* M2$1 )
{
	label$2134:;
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
	_ZN4MATH4MAT2C1ERKS0_( tmp$1022$1, (struct $N4MATH4MAT2E*)&R$1 );
	_ZN4MATH4MAT2D1Ev( &R$1 );
	goto label$2135;
	_ZN4MATH4MAT2D1Ev( &R$1 );
	label$2135:;
	return tmp$1022$1;
}

struct $N4MATH4MAT2E* _ZN4MATHmlERKNS_4MAT2ERKd( struct $N4MATH4MAT2E* tmp$1023$1, struct $N4MATH4MAT2E* M$1, double* N$1 )
{
	label$2136:;
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
	_ZN4MATH4MAT2C1ERKS0_( tmp$1023$1, (struct $N4MATH4MAT2E*)&R$1 );
	_ZN4MATH4MAT2D1Ev( &R$1 );
	goto label$2137;
	_ZN4MATH4MAT2D1Ev( &R$1 );
	label$2137:;
	return tmp$1023$1;
}

struct $N4MATH4MAT2E* _ZN4MATHmlERKdRKNS_4MAT2E( struct $N4MATH4MAT2E* tmp$1024$1, double* N$1, struct $N4MATH4MAT2E* M$1 )
{
	label$2138:;
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
	_ZN4MATH4MAT2C1ERKS0_( tmp$1024$1, (struct $N4MATH4MAT2E*)&R$1 );
	_ZN4MATH4MAT2D1Ev( &R$1 );
	goto label$2139;
	_ZN4MATH4MAT2D1Ev( &R$1 );
	label$2139:;
	return tmp$1024$1;
}

struct $N4MATH4MAT2E* _ZN4MATHmlERKNS_4MAT2ES2_( struct $N4MATH4MAT2E* tmp$1025$1, struct $N4MATH4MAT2E* M1$1, struct $N4MATH4MAT2E* M2$1 )
{
	label$2140:;
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
	_ZN4MATH4MAT2C1ERKS0_( tmp$1025$1, (struct $N4MATH4MAT2E*)&R$1 );
	_ZN4MATH4MAT2D1Ev( &R$1 );
	goto label$2141;
	_ZN4MATH4MAT2D1Ev( &R$1 );
	label$2141:;
	return tmp$1025$1;
}

struct $N4MATH4VEC2E _ZN4MATHmlERKNS_4MAT2ERKNS_4VEC2E( struct $N4MATH4MAT2E* M$1, struct $N4MATH4VEC2E* V$1 )
{
	double TMP$1027$1;
	double TMP$1028$1;
	struct $N4MATH4VEC2E fb$result$1;
	label$2142:;
	double* P$1;
	double* vr$0 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M$1 );
	P$1 = vr$0;
	TMP$1028$1 = (*(double*)((uint8*)P$1 + 16ll) * *(double*)V$1) + (*(double*)((uint8*)P$1 + 24ll) * *(double*)((uint8*)V$1 + 8ll));
	TMP$1027$1 = (*(double*)P$1 * *(double*)V$1) + (*(double*)((uint8*)P$1 + 8ll) * *(double*)((uint8*)V$1 + 8ll));
	_ZN4MATH4VEC2C1ERKdS2_( &fb$result$1, (double*)&TMP$1027$1, (double*)&TMP$1028$1 );
	goto label$2143;
	label$2143:;
	return fb$result$1;
}

struct $N4MATH4PVECE _ZN4MATHmlERKNS_4MAT2ERKNS_4PVECE( struct $N4MATH4MAT2E* M$1, struct $N4MATH4PVECE* V$1 )
{
	double TMP$1030$1;
	double TMP$1031$1;
	struct $N4MATH4PVECE fb$result$1;
	label$2144:;
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
	TMP$1031$1 = vr$17;
	double vr$21 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, (double*)&J$1 );
	TMP$1030$1 = vr$21;
	_ZN4MATH4PVECC1ERKdS2_( &fb$result$1, (double*)&TMP$1030$1, (double*)&TMP$1031$1 );
	goto label$2145;
	label$2145:;
	return fb$result$1;
}

struct $N4MATH4MAT2E* _ZN4MATHdvERKNS_4MAT2ERKd( struct $N4MATH4MAT2E* tmp$1032$1, struct $N4MATH4MAT2E* M$1, double* N$1 )
{
	label$2146:;
	if( *N$1 == 0x0p+0 ) goto label$2149;
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
		_ZN4MATH4MAT2C1ERKS0_( tmp$1032$1, (struct $N4MATH4MAT2E*)&R$2 );
		_ZN4MATH4MAT2D1Ev( &R$2 );
		goto label$2147;
		_ZN4MATH4MAT2D1Ev( &R$2 );
	}
	label$2149:;
	label$2148:;
	_ZN4MATH4MAT2C1Ev( tmp$1032$1 );
	goto label$2147;
	label$2147:;
	return tmp$1032$1;
}

void _ZN4MATH4MAT3C1Ev( struct $N4MATH4MAT3E* THIS$1 )
{
	double* TMP$1034$1;
	label$2152:;
	__builtin_memset( (struct $N4MATH10BASEMATRIXE*)THIS$1, 0, 8ll );
	void* vr$2 = malloc( 72ull );
	TMP$1034$1 = (double*)vr$2;
	if( TMP$1034$1 == (double*)0ull ) goto label$2154;
	__builtin_memset( TMP$1034$1, 0, 72ull );
	label$2154:;
	*(double**)THIS$1 = TMP$1034$1;
	*(*(double**)THIS$1) = 0x1.p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 32ll) = 0x1.p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 64ll) = 0x1.p+0;
	label$2153:;
}

void _ZN4MATH4MAT3C1ERKNS_4MAT2E( struct $N4MATH4MAT3E* THIS$1, struct $N4MATH4MAT2E* M$1 )
{
	double* TMP$1035$1;
	label$2155:;
	__builtin_memset( (struct $N4MATH10BASEMATRIXE*)THIS$1, 0, 8ll );
	void* vr$2 = malloc( 72ull );
	TMP$1035$1 = (double*)vr$2;
	if( TMP$1035$1 == (double*)0ull ) goto label$2157;
	__builtin_memset( TMP$1035$1, 0, 72ull );
	label$2157:;
	*(double**)THIS$1 = TMP$1035$1;
	double* P$1;
	double* vr$4 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M$1 );
	P$1 = vr$4;
	*(*(double**)THIS$1) = *(double*)P$1;
	*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)P$1 + 8ll);
	*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)P$1 + 16ll);
	*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)P$1 + 24ll);
	*(double*)((uint8*)*(double**)THIS$1 + 64ll) = 0x1.p+0;
	label$2156:;
}

void _ZN4MATH4MAT3C1ERKS0_( struct $N4MATH4MAT3E* THIS$1, struct $N4MATH4MAT3E* M$1 )
{
	double* TMP$1036$1;
	label$2158:;
	__builtin_memset( (struct $N4MATH10BASEMATRIXE*)THIS$1, 0, 8ll );
	void* vr$2 = malloc( 72ull );
	TMP$1036$1 = (double*)vr$2;
	if( TMP$1036$1 == (double*)0ull ) goto label$2160;
	__builtin_memset( TMP$1036$1, 0, 72ull );
	label$2160:;
	*(double**)THIS$1 = TMP$1036$1;
	*(*(double**)THIS$1) = *(double*)*(double**)M$1;
	*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)*(double**)M$1 + 8ll);
	*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)*(double**)M$1 + 16ll);
	*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)*(double**)M$1 + 24ll);
	*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)*(double**)M$1 + 32ll);
	*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)*(double**)M$1 + 40ll);
	*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)((uint8*)*(double**)M$1 + 48ll);
	*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *(double*)((uint8*)*(double**)M$1 + 56ll);
	*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)((uint8*)*(double**)M$1 + 64ll);
	label$2159:;
}

void _ZN4MATH4MAT3pLERKS0_( struct $N4MATH4MAT3E* THIS$1, struct $N4MATH4MAT3E* M$1 )
{
	label$2161:;
	*(*(double**)THIS$1) = *(*(double**)THIS$1) + *(double*)*(double**)M$1;
	*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)*(double**)THIS$1 + 8ll) + *(double*)((uint8*)*(double**)M$1 + 8ll);
	*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)*(double**)THIS$1 + 16ll) + *(double*)((uint8*)*(double**)M$1 + 16ll);
	*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)*(double**)THIS$1 + 24ll) + *(double*)((uint8*)*(double**)M$1 + 24ll);
	*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)*(double**)THIS$1 + 32ll) + *(double*)((uint8*)*(double**)M$1 + 32ll);
	*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)*(double**)THIS$1 + 40ll) + *(double*)((uint8*)*(double**)M$1 + 40ll);
	*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)((uint8*)*(double**)THIS$1 + 48ll) + *(double*)((uint8*)*(double**)M$1 + 48ll);
	*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *(double*)((uint8*)*(double**)THIS$1 + 56ll) + *(double*)((uint8*)*(double**)M$1 + 56ll);
	*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)((uint8*)*(double**)THIS$1 + 64ll) + *(double*)((uint8*)*(double**)M$1 + 64ll);
	label$2162:;
}

void _ZN4MATH4MAT3mIERKS0_( struct $N4MATH4MAT3E* THIS$1, struct $N4MATH4MAT3E* M$1 )
{
	label$2163:;
	*(*(double**)THIS$1) = *(*(double**)THIS$1) - *(double*)*(double**)M$1;
	*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)*(double**)THIS$1 + 8ll) - *(double*)((uint8*)*(double**)M$1 + 8ll);
	*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)*(double**)THIS$1 + 16ll) - *(double*)((uint8*)*(double**)M$1 + 16ll);
	*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)*(double**)THIS$1 + 24ll) - *(double*)((uint8*)*(double**)M$1 + 24ll);
	*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)*(double**)THIS$1 + 32ll) - *(double*)((uint8*)*(double**)M$1 + 32ll);
	*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)*(double**)THIS$1 + 40ll) - *(double*)((uint8*)*(double**)M$1 + 40ll);
	*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)((uint8*)*(double**)THIS$1 + 48ll) - *(double*)((uint8*)*(double**)M$1 + 48ll);
	*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *(double*)((uint8*)*(double**)THIS$1 + 56ll) - *(double*)((uint8*)*(double**)M$1 + 56ll);
	*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)((uint8*)*(double**)THIS$1 + 64ll) - *(double*)((uint8*)*(double**)M$1 + 64ll);
	label$2164:;
}

void _ZN4MATH4MAT3mLERKd( struct $N4MATH4MAT3E* THIS$1, double* N$1 )
{
	label$2165:;
	*(*(double**)THIS$1) = *(*(double**)THIS$1) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)*(double**)THIS$1 + 8ll) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)*(double**)THIS$1 + 16ll) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)*(double**)THIS$1 + 24ll) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)*(double**)THIS$1 + 32ll) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)*(double**)THIS$1 + 40ll) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)((uint8*)*(double**)THIS$1 + 48ll) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *(double*)((uint8*)*(double**)THIS$1 + 56ll) * *N$1;
	*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)((uint8*)*(double**)THIS$1 + 64ll) * *N$1;
	label$2166:;
}

void _ZN4MATH4MAT3mLERKS0_( struct $N4MATH4MAT3E* THIS$1, struct $N4MATH4MAT3E* M$1 )
{
	label$2167:;
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
	label$2168:;
}

void _ZN4MATH4MAT3dVERKd( struct $N4MATH4MAT3E* THIS$1, double* N$1 )
{
	label$2169:;
	if( *N$1 == 0x0p+0 ) goto label$2172;
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
	goto label$2171;
	label$2172:;
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
	label$2171:;
	label$2170:;
}

FBSTRING* _ZNK4MATH4MAT3cv8FBSTRINGEv( struct $N4MATH4MAT3E* THIS$1 )
{
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
	FBSTRING TMP$1055$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$2173:;
	FBSTRING* vr$3 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 64ll) );
	FBSTRING* vr$6 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 56ll) );
	FBSTRING* vr$9 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 48ll) );
	FBSTRING* vr$12 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 40ll) );
	FBSTRING* vr$15 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 32ll) );
	FBSTRING* vr$18 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 24ll) );
	FBSTRING* vr$21 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 16ll) );
	FBSTRING* vr$24 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 8ll) );
	FBSTRING* vr$27 = fb_DoubleToStr( *(double*)*(double**)THIS$1 );
	__builtin_memset( &TMP$1038$1, 0, 24ll );
	FBSTRING* vr$30 = fb_StrConcat( &TMP$1038$1, (void*)"<math.mat3>{\x0A    ", 18ll, (void*)vr$27, -1ll );
	__builtin_memset( &TMP$1039$1, 0, 24ll );
	FBSTRING* vr$33 = fb_StrConcat( &TMP$1039$1, (void*)vr$30, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1040$1, 0, 24ll );
	FBSTRING* vr$36 = fb_StrConcat( &TMP$1040$1, (void*)vr$33, -1ll, (void*)vr$24, -1ll );
	__builtin_memset( &TMP$1041$1, 0, 24ll );
	FBSTRING* vr$39 = fb_StrConcat( &TMP$1041$1, (void*)vr$36, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1042$1, 0, 24ll );
	FBSTRING* vr$42 = fb_StrConcat( &TMP$1042$1, (void*)vr$39, -1ll, (void*)vr$21, -1ll );
	__builtin_memset( &TMP$1043$1, 0, 24ll );
	FBSTRING* vr$45 = fb_StrConcat( &TMP$1043$1, (void*)vr$42, -1ll, (void*)",\x0A    ", 7ll );
	__builtin_memset( &TMP$1044$1, 0, 24ll );
	FBSTRING* vr$48 = fb_StrConcat( &TMP$1044$1, (void*)vr$45, -1ll, (void*)vr$18, -1ll );
	__builtin_memset( &TMP$1045$1, 0, 24ll );
	FBSTRING* vr$51 = fb_StrConcat( &TMP$1045$1, (void*)vr$48, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1046$1, 0, 24ll );
	FBSTRING* vr$54 = fb_StrConcat( &TMP$1046$1, (void*)vr$51, -1ll, (void*)vr$15, -1ll );
	__builtin_memset( &TMP$1047$1, 0, 24ll );
	FBSTRING* vr$57 = fb_StrConcat( &TMP$1047$1, (void*)vr$54, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1048$1, 0, 24ll );
	FBSTRING* vr$60 = fb_StrConcat( &TMP$1048$1, (void*)vr$57, -1ll, (void*)vr$12, -1ll );
	__builtin_memset( &TMP$1049$1, 0, 24ll );
	FBSTRING* vr$63 = fb_StrConcat( &TMP$1049$1, (void*)vr$60, -1ll, (void*)",\x0A    ", 7ll );
	__builtin_memset( &TMP$1050$1, 0, 24ll );
	FBSTRING* vr$66 = fb_StrConcat( &TMP$1050$1, (void*)vr$63, -1ll, (void*)vr$9, -1ll );
	__builtin_memset( &TMP$1051$1, 0, 24ll );
	FBSTRING* vr$69 = fb_StrConcat( &TMP$1051$1, (void*)vr$66, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1052$1, 0, 24ll );
	FBSTRING* vr$72 = fb_StrConcat( &TMP$1052$1, (void*)vr$69, -1ll, (void*)vr$6, -1ll );
	__builtin_memset( &TMP$1053$1, 0, 24ll );
	FBSTRING* vr$75 = fb_StrConcat( &TMP$1053$1, (void*)vr$72, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1054$1, 0, 24ll );
	FBSTRING* vr$78 = fb_StrConcat( &TMP$1054$1, (void*)vr$75, -1ll, (void*)vr$3, -1ll );
	__builtin_memset( &TMP$1055$1, 0, 24ll );
	FBSTRING* vr$81 = fb_StrConcat( &TMP$1055$1, (void*)vr$78, -1ll, (void*)"\x0A}", 3ll );
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$81, -1ll, 0 );
	goto label$2174;
	label$2174:;
	FBSTRING* vr$84 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$84;
}

void _ZN4MATH4MAT3aSERKNS_4MAT2E( struct $N4MATH4MAT3E* THIS$1, struct $N4MATH4MAT2E* M$1 )
{
	label$2175:;
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
	label$2176:;
}

void _ZN4MATH4MAT3aSERKS0_( struct $N4MATH4MAT3E* THIS$1, struct $N4MATH4MAT3E* M$1 )
{
	label$2177:;
	if( THIS$1 == M$1 ) goto label$2180;
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
	label$2180:;
	label$2179:;
	label$2178:;
}

struct $N4MATH4MAT3E* _ZN4MATH4MAT39FROMSCALEERKd( struct $N4MATH4MAT3E* tmp$1056$1, double* S$1 )
{
	label$2181:;
	struct $N4MATH4MAT3E R$1;
	_ZN4MATH4MAT3C1Ev( &R$1 );
	*(*(double**)&R$1) = *S$1;
	*(double*)((uint8*)*(double**)&R$1 + 32ll) = *S$1;
	*(double*)((uint8*)*(double**)&R$1 + 64ll) = *S$1;
	_ZN4MATH4MAT3C1ERKS0_( tmp$1056$1, (struct $N4MATH4MAT3E*)&R$1 );
	_ZN4MATH4MAT3D1Ev( &R$1 );
	goto label$2182;
	_ZN4MATH4MAT3D1Ev( &R$1 );
	label$2182:;
	return tmp$1056$1;
}

struct $N4MATH4MAT3E* _ZN4MATH4MAT39FROMSCALEERKdS2_S2_( struct $N4MATH4MAT3E* tmp$1057$1, double* SX$1, double* SY$1, double* SZ$1 )
{
	label$2183:;
	struct $N4MATH4MAT3E R$1;
	_ZN4MATH4MAT3C1Ev( &R$1 );
	*(*(double**)&R$1) = *SX$1;
	*(double*)((uint8*)*(double**)&R$1 + 32ll) = *SY$1;
	*(double*)((uint8*)*(double**)&R$1 + 64ll) = *SZ$1;
	_ZN4MATH4MAT3C1ERKS0_( tmp$1057$1, (struct $N4MATH4MAT3E*)&R$1 );
	_ZN4MATH4MAT3D1Ev( &R$1 );
	goto label$2184;
	_ZN4MATH4MAT3D1Ev( &R$1 );
	label$2184:;
	return tmp$1057$1;
}

struct $N4MATH4MAT3E* _ZN4MATH4MAT315FROMTRANSLATIONERKdS2_( struct $N4MATH4MAT3E* tmp$1058$1, double* TX$1, double* TY$1 )
{
	label$2185:;
	struct $N4MATH4MAT3E R$1;
	_ZN4MATH4MAT3C1Ev( &R$1 );
	*(double*)((uint8*)*(double**)&R$1 + 16ll) = *TX$1;
	*(double*)((uint8*)*(double**)&R$1 + 40ll) = *TY$1;
	_ZN4MATH4MAT3C1ERKS0_( tmp$1058$1, (struct $N4MATH4MAT3E*)&R$1 );
	_ZN4MATH4MAT3D1Ev( &R$1 );
	goto label$2186;
	_ZN4MATH4MAT3D1Ev( &R$1 );
	label$2186:;
	return tmp$1058$1;
}

struct $N4MATH4MAT3E* _ZN4MATH4MAT315FROMTRANSLATIONERKNS_4VEC2E( struct $N4MATH4MAT3E* tmp$1059$1, struct $N4MATH4VEC2E* T$1 )
{
	label$2187:;
	struct $N4MATH4MAT3E R$1;
	_ZN4MATH4MAT3C1Ev( &R$1 );
	*(double*)((uint8*)*(double**)&R$1 + 16ll) = *(double*)T$1;
	*(double*)((uint8*)*(double**)&R$1 + 40ll) = *(double*)((uint8*)T$1 + 8ll);
	_ZN4MATH4MAT3C1ERKS0_( tmp$1059$1, (struct $N4MATH4MAT3E*)&R$1 );
	_ZN4MATH4MAT3D1Ev( &R$1 );
	goto label$2188;
	_ZN4MATH4MAT3D1Ev( &R$1 );
	label$2188:;
	return tmp$1059$1;
}

struct $N4MATH4MAT3E* _ZN4MATH4MAT315FROMTRANSLATIONERKNS_4PVECE( struct $N4MATH4MAT3E* tmp$1060$1, struct $N4MATH4PVECE* T$1 )
{
	label$2189:;
	struct $N4MATH4MAT3E R$1;
	_ZN4MATH4MAT3C1Ev( &R$1 );
	double vr$1 = _ZNK4MATH4PVEC8X__get__Ev( T$1 );
	*(double*)((uint8*)*(double**)&R$1 + 16ll) = vr$1;
	double vr$3 = _ZNK4MATH4PVEC8Y__get__Ev( T$1 );
	*(double*)((uint8*)*(double**)&R$1 + 40ll) = vr$3;
	_ZN4MATH4MAT3C1ERKS0_( tmp$1060$1, (struct $N4MATH4MAT3E*)&R$1 );
	_ZN4MATH4MAT3D1Ev( &R$1 );
	goto label$2190;
	_ZN4MATH4MAT3D1Ev( &R$1 );
	label$2190:;
	return tmp$1060$1;
}

double _ZNK4MATH4MAT33GETERKu7INTEGERS3_( struct $N4MATH4MAT3E* THIS$1, int64* X$1, int64* Y$1 )
{
	double TMP$1061$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$2191:;
	if( ((((int64)-(*X$1 >= 0ll) & (int64)-(*X$1 < 3ll)) & (int64)-(*Y$1 >= 0ll)) & (int64)-(*Y$1 < 3ll)) == 0ll ) goto label$2193;
	TMP$1061$1 = *(double*)((uint8*)*(double**)THIS$1 + ((*X$1 + (*Y$1 * 3ll)) << (3ll & 63ll)));
	goto label$2194;
	label$2193:;
	TMP$1061$1 = 0x0p+0;
	label$2194:;
	fb$result$1 = TMP$1061$1;
	goto label$2192;
	label$2192:;
	return fb$result$1;
}

struct $N4MATH4VEC3E _ZNK4MATH4MAT39GETCOLUMNERKu7INTEGER( struct $N4MATH4MAT3E* THIS$1, int64* X$1 )
{
	struct $N4MATH4VEC3E fb$result$1;
	label$2195:;
	{
		int64 TMP$1062$2;
		TMP$1062$2 = *X$1;
		if( TMP$1062$2 != 0ll ) goto label$2198;
		label$2199:;
		{
			_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, *(double**)THIS$1, (double*)((uint8*)*(double**)THIS$1 + 24ll), (double*)((uint8*)*(double**)THIS$1 + 48ll) );
			goto label$2196;
		}
		goto label$2197;
		label$2198:;
		if( TMP$1062$2 != 1ll ) goto label$2200;
		label$2201:;
		{
			_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, (double*)((uint8*)*(double**)THIS$1 + 8ll), (double*)((uint8*)*(double**)THIS$1 + 32ll), (double*)((uint8*)*(double**)THIS$1 + 56ll) );
			goto label$2196;
		}
		goto label$2197;
		label$2200:;
		if( TMP$1062$2 != 2ll ) goto label$2202;
		label$2203:;
		{
			_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, (double*)((uint8*)*(double**)THIS$1 + 16ll), (double*)((uint8*)*(double**)THIS$1 + 40ll), (double*)((uint8*)*(double**)THIS$1 + 64ll) );
			goto label$2196;
		}
		goto label$2197;
		label$2202:;
		{
			_ZN4MATH4VEC3C1Ev( &fb$result$1 );
			goto label$2196;
		}
		label$2204:;
		label$2197:;
	}
	label$2196:;
	return fb$result$1;
}

struct $N4MATH4VEC3E _ZNK4MATH4MAT36GETROWERKu7INTEGER( struct $N4MATH4MAT3E* THIS$1, int64* Y$1 )
{
	struct $N4MATH4VEC3E fb$result$1;
	label$2205:;
	{
		int64 TMP$1067$2;
		TMP$1067$2 = *Y$1;
		if( TMP$1067$2 != 0ll ) goto label$2208;
		label$2209:;
		{
			_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, *(double**)THIS$1, (double*)((uint8*)*(double**)THIS$1 + 8ll), (double*)((uint8*)*(double**)THIS$1 + 16ll) );
			goto label$2206;
		}
		goto label$2207;
		label$2208:;
		if( TMP$1067$2 != 1ll ) goto label$2210;
		label$2211:;
		{
			_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, (double*)((uint8*)*(double**)THIS$1 + 24ll), (double*)((uint8*)*(double**)THIS$1 + 32ll), (double*)((uint8*)*(double**)THIS$1 + 40ll) );
			goto label$2206;
		}
		goto label$2207;
		label$2210:;
		if( TMP$1067$2 != 2ll ) goto label$2212;
		label$2213:;
		{
			_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, (double*)((uint8*)*(double**)THIS$1 + 48ll), (double*)((uint8*)*(double**)THIS$1 + 56ll), (double*)((uint8*)*(double**)THIS$1 + 64ll) );
			goto label$2206;
		}
		goto label$2207;
		label$2212:;
		{
			_ZN4MATH4VEC3C1Ev( &fb$result$1 );
			goto label$2206;
		}
		label$2214:;
		label$2207:;
	}
	label$2206:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT33SETERKu7INTEGERS3_RKd( struct $N4MATH4MAT3E* THIS$1, int64* X$1, int64* Y$1, double* N$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2215:;
	if( ((((int64)-(*X$1 >= 0ll) & (int64)-(*X$1 < 3ll)) & (int64)-(*Y$1 >= 0ll)) & (int64)-(*Y$1 < 3ll)) == 0ll ) goto label$2218;
	{
		*(double*)((uint8*)*(double**)THIS$1 + ((*X$1 + (*Y$1 * 3ll)) << (3ll & 63ll))) = *N$1;
		fb$result$1 = (boolean)1ll;
		goto label$2216;
	}
	label$2218:;
	label$2217:;
	fb$result$1 = (boolean)0ll;
	goto label$2216;
	label$2216:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT39SETCOLUMNERKu7INTEGERRKdS5_S5_( struct $N4MATH4MAT3E* THIS$1, int64* X$1, double* N1$1, double* N2$1, double* N3$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2219:;
	{
		int64 TMP$1072$2;
		TMP$1072$2 = *X$1;
		if( TMP$1072$2 != 0ll ) goto label$2222;
		label$2223:;
		{
			*(*(double**)THIS$1) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *N2$1;
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *N3$1;
		}
		goto label$2221;
		label$2222:;
		if( TMP$1072$2 != 1ll ) goto label$2224;
		label$2225:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *N2$1;
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *N3$1;
		}
		goto label$2221;
		label$2224:;
		if( TMP$1072$2 != 2ll ) goto label$2226;
		label$2227:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *N2$1;
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *N3$1;
		}
		goto label$2221;
		label$2226:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2220;
		}
		label$2228:;
		label$2221:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2220;
	label$2220:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT39SETCOLUMNERKu7INTEGERRKNS_4VEC2ERKd( struct $N4MATH4MAT3E* THIS$1, int64* X$1, struct $N4MATH4VEC2E* V$1, double* N$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2229:;
	{
		int64 TMP$1073$2;
		TMP$1073$2 = *X$1;
		if( TMP$1073$2 != 0ll ) goto label$2232;
		label$2233:;
		{
			*(*(double**)THIS$1) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *N$1;
		}
		goto label$2231;
		label$2232:;
		if( TMP$1073$2 != 1ll ) goto label$2234;
		label$2235:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *N$1;
		}
		goto label$2231;
		label$2234:;
		if( TMP$1073$2 != 2ll ) goto label$2236;
		label$2237:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *N$1;
		}
		goto label$2231;
		label$2236:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2230;
		}
		label$2238:;
		label$2231:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2230;
	label$2230:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT39SETCOLUMNERKu7INTEGERRKNS_4PVECERKd( struct $N4MATH4MAT3E* THIS$1, int64* X$1, struct $N4MATH4PVECE* V$1, double* N$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2239:;
	{
		int64 TMP$1074$2;
		TMP$1074$2 = *X$1;
		if( TMP$1074$2 != 0ll ) goto label$2242;
		label$2243:;
		{
			double vr$2 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(*(double**)THIS$1) = vr$2;
			double vr$5 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = vr$5;
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *N$1;
		}
		goto label$2241;
		label$2242:;
		if( TMP$1074$2 != 1ll ) goto label$2244;
		label$2245:;
		{
			double vr$11 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = vr$11;
			double vr$14 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = vr$14;
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *N$1;
		}
		goto label$2241;
		label$2244:;
		if( TMP$1074$2 != 2ll ) goto label$2246;
		label$2247:;
		{
			double vr$20 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = vr$20;
			double vr$23 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = vr$23;
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *N$1;
		}
		goto label$2241;
		label$2246:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2240;
		}
		label$2248:;
		label$2241:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2240;
	label$2240:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT39SETCOLUMNERKu7INTEGERRKNS_4VEC3E( struct $N4MATH4MAT3E* THIS$1, int64* X$1, struct $N4MATH4VEC3E* V$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2249:;
	{
		int64 TMP$1075$2;
		TMP$1075$2 = *X$1;
		if( TMP$1075$2 != 0ll ) goto label$2252;
		label$2253:;
		{
			*(*(double**)THIS$1) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)((uint8*)V$1 + 16ll);
		}
		goto label$2251;
		label$2252:;
		if( TMP$1075$2 != 1ll ) goto label$2254;
		label$2255:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *(double*)((uint8*)V$1 + 16ll);
		}
		goto label$2251;
		label$2254:;
		if( TMP$1075$2 != 2ll ) goto label$2256;
		label$2257:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)((uint8*)V$1 + 16ll);
		}
		goto label$2251;
		label$2256:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2250;
		}
		label$2258:;
		label$2251:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2250;
	label$2250:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT39SETCOLUMNERKu7INTEGERRKNS_4CVECE( struct $N4MATH4MAT3E* THIS$1, int64* X$1, struct $N4MATH4CVECE* V$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2259:;
	{
		int64 TMP$1076$2;
		TMP$1076$2 = *X$1;
		if( TMP$1076$2 != 0ll ) goto label$2262;
		label$2263:;
		{
			double vr$2 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
			*(*(double**)THIS$1) = vr$2;
			double vr$5 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = vr$5;
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)V$1;
		}
		goto label$2261;
		label$2262:;
		if( TMP$1076$2 != 1ll ) goto label$2264;
		label$2265:;
		{
			double vr$11 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = vr$11;
			double vr$14 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = vr$14;
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *(double*)V$1;
		}
		goto label$2261;
		label$2264:;
		if( TMP$1076$2 != 2ll ) goto label$2266;
		label$2267:;
		{
			double vr$20 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = vr$20;
			double vr$23 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = vr$23;
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)V$1;
		}
		goto label$2261;
		label$2266:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2260;
		}
		label$2268:;
		label$2261:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2260;
	label$2260:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT36SETROWERKu7INTEGERRKdS5_S5_( struct $N4MATH4MAT3E* THIS$1, int64* Y$1, double* N1$1, double* N2$1, double* N3$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2269:;
	{
		int64 TMP$1077$2;
		TMP$1077$2 = *Y$1;
		if( TMP$1077$2 != 0ll ) goto label$2272;
		label$2273:;
		{
			*(*(double**)THIS$1) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *N2$1;
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *N3$1;
		}
		goto label$2271;
		label$2272:;
		if( TMP$1077$2 != 1ll ) goto label$2274;
		label$2275:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *N2$1;
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *N3$1;
		}
		goto label$2271;
		label$2274:;
		if( TMP$1077$2 != 2ll ) goto label$2276;
		label$2277:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *N2$1;
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *N3$1;
		}
		goto label$2271;
		label$2276:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2270;
		}
		label$2278:;
		label$2271:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2270;
	label$2270:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT36SETROWERKu7INTEGERRKNS_4VEC2ERKd( struct $N4MATH4MAT3E* THIS$1, int64* Y$1, struct $N4MATH4VEC2E* V$1, double* N$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2279:;
	{
		int64 TMP$1078$2;
		TMP$1078$2 = *Y$1;
		if( TMP$1078$2 != 0ll ) goto label$2282;
		label$2283:;
		{
			*(*(double**)THIS$1) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *N$1;
		}
		goto label$2281;
		label$2282:;
		if( TMP$1078$2 != 1ll ) goto label$2284;
		label$2285:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *N$1;
		}
		goto label$2281;
		label$2284:;
		if( TMP$1078$2 != 2ll ) goto label$2286;
		label$2287:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *N$1;
		}
		goto label$2281;
		label$2286:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2280;
		}
		label$2288:;
		label$2281:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2280;
	label$2280:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT36SETROWERKu7INTEGERRKNS_4PVECERKd( struct $N4MATH4MAT3E* THIS$1, int64* Y$1, struct $N4MATH4PVECE* V$1, double* N$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2289:;
	{
		int64 TMP$1079$2;
		TMP$1079$2 = *Y$1;
		if( TMP$1079$2 != 0ll ) goto label$2292;
		label$2293:;
		{
			double vr$2 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(*(double**)THIS$1) = vr$2;
			double vr$5 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = vr$5;
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *N$1;
		}
		goto label$2291;
		label$2292:;
		if( TMP$1079$2 != 1ll ) goto label$2294;
		label$2295:;
		{
			double vr$11 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = vr$11;
			double vr$14 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = vr$14;
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *N$1;
		}
		goto label$2291;
		label$2294:;
		if( TMP$1079$2 != 2ll ) goto label$2296;
		label$2297:;
		{
			double vr$20 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = vr$20;
			double vr$23 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = vr$23;
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *N$1;
		}
		goto label$2291;
		label$2296:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2290;
		}
		label$2298:;
		label$2291:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2290;
	label$2290:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT36SETROWERKu7INTEGERRKNS_4VEC3E( struct $N4MATH4MAT3E* THIS$1, int64* Y$1, struct $N4MATH4VEC3E* V$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2299:;
	{
		int64 TMP$1080$2;
		TMP$1080$2 = *Y$1;
		if( TMP$1080$2 != 0ll ) goto label$2302;
		label$2303:;
		{
			*(*(double**)THIS$1) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)V$1 + 16ll);
		}
		goto label$2301;
		label$2302:;
		if( TMP$1080$2 != 1ll ) goto label$2304;
		label$2305:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)V$1 + 16ll);
		}
		goto label$2301;
		label$2304:;
		if( TMP$1080$2 != 2ll ) goto label$2306;
		label$2307:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)((uint8*)V$1 + 16ll);
		}
		goto label$2301;
		label$2306:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2300;
		}
		label$2308:;
		label$2301:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2300;
	label$2300:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT36SETROWERKu7INTEGERRKNS_4CVECE( struct $N4MATH4MAT3E* THIS$1, int64* Y$1, struct $N4MATH4CVECE* V$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2309:;
	{
		int64 TMP$1081$2;
		TMP$1081$2 = *Y$1;
		if( TMP$1081$2 != 0ll ) goto label$2312;
		label$2313:;
		{
			double vr$2 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
			*(*(double**)THIS$1) = vr$2;
			double vr$5 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = vr$5;
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)V$1;
		}
		goto label$2311;
		label$2312:;
		if( TMP$1081$2 != 1ll ) goto label$2314;
		label$2315:;
		{
			double vr$11 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = vr$11;
			double vr$14 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = vr$14;
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)V$1;
		}
		goto label$2311;
		label$2314:;
		if( TMP$1081$2 != 2ll ) goto label$2316;
		label$2317:;
		{
			double vr$20 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = vr$20;
			double vr$23 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = vr$23;
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)V$1;
		}
		goto label$2311;
		label$2316:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2310;
		}
		label$2318:;
		label$2311:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2310;
	label$2310:;
	return fb$result$1;
}

FBSTRING* _ZNK4MATH4MAT36TOJSONERKb( struct $N4MATH4MAT3E* THIS$1, boolean* C$1 )
{
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
	FBSTRING TMP$1118$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$2319:;
	if( *C$1 == (boolean)0ll ) goto label$2321;
	FBSTRING* vr$4 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 64ll) );
	FBSTRING* vr$7 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 40ll) );
	FBSTRING* vr$10 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 16ll) );
	FBSTRING* vr$13 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 56ll) );
	FBSTRING* vr$16 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 32ll) );
	FBSTRING* vr$19 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 8ll) );
	FBSTRING* vr$22 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 48ll) );
	FBSTRING* vr$25 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 24ll) );
	FBSTRING* vr$28 = fb_DoubleToStr( *(double*)*(double**)THIS$1 );
	__builtin_memset( &TMP$1083$1, 0, 24ll );
	FBSTRING* vr$31 = fb_StrConcat( &TMP$1083$1, (void*)"[", 2ll, (void*)vr$28, -1ll );
	__builtin_memset( &TMP$1084$1, 0, 24ll );
	FBSTRING* vr$34 = fb_StrConcat( &TMP$1084$1, (void*)vr$31, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1085$1, 0, 24ll );
	FBSTRING* vr$37 = fb_StrConcat( &TMP$1085$1, (void*)vr$34, -1ll, (void*)vr$25, -1ll );
	__builtin_memset( &TMP$1086$1, 0, 24ll );
	FBSTRING* vr$40 = fb_StrConcat( &TMP$1086$1, (void*)vr$37, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1087$1, 0, 24ll );
	FBSTRING* vr$43 = fb_StrConcat( &TMP$1087$1, (void*)vr$40, -1ll, (void*)vr$22, -1ll );
	__builtin_memset( &TMP$1088$1, 0, 24ll );
	FBSTRING* vr$46 = fb_StrConcat( &TMP$1088$1, (void*)vr$43, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1089$1, 0, 24ll );
	FBSTRING* vr$49 = fb_StrConcat( &TMP$1089$1, (void*)vr$46, -1ll, (void*)vr$19, -1ll );
	__builtin_memset( &TMP$1090$1, 0, 24ll );
	FBSTRING* vr$52 = fb_StrConcat( &TMP$1090$1, (void*)vr$49, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1091$1, 0, 24ll );
	FBSTRING* vr$55 = fb_StrConcat( &TMP$1091$1, (void*)vr$52, -1ll, (void*)vr$16, -1ll );
	__builtin_memset( &TMP$1092$1, 0, 24ll );
	FBSTRING* vr$58 = fb_StrConcat( &TMP$1092$1, (void*)vr$55, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1093$1, 0, 24ll );
	FBSTRING* vr$61 = fb_StrConcat( &TMP$1093$1, (void*)vr$58, -1ll, (void*)vr$13, -1ll );
	__builtin_memset( &TMP$1094$1, 0, 24ll );
	FBSTRING* vr$64 = fb_StrConcat( &TMP$1094$1, (void*)vr$61, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1095$1, 0, 24ll );
	FBSTRING* vr$67 = fb_StrConcat( &TMP$1095$1, (void*)vr$64, -1ll, (void*)vr$10, -1ll );
	__builtin_memset( &TMP$1096$1, 0, 24ll );
	FBSTRING* vr$70 = fb_StrConcat( &TMP$1096$1, (void*)vr$67, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1097$1, 0, 24ll );
	FBSTRING* vr$73 = fb_StrConcat( &TMP$1097$1, (void*)vr$70, -1ll, (void*)vr$7, -1ll );
	__builtin_memset( &TMP$1098$1, 0, 24ll );
	FBSTRING* vr$76 = fb_StrConcat( &TMP$1098$1, (void*)vr$73, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1099$1, 0, 24ll );
	FBSTRING* vr$79 = fb_StrConcat( &TMP$1099$1, (void*)vr$76, -1ll, (void*)vr$4, -1ll );
	__builtin_memset( &TMP$1100$1, 0, 24ll );
	FBSTRING* vr$82 = fb_StrConcat( &TMP$1100$1, (void*)vr$79, -1ll, (void*)"]", 2ll );
	fb_StrInit( (void*)&TMP$1082$1, -1ll, (void*)vr$82, -1ll, 0 );
	goto label$2322;
	label$2321:;
	FBSTRING* vr$86 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 64ll) );
	FBSTRING* vr$89 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 56ll) );
	FBSTRING* vr$92 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 48ll) );
	FBSTRING* vr$95 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 40ll) );
	FBSTRING* vr$98 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 32ll) );
	FBSTRING* vr$101 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 24ll) );
	FBSTRING* vr$104 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 16ll) );
	FBSTRING* vr$107 = fb_DoubleToStr( *(double*)((uint8*)*(double**)THIS$1 + 8ll) );
	FBSTRING* vr$110 = fb_DoubleToStr( *(double*)*(double**)THIS$1 );
	__builtin_memset( &TMP$1101$1, 0, 24ll );
	FBSTRING* vr$113 = fb_StrConcat( &TMP$1101$1, (void*)"[", 2ll, (void*)vr$110, -1ll );
	__builtin_memset( &TMP$1102$1, 0, 24ll );
	FBSTRING* vr$116 = fb_StrConcat( &TMP$1102$1, (void*)vr$113, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1103$1, 0, 24ll );
	FBSTRING* vr$119 = fb_StrConcat( &TMP$1103$1, (void*)vr$116, -1ll, (void*)vr$107, -1ll );
	__builtin_memset( &TMP$1104$1, 0, 24ll );
	FBSTRING* vr$122 = fb_StrConcat( &TMP$1104$1, (void*)vr$119, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1105$1, 0, 24ll );
	FBSTRING* vr$125 = fb_StrConcat( &TMP$1105$1, (void*)vr$122, -1ll, (void*)vr$104, -1ll );
	__builtin_memset( &TMP$1106$1, 0, 24ll );
	FBSTRING* vr$128 = fb_StrConcat( &TMP$1106$1, (void*)vr$125, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1107$1, 0, 24ll );
	FBSTRING* vr$131 = fb_StrConcat( &TMP$1107$1, (void*)vr$128, -1ll, (void*)vr$101, -1ll );
	__builtin_memset( &TMP$1108$1, 0, 24ll );
	FBSTRING* vr$134 = fb_StrConcat( &TMP$1108$1, (void*)vr$131, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1109$1, 0, 24ll );
	FBSTRING* vr$137 = fb_StrConcat( &TMP$1109$1, (void*)vr$134, -1ll, (void*)vr$98, -1ll );
	__builtin_memset( &TMP$1110$1, 0, 24ll );
	FBSTRING* vr$140 = fb_StrConcat( &TMP$1110$1, (void*)vr$137, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1111$1, 0, 24ll );
	FBSTRING* vr$143 = fb_StrConcat( &TMP$1111$1, (void*)vr$140, -1ll, (void*)vr$95, -1ll );
	__builtin_memset( &TMP$1112$1, 0, 24ll );
	FBSTRING* vr$146 = fb_StrConcat( &TMP$1112$1, (void*)vr$143, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1113$1, 0, 24ll );
	FBSTRING* vr$149 = fb_StrConcat( &TMP$1113$1, (void*)vr$146, -1ll, (void*)vr$92, -1ll );
	__builtin_memset( &TMP$1114$1, 0, 24ll );
	FBSTRING* vr$152 = fb_StrConcat( &TMP$1114$1, (void*)vr$149, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1115$1, 0, 24ll );
	FBSTRING* vr$155 = fb_StrConcat( &TMP$1115$1, (void*)vr$152, -1ll, (void*)vr$89, -1ll );
	__builtin_memset( &TMP$1116$1, 0, 24ll );
	FBSTRING* vr$158 = fb_StrConcat( &TMP$1116$1, (void*)vr$155, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1117$1, 0, 24ll );
	FBSTRING* vr$161 = fb_StrConcat( &TMP$1117$1, (void*)vr$158, -1ll, (void*)vr$86, -1ll );
	__builtin_memset( &TMP$1118$1, 0, 24ll );
	FBSTRING* vr$164 = fb_StrConcat( &TMP$1118$1, (void*)vr$161, -1ll, (void*)"]", 2ll );
	fb_StrInit( (void*)&TMP$1082$1, -1ll, (void*)vr$164, -1ll, 0 );
	label$2322:;
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)&TMP$1082$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&TMP$1082$1 );
	goto label$2320;
	label$2320:;
	FBSTRING* vr$170 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$170;
}

struct $N4MATH4MAT3E* _ZN4MATHplERKNS_4MAT3ES2_( struct $N4MATH4MAT3E* tmp$1119$1, struct $N4MATH4MAT3E* M1$1, struct $N4MATH4MAT3E* M2$1 )
{
	label$2323:;
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
	_ZN4MATH4MAT3C1ERKS0_( tmp$1119$1, (struct $N4MATH4MAT3E*)&R$1 );
	_ZN4MATH4MAT3D1Ev( &R$1 );
	goto label$2324;
	_ZN4MATH4MAT3D1Ev( &R$1 );
	label$2324:;
	return tmp$1119$1;
}

struct $N4MATH4MAT3E* _ZN4MATHmiERKNS_4MAT3ES2_( struct $N4MATH4MAT3E* tmp$1120$1, struct $N4MATH4MAT3E* M1$1, struct $N4MATH4MAT3E* M2$1 )
{
	label$2325:;
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
	_ZN4MATH4MAT3C1ERKS0_( tmp$1120$1, (struct $N4MATH4MAT3E*)&R$1 );
	_ZN4MATH4MAT3D1Ev( &R$1 );
	goto label$2326;
	_ZN4MATH4MAT3D1Ev( &R$1 );
	label$2326:;
	return tmp$1120$1;
}

struct $N4MATH4MAT3E* _ZN4MATHmlERKNS_4MAT3ERKd( struct $N4MATH4MAT3E* tmp$1121$1, struct $N4MATH4MAT3E* M$1, double* N$1 )
{
	label$2327:;
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
	_ZN4MATH4MAT3C1ERKS0_( tmp$1121$1, (struct $N4MATH4MAT3E*)&R$1 );
	_ZN4MATH4MAT3D1Ev( &R$1 );
	goto label$2328;
	_ZN4MATH4MAT3D1Ev( &R$1 );
	label$2328:;
	return tmp$1121$1;
}

struct $N4MATH4MAT3E* _ZN4MATHmlERKdRKNS_4MAT3E( struct $N4MATH4MAT3E* tmp$1122$1, double* N$1, struct $N4MATH4MAT3E* M$1 )
{
	label$2329:;
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
	_ZN4MATH4MAT3C1ERKS0_( tmp$1122$1, (struct $N4MATH4MAT3E*)&R$1 );
	_ZN4MATH4MAT3D1Ev( &R$1 );
	goto label$2330;
	_ZN4MATH4MAT3D1Ev( &R$1 );
	label$2330:;
	return tmp$1122$1;
}

struct $N4MATH4MAT3E* _ZN4MATHmlERKNS_4MAT3ES2_( struct $N4MATH4MAT3E* tmp$1123$1, struct $N4MATH4MAT3E* M1$1, struct $N4MATH4MAT3E* M2$1 )
{
	label$2331:;
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
	_ZN4MATH4MAT3C1ERKS0_( tmp$1123$1, (struct $N4MATH4MAT3E*)&R$1 );
	_ZN4MATH4MAT3D1Ev( &R$1 );
	goto label$2332;
	_ZN4MATH4MAT3D1Ev( &R$1 );
	label$2332:;
	return tmp$1123$1;
}

struct $N4MATH4VEC3E _ZN4MATHmlERKNS_4MAT3ERKNS_4VEC3E( struct $N4MATH4MAT3E* M$1, struct $N4MATH4VEC3E* V$1 )
{
	double TMP$1125$1;
	double TMP$1126$1;
	double TMP$1127$1;
	struct $N4MATH4VEC3E fb$result$1;
	label$2333:;
	double* P$1;
	double* vr$0 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M$1 );
	P$1 = vr$0;
	TMP$1127$1 = ((*(double*)((uint8*)P$1 + 48ll) * *(double*)V$1) + (*(double*)((uint8*)P$1 + 56ll) * *(double*)((uint8*)V$1 + 8ll))) + (*(double*)((uint8*)P$1 + 64ll) * *(double*)((uint8*)V$1 + 16ll));
	TMP$1126$1 = ((*(double*)((uint8*)P$1 + 24ll) * *(double*)V$1) + (*(double*)((uint8*)P$1 + 32ll) * *(double*)((uint8*)V$1 + 8ll))) + (*(double*)((uint8*)P$1 + 40ll) * *(double*)((uint8*)V$1 + 16ll));
	TMP$1125$1 = ((*(double*)P$1 * *(double*)V$1) + (*(double*)((uint8*)P$1 + 8ll) * *(double*)((uint8*)V$1 + 8ll))) + (*(double*)((uint8*)P$1 + 16ll) * *(double*)((uint8*)V$1 + 16ll));
	_ZN4MATH4VEC3C1ERKdS2_S2_( &fb$result$1, (double*)&TMP$1125$1, (double*)&TMP$1126$1, (double*)&TMP$1127$1 );
	goto label$2334;
	label$2334:;
	return fb$result$1;
}

struct $N4MATH4CVECE _ZN4MATHmlERKNS_4MAT3ERKNS_4CVECE( struct $N4MATH4MAT3E* M$1, struct $N4MATH4CVECE* V$1 )
{
	double TMP$1129$1;
	double TMP$1130$1;
	struct $N4MATH4CVECE fb$result$1;
	label$2335:;
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
	TMP$1130$1 = vr$36;
	double vr$40 = _ZN4MATH5THETAERKdS1_( (double*)&I$1, (double*)&J$1 );
	TMP$1129$1 = vr$40;
	_ZN4MATH4CVECC1ERKdS2_S2_( &fb$result$1, (double*)&TMP$1129$1, (double*)&TMP$1130$1, (double*)&K$1 );
	goto label$2336;
	label$2336:;
	return fb$result$1;
}

struct $N4MATH4MAT3E* _ZN4MATHdvERKNS_4MAT3ERKd( struct $N4MATH4MAT3E* tmp$1131$1, struct $N4MATH4MAT3E* M$1, double* N$1 )
{
	label$2337:;
	if( *N$1 == 0x0p+0 ) goto label$2340;
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
		_ZN4MATH4MAT3C1ERKS0_( tmp$1131$1, (struct $N4MATH4MAT3E*)&R$2 );
		_ZN4MATH4MAT3D1Ev( &R$2 );
		goto label$2338;
		_ZN4MATH4MAT3D1Ev( &R$2 );
	}
	label$2340:;
	label$2339:;
	_ZN4MATH4MAT3C1Ev( tmp$1131$1 );
	goto label$2338;
	label$2338:;
	return tmp$1131$1;
}

void _ZN4MATH4MAT4C1Ev( struct $N4MATH4MAT4E* THIS$1 )
{
	double* TMP$1133$1;
	label$2343:;
	__builtin_memset( (struct $N4MATH10BASEMATRIXE*)THIS$1, 0, 8ll );
	void* vr$2 = malloc( 128ull );
	TMP$1133$1 = (double*)vr$2;
	if( TMP$1133$1 == (double*)0ull ) goto label$2345;
	__builtin_memset( TMP$1133$1, 0, 128ull );
	label$2345:;
	*(double**)THIS$1 = TMP$1133$1;
	*(*(double**)THIS$1) = 0x1.p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 40ll) = 0x1.p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 80ll) = 0x1.p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 120ll) = 0x1.p+0;
	label$2344:;
}

void _ZN4MATH4MAT4C1ERKNS_4MAT2E( struct $N4MATH4MAT4E* THIS$1, struct $N4MATH4MAT2E* M$1 )
{
	double* TMP$1134$1;
	label$2346:;
	__builtin_memset( (struct $N4MATH10BASEMATRIXE*)THIS$1, 0, 8ll );
	void* vr$2 = malloc( 128ull );
	TMP$1134$1 = (double*)vr$2;
	if( TMP$1134$1 == (double*)0ull ) goto label$2348;
	__builtin_memset( TMP$1134$1, 0, 128ull );
	label$2348:;
	*(double**)THIS$1 = TMP$1134$1;
	double* P$1;
	double* vr$4 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M$1 );
	P$1 = vr$4;
	*(*(double**)THIS$1) = *(double*)P$1;
	*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)P$1 + 8ll);
	*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)P$1 + 16ll);
	*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)P$1 + 24ll);
	*(double*)((uint8*)*(double**)THIS$1 + 80ll) = 0x1.p+0;
	*(double*)((uint8*)*(double**)THIS$1 + 120ll) = 0x1.p+0;
	label$2347:;
}

void _ZN4MATH4MAT4C1ERKNS_4MAT3E( struct $N4MATH4MAT4E* THIS$1, struct $N4MATH4MAT3E* M$1 )
{
	double* TMP$1135$1;
	label$2349:;
	__builtin_memset( (struct $N4MATH10BASEMATRIXE*)THIS$1, 0, 8ll );
	void* vr$2 = malloc( 128ull );
	TMP$1135$1 = (double*)vr$2;
	if( TMP$1135$1 == (double*)0ull ) goto label$2351;
	__builtin_memset( TMP$1135$1, 0, 128ull );
	label$2351:;
	*(double**)THIS$1 = TMP$1135$1;
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
	label$2350:;
}

void _ZN4MATH4MAT4C1ERKS0_( struct $N4MATH4MAT4E* THIS$1, struct $N4MATH4MAT4E* M$1 )
{
	double* TMP$1136$1;
	label$2352:;
	__builtin_memset( (struct $N4MATH10BASEMATRIXE*)THIS$1, 0, 8ll );
	void* vr$2 = malloc( 128ull );
	TMP$1136$1 = (double*)vr$2;
	if( TMP$1136$1 == (double*)0ull ) goto label$2354;
	__builtin_memset( TMP$1136$1, 0, 128ull );
	label$2354:;
	*(double**)THIS$1 = TMP$1136$1;
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
	label$2353:;
}

void _ZN4MATH4MAT4pLERKS0_( struct $N4MATH4MAT4E* THIS$1, struct $N4MATH4MAT4E* M$1 )
{
	label$2355:;
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
	label$2356:;
}

void _ZN4MATH4MAT4mIERKS0_( struct $N4MATH4MAT4E* THIS$1, struct $N4MATH4MAT4E* M$1 )
{
	label$2357:;
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
	label$2358:;
}

void _ZN4MATH4MAT4mLERKd( struct $N4MATH4MAT4E* THIS$1, double* N$1 )
{
	label$2359:;
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
	label$2360:;
}

void _ZN4MATH4MAT4mLERKS0_( struct $N4MATH4MAT4E* THIS$1, struct $N4MATH4MAT4E* M$1 )
{
	label$2361:;
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
	label$2362:;
}

void _ZN4MATH4MAT4dVERKd( struct $N4MATH4MAT4E* THIS$1, double* N$1 )
{
	label$2363:;
	if( *N$1 == 0x0p+0 ) goto label$2366;
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
	goto label$2365;
	label$2366:;
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
	label$2365:;
	label$2364:;
}

FBSTRING* _ZNK4MATH4MAT4cv8FBSTRINGEv( struct $N4MATH4MAT4E* THIS$1 )
{
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
	FBSTRING TMP$1169$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$2367:;
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
	__builtin_memset( &TMP$1138$1, 0, 24ll );
	FBSTRING* vr$51 = fb_StrConcat( &TMP$1138$1, (void*)"<math.mat4>{\x0A    ", 18ll, (void*)vr$48, -1ll );
	__builtin_memset( &TMP$1139$1, 0, 24ll );
	FBSTRING* vr$54 = fb_StrConcat( &TMP$1139$1, (void*)vr$51, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1140$1, 0, 24ll );
	FBSTRING* vr$57 = fb_StrConcat( &TMP$1140$1, (void*)vr$54, -1ll, (void*)vr$45, -1ll );
	__builtin_memset( &TMP$1141$1, 0, 24ll );
	FBSTRING* vr$60 = fb_StrConcat( &TMP$1141$1, (void*)vr$57, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1142$1, 0, 24ll );
	FBSTRING* vr$63 = fb_StrConcat( &TMP$1142$1, (void*)vr$60, -1ll, (void*)vr$42, -1ll );
	__builtin_memset( &TMP$1143$1, 0, 24ll );
	FBSTRING* vr$66 = fb_StrConcat( &TMP$1143$1, (void*)vr$63, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1144$1, 0, 24ll );
	FBSTRING* vr$69 = fb_StrConcat( &TMP$1144$1, (void*)vr$66, -1ll, (void*)vr$39, -1ll );
	__builtin_memset( &TMP$1145$1, 0, 24ll );
	FBSTRING* vr$72 = fb_StrConcat( &TMP$1145$1, (void*)vr$69, -1ll, (void*)",\x0A    ", 7ll );
	__builtin_memset( &TMP$1146$1, 0, 24ll );
	FBSTRING* vr$75 = fb_StrConcat( &TMP$1146$1, (void*)vr$72, -1ll, (void*)vr$36, -1ll );
	__builtin_memset( &TMP$1147$1, 0, 24ll );
	FBSTRING* vr$78 = fb_StrConcat( &TMP$1147$1, (void*)vr$75, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1148$1, 0, 24ll );
	FBSTRING* vr$81 = fb_StrConcat( &TMP$1148$1, (void*)vr$78, -1ll, (void*)vr$33, -1ll );
	__builtin_memset( &TMP$1149$1, 0, 24ll );
	FBSTRING* vr$84 = fb_StrConcat( &TMP$1149$1, (void*)vr$81, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1150$1, 0, 24ll );
	FBSTRING* vr$87 = fb_StrConcat( &TMP$1150$1, (void*)vr$84, -1ll, (void*)vr$30, -1ll );
	__builtin_memset( &TMP$1151$1, 0, 24ll );
	FBSTRING* vr$90 = fb_StrConcat( &TMP$1151$1, (void*)vr$87, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1152$1, 0, 24ll );
	FBSTRING* vr$93 = fb_StrConcat( &TMP$1152$1, (void*)vr$90, -1ll, (void*)vr$27, -1ll );
	__builtin_memset( &TMP$1153$1, 0, 24ll );
	FBSTRING* vr$96 = fb_StrConcat( &TMP$1153$1, (void*)vr$93, -1ll, (void*)",\x0A    ", 7ll );
	__builtin_memset( &TMP$1154$1, 0, 24ll );
	FBSTRING* vr$99 = fb_StrConcat( &TMP$1154$1, (void*)vr$96, -1ll, (void*)vr$24, -1ll );
	__builtin_memset( &TMP$1155$1, 0, 24ll );
	FBSTRING* vr$102 = fb_StrConcat( &TMP$1155$1, (void*)vr$99, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1156$1, 0, 24ll );
	FBSTRING* vr$105 = fb_StrConcat( &TMP$1156$1, (void*)vr$102, -1ll, (void*)vr$21, -1ll );
	__builtin_memset( &TMP$1157$1, 0, 24ll );
	FBSTRING* vr$108 = fb_StrConcat( &TMP$1157$1, (void*)vr$105, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1158$1, 0, 24ll );
	FBSTRING* vr$111 = fb_StrConcat( &TMP$1158$1, (void*)vr$108, -1ll, (void*)vr$18, -1ll );
	__builtin_memset( &TMP$1159$1, 0, 24ll );
	FBSTRING* vr$114 = fb_StrConcat( &TMP$1159$1, (void*)vr$111, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1160$1, 0, 24ll );
	FBSTRING* vr$117 = fb_StrConcat( &TMP$1160$1, (void*)vr$114, -1ll, (void*)vr$15, -1ll );
	__builtin_memset( &TMP$1161$1, 0, 24ll );
	FBSTRING* vr$120 = fb_StrConcat( &TMP$1161$1, (void*)vr$117, -1ll, (void*)",\x0A    ", 7ll );
	__builtin_memset( &TMP$1162$1, 0, 24ll );
	FBSTRING* vr$123 = fb_StrConcat( &TMP$1162$1, (void*)vr$120, -1ll, (void*)vr$12, -1ll );
	__builtin_memset( &TMP$1163$1, 0, 24ll );
	FBSTRING* vr$126 = fb_StrConcat( &TMP$1163$1, (void*)vr$123, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1164$1, 0, 24ll );
	FBSTRING* vr$129 = fb_StrConcat( &TMP$1164$1, (void*)vr$126, -1ll, (void*)vr$9, -1ll );
	__builtin_memset( &TMP$1165$1, 0, 24ll );
	FBSTRING* vr$132 = fb_StrConcat( &TMP$1165$1, (void*)vr$129, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1166$1, 0, 24ll );
	FBSTRING* vr$135 = fb_StrConcat( &TMP$1166$1, (void*)vr$132, -1ll, (void*)vr$6, -1ll );
	__builtin_memset( &TMP$1167$1, 0, 24ll );
	FBSTRING* vr$138 = fb_StrConcat( &TMP$1167$1, (void*)vr$135, -1ll, (void*)" , ", 4ll );
	__builtin_memset( &TMP$1168$1, 0, 24ll );
	FBSTRING* vr$141 = fb_StrConcat( &TMP$1168$1, (void*)vr$138, -1ll, (void*)vr$3, -1ll );
	__builtin_memset( &TMP$1169$1, 0, 24ll );
	FBSTRING* vr$144 = fb_StrConcat( &TMP$1169$1, (void*)vr$141, -1ll, (void*)"\x0A}", 3ll );
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$144, -1ll, 0 );
	goto label$2368;
	label$2368:;
	FBSTRING* vr$147 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$147;
}

void _ZN4MATH4MAT4aSERKNS_4MAT2E( struct $N4MATH4MAT4E* THIS$1, struct $N4MATH4MAT2E* M$1 )
{
	label$2369:;
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
	label$2370:;
}

void _ZN4MATH4MAT4aSERKNS_4MAT3E( struct $N4MATH4MAT4E* THIS$1, struct $N4MATH4MAT3E* M$1 )
{
	label$2371:;
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
	label$2372:;
}

void _ZN4MATH4MAT4aSERKS0_( struct $N4MATH4MAT4E* THIS$1, struct $N4MATH4MAT4E* M$1 )
{
	label$2373:;
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
	label$2374:;
}

struct $N4MATH4MAT4E* _ZN4MATH4MAT413FROMAXISANGLEERKdS2_S2_S2_( struct $N4MATH4MAT4E* tmp$1170$1, double* X$1, double* Y$1, double* Z$1, double* T$1 )
{
	label$2375:;
	struct $N4MATH4VEC3E A$1;
	_ZN4MATH4VEC3C1ERKdS2_S2_( &A$1, X$1, Y$1, Z$1 );
	double H$1;
	double vr$2 = _ZNK4MATH4VEC311NORM__get__Ev( (struct $N4MATH4VEC3E*)&A$1 );
	H$1 = vr$2;
	if( H$1 == 0x0p+0 ) goto label$2378;
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
		_ZN4MATH4MAT4C1ERKS0_( tmp$1170$1, (struct $N4MATH4MAT4E*)&R$2 );
		_ZN4MATH4MAT4D1Ev( &R$2 );
		goto label$2376;
		_ZN4MATH4MAT4D1Ev( &R$2 );
	}
	label$2378:;
	label$2377:;
	_ZN4MATH4MAT4C1Ev( tmp$1170$1 );
	goto label$2376;
	label$2376:;
	return tmp$1170$1;
}

struct $N4MATH4MAT4E* _ZN4MATH4MAT413FROMAXISANGLEERKNS_4VEC2ERKdS5_( struct $N4MATH4MAT4E* tmp$1173$1, struct $N4MATH4VEC2E* V$1, double* Z$1, double* T$1 )
{
	struct $N4MATH4MAT4E TMP$1174$1;
	label$2379:;
	struct $N4MATH4MAT4E* vr$5 = _ZN4MATH4MAT413FROMAXISANGLEERKdS2_S2_S2_( &TMP$1174$1, (double*)V$1, (double*)((uint8*)V$1 + 8ll), Z$1, T$1 );
	_ZN4MATH4MAT4C1ERKS0_( tmp$1173$1, (struct $N4MATH4MAT4E*)vr$5 );
	_ZN4MATH4MAT4D1Ev( &TMP$1174$1 );
	goto label$2380;
	label$2380:;
	return tmp$1173$1;
}

struct $N4MATH4MAT4E* _ZN4MATH4MAT413FROMAXISANGLEERKNS_4PVECERKdS5_( struct $N4MATH4MAT4E* tmp$1175$1, struct $N4MATH4PVECE* V$1, double* Z$1, double* T$1 )
{
	struct $N4MATH4MAT4E TMP$1176$1;
	double TMP$1177$1;
	double TMP$1178$1;
	label$2381:;
	double vr$0 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
	TMP$1178$1 = vr$0;
	double vr$2 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
	TMP$1177$1 = vr$2;
	struct $N4MATH4MAT4E* vr$5 = _ZN4MATH4MAT413FROMAXISANGLEERKdS2_S2_S2_( &TMP$1176$1, (double*)&TMP$1177$1, (double*)&TMP$1178$1, Z$1, T$1 );
	_ZN4MATH4MAT4C1ERKS0_( tmp$1175$1, (struct $N4MATH4MAT4E*)vr$5 );
	_ZN4MATH4MAT4D1Ev( &TMP$1176$1 );
	goto label$2382;
	label$2382:;
	return tmp$1175$1;
}

struct $N4MATH4MAT4E* _ZN4MATH4MAT413FROMAXISANGLEERKNS_4VEC3ERKd( struct $N4MATH4MAT4E* tmp$1179$1, struct $N4MATH4VEC3E* V$1, double* T$1 )
{
	struct $N4MATH4MAT4E TMP$1180$1;
	label$2383:;
	struct $N4MATH4MAT4E* vr$7 = _ZN4MATH4MAT413FROMAXISANGLEERKdS2_S2_S2_( &TMP$1180$1, (double*)V$1, (double*)((uint8*)V$1 + 8ll), (double*)((uint8*)V$1 + 16ll), T$1 );
	_ZN4MATH4MAT4C1ERKS0_( tmp$1179$1, (struct $N4MATH4MAT4E*)vr$7 );
	_ZN4MATH4MAT4D1Ev( &TMP$1180$1 );
	goto label$2384;
	label$2384:;
	return tmp$1179$1;
}

struct $N4MATH4MAT4E* _ZN4MATH4MAT413FROMAXISANGLEERKNS_4CVECERKd( struct $N4MATH4MAT4E* tmp$1181$1, struct $N4MATH4CVECE* V$1, double* T$1 )
{
	struct $N4MATH4MAT4E TMP$1182$1;
	double TMP$1183$1;
	double TMP$1184$1;
	label$2385:;
	double vr$2 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
	TMP$1184$1 = vr$2;
	double vr$4 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
	TMP$1183$1 = vr$4;
	struct $N4MATH4MAT4E* vr$7 = _ZN4MATH4MAT413FROMAXISANGLEERKdS2_S2_S2_( &TMP$1182$1, (double*)&TMP$1183$1, (double*)&TMP$1184$1, (double*)V$1, T$1 );
	_ZN4MATH4MAT4C1ERKS0_( tmp$1181$1, (struct $N4MATH4MAT4E*)vr$7 );
	_ZN4MATH4MAT4D1Ev( &TMP$1182$1 );
	goto label$2386;
	label$2386:;
	return tmp$1181$1;
}

struct $N4MATH4MAT4E* _ZN4MATH4MAT49FROMSCALEERKd( struct $N4MATH4MAT4E* tmp$1185$1, double* S$1 )
{
	label$2387:;
	struct $N4MATH4MAT4E R$1;
	_ZN4MATH4MAT4C1Ev( &R$1 );
	*(*(double**)&R$1) = *S$1;
	*(double*)((uint8*)*(double**)&R$1 + 40ll) = *S$1;
	*(double*)((uint8*)*(double**)&R$1 + 80ll) = *S$1;
	*(double*)((uint8*)*(double**)&R$1 + 120ll) = *S$1;
	_ZN4MATH4MAT4C1ERKS0_( tmp$1185$1, (struct $N4MATH4MAT4E*)&R$1 );
	_ZN4MATH4MAT4D1Ev( &R$1 );
	goto label$2388;
	_ZN4MATH4MAT4D1Ev( &R$1 );
	label$2388:;
	return tmp$1185$1;
}

struct $N4MATH4MAT4E* _ZN4MATH4MAT49FROMSCALEERKdS2_S2_( struct $N4MATH4MAT4E* tmp$1186$1, double* SX$1, double* SY$1, double* SZ$1 )
{
	label$2389:;
	struct $N4MATH4MAT4E R$1;
	_ZN4MATH4MAT4C1Ev( &R$1 );
	*(*(double**)&R$1) = *SX$1;
	*(double*)((uint8*)*(double**)&R$1 + 40ll) = *SY$1;
	*(double*)((uint8*)*(double**)&R$1 + 80ll) = *SZ$1;
	_ZN4MATH4MAT4C1ERKS0_( tmp$1186$1, (struct $N4MATH4MAT4E*)&R$1 );
	_ZN4MATH4MAT4D1Ev( &R$1 );
	goto label$2390;
	_ZN4MATH4MAT4D1Ev( &R$1 );
	label$2390:;
	return tmp$1186$1;
}

struct $N4MATH4MAT4E* _ZN4MATH4MAT415FROMTRANSLATIONERKdS2_S2_( struct $N4MATH4MAT4E* tmp$1187$1, double* TX$1, double* TY$1, double* TZ$1 )
{
	label$2391:;
	struct $N4MATH4MAT4E R$1;
	_ZN4MATH4MAT4C1Ev( &R$1 );
	*(double*)((uint8*)*(double**)&R$1 + 24ll) = *TX$1;
	*(double*)((uint8*)*(double**)&R$1 + 56ll) = *TY$1;
	*(double*)((uint8*)*(double**)&R$1 + 88ll) = *TZ$1;
	_ZN4MATH4MAT4C1ERKS0_( tmp$1187$1, (struct $N4MATH4MAT4E*)&R$1 );
	_ZN4MATH4MAT4D1Ev( &R$1 );
	goto label$2392;
	_ZN4MATH4MAT4D1Ev( &R$1 );
	label$2392:;
	return tmp$1187$1;
}

struct $N4MATH4MAT4E* _ZN4MATH4MAT415FROMTRANSLATIONERKNS_4VEC2ERKd( struct $N4MATH4MAT4E* tmp$1188$1, struct $N4MATH4VEC2E* T$1, double* TZ$1 )
{
	label$2393:;
	struct $N4MATH4MAT4E R$1;
	_ZN4MATH4MAT4C1Ev( &R$1 );
	*(double*)((uint8*)*(double**)&R$1 + 24ll) = *(double*)T$1;
	*(double*)((uint8*)*(double**)&R$1 + 56ll) = *(double*)((uint8*)T$1 + 8ll);
	*(double*)((uint8*)*(double**)&R$1 + 88ll) = *TZ$1;
	_ZN4MATH4MAT4C1ERKS0_( tmp$1188$1, (struct $N4MATH4MAT4E*)&R$1 );
	_ZN4MATH4MAT4D1Ev( &R$1 );
	goto label$2394;
	_ZN4MATH4MAT4D1Ev( &R$1 );
	label$2394:;
	return tmp$1188$1;
}

struct $N4MATH4MAT4E* _ZN4MATH4MAT415FROMTRANSLATIONERKNS_4PVECERKd( struct $N4MATH4MAT4E* tmp$1189$1, struct $N4MATH4PVECE* T$1, double* TZ$1 )
{
	label$2395:;
	struct $N4MATH4MAT4E R$1;
	_ZN4MATH4MAT4C1Ev( &R$1 );
	double vr$1 = _ZNK4MATH4PVEC8X__get__Ev( T$1 );
	*(double*)((uint8*)*(double**)&R$1 + 24ll) = vr$1;
	double vr$3 = _ZNK4MATH4PVEC8Y__get__Ev( T$1 );
	*(double*)((uint8*)*(double**)&R$1 + 56ll) = vr$3;
	*(double*)((uint8*)*(double**)&R$1 + 88ll) = *TZ$1;
	_ZN4MATH4MAT4C1ERKS0_( tmp$1189$1, (struct $N4MATH4MAT4E*)&R$1 );
	_ZN4MATH4MAT4D1Ev( &R$1 );
	goto label$2396;
	_ZN4MATH4MAT4D1Ev( &R$1 );
	label$2396:;
	return tmp$1189$1;
}

struct $N4MATH4MAT4E* _ZN4MATH4MAT415FROMTRANSLATIONERKNS_4VEC3E( struct $N4MATH4MAT4E* tmp$1190$1, struct $N4MATH4VEC3E* T$1 )
{
	label$2397:;
	struct $N4MATH4MAT4E R$1;
	_ZN4MATH4MAT4C1Ev( &R$1 );
	*(double*)((uint8*)*(double**)&R$1 + 24ll) = *(double*)T$1;
	*(double*)((uint8*)*(double**)&R$1 + 56ll) = *(double*)((uint8*)T$1 + 8ll);
	*(double*)((uint8*)*(double**)&R$1 + 88ll) = *(double*)((uint8*)T$1 + 16ll);
	_ZN4MATH4MAT4C1ERKS0_( tmp$1190$1, (struct $N4MATH4MAT4E*)&R$1 );
	_ZN4MATH4MAT4D1Ev( &R$1 );
	goto label$2398;
	_ZN4MATH4MAT4D1Ev( &R$1 );
	label$2398:;
	return tmp$1190$1;
}

struct $N4MATH4MAT4E* _ZN4MATH4MAT415FROMTRANSLATIONERKNS_4CVECE( struct $N4MATH4MAT4E* tmp$1191$1, struct $N4MATH4CVECE* T$1 )
{
	label$2399:;
	struct $N4MATH4MAT4E R$1;
	_ZN4MATH4MAT4C1Ev( &R$1 );
	double vr$1 = _ZNK4MATH4CVEC8X__get__Ev( T$1 );
	*(double*)((uint8*)*(double**)&R$1 + 24ll) = vr$1;
	double vr$3 = _ZNK4MATH4CVEC8Y__get__Ev( T$1 );
	*(double*)((uint8*)*(double**)&R$1 + 56ll) = vr$3;
	*(double*)((uint8*)*(double**)&R$1 + 88ll) = *(double*)T$1;
	_ZN4MATH4MAT4C1ERKS0_( tmp$1191$1, (struct $N4MATH4MAT4E*)&R$1 );
	_ZN4MATH4MAT4D1Ev( &R$1 );
	goto label$2400;
	_ZN4MATH4MAT4D1Ev( &R$1 );
	label$2400:;
	return tmp$1191$1;
}

double _ZNK4MATH4MAT43GETERKu7INTEGERS3_( struct $N4MATH4MAT4E* THIS$1, int64* X$1, int64* Y$1 )
{
	double TMP$1192$1;
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$2401:;
	if( ((((int64)-(*X$1 >= 0ll) & (int64)-(*X$1 < 4ll)) & (int64)-(*Y$1 >= 0ll)) & (int64)-(*Y$1 < 4ll)) == 0ll ) goto label$2403;
	TMP$1192$1 = *(double*)((uint8*)*(double**)THIS$1 + ((*X$1 + (*Y$1 << (2ll & 63ll))) << (3ll & 63ll)));
	goto label$2404;
	label$2403:;
	TMP$1192$1 = 0x0p+0;
	label$2404:;
	fb$result$1 = TMP$1192$1;
	goto label$2402;
	label$2402:;
	return fb$result$1;
}

struct $N4MATH4VEC4E _ZNK4MATH4MAT49GETCOLUMNERKu7INTEGER( struct $N4MATH4MAT4E* THIS$1, int64* X$1 )
{
	struct $N4MATH4VEC4E fb$result$1;
	label$2405:;
	{
		int64 TMP$1193$2;
		TMP$1193$2 = *X$1;
		if( TMP$1193$2 != 0ll ) goto label$2408;
		label$2409:;
		{
			_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, *(double**)THIS$1, (double*)((uint8*)*(double**)THIS$1 + 32ll), (double*)((uint8*)*(double**)THIS$1 + 64ll), (double*)((uint8*)*(double**)THIS$1 + 96ll) );
			goto label$2406;
		}
		goto label$2407;
		label$2408:;
		if( TMP$1193$2 != 1ll ) goto label$2410;
		label$2411:;
		{
			_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, (double*)((uint8*)*(double**)THIS$1 + 8ll), (double*)((uint8*)*(double**)THIS$1 + 40ll), (double*)((uint8*)*(double**)THIS$1 + 72ll), (double*)((uint8*)*(double**)THIS$1 + 104ll) );
			goto label$2406;
		}
		goto label$2407;
		label$2410:;
		if( TMP$1193$2 != 2ll ) goto label$2412;
		label$2413:;
		{
			_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, (double*)((uint8*)*(double**)THIS$1 + 16ll), (double*)((uint8*)*(double**)THIS$1 + 48ll), (double*)((uint8*)*(double**)THIS$1 + 80ll), (double*)((uint8*)*(double**)THIS$1 + 112ll) );
			goto label$2406;
		}
		goto label$2407;
		label$2412:;
		if( TMP$1193$2 != 3ll ) goto label$2414;
		label$2415:;
		{
			_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, (double*)((uint8*)*(double**)THIS$1 + 24ll), (double*)((uint8*)*(double**)THIS$1 + 56ll), (double*)((uint8*)*(double**)THIS$1 + 88ll), (double*)((uint8*)*(double**)THIS$1 + 120ll) );
			goto label$2406;
		}
		goto label$2407;
		label$2414:;
		{
			_ZN4MATH4VEC4C1Ev( &fb$result$1 );
			goto label$2406;
		}
		label$2416:;
		label$2407:;
	}
	label$2406:;
	return fb$result$1;
}

struct $N4MATH4VEC4E _ZNK4MATH4MAT46GETROWERKu7INTEGER( struct $N4MATH4MAT4E* THIS$1, int64* Y$1 )
{
	struct $N4MATH4VEC4E fb$result$1;
	label$2417:;
	{
		int64 TMP$1199$2;
		TMP$1199$2 = *Y$1;
		if( TMP$1199$2 != 0ll ) goto label$2420;
		label$2421:;
		{
			_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, *(double**)THIS$1, (double*)((uint8*)*(double**)THIS$1 + 8ll), (double*)((uint8*)*(double**)THIS$1 + 16ll), (double*)((uint8*)*(double**)THIS$1 + 24ll) );
			goto label$2418;
		}
		goto label$2419;
		label$2420:;
		if( TMP$1199$2 != 1ll ) goto label$2422;
		label$2423:;
		{
			_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, (double*)((uint8*)*(double**)THIS$1 + 32ll), (double*)((uint8*)*(double**)THIS$1 + 40ll), (double*)((uint8*)*(double**)THIS$1 + 48ll), (double*)((uint8*)*(double**)THIS$1 + 56ll) );
			goto label$2418;
		}
		goto label$2419;
		label$2422:;
		if( TMP$1199$2 != 2ll ) goto label$2424;
		label$2425:;
		{
			_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, (double*)((uint8*)*(double**)THIS$1 + 64ll), (double*)((uint8*)*(double**)THIS$1 + 72ll), (double*)((uint8*)*(double**)THIS$1 + 80ll), (double*)((uint8*)*(double**)THIS$1 + 88ll) );
			goto label$2418;
		}
		goto label$2419;
		label$2424:;
		if( TMP$1199$2 != 3ll ) goto label$2426;
		label$2427:;
		{
			_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, (double*)((uint8*)*(double**)THIS$1 + 96ll), (double*)((uint8*)*(double**)THIS$1 + 104ll), (double*)((uint8*)*(double**)THIS$1 + 112ll), (double*)((uint8*)*(double**)THIS$1 + 120ll) );
			goto label$2418;
		}
		goto label$2419;
		label$2426:;
		{
			_ZN4MATH4VEC4C1Ev( &fb$result$1 );
			goto label$2418;
		}
		label$2428:;
		label$2419:;
	}
	label$2418:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT43SETERKu7INTEGERS3_RKd( struct $N4MATH4MAT4E* THIS$1, int64* X$1, int64* Y$1, double* N$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2429:;
	if( ((((int64)-(*X$1 >= 0ll) & (int64)-(*X$1 < 4ll)) & (int64)-(*Y$1 >= 0ll)) & (int64)-(*Y$1 < 4ll)) == 0ll ) goto label$2432;
	{
		*(double*)((uint8*)*(double**)THIS$1 + ((*X$1 + (*Y$1 << (2ll & 63ll))) << (3ll & 63ll))) = *N$1;
		fb$result$1 = (boolean)1ll;
		goto label$2430;
	}
	label$2432:;
	label$2431:;
	fb$result$1 = (boolean)0ll;
	goto label$2430;
	label$2430:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT49SETCOLUMNERKu7INTEGERRKdS5_S5_S5_( struct $N4MATH4MAT4E* THIS$1, int64* X$1, double* N1$1, double* N2$1, double* N3$1, double* N4$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2433:;
	{
		int64 TMP$1205$2;
		TMP$1205$2 = *X$1;
		if( TMP$1205$2 != 0ll ) goto label$2436;
		label$2437:;
		{
			*(*(double**)THIS$1) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *N2$1;
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *N3$1;
			*(double*)((uint8*)*(double**)THIS$1 + 96ll) = *N4$1;
		}
		goto label$2435;
		label$2436:;
		if( TMP$1205$2 != 1ll ) goto label$2438;
		label$2439:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *N2$1;
			*(double*)((uint8*)*(double**)THIS$1 + 72ll) = *N3$1;
			*(double*)((uint8*)*(double**)THIS$1 + 104ll) = *N4$1;
		}
		goto label$2435;
		label$2438:;
		if( TMP$1205$2 != 2ll ) goto label$2440;
		label$2441:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *N2$1;
			*(double*)((uint8*)*(double**)THIS$1 + 80ll) = *N3$1;
			*(double*)((uint8*)*(double**)THIS$1 + 112ll) = *N4$1;
		}
		goto label$2435;
		label$2440:;
		if( TMP$1205$2 != 3ll ) goto label$2442;
		label$2443:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *N2$1;
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *N3$1;
			*(double*)((uint8*)*(double**)THIS$1 + 120ll) = *N4$1;
		}
		goto label$2435;
		label$2442:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2434;
		}
		label$2444:;
		label$2435:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2434;
	label$2434:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT49SETCOLUMNERKu7INTEGERRKNS_4VEC2ERKdS8_( struct $N4MATH4MAT4E* THIS$1, int64* X$1, struct $N4MATH4VEC2E* V$1, double* N1$1, double* N2$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2445:;
	{
		int64 TMP$1206$2;
		TMP$1206$2 = *X$1;
		if( TMP$1206$2 != 0ll ) goto label$2448;
		label$2449:;
		{
			*(*(double**)THIS$1) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 96ll) = *N2$1;
		}
		goto label$2447;
		label$2448:;
		if( TMP$1206$2 != 1ll ) goto label$2450;
		label$2451:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 72ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 104ll) = *N2$1;
		}
		goto label$2447;
		label$2450:;
		if( TMP$1206$2 != 2ll ) goto label$2452;
		label$2453:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 80ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 112ll) = *N2$1;
		}
		goto label$2447;
		label$2452:;
		if( TMP$1206$2 != 3ll ) goto label$2454;
		label$2455:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 120ll) = *N2$1;
		}
		goto label$2447;
		label$2454:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2446;
		}
		label$2456:;
		label$2447:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2446;
	label$2446:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT49SETCOLUMNERKu7INTEGERRKNS_4PVECERKdS8_( struct $N4MATH4MAT4E* THIS$1, int64* X$1, struct $N4MATH4PVECE* V$1, double* N1$1, double* N2$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2457:;
	{
		int64 TMP$1207$2;
		TMP$1207$2 = *X$1;
		if( TMP$1207$2 != 0ll ) goto label$2460;
		label$2461:;
		{
			double vr$2 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(*(double**)THIS$1) = vr$2;
			double vr$5 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = vr$5;
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 96ll) = *N2$1;
		}
		goto label$2459;
		label$2460:;
		if( TMP$1207$2 != 1ll ) goto label$2462;
		label$2463:;
		{
			double vr$14 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = vr$14;
			double vr$17 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = vr$17;
			*(double*)((uint8*)*(double**)THIS$1 + 72ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 104ll) = *N2$1;
		}
		goto label$2459;
		label$2462:;
		if( TMP$1207$2 != 2ll ) goto label$2464;
		label$2465:;
		{
			double vr$26 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = vr$26;
			double vr$29 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = vr$29;
			*(double*)((uint8*)*(double**)THIS$1 + 80ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 112ll) = *N2$1;
		}
		goto label$2459;
		label$2464:;
		if( TMP$1207$2 != 3ll ) goto label$2466;
		label$2467:;
		{
			double vr$38 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = vr$38;
			double vr$41 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = vr$41;
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 120ll) = *N2$1;
		}
		goto label$2459;
		label$2466:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2458;
		}
		label$2468:;
		label$2459:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2458;
	label$2458:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT49SETCOLUMNERKu7INTEGERRKNS_4VEC3ERKd( struct $N4MATH4MAT4E* THIS$1, int64* X$1, struct $N4MATH4VEC3E* V$1, double* N$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2469:;
	{
		int64 TMP$1208$2;
		TMP$1208$2 = *X$1;
		if( TMP$1208$2 != 0ll ) goto label$2472;
		label$2473:;
		{
			*(*(double**)THIS$1) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)((uint8*)V$1 + 16ll);
			*(double*)((uint8*)*(double**)THIS$1 + 96ll) = *N$1;
		}
		goto label$2471;
		label$2472:;
		if( TMP$1208$2 != 1ll ) goto label$2474;
		label$2475:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 72ll) = *(double*)((uint8*)V$1 + 16ll);
			*(double*)((uint8*)*(double**)THIS$1 + 104ll) = *N$1;
		}
		goto label$2471;
		label$2474:;
		if( TMP$1208$2 != 2ll ) goto label$2476;
		label$2477:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 80ll) = *(double*)((uint8*)V$1 + 16ll);
			*(double*)((uint8*)*(double**)THIS$1 + 112ll) = *N$1;
		}
		goto label$2471;
		label$2476:;
		if( TMP$1208$2 != 3ll ) goto label$2478;
		label$2479:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *(double*)((uint8*)V$1 + 16ll);
			*(double*)((uint8*)*(double**)THIS$1 + 120ll) = *N$1;
		}
		goto label$2471;
		label$2478:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2470;
		}
		label$2480:;
		label$2471:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2470;
	label$2470:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT49SETCOLUMNERKu7INTEGERRKNS_4CVECERKd( struct $N4MATH4MAT4E* THIS$1, int64* X$1, struct $N4MATH4CVECE* V$1, double* N$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2481:;
	{
		int64 TMP$1209$2;
		TMP$1209$2 = *X$1;
		if( TMP$1209$2 != 0ll ) goto label$2484;
		label$2485:;
		{
			double vr$2 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
			*(*(double**)THIS$1) = vr$2;
			double vr$5 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = vr$5;
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 96ll) = *N$1;
		}
		goto label$2483;
		label$2484:;
		if( TMP$1209$2 != 1ll ) goto label$2486;
		label$2487:;
		{
			double vr$14 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = vr$14;
			double vr$17 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = vr$17;
			*(double*)((uint8*)*(double**)THIS$1 + 72ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 104ll) = *N$1;
		}
		goto label$2483;
		label$2486:;
		if( TMP$1209$2 != 2ll ) goto label$2488;
		label$2489:;
		{
			double vr$26 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = vr$26;
			double vr$29 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = vr$29;
			*(double*)((uint8*)*(double**)THIS$1 + 80ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 112ll) = *N$1;
		}
		goto label$2483;
		label$2488:;
		if( TMP$1209$2 != 3ll ) goto label$2490;
		label$2491:;
		{
			double vr$38 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = vr$38;
			double vr$41 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = vr$41;
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 120ll) = *N$1;
		}
		goto label$2483;
		label$2490:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2482;
		}
		label$2492:;
		label$2483:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2482;
	label$2482:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT49SETCOLUMNERKu7INTEGERRKNS_4VEC4E( struct $N4MATH4MAT4E* THIS$1, int64* X$1, struct $N4MATH4VEC4E* V$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2493:;
	{
		int64 TMP$1210$2;
		TMP$1210$2 = *X$1;
		if( TMP$1210$2 != 0ll ) goto label$2496;
		label$2497:;
		{
			*(*(double**)THIS$1) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)((uint8*)V$1 + 16ll);
			*(double*)((uint8*)*(double**)THIS$1 + 96ll) = *(double*)((uint8*)V$1 + 24ll);
		}
		goto label$2495;
		label$2496:;
		if( TMP$1210$2 != 1ll ) goto label$2498;
		label$2499:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 72ll) = *(double*)((uint8*)V$1 + 16ll);
			*(double*)((uint8*)*(double**)THIS$1 + 104ll) = *(double*)((uint8*)V$1 + 24ll);
		}
		goto label$2495;
		label$2498:;
		if( TMP$1210$2 != 2ll ) goto label$2500;
		label$2501:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 80ll) = *(double*)((uint8*)V$1 + 16ll);
			*(double*)((uint8*)*(double**)THIS$1 + 112ll) = *(double*)((uint8*)V$1 + 24ll);
		}
		goto label$2495;
		label$2500:;
		if( TMP$1210$2 != 3ll ) goto label$2502;
		label$2503:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *(double*)((uint8*)V$1 + 16ll);
			*(double*)((uint8*)*(double**)THIS$1 + 120ll) = *(double*)((uint8*)V$1 + 24ll);
		}
		goto label$2495;
		label$2502:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2494;
		}
		label$2504:;
		label$2495:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2494;
	label$2494:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT46SETROWERKu7INTEGERRKdS5_S5_S5_( struct $N4MATH4MAT4E* THIS$1, int64* Y$1, double* N1$1, double* N2$1, double* N3$1, double* N4$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2505:;
	{
		int64 TMP$1211$2;
		TMP$1211$2 = *Y$1;
		if( TMP$1211$2 != 0ll ) goto label$2508;
		label$2509:;
		{
			*(*(double**)THIS$1) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *N2$1;
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *N3$1;
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *N4$1;
		}
		goto label$2507;
		label$2508:;
		if( TMP$1211$2 != 1ll ) goto label$2510;
		label$2511:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *N2$1;
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *N3$1;
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *N4$1;
		}
		goto label$2507;
		label$2510:;
		if( TMP$1211$2 != 2ll ) goto label$2512;
		label$2513:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 72ll) = *N2$1;
			*(double*)((uint8*)*(double**)THIS$1 + 80ll) = *N3$1;
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *N4$1;
		}
		goto label$2507;
		label$2512:;
		if( TMP$1211$2 != 3ll ) goto label$2514;
		label$2515:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 96ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *N2$1;
			*(double*)((uint8*)*(double**)THIS$1 + 112ll) = *N3$1;
			*(double*)((uint8*)*(double**)THIS$1 + 120ll) = *N4$1;
		}
		goto label$2507;
		label$2514:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2506;
		}
		label$2516:;
		label$2507:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2506;
	label$2506:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT46SETROWERKu7INTEGERRKNS_4VEC2ERKdS8_( struct $N4MATH4MAT4E* THIS$1, int64* Y$1, struct $N4MATH4VEC2E* V$1, double* N1$1, double* N2$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2517:;
	{
		int64 TMP$1212$2;
		TMP$1212$2 = *Y$1;
		if( TMP$1212$2 != 0ll ) goto label$2520;
		label$2521:;
		{
			*(*(double**)THIS$1) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *N2$1;
		}
		goto label$2519;
		label$2520:;
		if( TMP$1212$2 != 1ll ) goto label$2522;
		label$2523:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *N2$1;
		}
		goto label$2519;
		label$2522:;
		if( TMP$1212$2 != 2ll ) goto label$2524;
		label$2525:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 72ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 80ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *N2$1;
		}
		goto label$2519;
		label$2524:;
		if( TMP$1212$2 != 3ll ) goto label$2526;
		label$2527:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 96ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 112ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 120ll) = *N2$1;
		}
		goto label$2519;
		label$2526:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2518;
		}
		label$2528:;
		label$2519:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2518;
	label$2518:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT46SETROWERKu7INTEGERRKNS_4PVECERKdS8_( struct $N4MATH4MAT4E* THIS$1, int64* Y$1, struct $N4MATH4PVECE* V$1, double* N1$1, double* N2$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2529:;
	{
		int64 TMP$1213$2;
		TMP$1213$2 = *Y$1;
		if( TMP$1213$2 != 0ll ) goto label$2532;
		label$2533:;
		{
			double vr$2 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(*(double**)THIS$1) = vr$2;
			double vr$5 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = vr$5;
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *N2$1;
		}
		goto label$2531;
		label$2532:;
		if( TMP$1213$2 != 1ll ) goto label$2534;
		label$2535:;
		{
			double vr$14 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = vr$14;
			double vr$17 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = vr$17;
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *N2$1;
		}
		goto label$2531;
		label$2534:;
		if( TMP$1213$2 != 2ll ) goto label$2536;
		label$2537:;
		{
			double vr$26 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = vr$26;
			double vr$29 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 72ll) = vr$29;
			*(double*)((uint8*)*(double**)THIS$1 + 80ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *N2$1;
		}
		goto label$2531;
		label$2536:;
		if( TMP$1213$2 != 3ll ) goto label$2538;
		label$2539:;
		{
			double vr$38 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 96ll) = vr$38;
			double vr$41 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = vr$41;
			*(double*)((uint8*)*(double**)THIS$1 + 112ll) = *N1$1;
			*(double*)((uint8*)*(double**)THIS$1 + 120ll) = *N2$1;
		}
		goto label$2531;
		label$2538:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2530;
		}
		label$2540:;
		label$2531:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2530;
	label$2530:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT46SETROWERKu7INTEGERRKNS_4VEC3ERKd( struct $N4MATH4MAT4E* THIS$1, int64* Y$1, struct $N4MATH4VEC3E* V$1, double* N$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2541:;
	{
		int64 TMP$1214$2;
		TMP$1214$2 = *Y$1;
		if( TMP$1214$2 != 0ll ) goto label$2544;
		label$2545:;
		{
			*(*(double**)THIS$1) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)V$1 + 16ll);
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *N$1;
		}
		goto label$2543;
		label$2544:;
		if( TMP$1214$2 != 1ll ) goto label$2546;
		label$2547:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)((uint8*)V$1 + 16ll);
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *N$1;
		}
		goto label$2543;
		label$2546:;
		if( TMP$1214$2 != 2ll ) goto label$2548;
		label$2549:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 72ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 80ll) = *(double*)((uint8*)V$1 + 16ll);
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *N$1;
		}
		goto label$2543;
		label$2548:;
		if( TMP$1214$2 != 3ll ) goto label$2550;
		label$2551:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 96ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 112ll) = *(double*)((uint8*)V$1 + 16ll);
			*(double*)((uint8*)*(double**)THIS$1 + 120ll) = *N$1;
		}
		goto label$2543;
		label$2550:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2542;
		}
		label$2552:;
		label$2543:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2542;
	label$2542:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT46SETROWERKu7INTEGERRKNS_4CVECERKd( struct $N4MATH4MAT4E* THIS$1, int64* Y$1, struct $N4MATH4CVECE* V$1, double* N$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2553:;
	{
		int64 TMP$1215$2;
		TMP$1215$2 = *Y$1;
		if( TMP$1215$2 != 0ll ) goto label$2556;
		label$2557:;
		{
			double vr$2 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
			*(*(double**)THIS$1) = vr$2;
			double vr$5 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = vr$5;
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *N$1;
		}
		goto label$2555;
		label$2556:;
		if( TMP$1215$2 != 1ll ) goto label$2558;
		label$2559:;
		{
			double vr$14 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = vr$14;
			double vr$17 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = vr$17;
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *N$1;
		}
		goto label$2555;
		label$2558:;
		if( TMP$1215$2 != 2ll ) goto label$2560;
		label$2561:;
		{
			double vr$26 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = vr$26;
			double vr$29 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 72ll) = vr$29;
			*(double*)((uint8*)*(double**)THIS$1 + 80ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *N$1;
		}
		goto label$2555;
		label$2560:;
		if( TMP$1215$2 != 3ll ) goto label$2562;
		label$2563:;
		{
			double vr$38 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 96ll) = vr$38;
			double vr$41 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = vr$41;
			*(double*)((uint8*)*(double**)THIS$1 + 112ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 120ll) = *N$1;
		}
		goto label$2555;
		label$2562:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2554;
		}
		label$2564:;
		label$2555:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2554;
	label$2554:;
	return fb$result$1;
}

boolean _ZN4MATH4MAT46SETROWERKu7INTEGERRKNS_4VEC4E( struct $N4MATH4MAT4E* THIS$1, int64* Y$1, struct $N4MATH4VEC4E* V$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2565:;
	{
		int64 TMP$1216$2;
		TMP$1216$2 = *Y$1;
		if( TMP$1216$2 != 0ll ) goto label$2568;
		label$2569:;
		{
			*(*(double**)THIS$1) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 8ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 16ll) = *(double*)((uint8*)V$1 + 16ll);
			*(double*)((uint8*)*(double**)THIS$1 + 24ll) = *(double*)((uint8*)V$1 + 24ll);
		}
		goto label$2567;
		label$2568:;
		if( TMP$1216$2 != 1ll ) goto label$2570;
		label$2571:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 32ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 40ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 48ll) = *(double*)((uint8*)V$1 + 16ll);
			*(double*)((uint8*)*(double**)THIS$1 + 56ll) = *(double*)((uint8*)V$1 + 24ll);
		}
		goto label$2567;
		label$2570:;
		if( TMP$1216$2 != 2ll ) goto label$2572;
		label$2573:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 64ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 72ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 80ll) = *(double*)((uint8*)V$1 + 16ll);
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *(double*)((uint8*)V$1 + 24ll);
		}
		goto label$2567;
		label$2572:;
		if( TMP$1216$2 != 3ll ) goto label$2574;
		label$2575:;
		{
			*(double*)((uint8*)*(double**)THIS$1 + 96ll) = *(double*)V$1;
			*(double*)((uint8*)*(double**)THIS$1 + 88ll) = *(double*)((uint8*)V$1 + 8ll);
			*(double*)((uint8*)*(double**)THIS$1 + 112ll) = *(double*)((uint8*)V$1 + 16ll);
			*(double*)((uint8*)*(double**)THIS$1 + 120ll) = *(double*)((uint8*)V$1 + 24ll);
		}
		goto label$2567;
		label$2574:;
		{
			fb$result$1 = (boolean)0ll;
			goto label$2566;
		}
		label$2576:;
		label$2567:;
	}
	fb$result$1 = (boolean)1ll;
	goto label$2566;
	label$2566:;
	return fb$result$1;
}

FBSTRING* _ZNK4MATH4MAT46TOJSONERKb( struct $N4MATH4MAT4E* THIS$1, boolean* C$1 )
{
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
	FBSTRING TMP$1281$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$2577:;
	if( *C$1 == (boolean)0ll ) goto label$2579;
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
	__builtin_memset( &TMP$1218$1, 0, 24ll );
	FBSTRING* vr$52 = fb_StrConcat( &TMP$1218$1, (void*)"[", 2ll, (void*)vr$49, -1ll );
	__builtin_memset( &TMP$1219$1, 0, 24ll );
	FBSTRING* vr$55 = fb_StrConcat( &TMP$1219$1, (void*)vr$52, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1220$1, 0, 24ll );
	FBSTRING* vr$58 = fb_StrConcat( &TMP$1220$1, (void*)vr$55, -1ll, (void*)vr$46, -1ll );
	__builtin_memset( &TMP$1221$1, 0, 24ll );
	FBSTRING* vr$61 = fb_StrConcat( &TMP$1221$1, (void*)vr$58, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1222$1, 0, 24ll );
	FBSTRING* vr$64 = fb_StrConcat( &TMP$1222$1, (void*)vr$61, -1ll, (void*)vr$43, -1ll );
	__builtin_memset( &TMP$1223$1, 0, 24ll );
	FBSTRING* vr$67 = fb_StrConcat( &TMP$1223$1, (void*)vr$64, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1224$1, 0, 24ll );
	FBSTRING* vr$70 = fb_StrConcat( &TMP$1224$1, (void*)vr$67, -1ll, (void*)vr$40, -1ll );
	__builtin_memset( &TMP$1225$1, 0, 24ll );
	FBSTRING* vr$73 = fb_StrConcat( &TMP$1225$1, (void*)vr$70, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1226$1, 0, 24ll );
	FBSTRING* vr$76 = fb_StrConcat( &TMP$1226$1, (void*)vr$73, -1ll, (void*)vr$37, -1ll );
	__builtin_memset( &TMP$1227$1, 0, 24ll );
	FBSTRING* vr$79 = fb_StrConcat( &TMP$1227$1, (void*)vr$76, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1228$1, 0, 24ll );
	FBSTRING* vr$82 = fb_StrConcat( &TMP$1228$1, (void*)vr$79, -1ll, (void*)vr$34, -1ll );
	__builtin_memset( &TMP$1229$1, 0, 24ll );
	FBSTRING* vr$85 = fb_StrConcat( &TMP$1229$1, (void*)vr$82, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1230$1, 0, 24ll );
	FBSTRING* vr$88 = fb_StrConcat( &TMP$1230$1, (void*)vr$85, -1ll, (void*)vr$31, -1ll );
	__builtin_memset( &TMP$1231$1, 0, 24ll );
	FBSTRING* vr$91 = fb_StrConcat( &TMP$1231$1, (void*)vr$88, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1232$1, 0, 24ll );
	FBSTRING* vr$94 = fb_StrConcat( &TMP$1232$1, (void*)vr$91, -1ll, (void*)vr$28, -1ll );
	__builtin_memset( &TMP$1233$1, 0, 24ll );
	FBSTRING* vr$97 = fb_StrConcat( &TMP$1233$1, (void*)vr$94, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1234$1, 0, 24ll );
	FBSTRING* vr$100 = fb_StrConcat( &TMP$1234$1, (void*)vr$97, -1ll, (void*)vr$25, -1ll );
	__builtin_memset( &TMP$1235$1, 0, 24ll );
	FBSTRING* vr$103 = fb_StrConcat( &TMP$1235$1, (void*)vr$100, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1236$1, 0, 24ll );
	FBSTRING* vr$106 = fb_StrConcat( &TMP$1236$1, (void*)vr$103, -1ll, (void*)vr$22, -1ll );
	__builtin_memset( &TMP$1237$1, 0, 24ll );
	FBSTRING* vr$109 = fb_StrConcat( &TMP$1237$1, (void*)vr$106, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1238$1, 0, 24ll );
	FBSTRING* vr$112 = fb_StrConcat( &TMP$1238$1, (void*)vr$109, -1ll, (void*)vr$19, -1ll );
	__builtin_memset( &TMP$1239$1, 0, 24ll );
	FBSTRING* vr$115 = fb_StrConcat( &TMP$1239$1, (void*)vr$112, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1240$1, 0, 24ll );
	FBSTRING* vr$118 = fb_StrConcat( &TMP$1240$1, (void*)vr$115, -1ll, (void*)vr$16, -1ll );
	__builtin_memset( &TMP$1241$1, 0, 24ll );
	FBSTRING* vr$121 = fb_StrConcat( &TMP$1241$1, (void*)vr$118, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1242$1, 0, 24ll );
	FBSTRING* vr$124 = fb_StrConcat( &TMP$1242$1, (void*)vr$121, -1ll, (void*)vr$13, -1ll );
	__builtin_memset( &TMP$1243$1, 0, 24ll );
	FBSTRING* vr$127 = fb_StrConcat( &TMP$1243$1, (void*)vr$124, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1244$1, 0, 24ll );
	FBSTRING* vr$130 = fb_StrConcat( &TMP$1244$1, (void*)vr$127, -1ll, (void*)vr$10, -1ll );
	__builtin_memset( &TMP$1245$1, 0, 24ll );
	FBSTRING* vr$133 = fb_StrConcat( &TMP$1245$1, (void*)vr$130, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1246$1, 0, 24ll );
	FBSTRING* vr$136 = fb_StrConcat( &TMP$1246$1, (void*)vr$133, -1ll, (void*)vr$7, -1ll );
	__builtin_memset( &TMP$1247$1, 0, 24ll );
	FBSTRING* vr$139 = fb_StrConcat( &TMP$1247$1, (void*)vr$136, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1248$1, 0, 24ll );
	FBSTRING* vr$142 = fb_StrConcat( &TMP$1248$1, (void*)vr$139, -1ll, (void*)vr$4, -1ll );
	__builtin_memset( &TMP$1249$1, 0, 24ll );
	FBSTRING* vr$145 = fb_StrConcat( &TMP$1249$1, (void*)vr$142, -1ll, (void*)"]", 2ll );
	fb_StrInit( (void*)&TMP$1217$1, -1ll, (void*)vr$145, -1ll, 0 );
	goto label$2580;
	label$2579:;
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
	__builtin_memset( &TMP$1250$1, 0, 24ll );
	FBSTRING* vr$197 = fb_StrConcat( &TMP$1250$1, (void*)"[", 2ll, (void*)vr$194, -1ll );
	__builtin_memset( &TMP$1251$1, 0, 24ll );
	FBSTRING* vr$200 = fb_StrConcat( &TMP$1251$1, (void*)vr$197, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1252$1, 0, 24ll );
	FBSTRING* vr$203 = fb_StrConcat( &TMP$1252$1, (void*)vr$200, -1ll, (void*)vr$191, -1ll );
	__builtin_memset( &TMP$1253$1, 0, 24ll );
	FBSTRING* vr$206 = fb_StrConcat( &TMP$1253$1, (void*)vr$203, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1254$1, 0, 24ll );
	FBSTRING* vr$209 = fb_StrConcat( &TMP$1254$1, (void*)vr$206, -1ll, (void*)vr$188, -1ll );
	__builtin_memset( &TMP$1255$1, 0, 24ll );
	FBSTRING* vr$212 = fb_StrConcat( &TMP$1255$1, (void*)vr$209, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1256$1, 0, 24ll );
	FBSTRING* vr$215 = fb_StrConcat( &TMP$1256$1, (void*)vr$212, -1ll, (void*)vr$185, -1ll );
	__builtin_memset( &TMP$1257$1, 0, 24ll );
	FBSTRING* vr$218 = fb_StrConcat( &TMP$1257$1, (void*)vr$215, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1258$1, 0, 24ll );
	FBSTRING* vr$221 = fb_StrConcat( &TMP$1258$1, (void*)vr$218, -1ll, (void*)vr$182, -1ll );
	__builtin_memset( &TMP$1259$1, 0, 24ll );
	FBSTRING* vr$224 = fb_StrConcat( &TMP$1259$1, (void*)vr$221, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1260$1, 0, 24ll );
	FBSTRING* vr$227 = fb_StrConcat( &TMP$1260$1, (void*)vr$224, -1ll, (void*)vr$179, -1ll );
	__builtin_memset( &TMP$1261$1, 0, 24ll );
	FBSTRING* vr$230 = fb_StrConcat( &TMP$1261$1, (void*)vr$227, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1262$1, 0, 24ll );
	FBSTRING* vr$233 = fb_StrConcat( &TMP$1262$1, (void*)vr$230, -1ll, (void*)vr$176, -1ll );
	__builtin_memset( &TMP$1263$1, 0, 24ll );
	FBSTRING* vr$236 = fb_StrConcat( &TMP$1263$1, (void*)vr$233, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1264$1, 0, 24ll );
	FBSTRING* vr$239 = fb_StrConcat( &TMP$1264$1, (void*)vr$236, -1ll, (void*)vr$173, -1ll );
	__builtin_memset( &TMP$1265$1, 0, 24ll );
	FBSTRING* vr$242 = fb_StrConcat( &TMP$1265$1, (void*)vr$239, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1266$1, 0, 24ll );
	FBSTRING* vr$245 = fb_StrConcat( &TMP$1266$1, (void*)vr$242, -1ll, (void*)vr$170, -1ll );
	__builtin_memset( &TMP$1267$1, 0, 24ll );
	FBSTRING* vr$248 = fb_StrConcat( &TMP$1267$1, (void*)vr$245, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1268$1, 0, 24ll );
	FBSTRING* vr$251 = fb_StrConcat( &TMP$1268$1, (void*)vr$248, -1ll, (void*)vr$167, -1ll );
	__builtin_memset( &TMP$1269$1, 0, 24ll );
	FBSTRING* vr$254 = fb_StrConcat( &TMP$1269$1, (void*)vr$251, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1270$1, 0, 24ll );
	FBSTRING* vr$257 = fb_StrConcat( &TMP$1270$1, (void*)vr$254, -1ll, (void*)vr$164, -1ll );
	__builtin_memset( &TMP$1271$1, 0, 24ll );
	FBSTRING* vr$260 = fb_StrConcat( &TMP$1271$1, (void*)vr$257, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1272$1, 0, 24ll );
	FBSTRING* vr$263 = fb_StrConcat( &TMP$1272$1, (void*)vr$260, -1ll, (void*)vr$161, -1ll );
	__builtin_memset( &TMP$1273$1, 0, 24ll );
	FBSTRING* vr$266 = fb_StrConcat( &TMP$1273$1, (void*)vr$263, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1274$1, 0, 24ll );
	FBSTRING* vr$269 = fb_StrConcat( &TMP$1274$1, (void*)vr$266, -1ll, (void*)vr$158, -1ll );
	__builtin_memset( &TMP$1275$1, 0, 24ll );
	FBSTRING* vr$272 = fb_StrConcat( &TMP$1275$1, (void*)vr$269, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1276$1, 0, 24ll );
	FBSTRING* vr$275 = fb_StrConcat( &TMP$1276$1, (void*)vr$272, -1ll, (void*)vr$155, -1ll );
	__builtin_memset( &TMP$1277$1, 0, 24ll );
	FBSTRING* vr$278 = fb_StrConcat( &TMP$1277$1, (void*)vr$275, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1278$1, 0, 24ll );
	FBSTRING* vr$281 = fb_StrConcat( &TMP$1278$1, (void*)vr$278, -1ll, (void*)vr$152, -1ll );
	__builtin_memset( &TMP$1279$1, 0, 24ll );
	FBSTRING* vr$284 = fb_StrConcat( &TMP$1279$1, (void*)vr$281, -1ll, (void*)",", 2ll );
	__builtin_memset( &TMP$1280$1, 0, 24ll );
	FBSTRING* vr$287 = fb_StrConcat( &TMP$1280$1, (void*)vr$284, -1ll, (void*)vr$149, -1ll );
	__builtin_memset( &TMP$1281$1, 0, 24ll );
	FBSTRING* vr$290 = fb_StrConcat( &TMP$1281$1, (void*)vr$287, -1ll, (void*)"]", 2ll );
	fb_StrInit( (void*)&TMP$1217$1, -1ll, (void*)vr$290, -1ll, 0 );
	label$2580:;
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)&TMP$1217$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&TMP$1217$1 );
	goto label$2578;
	label$2578:;
	FBSTRING* vr$296 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$296;
}

struct $N4MATH4MAT4E* _ZN4MATHplERKNS_4MAT4ES2_( struct $N4MATH4MAT4E* tmp$1282$1, struct $N4MATH4MAT4E* M1$1, struct $N4MATH4MAT4E* M2$1 )
{
	label$2581:;
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
	_ZN4MATH4MAT4C1ERKS0_( tmp$1282$1, (struct $N4MATH4MAT4E*)&R$1 );
	_ZN4MATH4MAT4D1Ev( &R$1 );
	goto label$2582;
	_ZN4MATH4MAT4D1Ev( &R$1 );
	label$2582:;
	return tmp$1282$1;
}

struct $N4MATH4MAT4E* _ZN4MATHmiERKNS_4MAT4ES2_( struct $N4MATH4MAT4E* tmp$1283$1, struct $N4MATH4MAT4E* M1$1, struct $N4MATH4MAT4E* M2$1 )
{
	label$2583:;
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
	_ZN4MATH4MAT4C1ERKS0_( tmp$1283$1, (struct $N4MATH4MAT4E*)&R$1 );
	_ZN4MATH4MAT4D1Ev( &R$1 );
	goto label$2584;
	_ZN4MATH4MAT4D1Ev( &R$1 );
	label$2584:;
	return tmp$1283$1;
}

struct $N4MATH4MAT4E* _ZN4MATHmlERKNS_4MAT4ERKd( struct $N4MATH4MAT4E* tmp$1284$1, struct $N4MATH4MAT4E* M$1, double* N$1 )
{
	label$2585:;
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
	_ZN4MATH4MAT4C1ERKS0_( tmp$1284$1, (struct $N4MATH4MAT4E*)&R$1 );
	_ZN4MATH4MAT4D1Ev( &R$1 );
	goto label$2586;
	_ZN4MATH4MAT4D1Ev( &R$1 );
	label$2586:;
	return tmp$1284$1;
}

struct $N4MATH4MAT4E* _ZN4MATHmlERKdRKNS_4MAT4E( struct $N4MATH4MAT4E* tmp$1285$1, double* N$1, struct $N4MATH4MAT4E* M$1 )
{
	label$2587:;
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
	_ZN4MATH4MAT4C1ERKS0_( tmp$1285$1, (struct $N4MATH4MAT4E*)&R$1 );
	_ZN4MATH4MAT4D1Ev( &R$1 );
	goto label$2588;
	_ZN4MATH4MAT4D1Ev( &R$1 );
	label$2588:;
	return tmp$1285$1;
}

struct $N4MATH4MAT4E* _ZN4MATHmlERKNS_4MAT4ES2_( struct $N4MATH4MAT4E* tmp$1286$1, struct $N4MATH4MAT4E* M1$1, struct $N4MATH4MAT4E* M2$1 )
{
	label$2589:;
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
	_ZN4MATH4MAT4C1ERKS0_( tmp$1286$1, (struct $N4MATH4MAT4E*)&R$1 );
	_ZN4MATH4MAT4D1Ev( &R$1 );
	goto label$2590;
	_ZN4MATH4MAT4D1Ev( &R$1 );
	label$2590:;
	return tmp$1286$1;
}

struct $N4MATH4VEC4E _ZN4MATHmlERKNS_4MAT4ERKNS_4VEC4E( struct $N4MATH4MAT4E* M$1, struct $N4MATH4VEC4E* V$1 )
{
	double TMP$1288$1;
	double TMP$1289$1;
	double TMP$1290$1;
	double TMP$1291$1;
	struct $N4MATH4VEC4E fb$result$1;
	label$2591:;
	double* P$1;
	double* vr$0 = _ZNK4MATH10BASEMATRIX11DATA__get__Ev( (struct $N4MATH10BASEMATRIXE*)M$1 );
	P$1 = vr$0;
	TMP$1291$1 = (((*(double*)((uint8*)P$1 + 96ll) * *(double*)V$1) + (*(double*)((uint8*)P$1 + 104ll) * *(double*)((uint8*)V$1 + 8ll))) + (*(double*)((uint8*)P$1 + 112ll) * *(double*)((uint8*)V$1 + 16ll))) + (*(double*)((uint8*)P$1 + 120ll) * *(double*)((uint8*)V$1 + 24ll));
	TMP$1290$1 = (((*(double*)((uint8*)P$1 + 64ll) * *(double*)V$1) + (*(double*)((uint8*)P$1 + 72ll) * *(double*)((uint8*)V$1 + 8ll))) + (*(double*)((uint8*)P$1 + 80ll) * *(double*)((uint8*)V$1 + 16ll))) + (*(double*)((uint8*)P$1 + 88ll) * *(double*)((uint8*)V$1 + 24ll));
	TMP$1289$1 = (((*(double*)((uint8*)P$1 + 32ll) * *(double*)V$1) + (*(double*)((uint8*)P$1 + 40ll) * *(double*)((uint8*)V$1 + 8ll))) + (*(double*)((uint8*)P$1 + 48ll) * *(double*)((uint8*)V$1 + 16ll))) + (*(double*)((uint8*)P$1 + 56ll) * *(double*)((uint8*)V$1 + 24ll));
	TMP$1288$1 = (((*(double*)P$1 * *(double*)V$1) + (*(double*)((uint8*)P$1 + 8ll) * *(double*)((uint8*)V$1 + 8ll))) + (*(double*)((uint8*)P$1 + 16ll) * *(double*)((uint8*)V$1 + 16ll))) + (*(double*)((uint8*)P$1 + 24ll) * *(double*)((uint8*)V$1 + 24ll));
	_ZN4MATH4VEC4C1ERKdS2_S2_S2_( &fb$result$1, (double*)&TMP$1288$1, (double*)&TMP$1289$1, (double*)&TMP$1290$1, (double*)&TMP$1291$1 );
	goto label$2592;
	label$2592:;
	return fb$result$1;
}

struct $N4MATH4MAT4E* _ZN4MATHdvERKNS_4MAT4ERKd( struct $N4MATH4MAT4E* tmp$1292$1, struct $N4MATH4MAT4E* M$1, double* N$1 )
{
	label$2593:;
	if( *N$1 == 0x0p+0 ) goto label$2596;
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
		_ZN4MATH4MAT4C1ERKS0_( tmp$1292$1, (struct $N4MATH4MAT4E*)&R$2 );
		_ZN4MATH4MAT4D1Ev( &R$2 );
		goto label$2594;
		_ZN4MATH4MAT4D1Ev( &R$2 );
	}
	label$2596:;
	label$2595:;
	_ZN4MATH4MAT4C1Ev( tmp$1292$1 );
	goto label$2594;
	label$2594:;
	return tmp$1292$1;
}

int64 _ZNK4MATH9BASEARRAY13LENGTH__get__Ev( struct $N4MATH9BASEARRAYE* THIS$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$2597:;
	fb$result$1 = *(int64*)THIS$1;
	goto label$2598;
	label$2598:;
	return fb$result$1;
}

void _ZN4MATH5ARRAYC1Ev( struct $N4MATH5ARRAYE* THIS$1 )
{
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (double**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	label$2599:;
	label$2600:;
}

void _ZN4MATH5ARRAYC1ERKu7INTEGER( struct $N4MATH5ARRAYE* THIS$1, int64* L$1 )
{
	label$2601:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (double**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	if( *L$1 <= 0ll ) goto label$2604;
	{
		double* TMP$1300$2;
		*(int64*)THIS$1 = *L$1;
		void* vr$11 = malloc( *(uint64*)L$1 << (3ull & 63ll) );
		TMP$1300$2 = (double*)vr$11;
		if( TMP$1300$2 == (double*)0ull ) goto label$2605;
		__builtin_memset( TMP$1300$2, 0, *(uint64*)L$1 << (3ull & 63ll) );
		label$2605:;
		*(double**)((uint8*)THIS$1 + 8ll) = TMP$1300$2;
	}
	label$2604:;
	label$2603:;
	label$2602:;
}

void _ZN4MATH5ARRAYC1ERKu7INTEGERPFvRdERKb( struct $N4MATH5ARRAYE* THIS$1, int64* L$1, tmp$1294 F$1, boolean* R$1 )
{
	label$2606:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (double**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	if( *L$1 <= 0ll ) goto label$2609;
	{
		double* TMP$1301$2;
		*(int64*)THIS$1 = *L$1;
		void* vr$11 = malloc( *(uint64*)L$1 << (3ull & 63ll) );
		TMP$1301$2 = (double*)vr$11;
		if( TMP$1301$2 == (double*)0ull ) goto label$2610;
		__builtin_memset( TMP$1301$2, 0, *(uint64*)L$1 << (3ull & 63ll) );
		label$2610:;
		*(double**)((uint8*)THIS$1 + 8ll) = TMP$1301$2;
		if( F$1 == (tmp$1294)0ull ) goto label$2612;
		{
			if( *R$1 == (boolean)0ll ) goto label$2614;
			{
				{
					int64 I$5;
					I$5 = *L$1 + -1ll;
					goto label$2615;
					label$2618:;
					{
						(F$1)( (double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$5 << (3ll & 63ll))) );
					}
					label$2616:;
					I$5 = I$5 + -1ll;
					label$2615:;
					if( I$5 >= 0ll ) goto label$2618;
					label$2617:;
				}
			}
			goto label$2613;
			label$2614:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1302$5;
					TMP$1302$5 = *L$1 + -1ll;
					goto label$2619;
					label$2622:;
					{
						(F$1)( (double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$5 << (3ll & 63ll))) );
					}
					label$2620:;
					I$5 = I$5 + 1ll;
					label$2619:;
					if( I$5 <= TMP$1302$5 ) goto label$2622;
					label$2621:;
				}
			}
			label$2613:;
		}
		label$2612:;
		label$2611:;
	}
	label$2609:;
	label$2608:;
	label$2607:;
}

void _ZN4MATH5ARRAYC1ERKu7INTEGERPFvRdS3_ERKb( struct $N4MATH5ARRAYE* THIS$1, int64* L$1, tmp$1295 F$1, boolean* R$1 )
{
	label$2623:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (double**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	if( *L$1 <= 0ll ) goto label$2626;
	{
		double* TMP$1303$2;
		*(int64*)THIS$1 = *L$1;
		void* vr$11 = malloc( *(uint64*)L$1 << (3ull & 63ll) );
		TMP$1303$2 = (double*)vr$11;
		if( TMP$1303$2 == (double*)0ull ) goto label$2627;
		__builtin_memset( TMP$1303$2, 0, *(uint64*)L$1 << (3ull & 63ll) );
		label$2627:;
		*(double**)((uint8*)THIS$1 + 8ll) = TMP$1303$2;
		if( F$1 == (tmp$1295)0ull ) goto label$2629;
		{
			if( *R$1 == (boolean)0ll ) goto label$2631;
			{
				{
					int64 I$5;
					I$5 = *L$1 + -1ll;
					goto label$2632;
					label$2635:;
					{
						(F$1)( (double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$5 << (3ll & 63ll))), (int64*)&I$5 );
					}
					label$2633:;
					I$5 = I$5 + -1ll;
					label$2632:;
					if( I$5 >= 0ll ) goto label$2635;
					label$2634:;
				}
			}
			goto label$2630;
			label$2631:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1304$5;
					TMP$1304$5 = *L$1 + -1ll;
					goto label$2636;
					label$2639:;
					{
						(F$1)( (double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$5 << (3ll & 63ll))), (int64*)&I$5 );
					}
					label$2637:;
					I$5 = I$5 + 1ll;
					label$2636:;
					if( I$5 <= TMP$1304$5 ) goto label$2639;
					label$2638:;
				}
			}
			label$2630:;
		}
		label$2629:;
		label$2628:;
	}
	label$2626:;
	label$2625:;
	label$2624:;
}

void _ZN4MATH5ARRAYC1ERKS0_( struct $N4MATH5ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	label$2640:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (double**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (double*)((uint8*)THIS$1 + 16ll), 0, 8ll );
	if( *(int64*)A$1 == 0ll ) goto label$2643;
	{
		double* TMP$1305$2;
		*(int64*)THIS$1 = *(int64*)A$1;
		void* vr$11 = malloc( *(uint64*)A$1 << (3ull & 63ll) );
		TMP$1305$2 = (double*)vr$11;
		if( TMP$1305$2 == (double*)0ull ) goto label$2644;
		__builtin_memset( TMP$1305$2, 0, *(uint64*)A$1 << (3ull & 63ll) );
		label$2644:;
		*(double**)((uint8*)THIS$1 + 8ll) = TMP$1305$2;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1306$3;
			TMP$1306$3 = *(int64*)A$1 + -1ll;
			goto label$2645;
			label$2648:;
			{
				*(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))) = *(double*)((uint8*)*(double**)((uint8*)A$1 + 8ll) + (I$3 << (3ll & 63ll)));
			}
			label$2646:;
			I$3 = I$3 + 1ll;
			label$2645:;
			if( I$3 <= TMP$1306$3 ) goto label$2648;
			label$2647:;
		}
	}
	label$2643:;
	label$2642:;
	label$2641:;
}

void _ZN4MATH5ARRAYD1Ev( struct $N4MATH5ARRAYE* THIS$1 )
{
	label$2649:;
	if( *(double**)((uint8*)THIS$1 + 8ll) == (double*)0ull ) goto label$2652;
	{
		if( *(double**)((uint8*)THIS$1 + 8ll) == (double*)0ull ) goto label$2653;
		free( *(void**)((uint8*)THIS$1 + 8ll) );
		label$2653:;
		label$2652:;
	}
	label$2650:;
}

void _ZN4MATH5ARRAYv27selfcatERKd( struct $N4MATH5ARRAYE* THIS$1, double* N$1 )
{
	label$2654:;
	if( *(int64*)THIS$1 == 0ll ) goto label$2657;
	{
		double* TMP$1307$2;
		*(int64*)THIS$1 = *(int64*)THIS$1 + 1ll;
		double* Q$2;
		void* vr$6 = malloc( *(uint64*)THIS$1 << (3ull & 63ll) );
		TMP$1307$2 = (double*)vr$6;
		if( TMP$1307$2 == (double*)0ull ) goto label$2658;
		__builtin_memset( TMP$1307$2, 0, *(uint64*)THIS$1 << (3ull & 63ll) );
		label$2658:;
		Q$2 = TMP$1307$2;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1308$3;
			TMP$1308$3 = *(int64*)THIS$1 + -2ll;
			goto label$2659;
			label$2662:;
			{
				*(double*)((uint8*)Q$2 + (I$3 << (3ll & 63ll))) = *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll)));
			}
			label$2660:;
			I$3 = I$3 + 1ll;
			label$2659:;
			if( I$3 <= TMP$1308$3 ) goto label$2662;
			label$2661:;
		}
		*(double*)((uint8*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (*(int64*)THIS$1 << (3ll & 63ll))) + -8ll) = *N$1;
		if( *(double**)((uint8*)THIS$1 + 8ll) == (double*)0ull ) goto label$2663;
		free( *(void**)((uint8*)THIS$1 + 8ll) );
		label$2663:;
		*(double**)((uint8*)THIS$1 + 8ll) = Q$2;
	}
	goto label$2656;
	label$2657:;
	{
		double* TMP$1309$2;
		*(int64*)THIS$1 = 1ll;
		void* vr$26 = malloc( 8ull );
		TMP$1309$2 = (double*)vr$26;
		if( TMP$1309$2 == (double*)0ull ) goto label$2664;
		__builtin_memset( TMP$1309$2, 0, 8ull );
		label$2664:;
		*(double**)((uint8*)THIS$1 + 8ll) = TMP$1309$2;
		*(*(double**)((uint8*)THIS$1 + 8ll)) = *N$1;
	}
	label$2656:;
	label$2655:;
}

void _ZN4MATH5ARRAYv27selfcatERKS0_( struct $N4MATH5ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	label$2665:;
	if( THIS$1 == A$1 ) goto label$2668;
	{
		if( *(int64*)A$1 == 0ll ) goto label$2670;
		{
			if( *(int64*)THIS$1 == 0ll ) goto label$2672;
			{
				double* TMP$1310$4;
				double* Q$4;
				void* vr$6 = malloc( (uint64)(*(int64*)THIS$1 + *(int64*)A$1) << (3ull & 63ll) );
				TMP$1310$4 = (double*)vr$6;
				if( TMP$1310$4 == (double*)0ull ) goto label$2673;
				__builtin_memset( TMP$1310$4, 0, (uint64)(*(int64*)THIS$1 + *(int64*)A$1) << (3ull & 63ll) );
				label$2673:;
				Q$4 = TMP$1310$4;
				int64 I$4;
				__builtin_memset( &I$4, 0, 8ll );
				{
					I$4 = 0ll;
					int64 TMP$1311$5;
					TMP$1311$5 = *(int64*)THIS$1 + -1ll;
					goto label$2674;
					label$2677:;
					{
						*(double*)((uint8*)Q$4 + (I$4 << (3ll & 63ll))) = *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$4 << (3ll & 63ll)));
					}
					label$2675:;
					I$4 = I$4 + 1ll;
					label$2674:;
					if( I$4 <= TMP$1311$5 ) goto label$2677;
					label$2676:;
				}
				{
					I$4 = 0ll;
					int64 TMP$1312$5;
					TMP$1312$5 = *(int64*)A$1 + -1ll;
					goto label$2678;
					label$2681:;
					{
						*(double*)((uint8*)Q$4 + ((*(int64*)THIS$1 + I$4) << (3ll & 63ll))) = *(double*)((uint8*)*(double**)((uint8*)A$1 + 8ll) + (I$4 << (3ll & 63ll)));
					}
					label$2679:;
					I$4 = I$4 + 1ll;
					label$2678:;
					if( I$4 <= TMP$1312$5 ) goto label$2681;
					label$2680:;
				}
				*(int64*)THIS$1 = *(int64*)THIS$1 + *(int64*)A$1;
				if( *(double**)((uint8*)THIS$1 + 8ll) == (double*)0ull ) goto label$2682;
				free( *(void**)((uint8*)THIS$1 + 8ll) );
				label$2682:;
				*(double**)((uint8*)THIS$1 + 8ll) = Q$4;
			}
			goto label$2671;
			label$2672:;
			{
				double* TMP$1313$4;
				*(int64*)THIS$1 = *(int64*)A$1;
				void* vr$41 = malloc( *(uint64*)THIS$1 << (3ull & 63ll) );
				TMP$1313$4 = (double*)vr$41;
				if( TMP$1313$4 == (double*)0ull ) goto label$2683;
				__builtin_memset( TMP$1313$4, 0, *(uint64*)THIS$1 << (3ull & 63ll) );
				label$2683:;
				*(double**)((uint8*)THIS$1 + 8ll) = TMP$1313$4;
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1314$5;
					TMP$1314$5 = *(int64*)THIS$1 + -1ll;
					goto label$2684;
					label$2687:;
					{
						*(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$5 << (3ll & 63ll))) = *(double*)((uint8*)*(double**)((uint8*)A$1 + 8ll) + (I$5 << (3ll & 63ll)));
					}
					label$2685:;
					I$5 = I$5 + 1ll;
					label$2684:;
					if( I$5 <= TMP$1314$5 ) goto label$2687;
					label$2686:;
				}
			}
			label$2671:;
		}
		label$2670:;
		label$2669:;
	}
	goto label$2667;
	label$2668:;
	{
		if( *(int64*)THIS$1 == 0ll ) goto label$2689;
		{
			double* TMP$1315$3;
			double* Q$3;
			void* vr$58 = malloc( (uint64)(*(int64*)THIS$1 << (1ll & 63ll)) << (3ull & 63ll) );
			TMP$1315$3 = (double*)vr$58;
			if( TMP$1315$3 == (double*)0ull ) goto label$2690;
			__builtin_memset( TMP$1315$3, 0, (uint64)(*(int64*)THIS$1 << (1ll & 63ll)) << (3ull & 63ll) );
			label$2690:;
			Q$3 = TMP$1315$3;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1316$4;
				TMP$1316$4 = *(int64*)THIS$1 + -1ll;
				goto label$2691;
				label$2694:;
				{
					*(double*)((uint8*)Q$3 + (I$4 << (3ll & 63ll))) = *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$4 << (3ll & 63ll)));
					*(double*)((uint8*)Q$3 + ((*(int64*)THIS$1 + I$4) << (3ll & 63ll))) = *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$4 << (3ll & 63ll)));
				}
				label$2692:;
				I$4 = I$4 + 1ll;
				label$2691:;
				if( I$4 <= TMP$1316$4 ) goto label$2694;
				label$2693:;
			}
			*(int64*)THIS$1 = *(int64*)THIS$1 << (1ll & 63ll);
			if( *(double**)((uint8*)THIS$1 + 8ll) == (double*)0ull ) goto label$2695;
			free( *(void**)((uint8*)THIS$1 + 8ll) );
			label$2695:;
			*(double**)((uint8*)THIS$1 + 8ll) = Q$3;
		}
		label$2689:;
		label$2688:;
	}
	label$2667:;
	label$2666:;
}

double* _ZN4MATH5ARRAYixERKu7INTEGER( struct $N4MATH5ARRAYE* THIS$1, int64* I$1 )
{
	double* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$2696:;
	if( ((int64)-(*I$1 >= 0ll) & (int64)-(*I$1 < *(int64*)THIS$1)) == 0ll ) goto label$2699;
	{
		fb$result$1 = (double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (*I$1 << (3ll & 63ll)));
		goto label$2697;
		label$2699:;
	}
	*(double*)((uint8*)THIS$1 + 16ll) = 0x0p+0;
	fb$result$1 = (double*)((uint8*)THIS$1 + 16ll);
	goto label$2697;
	label$2697:;
	return fb$result$1;
}

void _ZN4MATH5ARRAYpLERKd( struct $N4MATH5ARRAYE* THIS$1, double* N$1 )
{
	label$2700:;
	if( *(int64*)THIS$1 == 0ll ) goto label$2703;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1317$3;
			TMP$1317$3 = *(int64*)THIS$1 + -1ll;
			goto label$2704;
			label$2707:;
			{
				*(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))) = *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))) + *N$1;
			}
			label$2705:;
			I$3 = I$3 + 1ll;
			label$2704:;
			if( I$3 <= TMP$1317$3 ) goto label$2707;
			label$2706:;
		}
	}
	label$2703:;
	label$2702:;
	label$2701:;
}

void _ZN4MATH5ARRAYpLERKS0_( struct $N4MATH5ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	label$2708:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$2711;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1318$3;
			TMP$1318$3 = *(int64*)THIS$1 + -1ll;
			goto label$2712;
			label$2715:;
			{
				*(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))) = *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))) + *(double*)((uint8*)*(double**)((uint8*)A$1 + 8ll) + (I$3 << (3ll & 63ll)));
			}
			label$2713:;
			I$3 = I$3 + 1ll;
			label$2712:;
			if( I$3 <= TMP$1318$3 ) goto label$2715;
			label$2714:;
		}
	}
	label$2711:;
	label$2710:;
	label$2709:;
}

void _ZN4MATH5ARRAYmIERKd( struct $N4MATH5ARRAYE* THIS$1, double* N$1 )
{
	label$2716:;
	if( *(int64*)THIS$1 == 0ll ) goto label$2719;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1319$3;
			TMP$1319$3 = *(int64*)THIS$1 + -1ll;
			goto label$2720;
			label$2723:;
			{
				*(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))) = *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))) - *N$1;
			}
			label$2721:;
			I$3 = I$3 + 1ll;
			label$2720:;
			if( I$3 <= TMP$1319$3 ) goto label$2723;
			label$2722:;
		}
	}
	label$2719:;
	label$2718:;
	label$2717:;
}

void _ZN4MATH5ARRAYmIERKS0_( struct $N4MATH5ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	label$2724:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$2727;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1320$3;
			TMP$1320$3 = *(int64*)THIS$1 + -1ll;
			goto label$2728;
			label$2731:;
			{
				*(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))) = *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))) - *(double*)((uint8*)*(double**)((uint8*)A$1 + 8ll) + (I$3 << (3ll & 63ll)));
			}
			label$2729:;
			I$3 = I$3 + 1ll;
			label$2728:;
			if( I$3 <= TMP$1320$3 ) goto label$2731;
			label$2730:;
		}
	}
	label$2727:;
	label$2726:;
	label$2725:;
}

void _ZN4MATH5ARRAYmLERKd( struct $N4MATH5ARRAYE* THIS$1, double* N$1 )
{
	label$2732:;
	if( *(int64*)THIS$1 == 0ll ) goto label$2735;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1321$3;
			TMP$1321$3 = *(int64*)THIS$1 + -1ll;
			goto label$2736;
			label$2739:;
			{
				*(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))) = *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))) * *N$1;
			}
			label$2737:;
			I$3 = I$3 + 1ll;
			label$2736:;
			if( I$3 <= TMP$1321$3 ) goto label$2739;
			label$2738:;
		}
	}
	label$2735:;
	label$2734:;
	label$2733:;
}

void _ZN4MATH5ARRAYmLERKS0_( struct $N4MATH5ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	label$2740:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$2743;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1322$3;
			TMP$1322$3 = *(int64*)THIS$1 + -1ll;
			goto label$2744;
			label$2747:;
			{
				*(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))) = *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))) * *(double*)((uint8*)*(double**)((uint8*)A$1 + 8ll) + (I$3 << (3ll & 63ll)));
			}
			label$2745:;
			I$3 = I$3 + 1ll;
			label$2744:;
			if( I$3 <= TMP$1322$3 ) goto label$2747;
			label$2746:;
		}
	}
	label$2743:;
	label$2742:;
	label$2741:;
}

void _ZN4MATH5ARRAYdVERKd( struct $N4MATH5ARRAYE* THIS$1, double* N$1 )
{
	label$2748:;
	if( *(int64*)THIS$1 == 0ll ) goto label$2751;
	{
		if( *N$1 == 0x0p+0 ) goto label$2753;
		{
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1323$4;
				TMP$1323$4 = *(int64*)THIS$1 + -1ll;
				goto label$2754;
				label$2757:;
				{
					*(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$4 << (3ll & 63ll))) = *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$4 << (3ll & 63ll))) / *N$1;
				}
				label$2755:;
				I$4 = I$4 + 1ll;
				label$2754:;
				if( I$4 <= TMP$1323$4 ) goto label$2757;
				label$2756:;
			}
		}
		goto label$2752;
		label$2753:;
		{
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1324$4;
				TMP$1324$4 = *(int64*)THIS$1 + -1ll;
				goto label$2758;
				label$2761:;
				{
					*(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$4 << (3ll & 63ll))) = 0x0p+0;
				}
				label$2759:;
				I$4 = I$4 + 1ll;
				label$2758:;
				if( I$4 <= TMP$1324$4 ) goto label$2761;
				label$2760:;
			}
		}
		label$2752:;
	}
	label$2751:;
	label$2750:;
	label$2749:;
}

void _ZN4MATH5ARRAYdVERKS0_( struct $N4MATH5ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	label$2762:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$2765;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1325$3;
			TMP$1325$3 = *(int64*)THIS$1 + -1ll;
			goto label$2766;
			label$2769:;
			{
				double TMP$1326$4;
				if( *(double*)((uint8*)*(double**)((uint8*)A$1 + 8ll) + (I$3 << (3ll & 63ll))) == 0x0p+0 ) goto label$2770;
				TMP$1326$4 = *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))) / *(double*)((uint8*)*(double**)((uint8*)A$1 + 8ll) + (I$3 << (3ll & 63ll)));
				goto label$2771;
				label$2770:;
				TMP$1326$4 = 0x0p+0;
				label$2771:;
				*(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))) = TMP$1326$4;
			}
			label$2767:;
			I$3 = I$3 + 1ll;
			label$2766:;
			if( I$3 <= TMP$1325$3 ) goto label$2769;
			label$2768:;
		}
	}
	label$2765:;
	label$2764:;
	label$2763:;
}

void _ZN4MATH5ARRAYv27selfpowERKd( struct $N4MATH5ARRAYE* THIS$1, double* N$1 )
{
	label$2772:;
	if( *(int64*)THIS$1 == 0ll ) goto label$2775;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1327$3;
			TMP$1327$3 = *(int64*)THIS$1 + -1ll;
			goto label$2776;
			label$2779:;
			{
				double vr$7 = pow( *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))), *N$1 );
				*(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))) = vr$7;
			}
			label$2777:;
			I$3 = I$3 + 1ll;
			label$2776:;
			if( I$3 <= TMP$1327$3 ) goto label$2779;
			label$2778:;
		}
	}
	label$2775:;
	label$2774:;
	label$2773:;
}

void _ZN4MATH5ARRAYv27selfpowERKS0_( struct $N4MATH5ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	label$2780:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$2783;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1328$3;
			TMP$1328$3 = *(int64*)THIS$1 + -1ll;
			goto label$2784;
			label$2787:;
			{
				double vr$14 = pow( *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))), *(double*)((uint8*)*(double**)((uint8*)A$1 + 8ll) + (I$3 << (3ll & 63ll))) );
				*(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$3 << (3ll & 63ll))) = vr$14;
			}
			label$2785:;
			I$3 = I$3 + 1ll;
			label$2784:;
			if( I$3 <= TMP$1328$3 ) goto label$2787;
			label$2786:;
		}
	}
	label$2783:;
	label$2782:;
	label$2781:;
}

FBSTRING* _ZNK4MATH5ARRAYcv8FBSTRINGEv( struct $N4MATH5ARRAYE* THIS$1 )
{
	FBSTRING TMP$1330$1;
	FBSTRING TMP$1331$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$2788:;
	FBSTRING* vr$2 = fb_LongintToStr( *(int64*)THIS$1 );
	__builtin_memset( &TMP$1330$1, 0, 24ll );
	FBSTRING* vr$5 = fb_StrConcat( &TMP$1330$1, (void*)"<math.array>{ length : ", 24ll, (void*)vr$2, -1ll );
	__builtin_memset( &TMP$1331$1, 0, 24ll );
	FBSTRING* vr$8 = fb_StrConcat( &TMP$1331$1, (void*)vr$5, -1ll, (void*)" }", 3ll );
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$8, -1ll, 0 );
	goto label$2789;
	label$2789:;
	FBSTRING* vr$11 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$11;
}

void _ZN4MATH5ARRAYaSERKS0_( struct $N4MATH5ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	label$2790:;
	if( THIS$1 == A$1 ) goto label$2793;
	{
		*(int64*)THIS$1 = 0ll;
		if( *(double**)((uint8*)THIS$1 + 8ll) == (double*)0ull ) goto label$2795;
		{
			if( *(double**)((uint8*)THIS$1 + 8ll) == (double*)0ull ) goto label$2796;
			free( *(void**)((uint8*)THIS$1 + 8ll) );
			label$2796:;
			*(double**)((uint8*)THIS$1 + 8ll) = (double*)0ull;
		}
		label$2795:;
		label$2794:;
		if( *(int64*)A$1 == 0ll ) goto label$2798;
		{
			double* TMP$1332$3;
			*(int64*)THIS$1 = *(int64*)A$1;
			void* vr$10 = malloc( *(uint64*)A$1 << (3ull & 63ll) );
			TMP$1332$3 = (double*)vr$10;
			if( TMP$1332$3 == (double*)0ull ) goto label$2799;
			__builtin_memset( TMP$1332$3, 0, *(uint64*)A$1 << (3ull & 63ll) );
			label$2799:;
			*(double**)((uint8*)THIS$1 + 8ll) = TMP$1332$3;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1333$4;
				TMP$1333$4 = *(int64*)A$1 + -1ll;
				goto label$2800;
				label$2803:;
				{
					*(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$4 << (3ll & 63ll))) = *(double*)((uint8*)*(double**)((uint8*)A$1 + 8ll) + (I$4 << (3ll & 63ll)));
				}
				label$2801:;
				I$4 = I$4 + 1ll;
				label$2800:;
				if( I$4 <= TMP$1333$4 ) goto label$2803;
				label$2802:;
			}
		}
		label$2798:;
		label$2797:;
	}
	label$2793:;
	label$2792:;
	label$2791:;
}

double _ZNK4MATH5ARRAY10AVG__get__Ev( struct $N4MATH5ARRAYE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$2804:;
	{
		int64 TMP$1334$2;
		TMP$1334$2 = *(int64*)THIS$1;
		if( TMP$1334$2 != 0ll ) goto label$2807;
		label$2808:;
		{
			fb$result$1 = 0x0p+0;
			goto label$2805;
		}
		goto label$2806;
		label$2807:;
		if( TMP$1334$2 != 1ll ) goto label$2809;
		label$2810:;
		{
			fb$result$1 = *(double*)*(double**)((uint8*)THIS$1 + 8ll);
			goto label$2805;
		}
		goto label$2806;
		label$2809:;
		{
			double R$3;
			__builtin_memset( &R$3, 0, 8ll );
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1335$4;
				TMP$1335$4 = *(int64*)THIS$1 + -1ll;
				goto label$2812;
				label$2815:;
				{
					R$3 = R$3 + *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$4 << (3ll & 63ll)));
				}
				label$2813:;
				I$4 = I$4 + 1ll;
				label$2812:;
				if( I$4 <= TMP$1335$4 ) goto label$2815;
				label$2814:;
			}
			fb$result$1 = R$3 / (double)*(int64*)THIS$1;
			goto label$2805;
		}
		label$2811:;
		label$2806:;
	}
	label$2805:;
	return fb$result$1;
}

double* _ZNK4MATH5ARRAY11DATA__get__Ev( struct $N4MATH5ARRAYE* THIS$1 )
{
	double* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$2816:;
	fb$result$1 = *(double**)((uint8*)THIS$1 + 8ll);
	goto label$2817;
	label$2817:;
	return fb$result$1;
}

void _ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( struct $N4MATH5ARRAYE* THIS$1, int64* L$1 )
{
	label$2818:;
	if( *L$1 <= 0ll ) goto label$2821;
	{
		if( *(int64*)THIS$1 <= 0ll ) goto label$2823;
		{
			if( *L$1 == *(int64*)THIS$1 ) goto label$2825;
			{
				double* TMP$1336$4;
				double* Q$4;
				void* vr$6 = malloc( *(uint64*)L$1 << (3ull & 63ll) );
				TMP$1336$4 = (double*)vr$6;
				if( TMP$1336$4 == (double*)0ull ) goto label$2826;
				__builtin_memset( TMP$1336$4, 0, *(uint64*)L$1 << (3ull & 63ll) );
				label$2826:;
				Q$4 = TMP$1336$4;
				{
					int64 TMP$1337$5;
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1338$5;
					if( *L$1 >= *(int64*)THIS$1 ) goto label$2827;
					TMP$1337$5 = *L$1;
					goto label$2838;
					label$2827:;
					TMP$1337$5 = *(int64*)THIS$1;
					label$2838:;
					TMP$1338$5 = TMP$1337$5 + -1ll;
					goto label$2828;
					label$2831:;
					{
						*(double*)((uint8*)Q$4 + (I$5 << (3ll & 63ll))) = *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$5 << (3ll & 63ll)));
					}
					label$2829:;
					I$5 = I$5 + 1ll;
					label$2828:;
					if( I$5 <= TMP$1338$5 ) goto label$2831;
					label$2830:;
				}
				*(int64*)THIS$1 = *L$1;
				if( *(double**)((uint8*)THIS$1 + 8ll) == (double*)0ull ) goto label$2832;
				free( *(void**)((uint8*)THIS$1 + 8ll) );
				label$2832:;
				*(double**)((uint8*)THIS$1 + 8ll) = Q$4;
			}
			label$2825:;
			label$2824:;
		}
		goto label$2822;
		label$2823:;
		{
			double* TMP$1339$3;
			*(int64*)THIS$1 = *L$1;
			void* vr$29 = malloc( *(uint64*)THIS$1 << (3ull & 63ll) );
			TMP$1339$3 = (double*)vr$29;
			if( TMP$1339$3 == (double*)0ull ) goto label$2833;
			__builtin_memset( TMP$1339$3, 0, *(uint64*)THIS$1 << (3ull & 63ll) );
			label$2833:;
			*(double**)((uint8*)THIS$1 + 8ll) = TMP$1339$3;
		}
		label$2822:;
	}
	goto label$2820;
	label$2821:;
	if( *L$1 != 0ll ) goto label$2834;
	{
		if( *(int64*)THIS$1 <= 0ll ) goto label$2836;
		{
			*(int64*)THIS$1 = 0ll;
			if( *(double**)((uint8*)THIS$1 + 8ll) == (double*)0ull ) goto label$2837;
			free( *(void**)((uint8*)THIS$1 + 8ll) );
			label$2837:;
			*(double**)((uint8*)THIS$1 + 8ll) = (double*)0ull;
		}
		label$2836:;
		label$2835:;
	}
	label$2834:;
	label$2820:;
	label$2819:;
}

double _ZNK4MATH5ARRAY10MAX__get__Ev( struct $N4MATH5ARRAYE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$2839:;
	{
		int64 TMP$1340$2;
		TMP$1340$2 = *(int64*)THIS$1;
		if( TMP$1340$2 != 0ll ) goto label$2842;
		label$2843:;
		{
			fb$result$1 = 0x0p+0;
			goto label$2840;
		}
		goto label$2841;
		label$2842:;
		if( TMP$1340$2 != 1ll ) goto label$2844;
		label$2845:;
		{
			fb$result$1 = *(double*)*(double**)((uint8*)THIS$1 + 8ll);
			goto label$2840;
		}
		goto label$2841;
		label$2844:;
		{
			double R$3;
			R$3 = *(double*)*(double**)((uint8*)THIS$1 + 8ll);
			{
				int64 I$4;
				I$4 = 1ll;
				int64 TMP$1341$4;
				TMP$1341$4 = *(int64*)THIS$1 + -1ll;
				goto label$2847;
				label$2850:;
				{
					if( R$3 >= *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$4 << (3ll & 63ll))) ) goto label$2852;
					{
						R$3 = *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$4 << (3ll & 63ll)));
						label$2852:;
					}
				}
				label$2848:;
				I$4 = I$4 + 1ll;
				label$2847:;
				if( I$4 <= TMP$1341$4 ) goto label$2850;
				label$2849:;
			}
			fb$result$1 = R$3;
			goto label$2840;
		}
		label$2846:;
		label$2841:;
	}
	label$2840:;
	return fb$result$1;
}

double _ZNK4MATH5ARRAY10MIN__get__Ev( struct $N4MATH5ARRAYE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$2853:;
	{
		int64 TMP$1342$2;
		TMP$1342$2 = *(int64*)THIS$1;
		if( TMP$1342$2 != 0ll ) goto label$2856;
		label$2857:;
		{
			fb$result$1 = 0x0p+0;
			goto label$2854;
		}
		goto label$2855;
		label$2856:;
		if( TMP$1342$2 != 1ll ) goto label$2858;
		label$2859:;
		{
			fb$result$1 = *(double*)*(double**)((uint8*)THIS$1 + 8ll);
			goto label$2854;
		}
		goto label$2855;
		label$2858:;
		{
			double R$3;
			R$3 = *(double*)*(double**)((uint8*)THIS$1 + 8ll);
			{
				int64 I$4;
				I$4 = 1ll;
				int64 TMP$1343$4;
				TMP$1343$4 = *(int64*)THIS$1 + -1ll;
				goto label$2861;
				label$2864:;
				{
					if( *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$4 << (3ll & 63ll))) >= R$3 ) goto label$2866;
					{
						R$3 = *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$4 << (3ll & 63ll)));
						label$2866:;
					}
				}
				label$2862:;
				I$4 = I$4 + 1ll;
				label$2861:;
				if( I$4 <= TMP$1343$4 ) goto label$2864;
				label$2863:;
			}
			fb$result$1 = R$3;
			goto label$2854;
		}
		label$2860:;
		label$2855:;
	}
	label$2854:;
	return fb$result$1;
}

boolean _ZN4MATH5ARRAY7FOREACHEPFvRdERKb( struct $N4MATH5ARRAYE* THIS$1, tmp$1294 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2867:;
	if( *(int64*)THIS$1 == 0ll ) goto label$2870;
	{
		if( F$1 == (tmp$1294)0ull ) goto label$2872;
		{
			if( *R$1 == (boolean)0ll ) goto label$2874;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$2875;
					label$2878:;
					{
						(F$1)( (double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$5 << (3ll & 63ll))) );
					}
					label$2876:;
					I$5 = I$5 + -1ll;
					label$2875:;
					if( I$5 >= 0ll ) goto label$2878;
					label$2877:;
				}
			}
			goto label$2873;
			label$2874:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1344$5;
					TMP$1344$5 = *(int64*)THIS$1 + -1ll;
					goto label$2879;
					label$2882:;
					{
						(F$1)( (double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$5 << (3ll & 63ll))) );
					}
					label$2880:;
					I$5 = I$5 + 1ll;
					label$2879:;
					if( I$5 <= TMP$1344$5 ) goto label$2882;
					label$2881:;
				}
			}
			label$2873:;
			fb$result$1 = (boolean)1ll;
			goto label$2868;
		}
		label$2872:;
		label$2871:;
	}
	label$2870:;
	label$2869:;
	fb$result$1 = (boolean)0ll;
	goto label$2868;
	label$2868:;
	return fb$result$1;
}

boolean _ZN4MATH5ARRAY7FOREACHEPFbRdERKb( struct $N4MATH5ARRAYE* THIS$1, tmp$1296 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2883:;
	if( *(int64*)THIS$1 == 0ll ) goto label$2886;
	{
		if( F$1 == (tmp$1296)0ull ) goto label$2888;
		{
			if( *R$1 == (boolean)0ll ) goto label$2890;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$2891;
					label$2894:;
					{
						boolean vr$8 = (F$1)( (double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$5 << (3ll & 63ll))) );
						if( vr$8 != (boolean)0ll ) goto label$2896;
						{
							goto label$2893;
						}
						label$2896:;
						label$2895:;
					}
					label$2892:;
					I$5 = I$5 + -1ll;
					label$2891:;
					if( I$5 >= 0ll ) goto label$2894;
					label$2893:;
				}
			}
			goto label$2889;
			label$2890:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1345$5;
					TMP$1345$5 = *(int64*)THIS$1 + -1ll;
					goto label$2897;
					label$2900:;
					{
						boolean vr$15 = (F$1)( (double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$5 << (3ll & 63ll))) );
						if( vr$15 != (boolean)0ll ) goto label$2902;
						{
							goto label$2899;
						}
						label$2902:;
						label$2901:;
					}
					label$2898:;
					I$5 = I$5 + 1ll;
					label$2897:;
					if( I$5 <= TMP$1345$5 ) goto label$2900;
					label$2899:;
				}
			}
			label$2889:;
			fb$result$1 = (boolean)1ll;
			goto label$2884;
		}
		label$2888:;
		label$2887:;
	}
	label$2886:;
	label$2885:;
	fb$result$1 = (boolean)0ll;
	goto label$2884;
	label$2884:;
	return fb$result$1;
}

boolean _ZN4MATH5ARRAY7FOREACHEPFvRdRKu7INTEGERERKb( struct $N4MATH5ARRAYE* THIS$1, tmp$1295 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2903:;
	if( *(int64*)THIS$1 == 0ll ) goto label$2906;
	{
		if( F$1 == (tmp$1295)0ull ) goto label$2908;
		{
			if( *R$1 == (boolean)0ll ) goto label$2910;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$2911;
					label$2914:;
					{
						(F$1)( (double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$5 << (3ll & 63ll))), (int64*)&I$5 );
					}
					label$2912:;
					I$5 = I$5 + -1ll;
					label$2911:;
					if( I$5 >= 0ll ) goto label$2914;
					label$2913:;
				}
			}
			goto label$2909;
			label$2910:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1346$5;
					TMP$1346$5 = *(int64*)THIS$1 + -1ll;
					goto label$2915;
					label$2918:;
					{
						(F$1)( (double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$5 << (3ll & 63ll))), (int64*)&I$5 );
					}
					label$2916:;
					I$5 = I$5 + 1ll;
					label$2915:;
					if( I$5 <= TMP$1346$5 ) goto label$2918;
					label$2917:;
				}
			}
			label$2909:;
			fb$result$1 = (boolean)1ll;
			goto label$2904;
		}
		label$2908:;
		label$2907:;
	}
	label$2906:;
	label$2905:;
	fb$result$1 = (boolean)0ll;
	goto label$2904;
	label$2904:;
	return fb$result$1;
}

boolean _ZN4MATH5ARRAY7FOREACHEPFbRdRKu7INTEGERERKb( struct $N4MATH5ARRAYE* THIS$1, tmp$1297 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2919:;
	if( *(int64*)THIS$1 == 0ll ) goto label$2922;
	{
		if( F$1 == (tmp$1297)0ull ) goto label$2924;
		{
			if( *R$1 == (boolean)0ll ) goto label$2926;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$2927;
					label$2930:;
					{
						boolean vr$9 = (F$1)( (double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$5 << (3ll & 63ll))), (int64*)&I$5 );
						if( vr$9 != (boolean)0ll ) goto label$2932;
						{
							goto label$2929;
						}
						label$2932:;
						label$2931:;
					}
					label$2928:;
					I$5 = I$5 + -1ll;
					label$2927:;
					if( I$5 >= 0ll ) goto label$2930;
					label$2929:;
				}
			}
			goto label$2925;
			label$2926:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1347$5;
					TMP$1347$5 = *(int64*)THIS$1 + -1ll;
					goto label$2933;
					label$2936:;
					{
						boolean vr$17 = (F$1)( (double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$5 << (3ll & 63ll))), (int64*)&I$5 );
						if( vr$17 != (boolean)0ll ) goto label$2938;
						{
							goto label$2935;
						}
						label$2938:;
						label$2937:;
					}
					label$2934:;
					I$5 = I$5 + 1ll;
					label$2933:;
					if( I$5 <= TMP$1347$5 ) goto label$2936;
					label$2935:;
				}
			}
			label$2925:;
			fb$result$1 = (boolean)1ll;
			goto label$2920;
		}
		label$2924:;
		label$2923:;
	}
	label$2922:;
	label$2921:;
	fb$result$1 = (boolean)0ll;
	goto label$2920;
	label$2920:;
	return fb$result$1;
}

boolean _ZN4MATH5ARRAY3MAPERS0_PFdRKdE( struct $N4MATH5ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1, tmp$1298 F$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2939:;
	if( *(int64*)THIS$1 == 0ll ) goto label$2942;
	{
		if( F$1 == (tmp$1298)0ull ) goto label$2944;
		{
			_ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1348$4;
				TMP$1348$4 = *(int64*)THIS$1 + -1ll;
				goto label$2945;
				label$2948:;
				{
					double vr$9 = (F$1)( (double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$4 << (3ll & 63ll))) );
					*(double*)((uint8*)*(double**)((uint8*)A$1 + 8ll) + (I$4 << (3ll & 63ll))) = vr$9;
				}
				label$2946:;
				I$4 = I$4 + 1ll;
				label$2945:;
				if( I$4 <= TMP$1348$4 ) goto label$2948;
				label$2947:;
			}
		}
		label$2944:;
		label$2943:;
	}
	label$2942:;
	label$2941:;
	fb$result$1 = (boolean)0ll;
	goto label$2940;
	label$2940:;
	return fb$result$1;
}

boolean _ZN4MATH5ARRAY3MAPERS0_PFdRKdRKu7INTEGERE( struct $N4MATH5ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1, tmp$1299 F$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$2949:;
	if( *(int64*)THIS$1 == 0ll ) goto label$2952;
	{
		if( F$1 == (tmp$1299)0ull ) goto label$2954;
		{
			_ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1349$4;
				TMP$1349$4 = *(int64*)THIS$1 + -1ll;
				goto label$2955;
				label$2958:;
				{
					double vr$10 = (F$1)( (double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$4 << (3ll & 63ll))), (int64*)&I$4 );
					*(double*)((uint8*)*(double**)((uint8*)A$1 + 8ll) + (I$4 << (3ll & 63ll))) = vr$10;
				}
				label$2956:;
				I$4 = I$4 + 1ll;
				label$2955:;
				if( I$4 <= TMP$1349$4 ) goto label$2958;
				label$2957:;
			}
		}
		label$2954:;
		label$2953:;
	}
	label$2952:;
	label$2951:;
	fb$result$1 = (boolean)0ll;
	goto label$2950;
	label$2950:;
	return fb$result$1;
}

FBSTRING* _ZNK4MATH5ARRAY6TOJSONEv( struct $N4MATH5ARRAYE* THIS$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$2959:;
	{
		int64 TMP$1350$2;
		TMP$1350$2 = *(int64*)THIS$1;
		if( TMP$1350$2 != 0ll ) goto label$2962;
		label$2963:;
		{
			fb_StrInit( (void*)&fb$result$1, -1ll, (void*)"[]", 3ll, 0 );
			goto label$2960;
		}
		goto label$2961;
		label$2962:;
		if( TMP$1350$2 != 1ll ) goto label$2964;
		label$2965:;
		{
			FBSTRING TMP$1352$3;
			FBSTRING TMP$1353$3;
			FBSTRING* vr$5 = fb_DoubleToStr( *(double*)*(double**)((uint8*)THIS$1 + 8ll) );
			__builtin_memset( &TMP$1352$3, 0, 24ll );
			FBSTRING* vr$8 = fb_StrConcat( &TMP$1352$3, (void*)"[", 2ll, (void*)vr$5, -1ll );
			__builtin_memset( &TMP$1353$3, 0, 24ll );
			FBSTRING* vr$11 = fb_StrConcat( &TMP$1353$3, (void*)vr$8, -1ll, (void*)"]", 2ll );
			fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$11, -1ll, 0 );
			goto label$2960;
		}
		goto label$2961;
		label$2964:;
		{
			FBSTRING TMP$1354$3;
			FBSTRING TMP$1358$3;
			FBSTRING R$3;
			FBSTRING* vr$15 = fb_DoubleToStr( *(double*)*(double**)((uint8*)THIS$1 + 8ll) );
			__builtin_memset( &TMP$1354$3, 0, 24ll );
			FBSTRING* vr$18 = fb_StrConcat( &TMP$1354$3, (void*)"[", 2ll, (void*)vr$15, -1ll );
			fb_StrInit( (void*)&R$3, -1ll, (void*)vr$18, -1ll, 0 );
			{
				int64 I$4;
				I$4 = 1ll;
				int64 TMP$1355$4;
				TMP$1355$4 = *(int64*)THIS$1 + -1ll;
				goto label$2967;
				label$2970:;
				{
					FBSTRING TMP$1356$5;
					FBSTRING TMP$1357$5;
					FBSTRING* vr$25 = fb_DoubleToStr( *(double*)((uint8*)*(double**)((uint8*)THIS$1 + 8ll) + (I$4 << (3ll & 63ll))) );
					__builtin_memset( &TMP$1356$5, 0, 24ll );
					FBSTRING* vr$28 = fb_StrConcat( &TMP$1356$5, (void*)",", 2ll, (void*)vr$25, -1ll );
					__builtin_memset( &TMP$1357$5, 0, 24ll );
					FBSTRING* vr$32 = fb_StrConcat( &TMP$1357$5, (void*)&R$3, -1ll, (void*)vr$28, -1ll );
					fb_StrAssign( (void*)&R$3, -1ll, (void*)vr$32, -1ll, 0 );
				}
				label$2968:;
				I$4 = I$4 + 1ll;
				label$2967:;
				if( I$4 <= TMP$1355$4 ) goto label$2970;
				label$2969:;
			}
			__builtin_memset( &TMP$1358$3, 0, 24ll );
			FBSTRING* vr$38 = fb_StrConcat( &TMP$1358$3, (void*)&R$3, -1ll, (void*)"]", 2ll );
			fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$38, -1ll, 0 );
			fb_StrDelete( (FBSTRING*)&R$3 );
			goto label$2960;
			fb_StrDelete( (FBSTRING*)&R$3 );
		}
		label$2966:;
		label$2961:;
	}
	label$2960:;
	FBSTRING* vr$43 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$43;
}

void _ZN4MATH12COMPLEXARRAYC1Ev( struct $N4MATH12COMPLEXARRAYE* THIS$1 )
{
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH7COMPLEXC1Ev( (struct $N4MATH7COMPLEXE*)((uint8*)THIS$1 + 16ll) );
	label$2971:;
	label$2972:;
}

void _ZN4MATH12COMPLEXARRAYC1ERKu7INTEGER( struct $N4MATH12COMPLEXARRAYE* THIS$1, int64* L$1 )
{
	label$2973:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH7COMPLEXC1Ev( (struct $N4MATH7COMPLEXE*)((uint8*)THIS$1 + 16ll) );
	if( *L$1 <= 0ll ) goto label$2976;
	{
		struct $N4MATH7COMPLEXE* TMP$1364$2;
		uint64 TMP$1365$2;
		struct $N4MATH7COMPLEXE* TMP$1366$2;
		*(int64*)THIS$1 = *L$1;
		void* vr$11 = malloc( *(uint64*)L$1 << (4ull & 63ll) );
		TMP$1364$2 = (struct $N4MATH7COMPLEXE*)vr$11;
		if( TMP$1364$2 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$2977;
		TMP$1366$2 = TMP$1364$2;
		TMP$1365$2 = *(uint64*)L$1;
		label$2978:;
		if( TMP$1365$2 == 0ull ) goto label$2979;
		_ZN4MATH7COMPLEXC1Ev( TMP$1366$2 );
		TMP$1366$2 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1366$2 + 16ll);
		TMP$1365$2 = TMP$1365$2 + 18446744073709551615ull;
		goto label$2978;
		label$2979:;
		label$2977:;
		*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = TMP$1364$2;
	}
	label$2976:;
	label$2975:;
	label$2974:;
}

void _ZN4MATH12COMPLEXARRAYC1ERKu7INTEGERPFvRNS_7COMPLEXEERKb( struct $N4MATH12COMPLEXARRAYE* THIS$1, int64* L$1, tmp$1359 F$1, boolean* R$1 )
{
	label$2980:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH7COMPLEXC1Ev( (struct $N4MATH7COMPLEXE*)((uint8*)THIS$1 + 16ll) );
	if( *L$1 <= 0ll ) goto label$2983;
	{
		struct $N4MATH7COMPLEXE* TMP$1367$2;
		uint64 TMP$1368$2;
		struct $N4MATH7COMPLEXE* TMP$1369$2;
		*(int64*)THIS$1 = *L$1;
		void* vr$11 = malloc( *(uint64*)L$1 << (4ull & 63ll) );
		TMP$1367$2 = (struct $N4MATH7COMPLEXE*)vr$11;
		if( TMP$1367$2 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$2984;
		TMP$1369$2 = TMP$1367$2;
		TMP$1368$2 = *(uint64*)L$1;
		label$2985:;
		if( TMP$1368$2 == 0ull ) goto label$2986;
		_ZN4MATH7COMPLEXC1Ev( TMP$1369$2 );
		TMP$1369$2 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1369$2 + 16ll);
		TMP$1368$2 = TMP$1368$2 + 18446744073709551615ull;
		goto label$2985;
		label$2986:;
		label$2984:;
		*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = TMP$1367$2;
		if( F$1 == (tmp$1359)0ull ) goto label$2988;
		{
			if( *R$1 == (boolean)0ll ) goto label$2990;
			{
				{
					int64 I$5;
					I$5 = *L$1 + -1ll;
					goto label$2991;
					label$2994:;
					{
						(F$1)( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
					}
					label$2992:;
					I$5 = I$5 + -1ll;
					label$2991:;
					if( I$5 >= 0ll ) goto label$2994;
					label$2993:;
				}
			}
			goto label$2989;
			label$2990:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1370$5;
					TMP$1370$5 = *L$1 + -1ll;
					goto label$2995;
					label$2998:;
					{
						(F$1)( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
					}
					label$2996:;
					I$5 = I$5 + 1ll;
					label$2995:;
					if( I$5 <= TMP$1370$5 ) goto label$2998;
					label$2997:;
				}
			}
			label$2989:;
		}
		label$2988:;
		label$2987:;
	}
	label$2983:;
	label$2982:;
	label$2981:;
}

void _ZN4MATH12COMPLEXARRAYC1ERKu7INTEGERPFvRNS_7COMPLEXES3_ERKb( struct $N4MATH12COMPLEXARRAYE* THIS$1, int64* L$1, tmp$1360 F$1, boolean* R$1 )
{
	label$2999:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH7COMPLEXC1Ev( (struct $N4MATH7COMPLEXE*)((uint8*)THIS$1 + 16ll) );
	if( *L$1 <= 0ll ) goto label$3002;
	{
		struct $N4MATH7COMPLEXE* TMP$1371$2;
		uint64 TMP$1372$2;
		struct $N4MATH7COMPLEXE* TMP$1373$2;
		*(int64*)THIS$1 = *L$1;
		void* vr$11 = malloc( *(uint64*)L$1 << (4ull & 63ll) );
		TMP$1371$2 = (struct $N4MATH7COMPLEXE*)vr$11;
		if( TMP$1371$2 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3003;
		TMP$1373$2 = TMP$1371$2;
		TMP$1372$2 = *(uint64*)L$1;
		label$3004:;
		if( TMP$1372$2 == 0ull ) goto label$3005;
		_ZN4MATH7COMPLEXC1Ev( TMP$1373$2 );
		TMP$1373$2 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1373$2 + 16ll);
		TMP$1372$2 = TMP$1372$2 + 18446744073709551615ull;
		goto label$3004;
		label$3005:;
		label$3003:;
		*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = TMP$1371$2;
		if( F$1 == (tmp$1360)0ull ) goto label$3007;
		{
			if( *R$1 == (boolean)0ll ) goto label$3009;
			{
				{
					int64 I$5;
					I$5 = *L$1 + -1ll;
					goto label$3010;
					label$3013:;
					{
						(F$1)( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
					}
					label$3011:;
					I$5 = I$5 + -1ll;
					label$3010:;
					if( I$5 >= 0ll ) goto label$3013;
					label$3012:;
				}
			}
			goto label$3008;
			label$3009:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1374$5;
					TMP$1374$5 = *L$1 + -1ll;
					goto label$3014;
					label$3017:;
					{
						(F$1)( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
					}
					label$3015:;
					I$5 = I$5 + 1ll;
					label$3014:;
					if( I$5 <= TMP$1374$5 ) goto label$3017;
					label$3016:;
				}
			}
			label$3008:;
		}
		label$3007:;
		label$3006:;
	}
	label$3002:;
	label$3001:;
	label$3000:;
}

void _ZN4MATH12COMPLEXARRAYC1ERKNS_5ARRAYE( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	label$3018:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH7COMPLEXC1Ev( (struct $N4MATH7COMPLEXE*)((uint8*)THIS$1 + 16ll) );
	if( *(int64*)A$1 == 0ll ) goto label$3021;
	{
		struct $N4MATH7COMPLEXE* TMP$1375$2;
		uint64 TMP$1376$2;
		struct $N4MATH7COMPLEXE* TMP$1377$2;
		*(int64*)THIS$1 = *(int64*)A$1;
		void* vr$11 = malloc( *(uint64*)A$1 << (4ull & 63ll) );
		TMP$1375$2 = (struct $N4MATH7COMPLEXE*)vr$11;
		if( TMP$1375$2 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3022;
		TMP$1377$2 = TMP$1375$2;
		TMP$1376$2 = *(uint64*)A$1;
		label$3023:;
		if( TMP$1376$2 == 0ull ) goto label$3024;
		_ZN4MATH7COMPLEXC1Ev( TMP$1377$2 );
		TMP$1377$2 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1377$2 + 16ll);
		TMP$1376$2 = TMP$1376$2 + 18446744073709551615ull;
		goto label$3023;
		label$3024:;
		label$3022:;
		*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = TMP$1375$2;
		double* P$2;
		double* vr$16 = _ZNK4MATH5ARRAY11DATA__get__Ev( A$1 );
		P$2 = vr$16;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1378$3;
			TMP$1378$3 = *(int64*)A$1 + -1ll;
			goto label$3025;
			label$3028:;
			{
				*(double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) = *(double*)((uint8*)P$2 + (I$3 << (3ll & 63ll)));
			}
			label$3026:;
			I$3 = I$3 + 1ll;
			label$3025:;
			if( I$3 <= TMP$1378$3 ) goto label$3028;
			label$3027:;
		}
	}
	label$3021:;
	label$3020:;
	label$3019:;
}

void _ZN4MATH12COMPLEXARRAYC1ERKNS_5ARRAYES3_( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH5ARRAYE* A1$1, struct $N4MATH5ARRAYE* A2$1 )
{
	label$3029:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH7COMPLEXC1Ev( (struct $N4MATH7COMPLEXE*)((uint8*)THIS$1 + 16ll) );
	if( ((int64)-(*(int64*)A1$1 > 0ll) & (int64)-(*(int64*)A1$1 == *(int64*)A2$1)) == 0ll ) goto label$3032;
	{
		struct $N4MATH7COMPLEXE* TMP$1379$2;
		uint64 TMP$1380$2;
		struct $N4MATH7COMPLEXE* TMP$1381$2;
		*(int64*)THIS$1 = *(int64*)A1$1;
		void* vr$16 = malloc( *(uint64*)A1$1 << (4ull & 63ll) );
		TMP$1379$2 = (struct $N4MATH7COMPLEXE*)vr$16;
		if( TMP$1379$2 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3033;
		TMP$1381$2 = TMP$1379$2;
		TMP$1380$2 = *(uint64*)A1$1;
		label$3034:;
		if( TMP$1380$2 == 0ull ) goto label$3035;
		_ZN4MATH7COMPLEXC1Ev( TMP$1381$2 );
		TMP$1381$2 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1381$2 + 16ll);
		TMP$1380$2 = TMP$1380$2 + 18446744073709551615ull;
		goto label$3034;
		label$3035:;
		label$3033:;
		*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = TMP$1379$2;
		double* P1$2;
		double* vr$21 = _ZNK4MATH5ARRAY11DATA__get__Ev( A1$1 );
		P1$2 = vr$21;
		double* P2$2;
		double* vr$22 = _ZNK4MATH5ARRAY11DATA__get__Ev( A2$1 );
		P2$2 = vr$22;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1382$3;
			TMP$1382$3 = *(int64*)A1$1 + -1ll;
			goto label$3036;
			label$3039:;
			{
				*(double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) = *(double*)((uint8*)P1$2 + (I$3 << (3ll & 63ll)));
				*(double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) = *(double*)((uint8*)P2$2 + (I$3 << (3ll & 63ll)));
			}
			label$3037:;
			I$3 = I$3 + 1ll;
			label$3036:;
			if( I$3 <= TMP$1382$3 ) goto label$3039;
			label$3038:;
		}
	}
	label$3032:;
	label$3031:;
	label$3030:;
}

void _ZN4MATH12COMPLEXARRAYC1ERKS0_( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH12COMPLEXARRAYE* A$1 )
{
	label$3040:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH7COMPLEXC1Ev( (struct $N4MATH7COMPLEXE*)((uint8*)THIS$1 + 16ll) );
	if( *(int64*)A$1 == 0ll ) goto label$3043;
	{
		struct $N4MATH7COMPLEXE* TMP$1383$2;
		uint64 TMP$1384$2;
		struct $N4MATH7COMPLEXE* TMP$1385$2;
		*(int64*)THIS$1 = *(int64*)A$1;
		void* vr$11 = malloc( *(uint64*)A$1 << (4ull & 63ll) );
		TMP$1383$2 = (struct $N4MATH7COMPLEXE*)vr$11;
		if( TMP$1383$2 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3044;
		TMP$1385$2 = TMP$1383$2;
		TMP$1384$2 = *(uint64*)A$1;
		label$3045:;
		if( TMP$1384$2 == 0ull ) goto label$3046;
		_ZN4MATH7COMPLEXC1Ev( TMP$1385$2 );
		TMP$1385$2 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1385$2 + 16ll);
		TMP$1384$2 = TMP$1384$2 + 18446744073709551615ull;
		goto label$3045;
		label$3046:;
		label$3044:;
		*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = TMP$1383$2;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1386$3;
			TMP$1386$3 = *(int64*)A$1 + -1ll;
			goto label$3047;
			label$3050:;
			{
				_ZN4MATH7COMPLEXaSERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)A$1 + 8ll) + (I$3 << (4ll & 63ll))) );
			}
			label$3048:;
			I$3 = I$3 + 1ll;
			label$3047:;
			if( I$3 <= TMP$1386$3 ) goto label$3050;
			label$3049:;
		}
	}
	label$3043:;
	label$3042:;
	label$3041:;
}

void _ZN4MATH12COMPLEXARRAYD1Ev( struct $N4MATH12COMPLEXARRAYE* THIS$1 )
{
	label$3051:;
	if( *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3054;
	{
		if( *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3055;
		free( *(void**)((uint8*)THIS$1 + 8ll) );
		label$3055:;
		label$3054:;
	}
	label$3052:;
}

void _ZN4MATH12COMPLEXARRAYv27selfcatERKd( struct $N4MATH12COMPLEXARRAYE* THIS$1, double* N$1 )
{
	label$3056:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3059;
	{
		struct $N4MATH7COMPLEXE* TMP$1387$2;
		uint64 TMP$1388$2;
		struct $N4MATH7COMPLEXE* TMP$1389$2;
		*(int64*)THIS$1 = *(int64*)THIS$1 + 1ll;
		struct $N4MATH7COMPLEXE* Q$2;
		void* vr$6 = malloc( *(uint64*)THIS$1 << (4ull & 63ll) );
		TMP$1387$2 = (struct $N4MATH7COMPLEXE*)vr$6;
		if( TMP$1387$2 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3060;
		TMP$1389$2 = TMP$1387$2;
		TMP$1388$2 = *(uint64*)THIS$1;
		label$3061:;
		if( TMP$1388$2 == 0ull ) goto label$3062;
		_ZN4MATH7COMPLEXC1Ev( TMP$1389$2 );
		TMP$1389$2 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1389$2 + 16ll);
		TMP$1388$2 = TMP$1388$2 + 18446744073709551615ull;
		goto label$3061;
		label$3062:;
		label$3060:;
		Q$2 = TMP$1387$2;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1390$3;
			TMP$1390$3 = *(int64*)THIS$1 + -2ll;
			goto label$3063;
			label$3066:;
			{
				_ZN4MATH7COMPLEXaSERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)Q$2 + (I$3 << (4ll & 63ll))), (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) );
			}
			label$3064:;
			I$3 = I$3 + 1ll;
			label$3063:;
			if( I$3 <= TMP$1390$3 ) goto label$3066;
			label$3065:;
		}
		*(double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (*(int64*)THIS$1 << (4ll & 63ll))) + -16ll) = *N$1;
		if( *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3067;
		free( *(void**)((uint8*)THIS$1 + 8ll) );
		label$3067:;
		*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = Q$2;
	}
	goto label$3058;
	label$3059:;
	{
		struct $N4MATH7COMPLEXE* TMP$1391$2;
		uint64 TMP$1392$2;
		struct $N4MATH7COMPLEXE* TMP$1393$2;
		*(int64*)THIS$1 = 1ll;
		void* vr$27 = malloc( 16ull );
		TMP$1391$2 = (struct $N4MATH7COMPLEXE*)vr$27;
		if( TMP$1391$2 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3068;
		TMP$1393$2 = TMP$1391$2;
		TMP$1392$2 = 1ull;
		label$3069:;
		if( TMP$1392$2 == 0ull ) goto label$3070;
		_ZN4MATH7COMPLEXC1Ev( TMP$1393$2 );
		TMP$1393$2 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1393$2 + 16ll);
		TMP$1392$2 = TMP$1392$2 + 18446744073709551615ull;
		goto label$3069;
		label$3070:;
		label$3068:;
		*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = TMP$1391$2;
		*(double*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = *N$1;
	}
	label$3058:;
	label$3057:;
}

void _ZN4MATH12COMPLEXARRAYv27selfcatERKNS_5ARRAYE( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	label$3071:;
	if( *(int64*)A$1 == 0ll ) goto label$3074;
	{
		if( *(int64*)THIS$1 == 0ll ) goto label$3076;
		{
			struct $N4MATH7COMPLEXE* TMP$1394$3;
			uint64 TMP$1395$3;
			struct $N4MATH7COMPLEXE* TMP$1396$3;
			struct $N4MATH7COMPLEXE* Q$3;
			void* vr$6 = malloc( (uint64)(*(int64*)THIS$1 + *(int64*)A$1) << (4ull & 63ll) );
			TMP$1394$3 = (struct $N4MATH7COMPLEXE*)vr$6;
			if( TMP$1394$3 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3077;
			TMP$1396$3 = TMP$1394$3;
			TMP$1395$3 = (uint64)(*(int64*)THIS$1 + *(int64*)A$1);
			label$3078:;
			if( TMP$1395$3 == 0ull ) goto label$3079;
			_ZN4MATH7COMPLEXC1Ev( TMP$1396$3 );
			TMP$1396$3 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1396$3 + 16ll);
			TMP$1395$3 = TMP$1395$3 + 18446744073709551615ull;
			goto label$3078;
			label$3079:;
			label$3077:;
			Q$3 = TMP$1394$3;
			int64 I$3;
			__builtin_memset( &I$3, 0, 8ll );
			{
				I$3 = 0ll;
				int64 TMP$1397$4;
				TMP$1397$4 = *(int64*)THIS$1 + -1ll;
				goto label$3080;
				label$3083:;
				{
					_ZN4MATH7COMPLEXaSERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)Q$3 + (I$3 << (4ll & 63ll))), (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) );
				}
				label$3081:;
				I$3 = I$3 + 1ll;
				label$3080:;
				if( I$3 <= TMP$1397$4 ) goto label$3083;
				label$3082:;
			}
			double* P$3;
			double* vr$21 = _ZNK4MATH5ARRAY11DATA__get__Ev( A$1 );
			P$3 = vr$21;
			{
				I$3 = 0ll;
				int64 TMP$1398$4;
				TMP$1398$4 = *(int64*)A$1 + -1ll;
				goto label$3084;
				label$3087:;
				{
					*(double*)((uint8*)Q$3 + ((*(int64*)THIS$1 + I$3) << (4ll & 63ll))) = *(double*)((uint8*)P$3 + (I$3 << (3ll & 63ll)));
				}
				label$3085:;
				I$3 = I$3 + 1ll;
				label$3084:;
				if( I$3 <= TMP$1398$4 ) goto label$3087;
				label$3086:;
			}
			*(int64*)THIS$1 = *(int64*)THIS$1 + *(int64*)A$1;
			if( *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3088;
			free( *(void**)((uint8*)THIS$1 + 8ll) );
			label$3088:;
			*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = Q$3;
		}
		goto label$3075;
		label$3076:;
		{
			struct $N4MATH7COMPLEXE* TMP$1399$3;
			uint64 TMP$1400$3;
			struct $N4MATH7COMPLEXE* TMP$1401$3;
			*(int64*)THIS$1 = *(int64*)A$1;
			void* vr$42 = malloc( *(uint64*)THIS$1 << (4ull & 63ll) );
			TMP$1399$3 = (struct $N4MATH7COMPLEXE*)vr$42;
			if( TMP$1399$3 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3089;
			TMP$1401$3 = TMP$1399$3;
			TMP$1400$3 = *(uint64*)THIS$1;
			label$3090:;
			if( TMP$1400$3 == 0ull ) goto label$3091;
			_ZN4MATH7COMPLEXC1Ev( TMP$1401$3 );
			TMP$1401$3 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1401$3 + 16ll);
			TMP$1400$3 = TMP$1400$3 + 18446744073709551615ull;
			goto label$3090;
			label$3091:;
			label$3089:;
			*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = TMP$1399$3;
			double* P$3;
			double* vr$47 = _ZNK4MATH5ARRAY11DATA__get__Ev( A$1 );
			P$3 = vr$47;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1402$4;
				TMP$1402$4 = *(int64*)THIS$1 + -1ll;
				goto label$3092;
				label$3095:;
				{
					*(double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) = *(double*)((uint8*)P$3 + (I$4 << (3ll & 63ll)));
				}
				label$3093:;
				I$4 = I$4 + 1ll;
				label$3092:;
				if( I$4 <= TMP$1402$4 ) goto label$3095;
				label$3094:;
			}
		}
		label$3075:;
	}
	label$3074:;
	label$3073:;
	label$3072:;
}

void _ZN4MATH12COMPLEXARRAYv27selfcatERKNS_7COMPLEXE( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH7COMPLEXE* C$1 )
{
	label$3096:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3099;
	{
		struct $N4MATH7COMPLEXE* TMP$1403$2;
		uint64 TMP$1404$2;
		struct $N4MATH7COMPLEXE* TMP$1405$2;
		*(int64*)THIS$1 = *(int64*)THIS$1 + 1ll;
		struct $N4MATH7COMPLEXE* Q$2;
		void* vr$6 = malloc( *(uint64*)THIS$1 << (4ull & 63ll) );
		TMP$1403$2 = (struct $N4MATH7COMPLEXE*)vr$6;
		if( TMP$1403$2 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3100;
		TMP$1405$2 = TMP$1403$2;
		TMP$1404$2 = *(uint64*)THIS$1;
		label$3101:;
		if( TMP$1404$2 == 0ull ) goto label$3102;
		_ZN4MATH7COMPLEXC1Ev( TMP$1405$2 );
		TMP$1405$2 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1405$2 + 16ll);
		TMP$1404$2 = TMP$1404$2 + 18446744073709551615ull;
		goto label$3101;
		label$3102:;
		label$3100:;
		Q$2 = TMP$1403$2;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1406$3;
			TMP$1406$3 = *(int64*)THIS$1 + -2ll;
			goto label$3103;
			label$3106:;
			{
				_ZN4MATH7COMPLEXaSERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)Q$2 + (I$3 << (4ll & 63ll))), (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) );
			}
			label$3104:;
			I$3 = I$3 + 1ll;
			label$3103:;
			if( I$3 <= TMP$1406$3 ) goto label$3106;
			label$3105:;
		}
		_ZN4MATH7COMPLEXaSERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (*(int64*)THIS$1 << (4ll & 63ll))) + -16ll), C$1 );
		if( *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3107;
		free( *(void**)((uint8*)THIS$1 + 8ll) );
		label$3107:;
		*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = Q$2;
	}
	goto label$3098;
	label$3099:;
	{
		struct $N4MATH7COMPLEXE* TMP$1407$2;
		uint64 TMP$1408$2;
		struct $N4MATH7COMPLEXE* TMP$1409$2;
		*(int64*)THIS$1 = 1ll;
		void* vr$27 = malloc( 16ull );
		TMP$1407$2 = (struct $N4MATH7COMPLEXE*)vr$27;
		if( TMP$1407$2 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3108;
		TMP$1409$2 = TMP$1407$2;
		TMP$1408$2 = 1ull;
		label$3109:;
		if( TMP$1408$2 == 0ull ) goto label$3110;
		_ZN4MATH7COMPLEXC1Ev( TMP$1409$2 );
		TMP$1409$2 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1409$2 + 16ll);
		TMP$1408$2 = TMP$1408$2 + 18446744073709551615ull;
		goto label$3109;
		label$3110:;
		label$3108:;
		*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = TMP$1407$2;
		_ZN4MATH7COMPLEXaSERKS0_( *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll), C$1 );
	}
	label$3098:;
	label$3097:;
}

void _ZN4MATH12COMPLEXARRAYv27selfcatERKS0_( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH12COMPLEXARRAYE* A$1 )
{
	label$3111:;
	if( THIS$1 == A$1 ) goto label$3114;
	{
		if( *(int64*)A$1 == 0ll ) goto label$3116;
		{
			if( *(int64*)THIS$1 == 0ll ) goto label$3118;
			{
				struct $N4MATH7COMPLEXE* TMP$1410$4;
				uint64 TMP$1411$4;
				struct $N4MATH7COMPLEXE* TMP$1412$4;
				struct $N4MATH7COMPLEXE* Q$4;
				void* vr$6 = malloc( (uint64)(*(int64*)THIS$1 + *(int64*)A$1) << (4ull & 63ll) );
				TMP$1410$4 = (struct $N4MATH7COMPLEXE*)vr$6;
				if( TMP$1410$4 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3119;
				TMP$1412$4 = TMP$1410$4;
				TMP$1411$4 = (uint64)(*(int64*)THIS$1 + *(int64*)A$1);
				label$3120:;
				if( TMP$1411$4 == 0ull ) goto label$3121;
				_ZN4MATH7COMPLEXC1Ev( TMP$1412$4 );
				TMP$1412$4 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1412$4 + 16ll);
				TMP$1411$4 = TMP$1411$4 + 18446744073709551615ull;
				goto label$3120;
				label$3121:;
				label$3119:;
				Q$4 = TMP$1410$4;
				int64 I$4;
				__builtin_memset( &I$4, 0, 8ll );
				{
					I$4 = 0ll;
					int64 TMP$1413$5;
					TMP$1413$5 = *(int64*)THIS$1 + -1ll;
					goto label$3122;
					label$3125:;
					{
						_ZN4MATH7COMPLEXaSERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)Q$4 + (I$4 << (4ll & 63ll))), (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) );
					}
					label$3123:;
					I$4 = I$4 + 1ll;
					label$3122:;
					if( I$4 <= TMP$1413$5 ) goto label$3125;
					label$3124:;
				}
				{
					I$4 = 0ll;
					int64 TMP$1414$5;
					TMP$1414$5 = *(int64*)A$1 + -1ll;
					goto label$3126;
					label$3129:;
					{
						_ZN4MATH7COMPLEXaSERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)Q$4 + ((*(int64*)THIS$1 + I$4) << (4ll & 63ll))), (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)A$1 + 8ll) + (I$4 << (4ll & 63ll))) );
					}
					label$3127:;
					I$4 = I$4 + 1ll;
					label$3126:;
					if( I$4 <= TMP$1414$5 ) goto label$3129;
					label$3128:;
				}
				*(int64*)THIS$1 = *(int64*)THIS$1 + *(int64*)A$1;
				if( *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3130;
				free( *(void**)((uint8*)THIS$1 + 8ll) );
				label$3130:;
				*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = Q$4;
			}
			goto label$3117;
			label$3118:;
			{
				struct $N4MATH7COMPLEXE* TMP$1415$4;
				uint64 TMP$1416$4;
				struct $N4MATH7COMPLEXE* TMP$1417$4;
				*(int64*)THIS$1 = *(int64*)A$1;
				void* vr$42 = malloc( *(uint64*)THIS$1 << (4ull & 63ll) );
				TMP$1415$4 = (struct $N4MATH7COMPLEXE*)vr$42;
				if( TMP$1415$4 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3131;
				TMP$1417$4 = TMP$1415$4;
				TMP$1416$4 = *(uint64*)THIS$1;
				label$3132:;
				if( TMP$1416$4 == 0ull ) goto label$3133;
				_ZN4MATH7COMPLEXC1Ev( TMP$1417$4 );
				TMP$1417$4 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1417$4 + 16ll);
				TMP$1416$4 = TMP$1416$4 + 18446744073709551615ull;
				goto label$3132;
				label$3133:;
				label$3131:;
				*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = TMP$1415$4;
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1418$5;
					TMP$1418$5 = *(int64*)THIS$1 + -1ll;
					goto label$3134;
					label$3137:;
					{
						_ZN4MATH7COMPLEXaSERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)A$1 + 8ll) + (I$5 << (4ll & 63ll))) );
					}
					label$3135:;
					I$5 = I$5 + 1ll;
					label$3134:;
					if( I$5 <= TMP$1418$5 ) goto label$3137;
					label$3136:;
				}
			}
			label$3117:;
		}
		label$3116:;
		label$3115:;
	}
	goto label$3113;
	label$3114:;
	{
		if( *(int64*)THIS$1 == 0ll ) goto label$3139;
		{
			struct $N4MATH7COMPLEXE* TMP$1419$3;
			uint64 TMP$1420$3;
			struct $N4MATH7COMPLEXE* TMP$1421$3;
			struct $N4MATH7COMPLEXE* Q$3;
			void* vr$60 = malloc( (uint64)(*(int64*)THIS$1 << (1ll & 63ll)) << (4ull & 63ll) );
			TMP$1419$3 = (struct $N4MATH7COMPLEXE*)vr$60;
			if( TMP$1419$3 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3140;
			TMP$1421$3 = TMP$1419$3;
			TMP$1420$3 = (uint64)(*(int64*)THIS$1 << (1ll & 63ll));
			label$3141:;
			if( TMP$1420$3 == 0ull ) goto label$3142;
			_ZN4MATH7COMPLEXC1Ev( TMP$1421$3 );
			TMP$1421$3 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1421$3 + 16ll);
			TMP$1420$3 = TMP$1420$3 + 18446744073709551615ull;
			goto label$3141;
			label$3142:;
			label$3140:;
			Q$3 = TMP$1419$3;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1422$4;
				TMP$1422$4 = *(int64*)THIS$1 + -1ll;
				goto label$3143;
				label$3146:;
				{
					_ZN4MATH7COMPLEXaSERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)Q$3 + (I$4 << (4ll & 63ll))), (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) );
					_ZN4MATH7COMPLEXaSERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)Q$3 + ((*(int64*)THIS$1 + I$4) << (4ll & 63ll))), (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) );
				}
				label$3144:;
				I$4 = I$4 + 1ll;
				label$3143:;
				if( I$4 <= TMP$1422$4 ) goto label$3146;
				label$3145:;
			}
			*(int64*)THIS$1 = *(int64*)THIS$1 << (1ll & 63ll);
			if( *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3147;
			free( *(void**)((uint8*)THIS$1 + 8ll) );
			label$3147:;
			*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = Q$3;
		}
		label$3139:;
		label$3138:;
	}
	label$3113:;
	label$3112:;
}

struct $N4MATH7COMPLEXE* _ZN4MATH12COMPLEXARRAYixERKu7INTEGER( struct $N4MATH12COMPLEXARRAYE* THIS$1, int64* I$1 )
{
	struct $N4MATH7COMPLEXE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$3148:;
	if( ((int64)-(*I$1 >= 0ll) & (int64)-(*I$1 < *(int64*)THIS$1)) == 0ll ) goto label$3151;
	{
		fb$result$1 = (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (*I$1 << (4ll & 63ll)));
		goto label$3149;
		label$3151:;
	}
	*(double*)((uint8*)THIS$1 + 16ll) = 0x0p+0;
	*(double*)((uint8*)THIS$1 + 24ll) = 0x0p+0;
	fb$result$1 = (struct $N4MATH7COMPLEXE*)((uint8*)THIS$1 + 16ll);
	goto label$3149;
	label$3149:;
	return fb$result$1;
}

void _ZN4MATH12COMPLEXARRAYpLERKd( struct $N4MATH12COMPLEXARRAYE* THIS$1, double* N$1 )
{
	label$3152:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3155;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1423$3;
			TMP$1423$3 = *(int64*)THIS$1 + -1ll;
			goto label$3156;
			label$3159:;
			{
				_ZN4MATH7COMPLEXpLERKd( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), N$1 );
			}
			label$3157:;
			I$3 = I$3 + 1ll;
			label$3156:;
			if( I$3 <= TMP$1423$3 ) goto label$3159;
			label$3158:;
		}
	}
	label$3155:;
	label$3154:;
	label$3153:;
}

void _ZN4MATH12COMPLEXARRAYpLERKNS_5ARRAYE( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	label$3160:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$3163;
	{
		double* P$2;
		double* vr$6 = _ZNK4MATH5ARRAY11DATA__get__Ev( A$1 );
		P$2 = vr$6;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1424$3;
			TMP$1424$3 = *(int64*)THIS$1 + -1ll;
			goto label$3164;
			label$3167:;
			{
				_ZN4MATH7COMPLEXpLERKd( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), (double*)((uint8*)P$2 + (I$3 << (3ll & 63ll))) );
			}
			label$3165:;
			I$3 = I$3 + 1ll;
			label$3164:;
			if( I$3 <= TMP$1424$3 ) goto label$3167;
			label$3166:;
		}
	}
	label$3163:;
	label$3162:;
	label$3161:;
}

void _ZN4MATH12COMPLEXARRAYpLERKNS_7COMPLEXE( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH7COMPLEXE* C$1 )
{
	label$3168:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3171;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1425$3;
			TMP$1425$3 = *(int64*)THIS$1 + -1ll;
			goto label$3172;
			label$3175:;
			{
				_ZN4MATH7COMPLEXpLERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), C$1 );
			}
			label$3173:;
			I$3 = I$3 + 1ll;
			label$3172:;
			if( I$3 <= TMP$1425$3 ) goto label$3175;
			label$3174:;
		}
	}
	label$3171:;
	label$3170:;
	label$3169:;
}

void _ZN4MATH12COMPLEXARRAYpLERKS0_( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH12COMPLEXARRAYE* A$1 )
{
	label$3176:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$3179;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1426$3;
			TMP$1426$3 = *(int64*)THIS$1 + -1ll;
			goto label$3180;
			label$3183:;
			{
				_ZN4MATH7COMPLEXpLERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)A$1 + 8ll) + (I$3 << (4ll & 63ll))) );
			}
			label$3181:;
			I$3 = I$3 + 1ll;
			label$3180:;
			if( I$3 <= TMP$1426$3 ) goto label$3183;
			label$3182:;
		}
	}
	label$3179:;
	label$3178:;
	label$3177:;
}

void _ZN4MATH12COMPLEXARRAYmIERKd( struct $N4MATH12COMPLEXARRAYE* THIS$1, double* N$1 )
{
	label$3184:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3187;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1427$3;
			TMP$1427$3 = *(int64*)THIS$1 + -1ll;
			goto label$3188;
			label$3191:;
			{
				_ZN4MATH7COMPLEXmIERKd( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), N$1 );
			}
			label$3189:;
			I$3 = I$3 + 1ll;
			label$3188:;
			if( I$3 <= TMP$1427$3 ) goto label$3191;
			label$3190:;
		}
	}
	label$3187:;
	label$3186:;
	label$3185:;
}

void _ZN4MATH12COMPLEXARRAYmIERKNS_5ARRAYE( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	label$3192:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$3195;
	{
		double* P$2;
		double* vr$6 = _ZNK4MATH5ARRAY11DATA__get__Ev( A$1 );
		P$2 = vr$6;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1428$3;
			TMP$1428$3 = *(int64*)THIS$1 + -1ll;
			goto label$3196;
			label$3199:;
			{
				_ZN4MATH7COMPLEXmIERKd( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), (double*)((uint8*)P$2 + (I$3 << (3ll & 63ll))) );
			}
			label$3197:;
			I$3 = I$3 + 1ll;
			label$3196:;
			if( I$3 <= TMP$1428$3 ) goto label$3199;
			label$3198:;
		}
	}
	label$3195:;
	label$3194:;
	label$3193:;
}

void _ZN4MATH12COMPLEXARRAYmIERKNS_7COMPLEXE( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH7COMPLEXE* C$1 )
{
	label$3200:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3203;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1429$3;
			TMP$1429$3 = *(int64*)THIS$1 + -1ll;
			goto label$3204;
			label$3207:;
			{
				_ZN4MATH7COMPLEXmIERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), C$1 );
			}
			label$3205:;
			I$3 = I$3 + 1ll;
			label$3204:;
			if( I$3 <= TMP$1429$3 ) goto label$3207;
			label$3206:;
		}
	}
	label$3203:;
	label$3202:;
	label$3201:;
}

void _ZN4MATH12COMPLEXARRAYmIERKS0_( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH12COMPLEXARRAYE* A$1 )
{
	label$3208:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$3211;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1430$3;
			TMP$1430$3 = *(int64*)THIS$1 + -1ll;
			goto label$3212;
			label$3215:;
			{
				_ZN4MATH7COMPLEXmIERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)A$1 + 8ll) + (I$3 << (4ll & 63ll))) );
			}
			label$3213:;
			I$3 = I$3 + 1ll;
			label$3212:;
			if( I$3 <= TMP$1430$3 ) goto label$3215;
			label$3214:;
		}
	}
	label$3211:;
	label$3210:;
	label$3209:;
}

void _ZN4MATH12COMPLEXARRAYmLERKd( struct $N4MATH12COMPLEXARRAYE* THIS$1, double* N$1 )
{
	label$3216:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3219;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1431$3;
			TMP$1431$3 = *(int64*)THIS$1 + -1ll;
			goto label$3220;
			label$3223:;
			{
				_ZN4MATH7COMPLEXmLERKd( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), N$1 );
			}
			label$3221:;
			I$3 = I$3 + 1ll;
			label$3220:;
			if( I$3 <= TMP$1431$3 ) goto label$3223;
			label$3222:;
		}
	}
	label$3219:;
	label$3218:;
	label$3217:;
}

void _ZN4MATH12COMPLEXARRAYmLERKNS_5ARRAYE( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	label$3224:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$3227;
	{
		double* P$2;
		double* vr$6 = _ZNK4MATH5ARRAY11DATA__get__Ev( A$1 );
		P$2 = vr$6;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1432$3;
			TMP$1432$3 = *(int64*)THIS$1 + -1ll;
			goto label$3228;
			label$3231:;
			{
				_ZN4MATH7COMPLEXmLERKd( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), (double*)((uint8*)P$2 + (I$3 << (3ll & 63ll))) );
			}
			label$3229:;
			I$3 = I$3 + 1ll;
			label$3228:;
			if( I$3 <= TMP$1432$3 ) goto label$3231;
			label$3230:;
		}
	}
	label$3227:;
	label$3226:;
	label$3225:;
}

void _ZN4MATH12COMPLEXARRAYmLERKNS_7COMPLEXE( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH7COMPLEXE* C$1 )
{
	label$3232:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3235;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1433$3;
			TMP$1433$3 = *(int64*)THIS$1 + -1ll;
			goto label$3236;
			label$3239:;
			{
				_ZN4MATH7COMPLEXmLERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), C$1 );
			}
			label$3237:;
			I$3 = I$3 + 1ll;
			label$3236:;
			if( I$3 <= TMP$1433$3 ) goto label$3239;
			label$3238:;
		}
	}
	label$3235:;
	label$3234:;
	label$3233:;
}

void _ZN4MATH12COMPLEXARRAYmLERKS0_( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH12COMPLEXARRAYE* A$1 )
{
	label$3240:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$3243;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1434$3;
			TMP$1434$3 = *(int64*)THIS$1 + -1ll;
			goto label$3244;
			label$3247:;
			{
				_ZN4MATH7COMPLEXmLERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)A$1 + 8ll) + (I$3 << (4ll & 63ll))) );
			}
			label$3245:;
			I$3 = I$3 + 1ll;
			label$3244:;
			if( I$3 <= TMP$1434$3 ) goto label$3247;
			label$3246:;
		}
	}
	label$3243:;
	label$3242:;
	label$3241:;
}

void _ZN4MATH12COMPLEXARRAYdVERKd( struct $N4MATH12COMPLEXARRAYE* THIS$1, double* N$1 )
{
	label$3248:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3251;
	{
		if( *N$1 == 0x0p+0 ) goto label$3253;
		{
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1435$4;
				TMP$1435$4 = *(int64*)THIS$1 + -1ll;
				goto label$3254;
				label$3257:;
				{
					*(double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) = *(double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) / *N$1;
					*(double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) + 8ll) / *N$1;
				}
				label$3255:;
				I$4 = I$4 + 1ll;
				label$3254:;
				if( I$4 <= TMP$1435$4 ) goto label$3257;
				label$3256:;
			}
		}
		goto label$3252;
		label$3253:;
		{
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1436$4;
				TMP$1436$4 = *(int64*)THIS$1 + -1ll;
				goto label$3258;
				label$3261:;
				{
					*(double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) = 0x0p+0;
					*(double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) + 8ll) = 0x0p+0;
				}
				label$3259:;
				I$4 = I$4 + 1ll;
				label$3258:;
				if( I$4 <= TMP$1436$4 ) goto label$3261;
				label$3260:;
			}
		}
		label$3252:;
	}
	label$3251:;
	label$3250:;
	label$3249:;
}

void _ZN4MATH12COMPLEXARRAYdVERKNS_5ARRAYE( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	label$3262:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$3265;
	{
		double* P$2;
		double* vr$6 = _ZNK4MATH5ARRAY11DATA__get__Ev( A$1 );
		P$2 = vr$6;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1437$3;
			TMP$1437$3 = *(int64*)THIS$1 + -1ll;
			goto label$3266;
			label$3269:;
			{
				if( *(double*)((uint8*)P$2 + (I$3 << (3ll & 63ll))) == 0x0p+0 ) goto label$3271;
				{
					*(double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) = *(double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) / *(double*)((uint8*)P$2 + (I$3 << (3ll & 63ll)));
					*(double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) / *(double*)((uint8*)P$2 + (I$3 << (3ll & 63ll)));
				}
				goto label$3270;
				label$3271:;
				{
					*(double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) = 0x0p+0;
					*(double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) = 0x0p+0;
				}
				label$3270:;
			}
			label$3267:;
			I$3 = I$3 + 1ll;
			label$3266:;
			if( I$3 <= TMP$1437$3 ) goto label$3269;
			label$3268:;
		}
	}
	label$3265:;
	label$3264:;
	label$3263:;
}

void _ZN4MATH12COMPLEXARRAYdVERKNS_7COMPLEXE( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH7COMPLEXE* C$1 )
{
	label$3272:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3275;
	{
		if( ((int64)-(*(double*)C$1 != 0x0p+0) | (int64)-(*(double*)((uint8*)C$1 + 8ll) != 0x0p+0)) == 0ll ) goto label$3277;
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
				int64 TMP$1438$4;
				TMP$1438$4 = *(int64*)THIS$1 + -1ll;
				goto label$3278;
				label$3281:;
				{
					X$3 = ((*(double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) * *(double*)C$1) + (*(double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) + 8ll) * *(double*)((uint8*)C$1 + 8ll))) / D$3;
					Y$3 = ((*(double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) + 8ll) * *(double*)C$1) - (*(double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) * *(double*)((uint8*)C$1 + 8ll))) / D$3;
					*(double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) = X$3;
					*(double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) + 8ll) = Y$3;
				}
				label$3279:;
				I$4 = I$4 + 1ll;
				label$3278:;
				if( I$4 <= TMP$1438$4 ) goto label$3281;
				label$3280:;
			}
		}
		goto label$3276;
		label$3277:;
		{
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1439$4;
				TMP$1439$4 = *(int64*)THIS$1 + -1ll;
				goto label$3282;
				label$3285:;
				{
					*(double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) = 0x0p+0;
					*(double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) + 8ll) = 0x0p+0;
				}
				label$3283:;
				I$4 = I$4 + 1ll;
				label$3282:;
				if( I$4 <= TMP$1439$4 ) goto label$3285;
				label$3284:;
			}
		}
		label$3276:;
	}
	label$3275:;
	label$3274:;
	label$3273:;
}

void _ZN4MATH12COMPLEXARRAYdVERKS0_( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH12COMPLEXARRAYE* A$1 )
{
	label$3286:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$3289;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1441$3;
			TMP$1441$3 = *(int64*)THIS$1 + -1ll;
			goto label$3290;
			label$3293:;
			{
				_ZN4MATH7COMPLEXdVERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)A$1 + 8ll) + (I$3 << (4ll & 63ll))) );
			}
			label$3291:;
			I$3 = I$3 + 1ll;
			label$3290:;
			if( I$3 <= TMP$1441$3 ) goto label$3293;
			label$3292:;
		}
	}
	label$3289:;
	label$3288:;
	label$3287:;
}

FBSTRING* _ZNK4MATH12COMPLEXARRAYcv8FBSTRINGEv( struct $N4MATH12COMPLEXARRAYE* THIS$1 )
{
	FBSTRING TMP$1443$1;
	FBSTRING TMP$1444$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$3294:;
	FBSTRING* vr$2 = fb_LongintToStr( *(int64*)THIS$1 );
	__builtin_memset( &TMP$1443$1, 0, 24ll );
	FBSTRING* vr$5 = fb_StrConcat( &TMP$1443$1, (void*)"<math.complexArray>{ length : ", 31ll, (void*)vr$2, -1ll );
	__builtin_memset( &TMP$1444$1, 0, 24ll );
	FBSTRING* vr$8 = fb_StrConcat( &TMP$1444$1, (void*)vr$5, -1ll, (void*)" }", 3ll );
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$8, -1ll, 0 );
	goto label$3295;
	label$3295:;
	FBSTRING* vr$11 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$11;
}

void _ZN4MATH12COMPLEXARRAYaSERKNS_5ARRAYE( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	label$3296:;
	*(int64*)THIS$1 = 0ll;
	if( *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3299;
	{
		if( *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3300;
		free( *(void**)((uint8*)THIS$1 + 8ll) );
		label$3300:;
		*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = (struct $N4MATH7COMPLEXE*)0ull;
	}
	label$3299:;
	label$3298:;
	if( *(int64*)A$1 == 0ll ) goto label$3302;
	{
		struct $N4MATH7COMPLEXE* TMP$1445$2;
		uint64 TMP$1446$2;
		struct $N4MATH7COMPLEXE* TMP$1447$2;
		*(int64*)THIS$1 = *(int64*)A$1;
		void* vr$10 = malloc( *(uint64*)A$1 << (4ull & 63ll) );
		TMP$1445$2 = (struct $N4MATH7COMPLEXE*)vr$10;
		if( TMP$1445$2 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3303;
		TMP$1447$2 = TMP$1445$2;
		TMP$1446$2 = *(uint64*)A$1;
		label$3304:;
		if( TMP$1446$2 == 0ull ) goto label$3305;
		_ZN4MATH7COMPLEXC1Ev( TMP$1447$2 );
		TMP$1447$2 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1447$2 + 16ll);
		TMP$1446$2 = TMP$1446$2 + 18446744073709551615ull;
		goto label$3304;
		label$3305:;
		label$3303:;
		*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = TMP$1445$2;
		double* P$2;
		double* vr$15 = _ZNK4MATH5ARRAY11DATA__get__Ev( A$1 );
		P$2 = vr$15;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1448$3;
			TMP$1448$3 = *(int64*)A$1 + -1ll;
			goto label$3306;
			label$3309:;
			{
				*(double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) = *(double*)((uint8*)P$2 + (I$3 << (3ll & 63ll)));
			}
			label$3307:;
			I$3 = I$3 + 1ll;
			label$3306:;
			if( I$3 <= TMP$1448$3 ) goto label$3309;
			label$3308:;
		}
	}
	label$3302:;
	label$3301:;
	label$3297:;
}

void _ZN4MATH12COMPLEXARRAYaSERKS0_( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH12COMPLEXARRAYE* A$1 )
{
	label$3310:;
	if( THIS$1 == A$1 ) goto label$3313;
	{
		*(int64*)THIS$1 = 0ll;
		if( *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3315;
		{
			if( *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3316;
			free( *(void**)((uint8*)THIS$1 + 8ll) );
			label$3316:;
			*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = (struct $N4MATH7COMPLEXE*)0ull;
		}
		label$3315:;
		label$3314:;
		if( *(int64*)A$1 == 0ll ) goto label$3318;
		{
			struct $N4MATH7COMPLEXE* TMP$1449$3;
			uint64 TMP$1450$3;
			struct $N4MATH7COMPLEXE* TMP$1451$3;
			*(int64*)THIS$1 = *(int64*)A$1;
			void* vr$10 = malloc( *(uint64*)A$1 << (4ull & 63ll) );
			TMP$1449$3 = (struct $N4MATH7COMPLEXE*)vr$10;
			if( TMP$1449$3 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3319;
			TMP$1451$3 = TMP$1449$3;
			TMP$1450$3 = *(uint64*)A$1;
			label$3320:;
			if( TMP$1450$3 == 0ull ) goto label$3321;
			_ZN4MATH7COMPLEXC1Ev( TMP$1451$3 );
			TMP$1451$3 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1451$3 + 16ll);
			TMP$1450$3 = TMP$1450$3 + 18446744073709551615ull;
			goto label$3320;
			label$3321:;
			label$3319:;
			*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = TMP$1449$3;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1452$4;
				TMP$1452$4 = *(int64*)A$1 + -1ll;
				goto label$3322;
				label$3325:;
				{
					_ZN4MATH7COMPLEXaSERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))), (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)A$1 + 8ll) + (I$4 << (4ll & 63ll))) );
				}
				label$3323:;
				I$4 = I$4 + 1ll;
				label$3322:;
				if( I$4 <= TMP$1452$4 ) goto label$3325;
				label$3324:;
			}
		}
		label$3318:;
		label$3317:;
	}
	label$3313:;
	label$3312:;
	label$3311:;
}

struct $N4MATH7COMPLEXE _ZNK4MATH12COMPLEXARRAY10AVG__get__Ev( struct $N4MATH12COMPLEXARRAYE* THIS$1 )
{
	struct $N4MATH7COMPLEXE fb$result$1;
	label$3326:;
	{
		int64 TMP$1453$2;
		TMP$1453$2 = *(int64*)THIS$1;
		if( TMP$1453$2 != 0ll ) goto label$3329;
		label$3330:;
		{
			_ZN4MATH7COMPLEXC1Ev( &fb$result$1 );
			goto label$3327;
		}
		goto label$3328;
		label$3329:;
		if( TMP$1453$2 != 1ll ) goto label$3331;
		label$3332:;
		{
			_ZN4MATH7COMPLEXC1ERKS0_( &fb$result$1, *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) );
			goto label$3327;
		}
		goto label$3328;
		label$3331:;
		{
			double TMP$1456$3;
			struct $N4MATH7COMPLEXE TMP$1457$3;
			struct $N4MATH7COMPLEXE R$3;
			_ZN4MATH7COMPLEXC1Ev( &R$3 );
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1455$4;
				TMP$1455$4 = *(int64*)THIS$1 + -1ll;
				goto label$3334;
				label$3337:;
				{
					_ZN4MATH7COMPLEXpLERKS0_( &R$3, (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) );
				}
				label$3335:;
				I$4 = I$4 + 1ll;
				label$3334:;
				if( I$4 <= TMP$1455$4 ) goto label$3337;
				label$3336:;
			}
			TMP$1456$3 = (double)*(int64*)THIS$1;
			struct $N4MATH7COMPLEXE vr$16 = _ZN4MATHdvERKNS_7COMPLEXERKd( (struct $N4MATH7COMPLEXE*)&R$3, (double*)&TMP$1456$3 );
			TMP$1457$3 = vr$16;
			_ZN4MATH7COMPLEXC1ERKS0_( &fb$result$1, (struct $N4MATH7COMPLEXE*)&TMP$1457$3 );
			goto label$3327;
		}
		label$3333:;
		label$3328:;
	}
	label$3327:;
	return fb$result$1;
}

struct $N4MATH7COMPLEXE* _ZNK4MATH12COMPLEXARRAY11DATA__get__Ev( struct $N4MATH12COMPLEXARRAYE* THIS$1 )
{
	struct $N4MATH7COMPLEXE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$3338:;
	fb$result$1 = *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll);
	goto label$3339;
	label$3339:;
	return fb$result$1;
}

void _ZN4MATH12COMPLEXARRAY13LENGTH__set__ERKu7INTEGER( struct $N4MATH12COMPLEXARRAYE* THIS$1, int64* L$1 )
{
	label$3340:;
	if( *L$1 <= 0ll ) goto label$3343;
	{
		if( *(int64*)THIS$1 <= 0ll ) goto label$3345;
		{
			if( *L$1 == *(int64*)THIS$1 ) goto label$3347;
			{
				struct $N4MATH7COMPLEXE* TMP$1458$4;
				uint64 TMP$1459$4;
				struct $N4MATH7COMPLEXE* TMP$1460$4;
				struct $N4MATH7COMPLEXE* Q$4;
				void* vr$6 = malloc( *(uint64*)L$1 << (4ull & 63ll) );
				TMP$1458$4 = (struct $N4MATH7COMPLEXE*)vr$6;
				if( TMP$1458$4 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3348;
				TMP$1460$4 = TMP$1458$4;
				TMP$1459$4 = *(uint64*)L$1;
				label$3349:;
				if( TMP$1459$4 == 0ull ) goto label$3350;
				_ZN4MATH7COMPLEXC1Ev( TMP$1460$4 );
				TMP$1460$4 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1460$4 + 16ll);
				TMP$1459$4 = TMP$1459$4 + 18446744073709551615ull;
				goto label$3349;
				label$3350:;
				label$3348:;
				Q$4 = TMP$1458$4;
				{
					int64 TMP$1461$5;
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1462$5;
					if( *L$1 >= *(int64*)THIS$1 ) goto label$3351;
					TMP$1461$5 = *L$1;
					goto label$3364;
					label$3351:;
					TMP$1461$5 = *(int64*)THIS$1;
					label$3364:;
					TMP$1462$5 = TMP$1461$5 + -1ll;
					goto label$3352;
					label$3355:;
					{
						_ZN4MATH7COMPLEXaSERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)Q$4 + (I$5 << (4ll & 63ll))), (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
					}
					label$3353:;
					I$5 = I$5 + 1ll;
					label$3352:;
					if( I$5 <= TMP$1462$5 ) goto label$3355;
					label$3354:;
				}
				*(int64*)THIS$1 = *L$1;
				if( *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3356;
				free( *(void**)((uint8*)THIS$1 + 8ll) );
				label$3356:;
				*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = Q$4;
			}
			label$3347:;
			label$3346:;
		}
		goto label$3344;
		label$3345:;
		{
			struct $N4MATH7COMPLEXE* TMP$1463$3;
			uint64 TMP$1464$3;
			struct $N4MATH7COMPLEXE* TMP$1465$3;
			*(int64*)THIS$1 = *L$1;
			void* vr$30 = malloc( *(uint64*)THIS$1 << (4ull & 63ll) );
			TMP$1463$3 = (struct $N4MATH7COMPLEXE*)vr$30;
			if( TMP$1463$3 == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3357;
			TMP$1465$3 = TMP$1463$3;
			TMP$1464$3 = *(uint64*)THIS$1;
			label$3358:;
			if( TMP$1464$3 == 0ull ) goto label$3359;
			_ZN4MATH7COMPLEXC1Ev( TMP$1465$3 );
			TMP$1465$3 = (struct $N4MATH7COMPLEXE*)((uint8*)TMP$1465$3 + 16ll);
			TMP$1464$3 = TMP$1464$3 + 18446744073709551615ull;
			goto label$3358;
			label$3359:;
			label$3357:;
			*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = TMP$1463$3;
		}
		label$3344:;
	}
	goto label$3342;
	label$3343:;
	if( *L$1 != 0ll ) goto label$3360;
	{
		if( *(int64*)THIS$1 <= 0ll ) goto label$3362;
		{
			*(int64*)THIS$1 = 0ll;
			if( *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH7COMPLEXE*)0ull ) goto label$3363;
			free( *(void**)((uint8*)THIS$1 + 8ll) );
			label$3363:;
			*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) = (struct $N4MATH7COMPLEXE*)0ull;
		}
		label$3362:;
		label$3361:;
	}
	label$3360:;
	label$3342:;
	label$3341:;
}

boolean _ZN4MATH12COMPLEXARRAY7FOREACHEPFvRNS_7COMPLEXEERKb( struct $N4MATH12COMPLEXARRAYE* THIS$1, tmp$1359 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$3365:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3368;
	{
		if( F$1 == (tmp$1359)0ull ) goto label$3370;
		{
			if( *R$1 == (boolean)0ll ) goto label$3372;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$3373;
					label$3376:;
					{
						(F$1)( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
					}
					label$3374:;
					I$5 = I$5 + -1ll;
					label$3373:;
					if( I$5 >= 0ll ) goto label$3376;
					label$3375:;
				}
			}
			goto label$3371;
			label$3372:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1466$5;
					TMP$1466$5 = *(int64*)THIS$1 + -1ll;
					goto label$3377;
					label$3380:;
					{
						(F$1)( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
					}
					label$3378:;
					I$5 = I$5 + 1ll;
					label$3377:;
					if( I$5 <= TMP$1466$5 ) goto label$3380;
					label$3379:;
				}
			}
			label$3371:;
			fb$result$1 = (boolean)1ll;
			goto label$3366;
		}
		label$3370:;
		label$3369:;
	}
	label$3368:;
	label$3367:;
	fb$result$1 = (boolean)0ll;
	goto label$3366;
	label$3366:;
	return fb$result$1;
}

boolean _ZN4MATH12COMPLEXARRAY7FOREACHEPFbRNS_7COMPLEXEERKb( struct $N4MATH12COMPLEXARRAYE* THIS$1, tmp$1361 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$3381:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3384;
	{
		if( F$1 == (tmp$1361)0ull ) goto label$3386;
		{
			if( *R$1 == (boolean)0ll ) goto label$3388;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$3389;
					label$3392:;
					{
						boolean vr$8 = (F$1)( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
						if( vr$8 != (boolean)0ll ) goto label$3394;
						{
							goto label$3391;
						}
						label$3394:;
						label$3393:;
					}
					label$3390:;
					I$5 = I$5 + -1ll;
					label$3389:;
					if( I$5 >= 0ll ) goto label$3392;
					label$3391:;
				}
			}
			goto label$3387;
			label$3388:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1467$5;
					TMP$1467$5 = *(int64*)THIS$1 + -1ll;
					goto label$3395;
					label$3398:;
					{
						boolean vr$15 = (F$1)( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
						if( vr$15 != (boolean)0ll ) goto label$3400;
						{
							goto label$3397;
						}
						label$3400:;
						label$3399:;
					}
					label$3396:;
					I$5 = I$5 + 1ll;
					label$3395:;
					if( I$5 <= TMP$1467$5 ) goto label$3398;
					label$3397:;
				}
			}
			label$3387:;
			fb$result$1 = (boolean)1ll;
			goto label$3382;
		}
		label$3386:;
		label$3385:;
	}
	label$3384:;
	label$3383:;
	fb$result$1 = (boolean)0ll;
	goto label$3382;
	label$3382:;
	return fb$result$1;
}

boolean _ZN4MATH12COMPLEXARRAY7FOREACHEPFvRNS_7COMPLEXERKu7INTEGERERKb( struct $N4MATH12COMPLEXARRAYE* THIS$1, tmp$1360 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$3401:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3404;
	{
		if( F$1 == (tmp$1360)0ull ) goto label$3406;
		{
			if( *R$1 == (boolean)0ll ) goto label$3408;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$3409;
					label$3412:;
					{
						(F$1)( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
					}
					label$3410:;
					I$5 = I$5 + -1ll;
					label$3409:;
					if( I$5 >= 0ll ) goto label$3412;
					label$3411:;
				}
			}
			goto label$3407;
			label$3408:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1468$5;
					TMP$1468$5 = *(int64*)THIS$1 + -1ll;
					goto label$3413;
					label$3416:;
					{
						(F$1)( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
					}
					label$3414:;
					I$5 = I$5 + 1ll;
					label$3413:;
					if( I$5 <= TMP$1468$5 ) goto label$3416;
					label$3415:;
				}
			}
			label$3407:;
			fb$result$1 = (boolean)1ll;
			goto label$3402;
		}
		label$3406:;
		label$3405:;
	}
	label$3404:;
	label$3403:;
	fb$result$1 = (boolean)0ll;
	goto label$3402;
	label$3402:;
	return fb$result$1;
}

boolean _ZN4MATH12COMPLEXARRAY7FOREACHEPFbRNS_7COMPLEXERKu7INTEGERERKb( struct $N4MATH12COMPLEXARRAYE* THIS$1, tmp$1362 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$3417:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3420;
	{
		if( F$1 == (tmp$1362)0ull ) goto label$3422;
		{
			if( *R$1 == (boolean)0ll ) goto label$3424;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$3425;
					label$3428:;
					{
						boolean vr$9 = (F$1)( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
						if( vr$9 != (boolean)0ll ) goto label$3430;
						{
							goto label$3427;
						}
						label$3430:;
						label$3429:;
					}
					label$3426:;
					I$5 = I$5 + -1ll;
					label$3425:;
					if( I$5 >= 0ll ) goto label$3428;
					label$3427:;
				}
			}
			goto label$3423;
			label$3424:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1469$5;
					TMP$1469$5 = *(int64*)THIS$1 + -1ll;
					goto label$3431;
					label$3434:;
					{
						boolean vr$17 = (F$1)( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
						if( vr$17 != (boolean)0ll ) goto label$3436;
						{
							goto label$3433;
						}
						label$3436:;
						label$3435:;
					}
					label$3432:;
					I$5 = I$5 + 1ll;
					label$3431:;
					if( I$5 <= TMP$1469$5 ) goto label$3434;
					label$3433:;
				}
			}
			label$3423:;
			fb$result$1 = (boolean)1ll;
			goto label$3418;
		}
		label$3422:;
		label$3421:;
	}
	label$3420:;
	label$3419:;
	fb$result$1 = (boolean)0ll;
	goto label$3418;
	label$3418:;
	return fb$result$1;
}

boolean _ZN4MATH12COMPLEXARRAY8FOREACHIEPFvRdERKb( struct $N4MATH12COMPLEXARRAYE* THIS$1, tmp$1294 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$3437:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3440;
	{
		if( F$1 == (tmp$1294)0ull ) goto label$3442;
		{
			if( *R$1 == (boolean)0ll ) goto label$3444;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$3445;
					label$3448:;
					{
						(F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) );
					}
					label$3446:;
					I$5 = I$5 + -1ll;
					label$3445:;
					if( I$5 >= 0ll ) goto label$3448;
					label$3447:;
				}
			}
			goto label$3443;
			label$3444:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1470$5;
					TMP$1470$5 = *(int64*)THIS$1 + -1ll;
					goto label$3449;
					label$3452:;
					{
						(F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) );
					}
					label$3450:;
					I$5 = I$5 + 1ll;
					label$3449:;
					if( I$5 <= TMP$1470$5 ) goto label$3452;
					label$3451:;
				}
			}
			label$3443:;
			fb$result$1 = (boolean)1ll;
			goto label$3438;
		}
		label$3442:;
		label$3441:;
	}
	label$3440:;
	label$3439:;
	fb$result$1 = (boolean)0ll;
	goto label$3438;
	label$3438:;
	return fb$result$1;
}

boolean _ZN4MATH12COMPLEXARRAY8FOREACHIEPFbRdERKb( struct $N4MATH12COMPLEXARRAYE* THIS$1, tmp$1296 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$3453:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3456;
	{
		if( F$1 == (tmp$1296)0ull ) goto label$3458;
		{
			if( *R$1 == (boolean)0ll ) goto label$3460;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$3461;
					label$3464:;
					{
						boolean vr$9 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) );
						if( vr$9 != (boolean)0ll ) goto label$3466;
						{
							goto label$3463;
						}
						label$3466:;
						label$3465:;
					}
					label$3462:;
					I$5 = I$5 + -1ll;
					label$3461:;
					if( I$5 >= 0ll ) goto label$3464;
					label$3463:;
				}
			}
			goto label$3459;
			label$3460:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1471$5;
					TMP$1471$5 = *(int64*)THIS$1 + -1ll;
					goto label$3467;
					label$3470:;
					{
						boolean vr$17 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) );
						if( vr$17 != (boolean)0ll ) goto label$3472;
						{
							goto label$3469;
						}
						label$3472:;
						label$3471:;
					}
					label$3468:;
					I$5 = I$5 + 1ll;
					label$3467:;
					if( I$5 <= TMP$1471$5 ) goto label$3470;
					label$3469:;
				}
			}
			label$3459:;
			fb$result$1 = (boolean)1ll;
			goto label$3454;
		}
		label$3458:;
		label$3457:;
	}
	label$3456:;
	label$3455:;
	fb$result$1 = (boolean)0ll;
	goto label$3454;
	label$3454:;
	return fb$result$1;
}

boolean _ZN4MATH12COMPLEXARRAY8FOREACHIEPFvRdRKu7INTEGERERKb( struct $N4MATH12COMPLEXARRAYE* THIS$1, tmp$1295 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$3473:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3476;
	{
		if( F$1 == (tmp$1295)0ull ) goto label$3478;
		{
			if( *R$1 == (boolean)0ll ) goto label$3480;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$3481;
					label$3484:;
					{
						(F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll), (int64*)&I$5 );
					}
					label$3482:;
					I$5 = I$5 + -1ll;
					label$3481:;
					if( I$5 >= 0ll ) goto label$3484;
					label$3483:;
				}
			}
			goto label$3479;
			label$3480:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1472$5;
					TMP$1472$5 = *(int64*)THIS$1 + -1ll;
					goto label$3485;
					label$3488:;
					{
						(F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll), (int64*)&I$5 );
					}
					label$3486:;
					I$5 = I$5 + 1ll;
					label$3485:;
					if( I$5 <= TMP$1472$5 ) goto label$3488;
					label$3487:;
				}
			}
			label$3479:;
			fb$result$1 = (boolean)1ll;
			goto label$3474;
		}
		label$3478:;
		label$3477:;
	}
	label$3476:;
	label$3475:;
	fb$result$1 = (boolean)0ll;
	goto label$3474;
	label$3474:;
	return fb$result$1;
}

boolean _ZN4MATH12COMPLEXARRAY8FOREACHIEPFbRdRKu7INTEGERERKb( struct $N4MATH12COMPLEXARRAYE* THIS$1, tmp$1297 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$3489:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3492;
	{
		if( F$1 == (tmp$1297)0ull ) goto label$3494;
		{
			if( *R$1 == (boolean)0ll ) goto label$3496;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$3497;
					label$3500:;
					{
						boolean vr$10 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll), (int64*)&I$5 );
						if( vr$10 != (boolean)0ll ) goto label$3502;
						{
							goto label$3499;
						}
						label$3502:;
						label$3501:;
					}
					label$3498:;
					I$5 = I$5 + -1ll;
					label$3497:;
					if( I$5 >= 0ll ) goto label$3500;
					label$3499:;
				}
			}
			goto label$3495;
			label$3496:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1473$5;
					TMP$1473$5 = *(int64*)THIS$1 + -1ll;
					goto label$3503;
					label$3506:;
					{
						boolean vr$19 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll), (int64*)&I$5 );
						if( vr$19 != (boolean)0ll ) goto label$3508;
						{
							goto label$3505;
						}
						label$3508:;
						label$3507:;
					}
					label$3504:;
					I$5 = I$5 + 1ll;
					label$3503:;
					if( I$5 <= TMP$1473$5 ) goto label$3506;
					label$3505:;
				}
			}
			label$3495:;
			fb$result$1 = (boolean)1ll;
			goto label$3490;
		}
		label$3494:;
		label$3493:;
	}
	label$3492:;
	label$3491:;
	fb$result$1 = (boolean)0ll;
	goto label$3490;
	label$3490:;
	return fb$result$1;
}

boolean _ZN4MATH12COMPLEXARRAY8FOREACHREPFvRdERKb( struct $N4MATH12COMPLEXARRAYE* THIS$1, tmp$1294 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$3509:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3512;
	{
		if( F$1 == (tmp$1294)0ull ) goto label$3514;
		{
			if( *R$1 == (boolean)0ll ) goto label$3516;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$3517;
					label$3520:;
					{
						(F$1)( (double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
					}
					label$3518:;
					I$5 = I$5 + -1ll;
					label$3517:;
					if( I$5 >= 0ll ) goto label$3520;
					label$3519:;
				}
			}
			goto label$3515;
			label$3516:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1474$5;
					TMP$1474$5 = *(int64*)THIS$1 + -1ll;
					goto label$3521;
					label$3524:;
					{
						(F$1)( (double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
					}
					label$3522:;
					I$5 = I$5 + 1ll;
					label$3521:;
					if( I$5 <= TMP$1474$5 ) goto label$3524;
					label$3523:;
				}
			}
			label$3515:;
			fb$result$1 = (boolean)1ll;
			goto label$3510;
		}
		label$3514:;
		label$3513:;
	}
	label$3512:;
	label$3511:;
	fb$result$1 = (boolean)0ll;
	goto label$3510;
	label$3510:;
	return fb$result$1;
}

boolean _ZN4MATH12COMPLEXARRAY8FOREACHREPFbRdERKb( struct $N4MATH12COMPLEXARRAYE* THIS$1, tmp$1296 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$3525:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3528;
	{
		if( F$1 == (tmp$1296)0ull ) goto label$3530;
		{
			if( *R$1 == (boolean)0ll ) goto label$3532;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$3533;
					label$3536:;
					{
						boolean vr$9 = (F$1)( (double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
						if( vr$9 != (boolean)0ll ) goto label$3538;
						{
							goto label$3535;
						}
						label$3538:;
						label$3537:;
					}
					label$3534:;
					I$5 = I$5 + -1ll;
					label$3533:;
					if( I$5 >= 0ll ) goto label$3536;
					label$3535:;
				}
			}
			goto label$3531;
			label$3532:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1475$5;
					TMP$1475$5 = *(int64*)THIS$1 + -1ll;
					goto label$3539;
					label$3542:;
					{
						boolean vr$17 = (F$1)( (double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
						if( vr$17 != (boolean)0ll ) goto label$3544;
						{
							goto label$3541;
						}
						label$3544:;
						label$3543:;
					}
					label$3540:;
					I$5 = I$5 + 1ll;
					label$3539:;
					if( I$5 <= TMP$1475$5 ) goto label$3542;
					label$3541:;
				}
			}
			label$3531:;
			fb$result$1 = (boolean)1ll;
			goto label$3526;
		}
		label$3530:;
		label$3529:;
	}
	label$3528:;
	label$3527:;
	fb$result$1 = (boolean)0ll;
	goto label$3526;
	label$3526:;
	return fb$result$1;
}

boolean _ZN4MATH12COMPLEXARRAY8FOREACHREPFvRdRKu7INTEGERERKb( struct $N4MATH12COMPLEXARRAYE* THIS$1, tmp$1295 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$3545:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3548;
	{
		if( F$1 == (tmp$1295)0ull ) goto label$3550;
		{
			if( *R$1 == (boolean)0ll ) goto label$3552;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$3553;
					label$3556:;
					{
						(F$1)( (double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
					}
					label$3554:;
					I$5 = I$5 + -1ll;
					label$3553:;
					if( I$5 >= 0ll ) goto label$3556;
					label$3555:;
				}
			}
			goto label$3551;
			label$3552:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1476$5;
					TMP$1476$5 = *(int64*)THIS$1 + -1ll;
					goto label$3557;
					label$3560:;
					{
						(F$1)( (double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
					}
					label$3558:;
					I$5 = I$5 + 1ll;
					label$3557:;
					if( I$5 <= TMP$1476$5 ) goto label$3560;
					label$3559:;
				}
			}
			label$3551:;
			fb$result$1 = (boolean)1ll;
			goto label$3546;
		}
		label$3550:;
		label$3549:;
	}
	label$3548:;
	label$3547:;
	fb$result$1 = (boolean)0ll;
	goto label$3546;
	label$3546:;
	return fb$result$1;
}

boolean _ZN4MATH12COMPLEXARRAY8FOREACHREPFbRdRKu7INTEGERERKb( struct $N4MATH12COMPLEXARRAYE* THIS$1, tmp$1297 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$3561:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3564;
	{
		if( F$1 == (tmp$1297)0ull ) goto label$3566;
		{
			if( *R$1 == (boolean)0ll ) goto label$3568;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$3569;
					label$3572:;
					{
						boolean vr$10 = (F$1)( (double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
						if( vr$10 != (boolean)0ll ) goto label$3574;
						{
							goto label$3571;
						}
						label$3574:;
						label$3573:;
					}
					label$3570:;
					I$5 = I$5 + -1ll;
					label$3569:;
					if( I$5 >= 0ll ) goto label$3572;
					label$3571:;
				}
			}
			goto label$3567;
			label$3568:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1477$5;
					TMP$1477$5 = *(int64*)THIS$1 + -1ll;
					goto label$3575;
					label$3578:;
					{
						boolean vr$19 = (F$1)( (double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
						if( vr$19 != (boolean)0ll ) goto label$3580;
						{
							goto label$3577;
						}
						label$3580:;
						label$3579:;
					}
					label$3576:;
					I$5 = I$5 + 1ll;
					label$3575:;
					if( I$5 <= TMP$1477$5 ) goto label$3578;
					label$3577:;
				}
			}
			label$3567:;
			fb$result$1 = (boolean)1ll;
			goto label$3562;
		}
		label$3566:;
		label$3565:;
	}
	label$3564:;
	label$3563:;
	fb$result$1 = (boolean)0ll;
	goto label$3562;
	label$3562:;
	return fb$result$1;
}

boolean _ZNK4MATH12COMPLEXARRAY3MAPERS0_PFNS_7COMPLEXERKS2_E( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH12COMPLEXARRAYE* A$1, tmp$1363 F$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$3581:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3584;
	{
		if( F$1 == (tmp$1363)0ull ) goto label$3586;
		{
			_ZN4MATH12COMPLEXARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1478$4;
				TMP$1478$4 = *(int64*)THIS$1 + -1ll;
				goto label$3587;
				label$3590:;
				{
					struct $N4MATH7COMPLEXE TMP$1479$5;
					struct $N4MATH7COMPLEXE vr$9 = (F$1)( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) );
					TMP$1479$5 = vr$9;
					_ZN4MATH7COMPLEXaSERKS0_( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)A$1 + 8ll) + (I$4 << (4ll & 63ll))), (struct $N4MATH7COMPLEXE*)&TMP$1479$5 );
				}
				label$3588:;
				I$4 = I$4 + 1ll;
				label$3587:;
				if( I$4 <= TMP$1478$4 ) goto label$3590;
				label$3589:;
			}
			fb$result$1 = (boolean)1ll;
			goto label$3582;
		}
		label$3586:;
		label$3585:;
	}
	label$3584:;
	label$3583:;
	fb$result$1 = (boolean)0ll;
	goto label$3582;
	label$3582:;
	return fb$result$1;
}

boolean _ZNK4MATH12COMPLEXARRAY4MAPIERNS_5ARRAYE( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$3591:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3594;
	{
		_ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
		double* P$2;
		double* vr$4 = _ZNK4MATH5ARRAY11DATA__get__Ev( (struct $N4MATH5ARRAYE*)A$1 );
		P$2 = vr$4;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1480$3;
			TMP$1480$3 = *(int64*)THIS$1 + -1ll;
			goto label$3595;
			label$3598:;
			{
				*(double*)((uint8*)P$2 + (I$3 << (3ll & 63ll))) = *(double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll);
			}
			label$3596:;
			I$3 = I$3 + 1ll;
			label$3595:;
			if( I$3 <= TMP$1480$3 ) goto label$3598;
			label$3597:;
		}
		fb$result$1 = (boolean)1ll;
		goto label$3592;
	}
	label$3594:;
	label$3593:;
	fb$result$1 = (boolean)0ll;
	goto label$3592;
	label$3592:;
	return fb$result$1;
}

boolean _ZNK4MATH12COMPLEXARRAY4MAPIERNS_5ARRAYEPFdRKdE( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1, tmp$1298 F$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$3599:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3602;
	{
		if( F$1 == (tmp$1298)0ull ) goto label$3604;
		{
			_ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
			double* P$3;
			double* vr$4 = _ZNK4MATH5ARRAY11DATA__get__Ev( (struct $N4MATH5ARRAYE*)A$1 );
			P$3 = vr$4;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1481$4;
				TMP$1481$4 = *(int64*)THIS$1 + -1ll;
				goto label$3605;
				label$3608:;
				{
					double vr$11 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) + 8ll) );
					*(double*)((uint8*)P$3 + (I$4 << (3ll & 63ll))) = vr$11;
				}
				label$3606:;
				I$4 = I$4 + 1ll;
				label$3605:;
				if( I$4 <= TMP$1481$4 ) goto label$3608;
				label$3607:;
			}
			fb$result$1 = (boolean)1ll;
			goto label$3600;
		}
		label$3604:;
		label$3603:;
	}
	label$3602:;
	label$3601:;
	fb$result$1 = (boolean)0ll;
	goto label$3600;
	label$3600:;
	return fb$result$1;
}

boolean _ZNK4MATH12COMPLEXARRAY4MAPRERNS_5ARRAYE( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$3609:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3612;
	{
		_ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
		double* P$2;
		double* vr$4 = _ZNK4MATH5ARRAY11DATA__get__Ev( (struct $N4MATH5ARRAYE*)A$1 );
		P$2 = vr$4;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1482$3;
			TMP$1482$3 = *(int64*)THIS$1 + -1ll;
			goto label$3613;
			label$3616:;
			{
				*(double*)((uint8*)P$2 + (I$3 << (3ll & 63ll))) = *(double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll)));
			}
			label$3614:;
			I$3 = I$3 + 1ll;
			label$3613:;
			if( I$3 <= TMP$1482$3 ) goto label$3616;
			label$3615:;
		}
		fb$result$1 = (boolean)1ll;
		goto label$3610;
	}
	label$3612:;
	label$3611:;
	fb$result$1 = (boolean)0ll;
	goto label$3610;
	label$3610:;
	return fb$result$1;
}

boolean _ZNK4MATH12COMPLEXARRAY4MAPRERNS_5ARRAYEPFdRKdE( struct $N4MATH12COMPLEXARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1, tmp$1298 F$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$3617:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3620;
	{
		if( F$1 == (tmp$1298)0ull ) goto label$3622;
		{
			_ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
			double* P$3;
			double* vr$4 = _ZNK4MATH5ARRAY11DATA__get__Ev( (struct $N4MATH5ARRAYE*)A$1 );
			P$3 = vr$4;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1483$4;
				TMP$1483$4 = *(int64*)THIS$1 + -1ll;
				goto label$3623;
				label$3626:;
				{
					double vr$11 = (F$1)( (double*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) );
					*(double*)((uint8*)P$3 + (I$4 << (3ll & 63ll))) = vr$11;
				}
				label$3624:;
				I$4 = I$4 + 1ll;
				label$3623:;
				if( I$4 <= TMP$1483$4 ) goto label$3626;
				label$3625:;
			}
			fb$result$1 = (boolean)1ll;
			goto label$3618;
		}
		label$3622:;
		label$3621:;
	}
	label$3620:;
	label$3619:;
	fb$result$1 = (boolean)0ll;
	goto label$3618;
	label$3618:;
	return fb$result$1;
}

FBSTRING* _ZNK4MATH12COMPLEXARRAY6TOJSONERKb( struct $N4MATH12COMPLEXARRAYE* THIS$1, boolean* A$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$3627:;
	{
		int64 TMP$1484$2;
		TMP$1484$2 = *(int64*)THIS$1;
		if( TMP$1484$2 != 0ll ) goto label$3630;
		label$3631:;
		{
			fb_StrInit( (void*)&fb$result$1, -1ll, (void*)"[]", 3ll, 0 );
			goto label$3628;
		}
		goto label$3629;
		label$3630:;
		if( TMP$1484$2 != 1ll ) goto label$3632;
		label$3633:;
		{
			FBSTRING TMP$1485$3;
			FBSTRING TMP$1486$3;
			FBSTRING* vr$4 = _ZNK4MATH7COMPLEX6TOJSONERKb( *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll), A$1 );
			__builtin_memset( &TMP$1485$3, 0, 24ll );
			FBSTRING* vr$7 = fb_StrConcat( &TMP$1485$3, (void*)"[", 2ll, (void*)vr$4, -1ll );
			__builtin_memset( &TMP$1486$3, 0, 24ll );
			FBSTRING* vr$10 = fb_StrConcat( &TMP$1486$3, (void*)vr$7, -1ll, (void*)"]", 2ll );
			fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$10, -1ll, 0 );
			goto label$3628;
		}
		goto label$3629;
		label$3632:;
		{
			FBSTRING TMP$1487$3;
			FBSTRING TMP$1491$3;
			FBSTRING R$3;
			FBSTRING* vr$13 = _ZNK4MATH7COMPLEX6TOJSONERKb( *(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll), A$1 );
			__builtin_memset( &TMP$1487$3, 0, 24ll );
			FBSTRING* vr$16 = fb_StrConcat( &TMP$1487$3, (void*)"[", 2ll, (void*)vr$13, -1ll );
			fb_StrInit( (void*)&R$3, -1ll, (void*)vr$16, -1ll, 0 );
			{
				int64 I$4;
				I$4 = 1ll;
				int64 TMP$1488$4;
				TMP$1488$4 = *(int64*)THIS$1 + -1ll;
				goto label$3635;
				label$3638:;
				{
					FBSTRING TMP$1489$5;
					FBSTRING TMP$1490$5;
					FBSTRING* vr$23 = _ZNK4MATH7COMPLEX6TOJSONERKb( (struct $N4MATH7COMPLEXE*)((uint8*)*(struct $N4MATH7COMPLEXE**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))), A$1 );
					__builtin_memset( &TMP$1489$5, 0, 24ll );
					FBSTRING* vr$26 = fb_StrConcat( &TMP$1489$5, (void*)",", 2ll, (void*)vr$23, -1ll );
					__builtin_memset( &TMP$1490$5, 0, 24ll );
					FBSTRING* vr$30 = fb_StrConcat( &TMP$1490$5, (void*)&R$3, -1ll, (void*)vr$26, -1ll );
					fb_StrAssign( (void*)&R$3, -1ll, (void*)vr$30, -1ll, 0 );
				}
				label$3636:;
				I$4 = I$4 + 1ll;
				label$3635:;
				if( I$4 <= TMP$1488$4 ) goto label$3638;
				label$3637:;
			}
			__builtin_memset( &TMP$1491$3, 0, 24ll );
			FBSTRING* vr$36 = fb_StrConcat( &TMP$1491$3, (void*)&R$3, -1ll, (void*)"]", 2ll );
			fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$36, -1ll, 0 );
			fb_StrDelete( (FBSTRING*)&R$3 );
			goto label$3628;
			fb_StrDelete( (FBSTRING*)&R$3 );
		}
		label$3634:;
		label$3629:;
	}
	label$3628:;
	FBSTRING* vr$41 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$41;
}

void _ZN4MATH7V2ARRAYC1Ev( struct $N4MATH7V2ARRAYE* THIS$1 )
{
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC2C1Ev( (struct $N4MATH4VEC2E*)((uint8*)THIS$1 + 16ll) );
	label$3639:;
	label$3640:;
}

void _ZN4MATH7V2ARRAYC1ERKu7INTEGER( struct $N4MATH7V2ARRAYE* THIS$1, int64* L$1 )
{
	label$3641:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC2C1Ev( (struct $N4MATH4VEC2E*)((uint8*)THIS$1 + 16ll) );
	if( *L$1 <= 0ll ) goto label$3644;
	{
		struct $N4MATH4VEC2E* TMP$1497$2;
		uint64 TMP$1498$2;
		struct $N4MATH4VEC2E* TMP$1499$2;
		*(int64*)THIS$1 = *L$1;
		void* vr$11 = malloc( *(uint64*)L$1 << (4ull & 63ll) );
		TMP$1497$2 = (struct $N4MATH4VEC2E*)vr$11;
		if( TMP$1497$2 == (struct $N4MATH4VEC2E*)0ull ) goto label$3645;
		TMP$1499$2 = TMP$1497$2;
		TMP$1498$2 = *(uint64*)L$1;
		label$3646:;
		if( TMP$1498$2 == 0ull ) goto label$3647;
		_ZN4MATH4VEC2C1Ev( TMP$1499$2 );
		TMP$1499$2 = (struct $N4MATH4VEC2E*)((uint8*)TMP$1499$2 + 16ll);
		TMP$1498$2 = TMP$1498$2 + 18446744073709551615ull;
		goto label$3646;
		label$3647:;
		label$3645:;
		*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) = TMP$1497$2;
	}
	label$3644:;
	label$3643:;
	label$3642:;
}

void _ZN4MATH7V2ARRAYC1ERKu7INTEGERPFvRNS_4VEC2EERKb( struct $N4MATH7V2ARRAYE* THIS$1, int64* L$1, tmp$1492 F$1, boolean* R$1 )
{
	label$3648:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC2C1Ev( (struct $N4MATH4VEC2E*)((uint8*)THIS$1 + 16ll) );
	if( *L$1 <= 0ll ) goto label$3651;
	{
		struct $N4MATH4VEC2E* TMP$1500$2;
		uint64 TMP$1501$2;
		struct $N4MATH4VEC2E* TMP$1502$2;
		*(int64*)THIS$1 = *L$1;
		void* vr$11 = malloc( *(uint64*)L$1 << (4ull & 63ll) );
		TMP$1500$2 = (struct $N4MATH4VEC2E*)vr$11;
		if( TMP$1500$2 == (struct $N4MATH4VEC2E*)0ull ) goto label$3652;
		TMP$1502$2 = TMP$1500$2;
		TMP$1501$2 = *(uint64*)L$1;
		label$3653:;
		if( TMP$1501$2 == 0ull ) goto label$3654;
		_ZN4MATH4VEC2C1Ev( TMP$1502$2 );
		TMP$1502$2 = (struct $N4MATH4VEC2E*)((uint8*)TMP$1502$2 + 16ll);
		TMP$1501$2 = TMP$1501$2 + 18446744073709551615ull;
		goto label$3653;
		label$3654:;
		label$3652:;
		*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) = TMP$1500$2;
		if( F$1 == (tmp$1492)0ull ) goto label$3656;
		{
			if( *R$1 == (boolean)0ll ) goto label$3658;
			{
				{
					int64 I$5;
					I$5 = *L$1 + -1ll;
					goto label$3659;
					label$3662:;
					{
						(F$1)( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
					}
					label$3660:;
					I$5 = I$5 + -1ll;
					label$3659:;
					if( I$5 >= 0ll ) goto label$3662;
					label$3661:;
				}
			}
			goto label$3657;
			label$3658:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1503$5;
					TMP$1503$5 = *L$1 + -1ll;
					goto label$3663;
					label$3666:;
					{
						(F$1)( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
					}
					label$3664:;
					I$5 = I$5 + 1ll;
					label$3663:;
					if( I$5 <= TMP$1503$5 ) goto label$3666;
					label$3665:;
				}
			}
			label$3657:;
		}
		label$3656:;
		label$3655:;
	}
	label$3651:;
	label$3650:;
	label$3649:;
}

void _ZN4MATH7V2ARRAYC1ERKu7INTEGERPFvRNS_4VEC2ES3_ERKb( struct $N4MATH7V2ARRAYE* THIS$1, int64* L$1, tmp$1493 F$1, boolean* R$1 )
{
	label$3667:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC2C1Ev( (struct $N4MATH4VEC2E*)((uint8*)THIS$1 + 16ll) );
	if( *L$1 <= 0ll ) goto label$3670;
	{
		struct $N4MATH4VEC2E* TMP$1504$2;
		uint64 TMP$1505$2;
		struct $N4MATH4VEC2E* TMP$1506$2;
		*(int64*)THIS$1 = *L$1;
		void* vr$11 = malloc( *(uint64*)L$1 << (4ull & 63ll) );
		TMP$1504$2 = (struct $N4MATH4VEC2E*)vr$11;
		if( TMP$1504$2 == (struct $N4MATH4VEC2E*)0ull ) goto label$3671;
		TMP$1506$2 = TMP$1504$2;
		TMP$1505$2 = *(uint64*)L$1;
		label$3672:;
		if( TMP$1505$2 == 0ull ) goto label$3673;
		_ZN4MATH4VEC2C1Ev( TMP$1506$2 );
		TMP$1506$2 = (struct $N4MATH4VEC2E*)((uint8*)TMP$1506$2 + 16ll);
		TMP$1505$2 = TMP$1505$2 + 18446744073709551615ull;
		goto label$3672;
		label$3673:;
		label$3671:;
		*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) = TMP$1504$2;
		if( F$1 == (tmp$1493)0ull ) goto label$3675;
		{
			if( *R$1 == (boolean)0ll ) goto label$3677;
			{
				{
					int64 I$5;
					I$5 = *L$1 + -1ll;
					goto label$3678;
					label$3681:;
					{
						(F$1)( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
					}
					label$3679:;
					I$5 = I$5 + -1ll;
					label$3678:;
					if( I$5 >= 0ll ) goto label$3681;
					label$3680:;
				}
			}
			goto label$3676;
			label$3677:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1507$5;
					TMP$1507$5 = *L$1 + -1ll;
					goto label$3682;
					label$3685:;
					{
						(F$1)( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
					}
					label$3683:;
					I$5 = I$5 + 1ll;
					label$3682:;
					if( I$5 <= TMP$1507$5 ) goto label$3685;
					label$3684:;
				}
			}
			label$3676:;
		}
		label$3675:;
		label$3674:;
	}
	label$3670:;
	label$3669:;
	label$3668:;
}

void _ZN4MATH7V2ARRAYC1ERKNS_5ARRAYES3_( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A1$1, struct $N4MATH5ARRAYE* A2$1 )
{
	label$3686:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC2C1Ev( (struct $N4MATH4VEC2E*)((uint8*)THIS$1 + 16ll) );
	if( ((int64)-(*(int64*)A1$1 > 0ll) & (int64)-(*(int64*)A1$1 == *(int64*)A2$1)) == 0ll ) goto label$3689;
	{
		struct $N4MATH4VEC2E* TMP$1508$2;
		uint64 TMP$1509$2;
		struct $N4MATH4VEC2E* TMP$1510$2;
		*(int64*)THIS$1 = *(int64*)A1$1;
		void* vr$16 = malloc( *(uint64*)A1$1 << (4ull & 63ll) );
		TMP$1508$2 = (struct $N4MATH4VEC2E*)vr$16;
		if( TMP$1508$2 == (struct $N4MATH4VEC2E*)0ull ) goto label$3690;
		TMP$1510$2 = TMP$1508$2;
		TMP$1509$2 = *(uint64*)A1$1;
		label$3691:;
		if( TMP$1509$2 == 0ull ) goto label$3692;
		_ZN4MATH4VEC2C1Ev( TMP$1510$2 );
		TMP$1510$2 = (struct $N4MATH4VEC2E*)((uint8*)TMP$1510$2 + 16ll);
		TMP$1509$2 = TMP$1509$2 + 18446744073709551615ull;
		goto label$3691;
		label$3692:;
		label$3690:;
		*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) = TMP$1508$2;
		double* P1$2;
		double* vr$21 = _ZNK4MATH5ARRAY11DATA__get__Ev( A1$1 );
		P1$2 = vr$21;
		double* P2$2;
		double* vr$22 = _ZNK4MATH5ARRAY11DATA__get__Ev( A2$1 );
		P2$2 = vr$22;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1511$3;
			TMP$1511$3 = *(int64*)THIS$1 + -1ll;
			goto label$3693;
			label$3696:;
			{
				*(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) = *(double*)((uint8*)P1$2 + (I$3 << (3ll & 63ll)));
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) = *(double*)((uint8*)P2$2 + (I$3 << (3ll & 63ll)));
			}
			label$3694:;
			I$3 = I$3 + 1ll;
			label$3693:;
			if( I$3 <= TMP$1511$3 ) goto label$3696;
			label$3695:;
		}
	}
	label$3689:;
	label$3688:;
	label$3687:;
}

void _ZN4MATH7V2ARRAYC1ERKS0_( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH7V2ARRAYE* A$1 )
{
	label$3697:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC2C1Ev( (struct $N4MATH4VEC2E*)((uint8*)THIS$1 + 16ll) );
	if( *(int64*)A$1 == 0ll ) goto label$3700;
	{
		struct $N4MATH4VEC2E* TMP$1512$2;
		uint64 TMP$1513$2;
		struct $N4MATH4VEC2E* TMP$1514$2;
		*(int64*)THIS$1 = *(int64*)A$1;
		void* vr$11 = malloc( *(uint64*)A$1 << (4ull & 63ll) );
		TMP$1512$2 = (struct $N4MATH4VEC2E*)vr$11;
		if( TMP$1512$2 == (struct $N4MATH4VEC2E*)0ull ) goto label$3701;
		TMP$1514$2 = TMP$1512$2;
		TMP$1513$2 = *(uint64*)A$1;
		label$3702:;
		if( TMP$1513$2 == 0ull ) goto label$3703;
		_ZN4MATH4VEC2C1Ev( TMP$1514$2 );
		TMP$1514$2 = (struct $N4MATH4VEC2E*)((uint8*)TMP$1514$2 + 16ll);
		TMP$1513$2 = TMP$1513$2 + 18446744073709551615ull;
		goto label$3702;
		label$3703:;
		label$3701:;
		*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) = TMP$1512$2;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1515$3;
			TMP$1515$3 = *(int64*)A$1 + -1ll;
			goto label$3704;
			label$3707:;
			{
				_ZN4MATH4VEC2aSERKS0_( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)A$1 + 8ll) + (I$3 << (4ll & 63ll))) );
			}
			label$3705:;
			I$3 = I$3 + 1ll;
			label$3704:;
			if( I$3 <= TMP$1515$3 ) goto label$3707;
			label$3706:;
		}
	}
	label$3700:;
	label$3699:;
	label$3698:;
}

void _ZN4MATH7V2ARRAYD1Ev( struct $N4MATH7V2ARRAYE* THIS$1 )
{
	label$3708:;
	if( *(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC2E*)0ull ) goto label$3711;
	{
		if( *(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC2E*)0ull ) goto label$3712;
		free( *(void**)((uint8*)THIS$1 + 8ll) );
		label$3712:;
		label$3711:;
	}
	label$3709:;
}

void _ZN4MATH7V2ARRAYv27selfcatERKNS_4VEC2E( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	label$3713:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3716;
	{
		struct $N4MATH4VEC2E* TMP$1516$2;
		uint64 TMP$1517$2;
		struct $N4MATH4VEC2E* TMP$1518$2;
		*(int64*)THIS$1 = *(int64*)THIS$1 + 1ll;
		struct $N4MATH4VEC2E* Q$2;
		void* vr$6 = malloc( *(uint64*)THIS$1 << (4ull & 63ll) );
		TMP$1516$2 = (struct $N4MATH4VEC2E*)vr$6;
		if( TMP$1516$2 == (struct $N4MATH4VEC2E*)0ull ) goto label$3717;
		TMP$1518$2 = TMP$1516$2;
		TMP$1517$2 = *(uint64*)THIS$1;
		label$3718:;
		if( TMP$1517$2 == 0ull ) goto label$3719;
		_ZN4MATH4VEC2C1Ev( TMP$1518$2 );
		TMP$1518$2 = (struct $N4MATH4VEC2E*)((uint8*)TMP$1518$2 + 16ll);
		TMP$1517$2 = TMP$1517$2 + 18446744073709551615ull;
		goto label$3718;
		label$3719:;
		label$3717:;
		Q$2 = TMP$1516$2;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1519$3;
			TMP$1519$3 = *(int64*)THIS$1 + -2ll;
			goto label$3720;
			label$3723:;
			{
				_ZN4MATH4VEC2aSERKS0_( (struct $N4MATH4VEC2E*)((uint8*)Q$2 + (I$3 << (4ll & 63ll))), (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) );
			}
			label$3721:;
			I$3 = I$3 + 1ll;
			label$3720:;
			if( I$3 <= TMP$1519$3 ) goto label$3723;
			label$3722:;
		}
		_ZN4MATH4VEC2aSERKS0_( (struct $N4MATH4VEC2E*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (*(int64*)THIS$1 << (4ll & 63ll))) + -16ll), V$1 );
		if( *(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC2E*)0ull ) goto label$3724;
		free( *(void**)((uint8*)THIS$1 + 8ll) );
		label$3724:;
		*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) = Q$2;
	}
	goto label$3715;
	label$3716:;
	{
		struct $N4MATH4VEC2E* TMP$1520$2;
		uint64 TMP$1521$2;
		struct $N4MATH4VEC2E* TMP$1522$2;
		*(int64*)THIS$1 = 1ll;
		void* vr$27 = malloc( 16ull );
		TMP$1520$2 = (struct $N4MATH4VEC2E*)vr$27;
		if( TMP$1520$2 == (struct $N4MATH4VEC2E*)0ull ) goto label$3725;
		TMP$1522$2 = TMP$1520$2;
		TMP$1521$2 = 1ull;
		label$3726:;
		if( TMP$1521$2 == 0ull ) goto label$3727;
		_ZN4MATH4VEC2C1Ev( TMP$1522$2 );
		TMP$1522$2 = (struct $N4MATH4VEC2E*)((uint8*)TMP$1522$2 + 16ll);
		TMP$1521$2 = TMP$1521$2 + 18446744073709551615ull;
		goto label$3726;
		label$3727:;
		label$3725:;
		*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) = TMP$1520$2;
		_ZN4MATH4VEC2aSERKS0_( *(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll), V$1 );
	}
	label$3715:;
	label$3714:;
}

void _ZN4MATH7V2ARRAYv27selfcatERKNS_4PVECE( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH4PVECE* V$1 )
{
	label$3728:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3731;
	{
		struct $N4MATH4VEC2E* TMP$1523$2;
		uint64 TMP$1524$2;
		struct $N4MATH4VEC2E* TMP$1525$2;
		struct $N4MATH4VEC2E TMP$1527$2;
		double TMP$1528$2;
		double TMP$1529$2;
		*(int64*)THIS$1 = *(int64*)THIS$1 + 1ll;
		struct $N4MATH4VEC2E* Q$2;
		void* vr$6 = malloc( *(uint64*)THIS$1 << (4ull & 63ll) );
		TMP$1523$2 = (struct $N4MATH4VEC2E*)vr$6;
		if( TMP$1523$2 == (struct $N4MATH4VEC2E*)0ull ) goto label$3732;
		TMP$1525$2 = TMP$1523$2;
		TMP$1524$2 = *(uint64*)THIS$1;
		label$3733:;
		if( TMP$1524$2 == 0ull ) goto label$3734;
		_ZN4MATH4VEC2C1Ev( TMP$1525$2 );
		TMP$1525$2 = (struct $N4MATH4VEC2E*)((uint8*)TMP$1525$2 + 16ll);
		TMP$1524$2 = TMP$1524$2 + 18446744073709551615ull;
		goto label$3733;
		label$3734:;
		label$3732:;
		Q$2 = TMP$1523$2;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1526$3;
			TMP$1526$3 = *(int64*)THIS$1 + -2ll;
			goto label$3735;
			label$3738:;
			{
				_ZN4MATH4VEC2aSERKS0_( (struct $N4MATH4VEC2E*)((uint8*)Q$2 + (I$3 << (4ll & 63ll))), (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) );
			}
			label$3736:;
			I$3 = I$3 + 1ll;
			label$3735:;
			if( I$3 <= TMP$1526$3 ) goto label$3738;
			label$3737:;
		}
		double vr$18 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
		TMP$1529$2 = vr$18;
		double vr$20 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
		TMP$1528$2 = vr$20;
		_ZN4MATH4VEC2C1ERKdS2_( &TMP$1527$2, (double*)&TMP$1528$2, (double*)&TMP$1529$2 );
		_ZN4MATH4VEC2aSERKS0_( (struct $N4MATH4VEC2E*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (*(int64*)THIS$1 << (4ll & 63ll))) + -16ll), (struct $N4MATH4VEC2E*)&TMP$1527$2 );
		if( *(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC2E*)0ull ) goto label$3739;
		free( *(void**)((uint8*)THIS$1 + 8ll) );
		label$3739:;
		*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) = Q$2;
	}
	goto label$3730;
	label$3731:;
	{
		struct $N4MATH4VEC2E* TMP$1530$2;
		uint64 TMP$1531$2;
		struct $N4MATH4VEC2E* TMP$1532$2;
		struct $N4MATH4VEC2E TMP$1533$2;
		double TMP$1534$2;
		double TMP$1535$2;
		*(int64*)THIS$1 = 1ll;
		void* vr$33 = malloc( 16ull );
		TMP$1530$2 = (struct $N4MATH4VEC2E*)vr$33;
		if( TMP$1530$2 == (struct $N4MATH4VEC2E*)0ull ) goto label$3740;
		TMP$1532$2 = TMP$1530$2;
		TMP$1531$2 = 1ull;
		label$3741:;
		if( TMP$1531$2 == 0ull ) goto label$3742;
		_ZN4MATH4VEC2C1Ev( TMP$1532$2 );
		TMP$1532$2 = (struct $N4MATH4VEC2E*)((uint8*)TMP$1532$2 + 16ll);
		TMP$1531$2 = TMP$1531$2 + 18446744073709551615ull;
		goto label$3741;
		label$3742:;
		label$3740:;
		*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) = TMP$1530$2;
		double vr$37 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
		TMP$1535$2 = vr$37;
		double vr$39 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
		TMP$1534$2 = vr$39;
		_ZN4MATH4VEC2C1ERKdS2_( &TMP$1533$2, (double*)&TMP$1534$2, (double*)&TMP$1535$2 );
		_ZN4MATH4VEC2aSERKS0_( *(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll), (struct $N4MATH4VEC2E*)&TMP$1533$2 );
	}
	label$3730:;
	label$3729:;
}

void _ZN4MATH7V2ARRAYv27selfcatERKS0_( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH7V2ARRAYE* A$1 )
{
	label$3743:;
	if( THIS$1 == A$1 ) goto label$3746;
	{
		if( *(int64*)A$1 == 0ll ) goto label$3748;
		{
			if( *(int64*)THIS$1 == 0ll ) goto label$3750;
			{
				struct $N4MATH4VEC2E* TMP$1536$4;
				uint64 TMP$1537$4;
				struct $N4MATH4VEC2E* TMP$1538$4;
				struct $N4MATH4VEC2E* Q$4;
				void* vr$6 = malloc( (uint64)(*(int64*)THIS$1 + *(int64*)A$1) << (4ull & 63ll) );
				TMP$1536$4 = (struct $N4MATH4VEC2E*)vr$6;
				if( TMP$1536$4 == (struct $N4MATH4VEC2E*)0ull ) goto label$3751;
				TMP$1538$4 = TMP$1536$4;
				TMP$1537$4 = (uint64)(*(int64*)THIS$1 + *(int64*)A$1);
				label$3752:;
				if( TMP$1537$4 == 0ull ) goto label$3753;
				_ZN4MATH4VEC2C1Ev( TMP$1538$4 );
				TMP$1538$4 = (struct $N4MATH4VEC2E*)((uint8*)TMP$1538$4 + 16ll);
				TMP$1537$4 = TMP$1537$4 + 18446744073709551615ull;
				goto label$3752;
				label$3753:;
				label$3751:;
				Q$4 = TMP$1536$4;
				int64 I$4;
				__builtin_memset( &I$4, 0, 8ll );
				{
					I$4 = 0ll;
					int64 TMP$1539$5;
					TMP$1539$5 = *(int64*)THIS$1 + -1ll;
					goto label$3754;
					label$3757:;
					{
						_ZN4MATH4VEC2aSERKS0_( (struct $N4MATH4VEC2E*)((uint8*)Q$4 + (I$4 << (4ll & 63ll))), (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) );
					}
					label$3755:;
					I$4 = I$4 + 1ll;
					label$3754:;
					if( I$4 <= TMP$1539$5 ) goto label$3757;
					label$3756:;
				}
				{
					I$4 = 0ll;
					int64 TMP$1540$5;
					TMP$1540$5 = *(int64*)A$1 + -1ll;
					goto label$3758;
					label$3761:;
					{
						_ZN4MATH4VEC2aSERKS0_( (struct $N4MATH4VEC2E*)((uint8*)Q$4 + ((*(int64*)THIS$1 + I$4) << (4ll & 63ll))), (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)A$1 + 8ll) + (I$4 << (4ll & 63ll))) );
					}
					label$3759:;
					I$4 = I$4 + 1ll;
					label$3758:;
					if( I$4 <= TMP$1540$5 ) goto label$3761;
					label$3760:;
				}
				*(int64*)THIS$1 = *(int64*)THIS$1 + *(int64*)A$1;
				if( *(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC2E*)0ull ) goto label$3762;
				free( *(void**)((uint8*)THIS$1 + 8ll) );
				label$3762:;
				*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) = Q$4;
			}
			goto label$3749;
			label$3750:;
			{
				struct $N4MATH4VEC2E* TMP$1541$4;
				uint64 TMP$1542$4;
				struct $N4MATH4VEC2E* TMP$1543$4;
				*(int64*)THIS$1 = *(int64*)A$1;
				void* vr$42 = malloc( *(uint64*)THIS$1 << (4ull & 63ll) );
				TMP$1541$4 = (struct $N4MATH4VEC2E*)vr$42;
				if( TMP$1541$4 == (struct $N4MATH4VEC2E*)0ull ) goto label$3763;
				TMP$1543$4 = TMP$1541$4;
				TMP$1542$4 = *(uint64*)THIS$1;
				label$3764:;
				if( TMP$1542$4 == 0ull ) goto label$3765;
				_ZN4MATH4VEC2C1Ev( TMP$1543$4 );
				TMP$1543$4 = (struct $N4MATH4VEC2E*)((uint8*)TMP$1543$4 + 16ll);
				TMP$1542$4 = TMP$1542$4 + 18446744073709551615ull;
				goto label$3764;
				label$3765:;
				label$3763:;
				*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) = TMP$1541$4;
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1544$5;
					TMP$1544$5 = *(int64*)THIS$1 + -1ll;
					goto label$3766;
					label$3769:;
					{
						_ZN4MATH4VEC2aSERKS0_( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)A$1 + 8ll) + (I$5 << (4ll & 63ll))) );
					}
					label$3767:;
					I$5 = I$5 + 1ll;
					label$3766:;
					if( I$5 <= TMP$1544$5 ) goto label$3769;
					label$3768:;
				}
			}
			label$3749:;
		}
		label$3748:;
		label$3747:;
	}
	goto label$3745;
	label$3746:;
	{
		if( *(int64*)THIS$1 == 0ll ) goto label$3771;
		{
			struct $N4MATH4VEC2E* TMP$1545$3;
			uint64 TMP$1546$3;
			struct $N4MATH4VEC2E* TMP$1547$3;
			struct $N4MATH4VEC2E* Q$3;
			void* vr$60 = malloc( (uint64)(*(int64*)THIS$1 << (1ll & 63ll)) << (4ull & 63ll) );
			TMP$1545$3 = (struct $N4MATH4VEC2E*)vr$60;
			if( TMP$1545$3 == (struct $N4MATH4VEC2E*)0ull ) goto label$3772;
			TMP$1547$3 = TMP$1545$3;
			TMP$1546$3 = (uint64)(*(int64*)THIS$1 << (1ll & 63ll));
			label$3773:;
			if( TMP$1546$3 == 0ull ) goto label$3774;
			_ZN4MATH4VEC2C1Ev( TMP$1547$3 );
			TMP$1547$3 = (struct $N4MATH4VEC2E*)((uint8*)TMP$1547$3 + 16ll);
			TMP$1546$3 = TMP$1546$3 + 18446744073709551615ull;
			goto label$3773;
			label$3774:;
			label$3772:;
			Q$3 = TMP$1545$3;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1548$4;
				TMP$1548$4 = *(int64*)THIS$1 + -1ll;
				goto label$3775;
				label$3778:;
				{
					_ZN4MATH4VEC2aSERKS0_( (struct $N4MATH4VEC2E*)((uint8*)Q$3 + (I$4 << (4ll & 63ll))), (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) );
					_ZN4MATH4VEC2aSERKS0_( (struct $N4MATH4VEC2E*)((uint8*)Q$3 + ((*(int64*)THIS$1 + I$4) << (4ll & 63ll))), (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) );
				}
				label$3776:;
				I$4 = I$4 + 1ll;
				label$3775:;
				if( I$4 <= TMP$1548$4 ) goto label$3778;
				label$3777:;
			}
			*(int64*)THIS$1 = *(int64*)THIS$1 << (1ll & 63ll);
			if( *(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC2E*)0ull ) goto label$3779;
			free( *(void**)((uint8*)THIS$1 + 8ll) );
			label$3779:;
			*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) = Q$3;
		}
		label$3771:;
		label$3770:;
	}
	label$3745:;
	label$3744:;
}

struct $N4MATH4VEC2E* _ZN4MATH7V2ARRAYixERKu7INTEGER( struct $N4MATH7V2ARRAYE* THIS$1, int64* I$1 )
{
	struct $N4MATH4VEC2E* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$3780:;
	if( ((int64)-(*I$1 >= 0ll) & (int64)-(*I$1 < *(int64*)THIS$1)) == 0ll ) goto label$3783;
	{
		fb$result$1 = (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (*I$1 << (4ll & 63ll)));
		goto label$3781;
		label$3783:;
	}
	*(double*)((uint8*)THIS$1 + 16ll) = 0x0p+0;
	*(double*)((uint8*)THIS$1 + 24ll) = 0x0p+0;
	fb$result$1 = (struct $N4MATH4VEC2E*)((uint8*)THIS$1 + 16ll);
	goto label$3781;
	label$3781:;
	return fb$result$1;
}

void _ZN4MATH7V2ARRAYpLERKNS_4VEC2E( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	label$3784:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3787;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1549$3;
			TMP$1549$3 = *(int64*)THIS$1 + -1ll;
			goto label$3788;
			label$3791:;
			{
				_ZN4MATH4VEC2pLERKS0_( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), V$1 );
			}
			label$3789:;
			I$3 = I$3 + 1ll;
			label$3788:;
			if( I$3 <= TMP$1549$3 ) goto label$3791;
			label$3790:;
		}
	}
	label$3787:;
	label$3786:;
	label$3785:;
}

void _ZN4MATH7V2ARRAYpLERKNS_4PVECE( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH4PVECE* V$1 )
{
	label$3792:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3795;
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
			int64 TMP$1550$3;
			TMP$1550$3 = *(int64*)THIS$1 + -1ll;
			goto label$3796;
			label$3799:;
			{
				*(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) = *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + X$2;
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) + Y$2;
			}
			label$3797:;
			I$3 = I$3 + 1ll;
			label$3796:;
			if( I$3 <= TMP$1550$3 ) goto label$3799;
			label$3798:;
		}
	}
	label$3795:;
	label$3794:;
	label$3793:;
}

void _ZN4MATH7V2ARRAYpLERKS0_( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH7V2ARRAYE* A$1 )
{
	label$3800:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$3803;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1551$3;
			TMP$1551$3 = *(int64*)THIS$1 + -1ll;
			goto label$3804;
			label$3807:;
			{
				_ZN4MATH4VEC2pLERKS0_( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)A$1 + 8ll) + (I$3 << (4ll & 63ll))) );
			}
			label$3805:;
			I$3 = I$3 + 1ll;
			label$3804:;
			if( I$3 <= TMP$1551$3 ) goto label$3807;
			label$3806:;
		}
	}
	label$3803:;
	label$3802:;
	label$3801:;
}

void _ZN4MATH7V2ARRAYmIERKNS_4VEC2E( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	label$3808:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3811;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1552$3;
			TMP$1552$3 = *(int64*)THIS$1 + -1ll;
			goto label$3812;
			label$3815:;
			{
				_ZN4MATH4VEC2mIERKS0_( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), V$1 );
			}
			label$3813:;
			I$3 = I$3 + 1ll;
			label$3812:;
			if( I$3 <= TMP$1552$3 ) goto label$3815;
			label$3814:;
		}
	}
	label$3811:;
	label$3810:;
	label$3809:;
}

void _ZN4MATH7V2ARRAYmIERKNS_4PVECE( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH4PVECE* V$1 )
{
	label$3816:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3819;
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
			int64 TMP$1553$3;
			TMP$1553$3 = *(int64*)THIS$1 + -1ll;
			goto label$3820;
			label$3823:;
			{
				*(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) = *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) - X$2;
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) - Y$2;
			}
			label$3821:;
			I$3 = I$3 + 1ll;
			label$3820:;
			if( I$3 <= TMP$1553$3 ) goto label$3823;
			label$3822:;
		}
	}
	label$3819:;
	label$3818:;
	label$3817:;
}

void _ZN4MATH7V2ARRAYmIERKS0_( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH7V2ARRAYE* A$1 )
{
	label$3824:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$3827;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1554$3;
			TMP$1554$3 = *(int64*)THIS$1 + -1ll;
			goto label$3828;
			label$3831:;
			{
				_ZN4MATH4VEC2mIERKS0_( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)A$1 + 8ll) + (I$3 << (4ll & 63ll))) );
			}
			label$3829:;
			I$3 = I$3 + 1ll;
			label$3828:;
			if( I$3 <= TMP$1554$3 ) goto label$3831;
			label$3830:;
		}
	}
	label$3827:;
	label$3826:;
	label$3825:;
}

void _ZN4MATH7V2ARRAYmLERKd( struct $N4MATH7V2ARRAYE* THIS$1, double* N$1 )
{
	label$3832:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3835;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1555$3;
			TMP$1555$3 = *(int64*)THIS$1 + -1ll;
			goto label$3836;
			label$3839:;
			{
				*(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) = *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) * *N$1;
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) * *N$1;
			}
			label$3837:;
			I$3 = I$3 + 1ll;
			label$3836:;
			if( I$3 <= TMP$1555$3 ) goto label$3839;
			label$3838:;
		}
	}
	label$3835:;
	label$3834:;
	label$3833:;
}

void _ZN4MATH7V2ARRAYmLERKNS_5ARRAYE( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	label$3840:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$3843;
	{
		double* P$2;
		double* vr$6 = _ZNK4MATH5ARRAY11DATA__get__Ev( A$1 );
		P$2 = vr$6;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1556$3;
			TMP$1556$3 = *(int64*)THIS$1 + -1ll;
			goto label$3844;
			label$3847:;
			{
				_ZN4MATH4VEC2mLERKd( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), (double*)((uint8*)P$2 + (I$3 << (3ll & 63ll))) );
			}
			label$3845:;
			I$3 = I$3 + 1ll;
			label$3844:;
			if( I$3 <= TMP$1556$3 ) goto label$3847;
			label$3846:;
		}
	}
	label$3843:;
	label$3842:;
	label$3841:;
}

void _ZN4MATH7V2ARRAYmLERKNS_4VEC2E( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	label$3848:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3851;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1557$3;
			TMP$1557$3 = *(int64*)THIS$1 + -1ll;
			goto label$3852;
			label$3855:;
			{
				_ZN4MATH4VEC2mLERKS0_( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), V$1 );
			}
			label$3853:;
			I$3 = I$3 + 1ll;
			label$3852:;
			if( I$3 <= TMP$1557$3 ) goto label$3855;
			label$3854:;
		}
	}
	label$3851:;
	label$3850:;
	label$3849:;
}

void _ZN4MATH7V2ARRAYmLERKNS_4PVECE( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH4PVECE* V$1 )
{
	label$3856:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3859;
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
			int64 TMP$1558$3;
			TMP$1558$3 = *(int64*)THIS$1 + -1ll;
			goto label$3860;
			label$3863:;
			{
				*(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) = *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) * X$2;
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) * Y$2;
			}
			label$3861:;
			I$3 = I$3 + 1ll;
			label$3860:;
			if( I$3 <= TMP$1558$3 ) goto label$3863;
			label$3862:;
		}
	}
	label$3859:;
	label$3858:;
	label$3857:;
}

void _ZN4MATH7V2ARRAYmLERKS0_( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH7V2ARRAYE* A$1 )
{
	label$3864:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$3867;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1559$3;
			TMP$1559$3 = *(int64*)THIS$1 + -1ll;
			goto label$3868;
			label$3871:;
			{
				_ZN4MATH4VEC2mLERKS0_( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))), (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)A$1 + 8ll) + (I$3 << (4ll & 63ll))) );
			}
			label$3869:;
			I$3 = I$3 + 1ll;
			label$3868:;
			if( I$3 <= TMP$1559$3 ) goto label$3871;
			label$3870:;
		}
	}
	label$3867:;
	label$3866:;
	label$3865:;
}

void _ZN4MATH7V2ARRAYdVERKd( struct $N4MATH7V2ARRAYE* THIS$1, double* N$1 )
{
	label$3872:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3875;
	{
		if( *N$1 == 0x0p+0 ) goto label$3877;
		{
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1560$4;
				TMP$1560$4 = *(int64*)THIS$1 + -1ll;
				goto label$3878;
				label$3881:;
				{
					*(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) = *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) / *N$1;
					*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) + 8ll) / *N$1;
				}
				label$3879:;
				I$4 = I$4 + 1ll;
				label$3878:;
				if( I$4 <= TMP$1560$4 ) goto label$3881;
				label$3880:;
			}
		}
		goto label$3876;
		label$3877:;
		{
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1561$4;
				TMP$1561$4 = *(int64*)THIS$1 + -1ll;
				goto label$3882;
				label$3885:;
				{
					*(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) = 0x0p+0;
					*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) + 8ll) = 0x0p+0;
				}
				label$3883:;
				I$4 = I$4 + 1ll;
				label$3882:;
				if( I$4 <= TMP$1561$4 ) goto label$3885;
				label$3884:;
			}
		}
		label$3876:;
	}
	label$3875:;
	label$3874:;
	label$3873:;
}

void _ZN4MATH7V2ARRAYdVERKNS_5ARRAYE( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	label$3886:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$3889;
	{
		double* P$2;
		double* vr$6 = _ZNK4MATH5ARRAY11DATA__get__Ev( A$1 );
		P$2 = vr$6;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1562$3;
			TMP$1562$3 = *(int64*)THIS$1 + -1ll;
			goto label$3890;
			label$3893:;
			{
				if( *(double*)((uint8*)P$2 + (I$3 << (3ll & 63ll))) == 0x0p+0 ) goto label$3895;
				{
					*(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) = *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) / *(double*)((uint8*)P$2 + (I$3 << (3ll & 63ll)));
					*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) / *(double*)((uint8*)P$2 + (I$3 << (3ll & 63ll)));
				}
				goto label$3894;
				label$3895:;
				{
					*(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) = 0x0p+0;
					*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) = 0x0p+0;
				}
				label$3894:;
			}
			label$3891:;
			I$3 = I$3 + 1ll;
			label$3890:;
			if( I$3 <= TMP$1562$3 ) goto label$3893;
			label$3892:;
		}
	}
	label$3889:;
	label$3888:;
	label$3887:;
}

void _ZN4MATH7V2ARRAYdVERKNS_4VEC2E( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	label$3896:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3899;
	{
		if( *(double*)V$1 == 0x0p+0 ) goto label$3901;
		{
			if( *(double*)((uint8*)V$1 + 8ll) == 0x0p+0 ) goto label$3903;
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
						*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) / *(double*)((uint8*)V$1 + 8ll);
					}
					label$3905:;
					I$5 = I$5 + 1ll;
					label$3904:;
					if( I$5 <= TMP$1563$5 ) goto label$3907;
					label$3906:;
				}
			}
			goto label$3902;
			label$3903:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1564$5;
					TMP$1564$5 = *(int64*)THIS$1 + -1ll;
					goto label$3908;
					label$3911:;
					{
						*(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) = *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) / *(double*)V$1;
						*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) = 0x0p+0;
					}
					label$3909:;
					I$5 = I$5 + 1ll;
					label$3908:;
					if( I$5 <= TMP$1564$5 ) goto label$3911;
					label$3910:;
				}
			}
			label$3902:;
		}
		goto label$3900;
		label$3901:;
		{
			if( *(double*)((uint8*)V$1 + 8ll) == 0x0p+0 ) goto label$3913;
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
						*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) / *(double*)((uint8*)V$1 + 8ll);
					}
					label$3915:;
					I$5 = I$5 + 1ll;
					label$3914:;
					if( I$5 <= TMP$1565$5 ) goto label$3917;
					label$3916:;
				}
			}
			goto label$3912;
			label$3913:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1566$5;
					TMP$1566$5 = *(int64*)THIS$1 + -1ll;
					goto label$3918;
					label$3921:;
					{
						*(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) = 0x0p+0;
						*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) = 0x0p+0;
					}
					label$3919:;
					I$5 = I$5 + 1ll;
					label$3918:;
					if( I$5 <= TMP$1566$5 ) goto label$3921;
					label$3920:;
				}
			}
			label$3912:;
		}
		label$3900:;
	}
	label$3899:;
	label$3898:;
	label$3897:;
}

void _ZN4MATH7V2ARRAYdVERKNS_4PVECE( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH4PVECE* V$1 )
{
	label$3922:;
	if( *(int64*)THIS$1 == 0ll ) goto label$3925;
	{
		double X$2;
		double vr$1 = _ZNK4MATH4PVEC8X__get__Ev( V$1 );
		X$2 = vr$1;
		double Y$2;
		double vr$2 = _ZNK4MATH4PVEC8Y__get__Ev( V$1 );
		Y$2 = vr$2;
		if( X$2 == 0x0p+0 ) goto label$3927;
		{
			if( Y$2 == 0x0p+0 ) goto label$3929;
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
						*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) / Y$2;
					}
					label$3931:;
					I$5 = I$5 + 1ll;
					label$3930:;
					if( I$5 <= TMP$1567$5 ) goto label$3933;
					label$3932:;
				}
			}
			goto label$3928;
			label$3929:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1568$5;
					TMP$1568$5 = *(int64*)THIS$1 + -1ll;
					goto label$3934;
					label$3937:;
					{
						*(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) = *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) / X$2;
						*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) = 0x0p+0;
					}
					label$3935:;
					I$5 = I$5 + 1ll;
					label$3934:;
					if( I$5 <= TMP$1568$5 ) goto label$3937;
					label$3936:;
				}
			}
			label$3928:;
		}
		goto label$3926;
		label$3927:;
		{
			if( Y$2 == 0x0p+0 ) goto label$3939;
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
						*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) / Y$2;
					}
					label$3941:;
					I$5 = I$5 + 1ll;
					label$3940:;
					if( I$5 <= TMP$1569$5 ) goto label$3943;
					label$3942:;
				}
			}
			goto label$3938;
			label$3939:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1570$5;
					TMP$1570$5 = *(int64*)THIS$1 + -1ll;
					goto label$3944;
					label$3947:;
					{
						*(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) = 0x0p+0;
						*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) = 0x0p+0;
					}
					label$3945:;
					I$5 = I$5 + 1ll;
					label$3944:;
					if( I$5 <= TMP$1570$5 ) goto label$3947;
					label$3946:;
				}
			}
			label$3938:;
		}
		label$3926:;
	}
	label$3925:;
	label$3924:;
	label$3923:;
}

void _ZN4MATH7V2ARRAYdVERKS0_( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH7V2ARRAYE* A$1 )
{
	label$3948:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$3951;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1571$3;
			TMP$1571$3 = *(int64*)THIS$1 + -1ll;
			goto label$3952;
			label$3955:;
			{
				double TMP$1572$4;
				double TMP$1573$4;
				if( *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)A$1 + 8ll) + (I$3 << (4ll & 63ll))) == 0x0p+0 ) goto label$3956;
				TMP$1572$4 = *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) / *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)A$1 + 8ll) + (I$3 << (4ll & 63ll)));
				goto label$3958;
				label$3956:;
				TMP$1572$4 = 0x0p+0;
				label$3958:;
				*(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) = TMP$1572$4;
				if( *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)A$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) == 0x0p+0 ) goto label$3957;
				TMP$1573$4 = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) / *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)A$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll);
				goto label$3959;
				label$3957:;
				TMP$1573$4 = 0x0p+0;
				label$3959:;
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll) = TMP$1573$4;
			}
			label$3953:;
			I$3 = I$3 + 1ll;
			label$3952:;
			if( I$3 <= TMP$1571$3 ) goto label$3955;
			label$3954:;
		}
	}
	label$3951:;
	label$3950:;
	label$3949:;
}

FBSTRING* _ZNK4MATH7V2ARRAYcv8FBSTRINGEv( struct $N4MATH7V2ARRAYE* THIS$1 )
{
	FBSTRING TMP$1575$1;
	FBSTRING TMP$1576$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$3960:;
	FBSTRING* vr$2 = fb_LongintToStr( *(int64*)THIS$1 );
	__builtin_memset( &TMP$1575$1, 0, 24ll );
	FBSTRING* vr$5 = fb_StrConcat( &TMP$1575$1, (void*)"<math.v2array>{ length : ", 26ll, (void*)vr$2, -1ll );
	__builtin_memset( &TMP$1576$1, 0, 24ll );
	FBSTRING* vr$8 = fb_StrConcat( &TMP$1576$1, (void*)vr$5, -1ll, (void*)" }", 3ll );
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$8, -1ll, 0 );
	goto label$3961;
	label$3961:;
	FBSTRING* vr$11 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$11;
}

void _ZN4MATH7V2ARRAYaSERKS0_( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH7V2ARRAYE* A$1 )
{
	label$3962:;
	if( THIS$1 == A$1 ) goto label$3965;
	{
		*(int64*)THIS$1 = 0ll;
		if( *(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC2E*)0ull ) goto label$3967;
		{
			if( *(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC2E*)0ull ) goto label$3968;
			free( *(void**)((uint8*)THIS$1 + 8ll) );
			label$3968:;
			*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) = (struct $N4MATH4VEC2E*)0ull;
		}
		label$3967:;
		label$3966:;
		if( *(int64*)A$1 == 0ll ) goto label$3970;
		{
			struct $N4MATH4VEC2E* TMP$1577$3;
			uint64 TMP$1578$3;
			struct $N4MATH4VEC2E* TMP$1579$3;
			*(int64*)THIS$1 = *(int64*)A$1;
			void* vr$10 = malloc( *(uint64*)A$1 << (4ull & 63ll) );
			TMP$1577$3 = (struct $N4MATH4VEC2E*)vr$10;
			if( TMP$1577$3 == (struct $N4MATH4VEC2E*)0ull ) goto label$3971;
			TMP$1579$3 = TMP$1577$3;
			TMP$1578$3 = *(uint64*)A$1;
			label$3972:;
			if( TMP$1578$3 == 0ull ) goto label$3973;
			_ZN4MATH4VEC2C1Ev( TMP$1579$3 );
			TMP$1579$3 = (struct $N4MATH4VEC2E*)((uint8*)TMP$1579$3 + 16ll);
			TMP$1578$3 = TMP$1578$3 + 18446744073709551615ull;
			goto label$3972;
			label$3973:;
			label$3971:;
			*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) = TMP$1577$3;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1580$4;
				TMP$1580$4 = *(int64*)A$1 + -1ll;
				goto label$3974;
				label$3977:;
				{
					_ZN4MATH4VEC2aSERKS0_( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))), (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)A$1 + 8ll) + (I$4 << (4ll & 63ll))) );
				}
				label$3975:;
				I$4 = I$4 + 1ll;
				label$3974:;
				if( I$4 <= TMP$1580$4 ) goto label$3977;
				label$3976:;
			}
		}
		label$3970:;
		label$3969:;
	}
	label$3965:;
	label$3964:;
	label$3963:;
}

struct $N4MATH4VEC2E* _ZNK4MATH7V2ARRAY11DATA__get__Ev( struct $N4MATH7V2ARRAYE* THIS$1 )
{
	struct $N4MATH4VEC2E* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$3978:;
	fb$result$1 = *(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll);
	goto label$3979;
	label$3979:;
	return fb$result$1;
}

void _ZN4MATH7V2ARRAY13LENGTH__set__ERKu7INTEGER( struct $N4MATH7V2ARRAYE* THIS$1, int64* L$1 )
{
	label$3980:;
	if( *L$1 <= 0ll ) goto label$3983;
	{
		if( *(int64*)THIS$1 <= 0ll ) goto label$3985;
		{
			if( *L$1 == *(int64*)THIS$1 ) goto label$3987;
			{
				struct $N4MATH4VEC2E* TMP$1581$4;
				uint64 TMP$1582$4;
				struct $N4MATH4VEC2E* TMP$1583$4;
				struct $N4MATH4VEC2E* Q$4;
				void* vr$6 = malloc( *(uint64*)L$1 << (4ull & 63ll) );
				TMP$1581$4 = (struct $N4MATH4VEC2E*)vr$6;
				if( TMP$1581$4 == (struct $N4MATH4VEC2E*)0ull ) goto label$3988;
				TMP$1583$4 = TMP$1581$4;
				TMP$1582$4 = *(uint64*)L$1;
				label$3989:;
				if( TMP$1582$4 == 0ull ) goto label$3990;
				_ZN4MATH4VEC2C1Ev( TMP$1583$4 );
				TMP$1583$4 = (struct $N4MATH4VEC2E*)((uint8*)TMP$1583$4 + 16ll);
				TMP$1582$4 = TMP$1582$4 + 18446744073709551615ull;
				goto label$3989;
				label$3990:;
				label$3988:;
				Q$4 = TMP$1581$4;
				{
					int64 TMP$1584$5;
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1585$5;
					if( *L$1 >= *(int64*)THIS$1 ) goto label$3991;
					TMP$1584$5 = *L$1;
					goto label$4004;
					label$3991:;
					TMP$1584$5 = *(int64*)THIS$1;
					label$4004:;
					TMP$1585$5 = TMP$1584$5 + -1ll;
					goto label$3992;
					label$3995:;
					{
						_ZN4MATH4VEC2aSERKS0_( (struct $N4MATH4VEC2E*)((uint8*)Q$4 + (I$5 << (4ll & 63ll))), (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
					}
					label$3993:;
					I$5 = I$5 + 1ll;
					label$3992:;
					if( I$5 <= TMP$1585$5 ) goto label$3995;
					label$3994:;
				}
				*(int64*)THIS$1 = *L$1;
				if( *(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC2E*)0ull ) goto label$3996;
				free( *(void**)((uint8*)THIS$1 + 8ll) );
				label$3996:;
				*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) = Q$4;
			}
			label$3987:;
			label$3986:;
		}
		goto label$3984;
		label$3985:;
		{
			struct $N4MATH4VEC2E* TMP$1586$3;
			uint64 TMP$1587$3;
			struct $N4MATH4VEC2E* TMP$1588$3;
			*(int64*)THIS$1 = *L$1;
			void* vr$30 = malloc( *(uint64*)THIS$1 << (4ull & 63ll) );
			TMP$1586$3 = (struct $N4MATH4VEC2E*)vr$30;
			if( TMP$1586$3 == (struct $N4MATH4VEC2E*)0ull ) goto label$3997;
			TMP$1588$3 = TMP$1586$3;
			TMP$1587$3 = *(uint64*)THIS$1;
			label$3998:;
			if( TMP$1587$3 == 0ull ) goto label$3999;
			_ZN4MATH4VEC2C1Ev( TMP$1588$3 );
			TMP$1588$3 = (struct $N4MATH4VEC2E*)((uint8*)TMP$1588$3 + 16ll);
			TMP$1587$3 = TMP$1587$3 + 18446744073709551615ull;
			goto label$3998;
			label$3999:;
			label$3997:;
			*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) = TMP$1586$3;
		}
		label$3984:;
	}
	goto label$3982;
	label$3983:;
	if( *L$1 != 0ll ) goto label$4000;
	{
		if( *(int64*)THIS$1 <= 0ll ) goto label$4002;
		{
			*(int64*)THIS$1 = 0ll;
			if( *(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC2E*)0ull ) goto label$4003;
			free( *(void**)((uint8*)THIS$1 + 8ll) );
			label$4003:;
			*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) = (struct $N4MATH4VEC2E*)0ull;
		}
		label$4002:;
		label$4001:;
	}
	label$4000:;
	label$3982:;
	label$3981:;
}

double _ZNK4MATH7V2ARRAY11XMAX__get__Ev( struct $N4MATH7V2ARRAYE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$4005:;
	{
		int64 TMP$1589$2;
		TMP$1589$2 = *(int64*)THIS$1;
		if( TMP$1589$2 != 0ll ) goto label$4008;
		label$4009:;
		{
			fb$result$1 = 0x0p+0;
			goto label$4006;
		}
		goto label$4007;
		label$4008:;
		if( TMP$1589$2 != 1ll ) goto label$4010;
		label$4011:;
		{
			fb$result$1 = *(double*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll);
			goto label$4006;
		}
		goto label$4007;
		label$4010:;
		{
			double R$3;
			R$3 = *(double*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll);
			{
				int64 I$4;
				I$4 = 1ll;
				int64 TMP$1590$4;
				TMP$1590$4 = *(int64*)THIS$1 + -1ll;
				goto label$4013;
				label$4016:;
				{
					if( R$3 >= *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) ) goto label$4018;
					{
						R$3 = *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll)));
						label$4018:;
					}
				}
				label$4014:;
				I$4 = I$4 + 1ll;
				label$4013:;
				if( I$4 <= TMP$1590$4 ) goto label$4016;
				label$4015:;
			}
			fb$result$1 = R$3;
			goto label$4006;
		}
		label$4012:;
		label$4007:;
	}
	label$4006:;
	return fb$result$1;
}

double _ZNK4MATH7V2ARRAY11XMIN__get__Ev( struct $N4MATH7V2ARRAYE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$4019:;
	{
		int64 TMP$1591$2;
		TMP$1591$2 = *(int64*)THIS$1;
		if( TMP$1591$2 != 0ll ) goto label$4022;
		label$4023:;
		{
			fb$result$1 = 0x0p+0;
			goto label$4020;
		}
		goto label$4021;
		label$4022:;
		if( TMP$1591$2 != 1ll ) goto label$4024;
		label$4025:;
		{
			fb$result$1 = *(double*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll);
			goto label$4020;
		}
		goto label$4021;
		label$4024:;
		{
			double R$3;
			R$3 = *(double*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll);
			{
				int64 I$4;
				I$4 = 1ll;
				int64 TMP$1592$4;
				TMP$1592$4 = *(int64*)THIS$1 + -1ll;
				goto label$4027;
				label$4030:;
				{
					if( *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) >= R$3 ) goto label$4032;
					{
						R$3 = *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll)));
						label$4032:;
					}
				}
				label$4028:;
				I$4 = I$4 + 1ll;
				label$4027:;
				if( I$4 <= TMP$1592$4 ) goto label$4030;
				label$4029:;
			}
			fb$result$1 = R$3;
			goto label$4020;
		}
		label$4026:;
		label$4021:;
	}
	label$4020:;
	return fb$result$1;
}

double _ZNK4MATH7V2ARRAY11YMAX__get__Ev( struct $N4MATH7V2ARRAYE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$4033:;
	{
		int64 TMP$1593$2;
		TMP$1593$2 = *(int64*)THIS$1;
		if( TMP$1593$2 != 0ll ) goto label$4036;
		label$4037:;
		{
			fb$result$1 = 0x0p+0;
			goto label$4034;
		}
		goto label$4035;
		label$4036:;
		if( TMP$1593$2 != 1ll ) goto label$4038;
		label$4039:;
		{
			fb$result$1 = *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + 8ll);
			goto label$4034;
		}
		goto label$4035;
		label$4038:;
		{
			double R$3;
			R$3 = *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + 8ll);
			{
				int64 I$4;
				I$4 = 1ll;
				int64 TMP$1594$4;
				TMP$1594$4 = *(int64*)THIS$1 + -1ll;
				goto label$4041;
				label$4044:;
				{
					if( R$3 >= *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) + 8ll) ) goto label$4046;
					{
						R$3 = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) + 8ll);
						label$4046:;
					}
				}
				label$4042:;
				I$4 = I$4 + 1ll;
				label$4041:;
				if( I$4 <= TMP$1594$4 ) goto label$4044;
				label$4043:;
			}
			fb$result$1 = R$3;
			goto label$4034;
		}
		label$4040:;
		label$4035:;
	}
	label$4034:;
	return fb$result$1;
}

double _ZNK4MATH7V2ARRAY11YMIN__get__Ev( struct $N4MATH7V2ARRAYE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$4047:;
	{
		int64 TMP$1595$2;
		TMP$1595$2 = *(int64*)THIS$1;
		if( TMP$1595$2 != 0ll ) goto label$4050;
		label$4051:;
		{
			fb$result$1 = 0x0p+0;
			goto label$4048;
		}
		goto label$4049;
		label$4050:;
		if( TMP$1595$2 != 1ll ) goto label$4052;
		label$4053:;
		{
			fb$result$1 = *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + 8ll);
			goto label$4048;
		}
		goto label$4049;
		label$4052:;
		{
			double R$3;
			R$3 = *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + 8ll);
			{
				int64 I$4;
				I$4 = 1ll;
				int64 TMP$1596$4;
				TMP$1596$4 = *(int64*)THIS$1 + -1ll;
				goto label$4055;
				label$4058:;
				{
					if( *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) + 8ll) >= R$3 ) goto label$4060;
					{
						R$3 = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) + 8ll);
						label$4060:;
					}
				}
				label$4056:;
				I$4 = I$4 + 1ll;
				label$4055:;
				if( I$4 <= TMP$1596$4 ) goto label$4058;
				label$4057:;
			}
			fb$result$1 = R$3;
			goto label$4048;
		}
		label$4054:;
		label$4049:;
	}
	label$4048:;
	return fb$result$1;
}

boolean _ZN4MATH7V2ARRAY7FOREACHEPFvRNS_4VEC2EERKb( struct $N4MATH7V2ARRAYE* THIS$1, tmp$1492 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4061:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4064;
	{
		if( F$1 == (tmp$1492)0ull ) goto label$4066;
		{
			if( *R$1 == (boolean)0ll ) goto label$4068;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4069;
					label$4072:;
					{
						(F$1)( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
					}
					label$4070:;
					I$5 = I$5 + -1ll;
					label$4069:;
					if( I$5 >= 0ll ) goto label$4072;
					label$4071:;
				}
			}
			goto label$4067;
			label$4068:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1597$5;
					TMP$1597$5 = *(int64*)THIS$1 + -1ll;
					goto label$4073;
					label$4076:;
					{
						(F$1)( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
					}
					label$4074:;
					I$5 = I$5 + 1ll;
					label$4073:;
					if( I$5 <= TMP$1597$5 ) goto label$4076;
					label$4075:;
				}
			}
			label$4067:;
			fb$result$1 = (boolean)1ll;
			goto label$4062;
		}
		label$4066:;
		label$4065:;
	}
	label$4064:;
	label$4063:;
	fb$result$1 = (boolean)0ll;
	goto label$4062;
	label$4062:;
	return fb$result$1;
}

boolean _ZN4MATH7V2ARRAY7FOREACHEPFbRNS_4VEC2EERKb( struct $N4MATH7V2ARRAYE* THIS$1, tmp$1494 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4077:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4080;
	{
		if( F$1 == (tmp$1494)0ull ) goto label$4082;
		{
			if( *R$1 == (boolean)0ll ) goto label$4084;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4085;
					label$4088:;
					{
						boolean vr$8 = (F$1)( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
						if( vr$8 != (boolean)0ll ) goto label$4090;
						{
							goto label$4087;
						}
						label$4090:;
						label$4089:;
					}
					label$4086:;
					I$5 = I$5 + -1ll;
					label$4085:;
					if( I$5 >= 0ll ) goto label$4088;
					label$4087:;
				}
			}
			goto label$4083;
			label$4084:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1598$5;
					TMP$1598$5 = *(int64*)THIS$1 + -1ll;
					goto label$4091;
					label$4094:;
					{
						boolean vr$15 = (F$1)( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
						if( vr$15 != (boolean)0ll ) goto label$4096;
						{
							goto label$4093;
						}
						label$4096:;
						label$4095:;
					}
					label$4092:;
					I$5 = I$5 + 1ll;
					label$4091:;
					if( I$5 <= TMP$1598$5 ) goto label$4094;
					label$4093:;
				}
			}
			label$4083:;
			fb$result$1 = (boolean)1ll;
			goto label$4078;
		}
		label$4082:;
		label$4081:;
	}
	label$4080:;
	label$4079:;
	fb$result$1 = (boolean)0ll;
	goto label$4078;
	label$4078:;
	return fb$result$1;
}

boolean _ZN4MATH7V2ARRAY7FOREACHEPFvRNS_4VEC2ERKu7INTEGERERKb( struct $N4MATH7V2ARRAYE* THIS$1, tmp$1493 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4097:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4100;
	{
		if( F$1 == (tmp$1493)0ull ) goto label$4102;
		{
			if( *R$1 == (boolean)0ll ) goto label$4104;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4105;
					label$4108:;
					{
						(F$1)( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
					}
					label$4106:;
					I$5 = I$5 + -1ll;
					label$4105:;
					if( I$5 >= 0ll ) goto label$4108;
					label$4107:;
				}
			}
			goto label$4103;
			label$4104:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1599$5;
					TMP$1599$5 = *(int64*)THIS$1 + -1ll;
					goto label$4109;
					label$4112:;
					{
						(F$1)( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
					}
					label$4110:;
					I$5 = I$5 + 1ll;
					label$4109:;
					if( I$5 <= TMP$1599$5 ) goto label$4112;
					label$4111:;
				}
			}
			label$4103:;
			fb$result$1 = (boolean)1ll;
			goto label$4098;
		}
		label$4102:;
		label$4101:;
	}
	label$4100:;
	label$4099:;
	fb$result$1 = (boolean)0ll;
	goto label$4098;
	label$4098:;
	return fb$result$1;
}

boolean _ZN4MATH7V2ARRAY7FOREACHEPFbRNS_4VEC2ERKu7INTEGERERKb( struct $N4MATH7V2ARRAYE* THIS$1, tmp$1495 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4113:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4116;
	{
		if( F$1 == (tmp$1495)0ull ) goto label$4118;
		{
			if( *R$1 == (boolean)0ll ) goto label$4120;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4121;
					label$4124:;
					{
						boolean vr$9 = (F$1)( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
						if( vr$9 != (boolean)0ll ) goto label$4126;
						{
							goto label$4123;
						}
						label$4126:;
						label$4125:;
					}
					label$4122:;
					I$5 = I$5 + -1ll;
					label$4121:;
					if( I$5 >= 0ll ) goto label$4124;
					label$4123:;
				}
			}
			goto label$4119;
			label$4120:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1600$5;
					TMP$1600$5 = *(int64*)THIS$1 + -1ll;
					goto label$4127;
					label$4130:;
					{
						boolean vr$17 = (F$1)( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
						if( vr$17 != (boolean)0ll ) goto label$4132;
						{
							goto label$4129;
						}
						label$4132:;
						label$4131:;
					}
					label$4128:;
					I$5 = I$5 + 1ll;
					label$4127:;
					if( I$5 <= TMP$1600$5 ) goto label$4130;
					label$4129:;
				}
			}
			label$4119:;
			fb$result$1 = (boolean)1ll;
			goto label$4114;
		}
		label$4118:;
		label$4117:;
	}
	label$4116:;
	label$4115:;
	fb$result$1 = (boolean)0ll;
	goto label$4114;
	label$4114:;
	return fb$result$1;
}

boolean _ZN4MATH7V2ARRAY8FOREACHXEPFvRdERKb( struct $N4MATH7V2ARRAYE* THIS$1, tmp$1294 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4133:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4136;
	{
		if( F$1 == (tmp$1294)0ull ) goto label$4138;
		{
			if( *R$1 == (boolean)0ll ) goto label$4140;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4141;
					label$4144:;
					{
						(F$1)( (double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
					}
					label$4142:;
					I$5 = I$5 + -1ll;
					label$4141:;
					if( I$5 >= 0ll ) goto label$4144;
					label$4143:;
				}
			}
			goto label$4139;
			label$4140:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1601$5;
					TMP$1601$5 = *(int64*)THIS$1 + -1ll;
					goto label$4145;
					label$4148:;
					{
						(F$1)( (double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
					}
					label$4146:;
					I$5 = I$5 + 1ll;
					label$4145:;
					if( I$5 <= TMP$1601$5 ) goto label$4148;
					label$4147:;
				}
			}
			label$4139:;
			fb$result$1 = (boolean)1ll;
			goto label$4134;
		}
		label$4138:;
		label$4137:;
	}
	label$4136:;
	label$4135:;
	fb$result$1 = (boolean)0ll;
	goto label$4134;
	label$4134:;
	return fb$result$1;
}

boolean _ZN4MATH7V2ARRAY8FOREACHXEPFbRdERKb( struct $N4MATH7V2ARRAYE* THIS$1, tmp$1296 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4149:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4152;
	{
		if( F$1 == (tmp$1296)0ull ) goto label$4154;
		{
			if( *R$1 == (boolean)0ll ) goto label$4156;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4157;
					label$4160:;
					{
						boolean vr$9 = (F$1)( (double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
						if( vr$9 != (boolean)0ll ) goto label$4162;
						{
							goto label$4159;
						}
						label$4162:;
						label$4161:;
					}
					label$4158:;
					I$5 = I$5 + -1ll;
					label$4157:;
					if( I$5 >= 0ll ) goto label$4160;
					label$4159:;
				}
			}
			goto label$4155;
			label$4156:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1602$5;
					TMP$1602$5 = *(int64*)THIS$1 + -1ll;
					goto label$4163;
					label$4166:;
					{
						boolean vr$17 = (F$1)( (double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) );
						if( vr$17 != (boolean)0ll ) goto label$4168;
						{
							goto label$4165;
						}
						label$4168:;
						label$4167:;
					}
					label$4164:;
					I$5 = I$5 + 1ll;
					label$4163:;
					if( I$5 <= TMP$1602$5 ) goto label$4166;
					label$4165:;
				}
			}
			label$4155:;
			fb$result$1 = (boolean)1ll;
			goto label$4150;
		}
		label$4154:;
		label$4153:;
	}
	label$4152:;
	label$4151:;
	fb$result$1 = (boolean)0ll;
	goto label$4150;
	label$4150:;
	return fb$result$1;
}

boolean _ZN4MATH7V2ARRAY8FOREACHXEPFvRdRKu7INTEGERERKb( struct $N4MATH7V2ARRAYE* THIS$1, tmp$1295 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4169:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4172;
	{
		if( F$1 == (tmp$1295)0ull ) goto label$4174;
		{
			if( *R$1 == (boolean)0ll ) goto label$4176;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4177;
					label$4180:;
					{
						(F$1)( (double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
					}
					label$4178:;
					I$5 = I$5 + -1ll;
					label$4177:;
					if( I$5 >= 0ll ) goto label$4180;
					label$4179:;
				}
			}
			goto label$4175;
			label$4176:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1603$5;
					TMP$1603$5 = *(int64*)THIS$1 + -1ll;
					goto label$4181;
					label$4184:;
					{
						(F$1)( (double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
					}
					label$4182:;
					I$5 = I$5 + 1ll;
					label$4181:;
					if( I$5 <= TMP$1603$5 ) goto label$4184;
					label$4183:;
				}
			}
			label$4175:;
			fb$result$1 = (boolean)1ll;
			goto label$4170;
		}
		label$4174:;
		label$4173:;
	}
	label$4172:;
	label$4171:;
	fb$result$1 = (boolean)0ll;
	goto label$4170;
	label$4170:;
	return fb$result$1;
}

boolean _ZN4MATH7V2ARRAY8FOREACHXEPFbRdRKu7INTEGERERKb( struct $N4MATH7V2ARRAYE* THIS$1, tmp$1297 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4185:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4188;
	{
		if( F$1 == (tmp$1297)0ull ) goto label$4190;
		{
			if( *R$1 == (boolean)0ll ) goto label$4192;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4193;
					label$4196:;
					{
						boolean vr$10 = (F$1)( (double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
						if( vr$10 != (boolean)0ll ) goto label$4198;
						{
							goto label$4195;
						}
						label$4198:;
						label$4197:;
					}
					label$4194:;
					I$5 = I$5 + -1ll;
					label$4193:;
					if( I$5 >= 0ll ) goto label$4196;
					label$4195:;
				}
			}
			goto label$4191;
			label$4192:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1604$5;
					TMP$1604$5 = *(int64*)THIS$1 + -1ll;
					goto label$4199;
					label$4202:;
					{
						boolean vr$19 = (F$1)( (double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))), (int64*)&I$5 );
						if( vr$19 != (boolean)0ll ) goto label$4204;
						{
							goto label$4201;
						}
						label$4204:;
						label$4203:;
					}
					label$4200:;
					I$5 = I$5 + 1ll;
					label$4199:;
					if( I$5 <= TMP$1604$5 ) goto label$4202;
					label$4201:;
				}
			}
			label$4191:;
			fb$result$1 = (boolean)1ll;
			goto label$4186;
		}
		label$4190:;
		label$4189:;
	}
	label$4188:;
	label$4187:;
	fb$result$1 = (boolean)0ll;
	goto label$4186;
	label$4186:;
	return fb$result$1;
}

boolean _ZN4MATH7V2ARRAY8FOREACHYEPFvRdERKb( struct $N4MATH7V2ARRAYE* THIS$1, tmp$1294 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4205:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4208;
	{
		if( F$1 == (tmp$1294)0ull ) goto label$4210;
		{
			if( *R$1 == (boolean)0ll ) goto label$4212;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4213;
					label$4216:;
					{
						(F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) );
					}
					label$4214:;
					I$5 = I$5 + -1ll;
					label$4213:;
					if( I$5 >= 0ll ) goto label$4216;
					label$4215:;
				}
			}
			goto label$4211;
			label$4212:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1605$5;
					TMP$1605$5 = *(int64*)THIS$1 + -1ll;
					goto label$4217;
					label$4220:;
					{
						(F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) );
					}
					label$4218:;
					I$5 = I$5 + 1ll;
					label$4217:;
					if( I$5 <= TMP$1605$5 ) goto label$4220;
					label$4219:;
				}
			}
			label$4211:;
			fb$result$1 = (boolean)1ll;
			goto label$4206;
		}
		label$4210:;
		label$4209:;
	}
	label$4208:;
	label$4207:;
	fb$result$1 = (boolean)0ll;
	goto label$4206;
	label$4206:;
	return fb$result$1;
}

boolean _ZN4MATH7V2ARRAY8FOREACHYEPFbRdERKb( struct $N4MATH7V2ARRAYE* THIS$1, tmp$1296 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4221:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4224;
	{
		if( F$1 == (tmp$1296)0ull ) goto label$4226;
		{
			if( *R$1 == (boolean)0ll ) goto label$4228;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4229;
					label$4232:;
					{
						boolean vr$9 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) );
						if( vr$9 != (boolean)0ll ) goto label$4234;
						{
							goto label$4231;
						}
						label$4234:;
						label$4233:;
					}
					label$4230:;
					I$5 = I$5 + -1ll;
					label$4229:;
					if( I$5 >= 0ll ) goto label$4232;
					label$4231:;
				}
			}
			goto label$4227;
			label$4228:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1606$5;
					TMP$1606$5 = *(int64*)THIS$1 + -1ll;
					goto label$4235;
					label$4238:;
					{
						boolean vr$17 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll) );
						if( vr$17 != (boolean)0ll ) goto label$4240;
						{
							goto label$4237;
						}
						label$4240:;
						label$4239:;
					}
					label$4236:;
					I$5 = I$5 + 1ll;
					label$4235:;
					if( I$5 <= TMP$1606$5 ) goto label$4238;
					label$4237:;
				}
			}
			label$4227:;
			fb$result$1 = (boolean)1ll;
			goto label$4222;
		}
		label$4226:;
		label$4225:;
	}
	label$4224:;
	label$4223:;
	fb$result$1 = (boolean)0ll;
	goto label$4222;
	label$4222:;
	return fb$result$1;
}

boolean _ZN4MATH7V2ARRAY8FOREACHYEPFvRdRKu7INTEGERERKb( struct $N4MATH7V2ARRAYE* THIS$1, tmp$1295 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4241:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4244;
	{
		if( F$1 == (tmp$1295)0ull ) goto label$4246;
		{
			if( *R$1 == (boolean)0ll ) goto label$4248;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4249;
					label$4252:;
					{
						(F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll), (int64*)&I$5 );
					}
					label$4250:;
					I$5 = I$5 + -1ll;
					label$4249:;
					if( I$5 >= 0ll ) goto label$4252;
					label$4251:;
				}
			}
			goto label$4247;
			label$4248:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1607$5;
					TMP$1607$5 = *(int64*)THIS$1 + -1ll;
					goto label$4253;
					label$4256:;
					{
						(F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll), (int64*)&I$5 );
					}
					label$4254:;
					I$5 = I$5 + 1ll;
					label$4253:;
					if( I$5 <= TMP$1607$5 ) goto label$4256;
					label$4255:;
				}
			}
			label$4247:;
			fb$result$1 = (boolean)1ll;
			goto label$4242;
		}
		label$4246:;
		label$4245:;
	}
	label$4244:;
	label$4243:;
	fb$result$1 = (boolean)0ll;
	goto label$4242;
	label$4242:;
	return fb$result$1;
}

boolean _ZN4MATH7V2ARRAY8FOREACHYEPFbRdRKu7INTEGERERKb( struct $N4MATH7V2ARRAYE* THIS$1, tmp$1297 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4257:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4260;
	{
		if( F$1 == (tmp$1297)0ull ) goto label$4262;
		{
			if( *R$1 == (boolean)0ll ) goto label$4264;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4265;
					label$4268:;
					{
						boolean vr$10 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll), (int64*)&I$5 );
						if( vr$10 != (boolean)0ll ) goto label$4270;
						{
							goto label$4267;
						}
						label$4270:;
						label$4269:;
					}
					label$4266:;
					I$5 = I$5 + -1ll;
					label$4265:;
					if( I$5 >= 0ll ) goto label$4268;
					label$4267:;
				}
			}
			goto label$4263;
			label$4264:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1608$5;
					TMP$1608$5 = *(int64*)THIS$1 + -1ll;
					goto label$4271;
					label$4274:;
					{
						boolean vr$19 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$5 << (4ll & 63ll))) + 8ll), (int64*)&I$5 );
						if( vr$19 != (boolean)0ll ) goto label$4276;
						{
							goto label$4273;
						}
						label$4276:;
						label$4275:;
					}
					label$4272:;
					I$5 = I$5 + 1ll;
					label$4271:;
					if( I$5 <= TMP$1608$5 ) goto label$4274;
					label$4273:;
				}
			}
			label$4263:;
			fb$result$1 = (boolean)1ll;
			goto label$4258;
		}
		label$4262:;
		label$4261:;
	}
	label$4260:;
	label$4259:;
	fb$result$1 = (boolean)0ll;
	goto label$4258;
	label$4258:;
	return fb$result$1;
}

boolean _ZNK4MATH7V2ARRAY3MAPERS0_PFNS_4VEC2ERKS2_E( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH7V2ARRAYE* A$1, tmp$1496 F$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4277:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4280;
	{
		if( F$1 == (tmp$1496)0ull ) goto label$4282;
		{
			_ZN4MATH7V2ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1609$4;
				TMP$1609$4 = *(int64*)THIS$1 + -1ll;
				goto label$4283;
				label$4286:;
				{
					struct $N4MATH4VEC2E TMP$1610$5;
					struct $N4MATH4VEC2E vr$9 = (F$1)( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) );
					TMP$1610$5 = vr$9;
					_ZN4MATH4VEC2aSERKS0_( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)A$1 + 8ll) + (I$4 << (4ll & 63ll))), (struct $N4MATH4VEC2E*)&TMP$1610$5 );
				}
				label$4284:;
				I$4 = I$4 + 1ll;
				label$4283:;
				if( I$4 <= TMP$1609$4 ) goto label$4286;
				label$4285:;
			}
			fb$result$1 = (boolean)1ll;
			goto label$4278;
		}
		label$4282:;
		label$4281:;
	}
	label$4280:;
	label$4279:;
	fb$result$1 = (boolean)0ll;
	goto label$4278;
	label$4278:;
	return fb$result$1;
}

boolean _ZNK4MATH7V2ARRAY4MAPXERNS_5ARRAYE( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4287:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4290;
	{
		_ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
		double* P$2;
		double* vr$4 = _ZNK4MATH5ARRAY11DATA__get__Ev( (struct $N4MATH5ARRAYE*)A$1 );
		P$2 = vr$4;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1611$3;
			TMP$1611$3 = *(int64*)THIS$1 + -1ll;
			goto label$4291;
			label$4294:;
			{
				*(double*)((uint8*)P$2 + (I$3 << (3ll & 63ll))) = *(double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll)));
			}
			label$4292:;
			I$3 = I$3 + 1ll;
			label$4291:;
			if( I$3 <= TMP$1611$3 ) goto label$4294;
			label$4293:;
		}
		fb$result$1 = (boolean)1ll;
		goto label$4288;
	}
	label$4290:;
	label$4289:;
	fb$result$1 = (boolean)0ll;
	goto label$4288;
	label$4288:;
	return fb$result$1;
}

boolean _ZNK4MATH7V2ARRAY4MAPXERNS_5ARRAYEPFdRKdE( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1, tmp$1298 F$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4295:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4298;
	{
		if( F$1 == (tmp$1298)0ull ) goto label$4300;
		{
			_ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
			double* P$3;
			double* vr$4 = _ZNK4MATH5ARRAY11DATA__get__Ev( (struct $N4MATH5ARRAYE*)A$1 );
			P$3 = vr$4;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1612$4;
				TMP$1612$4 = *(int64*)THIS$1 + -1ll;
				goto label$4301;
				label$4304:;
				{
					double vr$11 = (F$1)( (double*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) );
					*(double*)((uint8*)P$3 + (I$4 << (3ll & 63ll))) = vr$11;
				}
				label$4302:;
				I$4 = I$4 + 1ll;
				label$4301:;
				if( I$4 <= TMP$1612$4 ) goto label$4304;
				label$4303:;
			}
			fb$result$1 = (boolean)1ll;
			goto label$4296;
		}
		label$4300:;
		label$4299:;
	}
	label$4298:;
	label$4297:;
	fb$result$1 = (boolean)0ll;
	goto label$4296;
	label$4296:;
	return fb$result$1;
}

boolean _ZNK4MATH7V2ARRAY4MAPYERNS_5ARRAYE( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4305:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4308;
	{
		_ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
		double* P$2;
		double* vr$4 = _ZNK4MATH5ARRAY11DATA__get__Ev( (struct $N4MATH5ARRAYE*)A$1 );
		P$2 = vr$4;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1613$3;
			TMP$1613$3 = *(int64*)THIS$1 + -1ll;
			goto label$4309;
			label$4312:;
			{
				*(double*)((uint8*)P$2 + (I$3 << (3ll & 63ll))) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$3 << (4ll & 63ll))) + 8ll);
			}
			label$4310:;
			I$3 = I$3 + 1ll;
			label$4309:;
			if( I$3 <= TMP$1613$3 ) goto label$4312;
			label$4311:;
		}
		fb$result$1 = (boolean)1ll;
		goto label$4306;
	}
	label$4308:;
	label$4307:;
	fb$result$1 = (boolean)0ll;
	goto label$4306;
	label$4306:;
	return fb$result$1;
}

boolean _ZNK4MATH7V2ARRAY4MAPYERNS_5ARRAYEPFdRKdE( struct $N4MATH7V2ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1, tmp$1298 F$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4313:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4316;
	{
		if( F$1 == (tmp$1298)0ull ) goto label$4318;
		{
			_ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
			double* P$3;
			double* vr$4 = _ZNK4MATH5ARRAY11DATA__get__Ev( (struct $N4MATH5ARRAYE*)A$1 );
			P$3 = vr$4;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1614$4;
				TMP$1614$4 = *(int64*)THIS$1 + -1ll;
				goto label$4319;
				label$4322:;
				{
					double vr$11 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))) + 8ll) );
					*(double*)((uint8*)P$3 + (I$4 << (3ll & 63ll))) = vr$11;
				}
				label$4320:;
				I$4 = I$4 + 1ll;
				label$4319:;
				if( I$4 <= TMP$1614$4 ) goto label$4322;
				label$4321:;
			}
			fb$result$1 = (boolean)1ll;
			goto label$4314;
		}
		label$4318:;
		label$4317:;
	}
	label$4316:;
	label$4315:;
	fb$result$1 = (boolean)0ll;
	goto label$4314;
	label$4314:;
	return fb$result$1;
}

FBSTRING* _ZNK4MATH7V2ARRAY6TOJSONERKb( struct $N4MATH7V2ARRAYE* THIS$1, boolean* A$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$4323:;
	{
		int64 TMP$1615$2;
		TMP$1615$2 = *(int64*)THIS$1;
		if( TMP$1615$2 != 0ll ) goto label$4326;
		label$4327:;
		{
			fb_StrInit( (void*)&fb$result$1, -1ll, (void*)"[]", 3ll, 0 );
			goto label$4324;
		}
		goto label$4325;
		label$4326:;
		if( TMP$1615$2 != 1ll ) goto label$4328;
		label$4329:;
		{
			FBSTRING TMP$1616$3;
			FBSTRING TMP$1617$3;
			FBSTRING* vr$4 = _ZNK4MATH4VEC26TOJSONERKb( *(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll), A$1 );
			__builtin_memset( &TMP$1616$3, 0, 24ll );
			FBSTRING* vr$7 = fb_StrConcat( &TMP$1616$3, (void*)"[", 2ll, (void*)vr$4, -1ll );
			__builtin_memset( &TMP$1617$3, 0, 24ll );
			FBSTRING* vr$10 = fb_StrConcat( &TMP$1617$3, (void*)vr$7, -1ll, (void*)"]", 2ll );
			fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$10, -1ll, 0 );
			goto label$4324;
		}
		goto label$4325;
		label$4328:;
		{
			FBSTRING TMP$1618$3;
			FBSTRING TMP$1622$3;
			FBSTRING R$3;
			FBSTRING* vr$13 = _ZNK4MATH4VEC26TOJSONERKb( *(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll), A$1 );
			__builtin_memset( &TMP$1618$3, 0, 24ll );
			FBSTRING* vr$16 = fb_StrConcat( &TMP$1618$3, (void*)"[", 2ll, (void*)vr$13, -1ll );
			fb_StrInit( (void*)&R$3, -1ll, (void*)vr$16, -1ll, 0 );
			{
				int64 I$4;
				I$4 = 1ll;
				int64 TMP$1619$4;
				TMP$1619$4 = *(int64*)THIS$1 + -1ll;
				goto label$4331;
				label$4334:;
				{
					FBSTRING TMP$1620$5;
					FBSTRING TMP$1621$5;
					FBSTRING* vr$23 = _ZNK4MATH4VEC26TOJSONERKb( (struct $N4MATH4VEC2E*)((uint8*)*(struct $N4MATH4VEC2E**)((uint8*)THIS$1 + 8ll) + (I$4 << (4ll & 63ll))), A$1 );
					__builtin_memset( &TMP$1620$5, 0, 24ll );
					FBSTRING* vr$26 = fb_StrConcat( &TMP$1620$5, (void*)",", 2ll, (void*)vr$23, -1ll );
					__builtin_memset( &TMP$1621$5, 0, 24ll );
					FBSTRING* vr$30 = fb_StrConcat( &TMP$1621$5, (void*)&R$3, -1ll, (void*)vr$26, -1ll );
					fb_StrAssign( (void*)&R$3, -1ll, (void*)vr$30, -1ll, 0 );
				}
				label$4332:;
				I$4 = I$4 + 1ll;
				label$4331:;
				if( I$4 <= TMP$1619$4 ) goto label$4334;
				label$4333:;
			}
			__builtin_memset( &TMP$1622$3, 0, 24ll );
			FBSTRING* vr$36 = fb_StrConcat( &TMP$1622$3, (void*)&R$3, -1ll, (void*)"]", 2ll );
			fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$36, -1ll, 0 );
			fb_StrDelete( (FBSTRING*)&R$3 );
			goto label$4324;
			fb_StrDelete( (FBSTRING*)&R$3 );
		}
		label$4330:;
		label$4325:;
	}
	label$4324:;
	FBSTRING* vr$41 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$41;
}

void _ZN4MATH7V3ARRAYC1Ev( struct $N4MATH7V3ARRAYE* THIS$1 )
{
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC3C1Ev( (struct $N4MATH4VEC3E*)((uint8*)THIS$1 + 16ll) );
	label$4335:;
	label$4336:;
}

void _ZN4MATH7V3ARRAYC1ERKu7INTEGER( struct $N4MATH7V3ARRAYE* THIS$1, int64* L$1 )
{
	label$4337:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC3C1Ev( (struct $N4MATH4VEC3E*)((uint8*)THIS$1 + 16ll) );
	if( *L$1 <= 0ll ) goto label$4340;
	{
		struct $N4MATH4VEC3E* TMP$1628$2;
		uint64 TMP$1629$2;
		struct $N4MATH4VEC3E* TMP$1630$2;
		*(int64*)THIS$1 = *L$1;
		void* vr$11 = malloc( *(uint64*)L$1 * 24ull );
		TMP$1628$2 = (struct $N4MATH4VEC3E*)vr$11;
		if( TMP$1628$2 == (struct $N4MATH4VEC3E*)0ull ) goto label$4341;
		TMP$1630$2 = TMP$1628$2;
		TMP$1629$2 = *(uint64*)L$1;
		label$4342:;
		if( TMP$1629$2 == 0ull ) goto label$4343;
		_ZN4MATH4VEC3C1Ev( TMP$1630$2 );
		TMP$1630$2 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1630$2 + 24ll);
		TMP$1629$2 = TMP$1629$2 + 18446744073709551615ull;
		goto label$4342;
		label$4343:;
		label$4341:;
		*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = TMP$1628$2;
	}
	label$4340:;
	label$4339:;
	label$4338:;
}

void _ZN4MATH7V3ARRAYC1ERKu7INTEGERPFvRNS_4VEC3EERKb( struct $N4MATH7V3ARRAYE* THIS$1, int64* L$1, tmp$1623 F$1, boolean* R$1 )
{
	label$4344:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC3C1Ev( (struct $N4MATH4VEC3E*)((uint8*)THIS$1 + 16ll) );
	if( *L$1 <= 0ll ) goto label$4347;
	{
		struct $N4MATH4VEC3E* TMP$1631$2;
		uint64 TMP$1632$2;
		struct $N4MATH4VEC3E* TMP$1633$2;
		*(int64*)THIS$1 = *L$1;
		void* vr$11 = malloc( *(uint64*)L$1 * 24ull );
		TMP$1631$2 = (struct $N4MATH4VEC3E*)vr$11;
		if( TMP$1631$2 == (struct $N4MATH4VEC3E*)0ull ) goto label$4348;
		TMP$1633$2 = TMP$1631$2;
		TMP$1632$2 = *(uint64*)L$1;
		label$4349:;
		if( TMP$1632$2 == 0ull ) goto label$4350;
		_ZN4MATH4VEC3C1Ev( TMP$1633$2 );
		TMP$1633$2 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1633$2 + 24ll);
		TMP$1632$2 = TMP$1632$2 + 18446744073709551615ull;
		goto label$4349;
		label$4350:;
		label$4348:;
		*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = TMP$1631$2;
		if( F$1 == (tmp$1623)0ull ) goto label$4352;
		{
			if( *R$1 == (boolean)0ll ) goto label$4354;
			{
				{
					int64 I$5;
					I$5 = *L$1 + -1ll;
					goto label$4355;
					label$4358:;
					{
						(F$1)( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) );
					}
					label$4356:;
					I$5 = I$5 + -1ll;
					label$4355:;
					if( I$5 >= 0ll ) goto label$4358;
					label$4357:;
				}
			}
			goto label$4353;
			label$4354:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1634$5;
					TMP$1634$5 = *L$1 + -1ll;
					goto label$4359;
					label$4362:;
					{
						(F$1)( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) );
					}
					label$4360:;
					I$5 = I$5 + 1ll;
					label$4359:;
					if( I$5 <= TMP$1634$5 ) goto label$4362;
					label$4361:;
				}
			}
			label$4353:;
		}
		label$4352:;
		label$4351:;
	}
	label$4347:;
	label$4346:;
	label$4345:;
}

void _ZN4MATH7V3ARRAYC1ERKu7INTEGERPFvRNS_4VEC3ES3_ERKb( struct $N4MATH7V3ARRAYE* THIS$1, int64* L$1, tmp$1624 F$1, boolean* R$1 )
{
	label$4363:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC3C1Ev( (struct $N4MATH4VEC3E*)((uint8*)THIS$1 + 16ll) );
	if( *L$1 <= 0ll ) goto label$4366;
	{
		struct $N4MATH4VEC3E* TMP$1635$2;
		uint64 TMP$1636$2;
		struct $N4MATH4VEC3E* TMP$1637$2;
		*(int64*)THIS$1 = *L$1;
		void* vr$11 = malloc( *(uint64*)L$1 * 24ull );
		TMP$1635$2 = (struct $N4MATH4VEC3E*)vr$11;
		if( TMP$1635$2 == (struct $N4MATH4VEC3E*)0ull ) goto label$4367;
		TMP$1637$2 = TMP$1635$2;
		TMP$1636$2 = *(uint64*)L$1;
		label$4368:;
		if( TMP$1636$2 == 0ull ) goto label$4369;
		_ZN4MATH4VEC3C1Ev( TMP$1637$2 );
		TMP$1637$2 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1637$2 + 24ll);
		TMP$1636$2 = TMP$1636$2 + 18446744073709551615ull;
		goto label$4368;
		label$4369:;
		label$4367:;
		*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = TMP$1635$2;
		if( F$1 == (tmp$1624)0ull ) goto label$4371;
		{
			if( *R$1 == (boolean)0ll ) goto label$4373;
			{
				{
					int64 I$5;
					I$5 = *L$1 + -1ll;
					goto label$4374;
					label$4377:;
					{
						(F$1)( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)), (int64*)&I$5 );
					}
					label$4375:;
					I$5 = I$5 + -1ll;
					label$4374:;
					if( I$5 >= 0ll ) goto label$4377;
					label$4376:;
				}
			}
			goto label$4372;
			label$4373:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1638$5;
					TMP$1638$5 = *L$1 + -1ll;
					goto label$4378;
					label$4381:;
					{
						(F$1)( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)), (int64*)&I$5 );
					}
					label$4379:;
					I$5 = I$5 + 1ll;
					label$4378:;
					if( I$5 <= TMP$1638$5 ) goto label$4381;
					label$4380:;
				}
			}
			label$4372:;
		}
		label$4371:;
		label$4370:;
	}
	label$4366:;
	label$4365:;
	label$4364:;
}

void _ZN4MATH7V3ARRAYC1ERKNS_5ARRAYES3_S3_( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A1$1, struct $N4MATH5ARRAYE* A2$1, struct $N4MATH5ARRAYE* A3$1 )
{
	label$4382:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC3C1Ev( (struct $N4MATH4VEC3E*)((uint8*)THIS$1 + 16ll) );
	if( (((int64)-(*(int64*)A1$1 > 0ll) & (int64)-(*(int64*)A1$1 == *(int64*)A2$1)) & (int64)-(*(int64*)A2$1 == *(int64*)A3$1)) == 0ll ) goto label$4385;
	{
		struct $N4MATH4VEC3E* TMP$1639$2;
		uint64 TMP$1640$2;
		struct $N4MATH4VEC3E* TMP$1641$2;
		*(int64*)THIS$1 = *(int64*)A1$1;
		void* vr$20 = malloc( *(uint64*)A1$1 * 24ull );
		TMP$1639$2 = (struct $N4MATH4VEC3E*)vr$20;
		if( TMP$1639$2 == (struct $N4MATH4VEC3E*)0ull ) goto label$4386;
		TMP$1641$2 = TMP$1639$2;
		TMP$1640$2 = *(uint64*)A1$1;
		label$4387:;
		if( TMP$1640$2 == 0ull ) goto label$4388;
		_ZN4MATH4VEC3C1Ev( TMP$1641$2 );
		TMP$1641$2 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1641$2 + 24ll);
		TMP$1640$2 = TMP$1640$2 + 18446744073709551615ull;
		goto label$4387;
		label$4388:;
		label$4386:;
		*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = TMP$1639$2;
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
			int64 TMP$1642$3;
			TMP$1642$3 = *(int64*)A1$1 + -1ll;
			goto label$4389;
			label$4392:;
			{
				*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) = *(double*)((uint8*)P1$2 + (I$3 << (3ll & 63ll)));
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 8ll) = *(double*)((uint8*)P2$2 + (I$3 << (3ll & 63ll)));
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 16ll) = *(double*)((uint8*)P3$2 + (I$3 << (3ll & 63ll)));
			}
			label$4390:;
			I$3 = I$3 + 1ll;
			label$4389:;
			if( I$3 <= TMP$1642$3 ) goto label$4392;
			label$4391:;
		}
	}
	label$4385:;
	label$4384:;
	label$4383:;
}

void _ZN4MATH7V3ARRAYC1ERKNS_7V2ARRAYE( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH7V2ARRAYE* A$1 )
{
	label$4393:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC3C1Ev( (struct $N4MATH4VEC3E*)((uint8*)THIS$1 + 16ll) );
	if( *(int64*)A$1 == 0ll ) goto label$4396;
	{
		struct $N4MATH4VEC3E* TMP$1643$2;
		uint64 TMP$1644$2;
		struct $N4MATH4VEC3E* TMP$1645$2;
		*(int64*)THIS$1 = *(int64*)A$1;
		void* vr$11 = malloc( *(uint64*)A$1 * 24ull );
		TMP$1643$2 = (struct $N4MATH4VEC3E*)vr$11;
		if( TMP$1643$2 == (struct $N4MATH4VEC3E*)0ull ) goto label$4397;
		TMP$1645$2 = TMP$1643$2;
		TMP$1644$2 = *(uint64*)A$1;
		label$4398:;
		if( TMP$1644$2 == 0ull ) goto label$4399;
		_ZN4MATH4VEC3C1Ev( TMP$1645$2 );
		TMP$1645$2 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1645$2 + 24ll);
		TMP$1644$2 = TMP$1644$2 + 18446744073709551615ull;
		goto label$4398;
		label$4399:;
		label$4397:;
		*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = TMP$1643$2;
		struct $N4MATH4VEC2E* P$2;
		struct $N4MATH4VEC2E* vr$16 = _ZNK4MATH7V2ARRAY11DATA__get__Ev( A$1 );
		P$2 = vr$16;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1646$3;
			TMP$1646$3 = *(int64*)A$1 + -1ll;
			goto label$4400;
			label$4403:;
			{
				*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) = *(double*)((uint8*)P$2 + (I$3 << (4ll & 63ll)));
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 8ll) = *(double*)((uint8*)((uint8*)P$2 + (I$3 << (4ll & 63ll))) + 8ll);
			}
			label$4401:;
			I$3 = I$3 + 1ll;
			label$4400:;
			if( I$3 <= TMP$1646$3 ) goto label$4403;
			label$4402:;
		}
	}
	label$4396:;
	label$4395:;
	label$4394:;
}

void _ZN4MATH7V3ARRAYC1ERKNS_7V2ARRAYERKNS_5ARRAYE( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH7V2ARRAYE* A12$1, struct $N4MATH5ARRAYE* A3$1 )
{
	label$4404:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC3C1Ev( (struct $N4MATH4VEC3E*)((uint8*)THIS$1 + 16ll) );
	if( ((int64)-(*(int64*)A12$1 > 0ll) & (int64)-(*(int64*)A12$1 == *(int64*)A3$1)) == 0ll ) goto label$4407;
	{
		struct $N4MATH4VEC3E* TMP$1647$2;
		uint64 TMP$1648$2;
		struct $N4MATH4VEC3E* TMP$1649$2;
		*(int64*)THIS$1 = *(int64*)A12$1;
		void* vr$16 = malloc( *(uint64*)A12$1 * 24ull );
		TMP$1647$2 = (struct $N4MATH4VEC3E*)vr$16;
		if( TMP$1647$2 == (struct $N4MATH4VEC3E*)0ull ) goto label$4408;
		TMP$1649$2 = TMP$1647$2;
		TMP$1648$2 = *(uint64*)A12$1;
		label$4409:;
		if( TMP$1648$2 == 0ull ) goto label$4410;
		_ZN4MATH4VEC3C1Ev( TMP$1649$2 );
		TMP$1649$2 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1649$2 + 24ll);
		TMP$1648$2 = TMP$1648$2 + 18446744073709551615ull;
		goto label$4409;
		label$4410:;
		label$4408:;
		*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = TMP$1647$2;
		struct $N4MATH4VEC2E* P12$2;
		struct $N4MATH4VEC2E* vr$21 = _ZNK4MATH7V2ARRAY11DATA__get__Ev( A12$1 );
		P12$2 = vr$21;
		double* P3$2;
		double* vr$22 = _ZNK4MATH5ARRAY11DATA__get__Ev( A3$1 );
		P3$2 = vr$22;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1650$3;
			TMP$1650$3 = *(int64*)A12$1 + -1ll;
			goto label$4411;
			label$4414:;
			{
				*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) = *(double*)((uint8*)P12$2 + (I$3 << (4ll & 63ll)));
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 8ll) = *(double*)((uint8*)((uint8*)P12$2 + (I$3 << (4ll & 63ll))) + 8ll);
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 16ll) = *(double*)((uint8*)P3$2 + (I$3 << (3ll & 63ll)));
			}
			label$4412:;
			I$3 = I$3 + 1ll;
			label$4411:;
			if( I$3 <= TMP$1650$3 ) goto label$4414;
			label$4413:;
		}
	}
	label$4407:;
	label$4406:;
	label$4405:;
}

void _ZN4MATH7V3ARRAYC1ERKS0_( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH7V3ARRAYE* A$1 )
{
	label$4415:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC3C1Ev( (struct $N4MATH4VEC3E*)((uint8*)THIS$1 + 16ll) );
	if( *(int64*)A$1 == 0ll ) goto label$4418;
	{
		struct $N4MATH4VEC3E* TMP$1651$2;
		uint64 TMP$1652$2;
		struct $N4MATH4VEC3E* TMP$1653$2;
		*(int64*)THIS$1 = *(int64*)A$1;
		void* vr$11 = malloc( *(uint64*)A$1 * 24ull );
		TMP$1651$2 = (struct $N4MATH4VEC3E*)vr$11;
		if( TMP$1651$2 == (struct $N4MATH4VEC3E*)0ull ) goto label$4419;
		TMP$1653$2 = TMP$1651$2;
		TMP$1652$2 = *(uint64*)A$1;
		label$4420:;
		if( TMP$1652$2 == 0ull ) goto label$4421;
		_ZN4MATH4VEC3C1Ev( TMP$1653$2 );
		TMP$1653$2 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1653$2 + 24ll);
		TMP$1652$2 = TMP$1652$2 + 18446744073709551615ull;
		goto label$4420;
		label$4421:;
		label$4419:;
		*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = TMP$1651$2;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1654$3;
			TMP$1654$3 = *(int64*)A$1 + -1ll;
			goto label$4422;
			label$4425:;
			{
				_ZN4MATH4VEC3aSERKS0_( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)), (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)A$1 + 8ll) + (I$3 * 24ll)) );
			}
			label$4423:;
			I$3 = I$3 + 1ll;
			label$4422:;
			if( I$3 <= TMP$1654$3 ) goto label$4425;
			label$4424:;
		}
	}
	label$4418:;
	label$4417:;
	label$4416:;
}

void _ZN4MATH7V3ARRAYD1Ev( struct $N4MATH7V3ARRAYE* THIS$1 )
{
	label$4426:;
	if( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC3E*)0ull ) goto label$4429;
	{
		if( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC3E*)0ull ) goto label$4430;
		free( *(void**)((uint8*)THIS$1 + 8ll) );
		label$4430:;
		label$4429:;
	}
	label$4427:;
}

void _ZN4MATH7V3ARRAYv27selfcatERKNS_4VEC2E( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH4VEC2E* V$1 )
{
	label$4431:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4434;
	{
		struct $N4MATH4VEC3E* TMP$1655$2;
		uint64 TMP$1656$2;
		struct $N4MATH4VEC3E* TMP$1657$2;
		*(int64*)THIS$1 = *(int64*)THIS$1 + 1ll;
		struct $N4MATH4VEC3E* Q$2;
		void* vr$6 = malloc( *(uint64*)THIS$1 * 24ull );
		TMP$1655$2 = (struct $N4MATH4VEC3E*)vr$6;
		if( TMP$1655$2 == (struct $N4MATH4VEC3E*)0ull ) goto label$4435;
		TMP$1657$2 = TMP$1655$2;
		TMP$1656$2 = *(uint64*)THIS$1;
		label$4436:;
		if( TMP$1656$2 == 0ull ) goto label$4437;
		_ZN4MATH4VEC3C1Ev( TMP$1657$2 );
		TMP$1657$2 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1657$2 + 24ll);
		TMP$1656$2 = TMP$1656$2 + 18446744073709551615ull;
		goto label$4436;
		label$4437:;
		label$4435:;
		Q$2 = TMP$1655$2;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1658$3;
			TMP$1658$3 = *(int64*)THIS$1 + -2ll;
			goto label$4438;
			label$4441:;
			{
				_ZN4MATH4VEC3aSERKS0_( (struct $N4MATH4VEC3E*)((uint8*)Q$2 + (I$3 * 24ll)), (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) );
			}
			label$4439:;
			I$3 = I$3 + 1ll;
			label$4438:;
			if( I$3 <= TMP$1658$3 ) goto label$4441;
			label$4440:;
		}
		_ZN4MATH4VEC3aSERKNS_4VEC2E( (struct $N4MATH4VEC3E*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (*(int64*)THIS$1 * 24ll)) + -24ll), V$1 );
		if( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC3E*)0ull ) goto label$4442;
		free( *(void**)((uint8*)THIS$1 + 8ll) );
		label$4442:;
		*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = Q$2;
	}
	goto label$4433;
	label$4434:;
	{
		struct $N4MATH4VEC3E* TMP$1659$2;
		uint64 TMP$1660$2;
		struct $N4MATH4VEC3E* TMP$1661$2;
		*(int64*)THIS$1 = 1ll;
		void* vr$27 = malloc( 24ull );
		TMP$1659$2 = (struct $N4MATH4VEC3E*)vr$27;
		if( TMP$1659$2 == (struct $N4MATH4VEC3E*)0ull ) goto label$4443;
		TMP$1661$2 = TMP$1659$2;
		TMP$1660$2 = 1ull;
		label$4444:;
		if( TMP$1660$2 == 0ull ) goto label$4445;
		_ZN4MATH4VEC3C1Ev( TMP$1661$2 );
		TMP$1661$2 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1661$2 + 24ll);
		TMP$1660$2 = TMP$1660$2 + 18446744073709551615ull;
		goto label$4444;
		label$4445:;
		label$4443:;
		*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = TMP$1659$2;
		_ZN4MATH4VEC3aSERKNS_4VEC2E( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll), V$1 );
	}
	label$4433:;
	label$4432:;
}

void _ZN4MATH7V3ARRAYv27selfcatERKNS_4PVECE( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH4PVECE* V$1 )
{
	label$4446:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4449;
	{
		struct $N4MATH4VEC3E* TMP$1662$2;
		uint64 TMP$1663$2;
		struct $N4MATH4VEC3E* TMP$1664$2;
		*(int64*)THIS$1 = *(int64*)THIS$1 + 1ll;
		struct $N4MATH4VEC3E* Q$2;
		void* vr$6 = malloc( *(uint64*)THIS$1 * 24ull );
		TMP$1662$2 = (struct $N4MATH4VEC3E*)vr$6;
		if( TMP$1662$2 == (struct $N4MATH4VEC3E*)0ull ) goto label$4450;
		TMP$1664$2 = TMP$1662$2;
		TMP$1663$2 = *(uint64*)THIS$1;
		label$4451:;
		if( TMP$1663$2 == 0ull ) goto label$4452;
		_ZN4MATH4VEC3C1Ev( TMP$1664$2 );
		TMP$1664$2 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1664$2 + 24ll);
		TMP$1663$2 = TMP$1663$2 + 18446744073709551615ull;
		goto label$4451;
		label$4452:;
		label$4450:;
		Q$2 = TMP$1662$2;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1665$3;
			TMP$1665$3 = *(int64*)THIS$1 + -2ll;
			goto label$4453;
			label$4456:;
			{
				_ZN4MATH4VEC3aSERKS0_( (struct $N4MATH4VEC3E*)((uint8*)Q$2 + (I$3 * 24ll)), (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) );
			}
			label$4454:;
			I$3 = I$3 + 1ll;
			label$4453:;
			if( I$3 <= TMP$1665$3 ) goto label$4456;
			label$4455:;
		}
		_ZN4MATH4VEC3aSERKNS_4PVECE( (struct $N4MATH4VEC3E*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (*(int64*)THIS$1 * 24ll)) + -24ll), V$1 );
		if( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC3E*)0ull ) goto label$4457;
		free( *(void**)((uint8*)THIS$1 + 8ll) );
		label$4457:;
		*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = Q$2;
	}
	goto label$4448;
	label$4449:;
	{
		struct $N4MATH4VEC3E* TMP$1666$2;
		uint64 TMP$1667$2;
		struct $N4MATH4VEC3E* TMP$1668$2;
		*(int64*)THIS$1 = 1ll;
		void* vr$27 = malloc( 24ull );
		TMP$1666$2 = (struct $N4MATH4VEC3E*)vr$27;
		if( TMP$1666$2 == (struct $N4MATH4VEC3E*)0ull ) goto label$4458;
		TMP$1668$2 = TMP$1666$2;
		TMP$1667$2 = 1ull;
		label$4459:;
		if( TMP$1667$2 == 0ull ) goto label$4460;
		_ZN4MATH4VEC3C1Ev( TMP$1668$2 );
		TMP$1668$2 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1668$2 + 24ll);
		TMP$1667$2 = TMP$1667$2 + 18446744073709551615ull;
		goto label$4459;
		label$4460:;
		label$4458:;
		*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = TMP$1666$2;
		_ZN4MATH4VEC3aSERKNS_4PVECE( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll), V$1 );
	}
	label$4448:;
	label$4447:;
}

void _ZN4MATH7V3ARRAYv27selfcatERKNS_4VEC3E( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH4VEC3E* V$1 )
{
	label$4461:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4464;
	{
		struct $N4MATH4VEC3E* TMP$1669$2;
		uint64 TMP$1670$2;
		struct $N4MATH4VEC3E* TMP$1671$2;
		*(int64*)THIS$1 = *(int64*)THIS$1 + 1ll;
		struct $N4MATH4VEC3E* Q$2;
		void* vr$6 = malloc( *(uint64*)THIS$1 * 24ull );
		TMP$1669$2 = (struct $N4MATH4VEC3E*)vr$6;
		if( TMP$1669$2 == (struct $N4MATH4VEC3E*)0ull ) goto label$4465;
		TMP$1671$2 = TMP$1669$2;
		TMP$1670$2 = *(uint64*)THIS$1;
		label$4466:;
		if( TMP$1670$2 == 0ull ) goto label$4467;
		_ZN4MATH4VEC3C1Ev( TMP$1671$2 );
		TMP$1671$2 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1671$2 + 24ll);
		TMP$1670$2 = TMP$1670$2 + 18446744073709551615ull;
		goto label$4466;
		label$4467:;
		label$4465:;
		Q$2 = TMP$1669$2;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1672$3;
			TMP$1672$3 = *(int64*)THIS$1 + -2ll;
			goto label$4468;
			label$4471:;
			{
				_ZN4MATH4VEC3aSERKS0_( (struct $N4MATH4VEC3E*)((uint8*)Q$2 + (I$3 * 24ll)), (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) );
			}
			label$4469:;
			I$3 = I$3 + 1ll;
			label$4468:;
			if( I$3 <= TMP$1672$3 ) goto label$4471;
			label$4470:;
		}
		_ZN4MATH4VEC3aSERKS0_( (struct $N4MATH4VEC3E*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (*(int64*)THIS$1 * 24ll)) + -24ll), V$1 );
		if( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC3E*)0ull ) goto label$4472;
		free( *(void**)((uint8*)THIS$1 + 8ll) );
		label$4472:;
		*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = Q$2;
	}
	goto label$4463;
	label$4464:;
	{
		struct $N4MATH4VEC3E* TMP$1673$2;
		uint64 TMP$1674$2;
		struct $N4MATH4VEC3E* TMP$1675$2;
		*(int64*)THIS$1 = 1ll;
		void* vr$27 = malloc( 24ull );
		TMP$1673$2 = (struct $N4MATH4VEC3E*)vr$27;
		if( TMP$1673$2 == (struct $N4MATH4VEC3E*)0ull ) goto label$4473;
		TMP$1675$2 = TMP$1673$2;
		TMP$1674$2 = 1ull;
		label$4474:;
		if( TMP$1674$2 == 0ull ) goto label$4475;
		_ZN4MATH4VEC3C1Ev( TMP$1675$2 );
		TMP$1675$2 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1675$2 + 24ll);
		TMP$1674$2 = TMP$1674$2 + 18446744073709551615ull;
		goto label$4474;
		label$4475:;
		label$4473:;
		*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = TMP$1673$2;
		_ZN4MATH4VEC3aSERKS0_( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll), V$1 );
	}
	label$4463:;
	label$4462:;
}

void _ZN4MATH7V3ARRAYv27selfcatERKNS_4CVECE( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH4CVECE* V$1 )
{
	label$4476:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4479;
	{
		struct $N4MATH4VEC3E* TMP$1676$2;
		uint64 TMP$1677$2;
		struct $N4MATH4VEC3E* TMP$1678$2;
		*(int64*)THIS$1 = *(int64*)THIS$1 + 1ll;
		struct $N4MATH4VEC3E* Q$2;
		void* vr$6 = malloc( *(uint64*)THIS$1 * 24ull );
		TMP$1676$2 = (struct $N4MATH4VEC3E*)vr$6;
		if( TMP$1676$2 == (struct $N4MATH4VEC3E*)0ull ) goto label$4480;
		TMP$1678$2 = TMP$1676$2;
		TMP$1677$2 = *(uint64*)THIS$1;
		label$4481:;
		if( TMP$1677$2 == 0ull ) goto label$4482;
		_ZN4MATH4VEC3C1Ev( TMP$1678$2 );
		TMP$1678$2 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1678$2 + 24ll);
		TMP$1677$2 = TMP$1677$2 + 18446744073709551615ull;
		goto label$4481;
		label$4482:;
		label$4480:;
		Q$2 = TMP$1676$2;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1679$3;
			TMP$1679$3 = *(int64*)THIS$1 + -2ll;
			goto label$4483;
			label$4486:;
			{
				_ZN4MATH4VEC3aSERKS0_( (struct $N4MATH4VEC3E*)((uint8*)Q$2 + (I$3 * 24ll)), (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) );
			}
			label$4484:;
			I$3 = I$3 + 1ll;
			label$4483:;
			if( I$3 <= TMP$1679$3 ) goto label$4486;
			label$4485:;
		}
		struct $N4MATH4VEC3E vr$18 = _ZNK4MATH4CVECcvNS_4VEC3EEv( V$1 );
		*(struct $N4MATH4VEC3E*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (*(int64*)THIS$1 * 24ll)) + -24ll) = vr$18;
		if( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC3E*)0ull ) goto label$4487;
		free( *(void**)((uint8*)THIS$1 + 8ll) );
		label$4487:;
		*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = Q$2;
	}
	goto label$4478;
	label$4479:;
	{
		struct $N4MATH4VEC3E* TMP$1680$2;
		uint64 TMP$1681$2;
		struct $N4MATH4VEC3E* TMP$1682$2;
		*(int64*)THIS$1 = 1ll;
		void* vr$27 = malloc( 24ull );
		TMP$1680$2 = (struct $N4MATH4VEC3E*)vr$27;
		if( TMP$1680$2 == (struct $N4MATH4VEC3E*)0ull ) goto label$4488;
		TMP$1682$2 = TMP$1680$2;
		TMP$1681$2 = 1ull;
		label$4489:;
		if( TMP$1681$2 == 0ull ) goto label$4490;
		_ZN4MATH4VEC3C1Ev( TMP$1682$2 );
		TMP$1682$2 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1682$2 + 24ll);
		TMP$1681$2 = TMP$1681$2 + 18446744073709551615ull;
		goto label$4489;
		label$4490:;
		label$4488:;
		*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = TMP$1680$2;
		struct $N4MATH4VEC3E vr$31 = _ZNK4MATH4CVECcvNS_4VEC3EEv( V$1 );
		*(*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll)) = vr$31;
	}
	label$4478:;
	label$4477:;
}

void _ZN4MATH7V3ARRAYv27selfcatERKNS_7V2ARRAYE( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH7V2ARRAYE* A$1 )
{
	label$4491:;
	if( *(int64*)A$1 == 0ll ) goto label$4494;
	{
		if( *(int64*)THIS$1 == 0ll ) goto label$4496;
		{
			struct $N4MATH4VEC3E* TMP$1683$3;
			uint64 TMP$1684$3;
			struct $N4MATH4VEC3E* TMP$1685$3;
			struct $N4MATH4VEC3E* Q$3;
			void* vr$6 = malloc( (uint64)(*(int64*)THIS$1 + *(int64*)A$1) * 24ull );
			TMP$1683$3 = (struct $N4MATH4VEC3E*)vr$6;
			if( TMP$1683$3 == (struct $N4MATH4VEC3E*)0ull ) goto label$4497;
			TMP$1685$3 = TMP$1683$3;
			TMP$1684$3 = (uint64)(*(int64*)THIS$1 + *(int64*)A$1);
			label$4498:;
			if( TMP$1684$3 == 0ull ) goto label$4499;
			_ZN4MATH4VEC3C1Ev( TMP$1685$3 );
			TMP$1685$3 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1685$3 + 24ll);
			TMP$1684$3 = TMP$1684$3 + 18446744073709551615ull;
			goto label$4498;
			label$4499:;
			label$4497:;
			Q$3 = TMP$1683$3;
			int64 I$3;
			__builtin_memset( &I$3, 0, 8ll );
			{
				I$3 = 0ll;
				int64 TMP$1686$4;
				TMP$1686$4 = *(int64*)THIS$1 + -1ll;
				goto label$4500;
				label$4503:;
				{
					_ZN4MATH4VEC3aSERKS0_( (struct $N4MATH4VEC3E*)((uint8*)Q$3 + (I$3 * 24ll)), (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) );
				}
				label$4501:;
				I$3 = I$3 + 1ll;
				label$4500:;
				if( I$3 <= TMP$1686$4 ) goto label$4503;
				label$4502:;
			}
			struct $N4MATH4VEC2E* P$3;
			struct $N4MATH4VEC2E* vr$21 = _ZNK4MATH7V2ARRAY11DATA__get__Ev( A$1 );
			P$3 = vr$21;
			{
				I$3 = 0ll;
				int64 TMP$1687$4;
				TMP$1687$4 = *(int64*)A$1 + -1ll;
				goto label$4504;
				label$4507:;
				{
					_ZN4MATH4VEC3aSERKNS_4VEC2E( (struct $N4MATH4VEC3E*)((uint8*)Q$3 + ((*(int64*)THIS$1 + I$3) * 24ll)), (struct $N4MATH4VEC2E*)((uint8*)P$3 + (I$3 << (4ll & 63ll))) );
				}
				label$4505:;
				I$3 = I$3 + 1ll;
				label$4504:;
				if( I$3 <= TMP$1687$4 ) goto label$4507;
				label$4506:;
			}
			*(int64*)THIS$1 = *(int64*)THIS$1 + *(int64*)A$1;
			if( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC3E*)0ull ) goto label$4508;
			free( *(void**)((uint8*)THIS$1 + 8ll) );
			label$4508:;
			*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = Q$3;
		}
		goto label$4495;
		label$4496:;
		{
			struct $N4MATH4VEC3E* TMP$1688$3;
			uint64 TMP$1689$3;
			struct $N4MATH4VEC3E* TMP$1690$3;
			*(int64*)THIS$1 = *(int64*)A$1;
			void* vr$42 = malloc( *(uint64*)THIS$1 * 24ull );
			TMP$1688$3 = (struct $N4MATH4VEC3E*)vr$42;
			if( TMP$1688$3 == (struct $N4MATH4VEC3E*)0ull ) goto label$4509;
			TMP$1690$3 = TMP$1688$3;
			TMP$1689$3 = *(uint64*)THIS$1;
			label$4510:;
			if( TMP$1689$3 == 0ull ) goto label$4511;
			_ZN4MATH4VEC3C1Ev( TMP$1690$3 );
			TMP$1690$3 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1690$3 + 24ll);
			TMP$1689$3 = TMP$1689$3 + 18446744073709551615ull;
			goto label$4510;
			label$4511:;
			label$4509:;
			*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = TMP$1688$3;
			struct $N4MATH4VEC2E* P$3;
			struct $N4MATH4VEC2E* vr$47 = _ZNK4MATH7V2ARRAY11DATA__get__Ev( A$1 );
			P$3 = vr$47;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1691$4;
				TMP$1691$4 = *(int64*)THIS$1 + -1ll;
				goto label$4512;
				label$4515:;
				{
					_ZN4MATH4VEC3aSERKNS_4VEC2E( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)), (struct $N4MATH4VEC2E*)((uint8*)P$3 + (I$4 << (4ll & 63ll))) );
				}
				label$4513:;
				I$4 = I$4 + 1ll;
				label$4512:;
				if( I$4 <= TMP$1691$4 ) goto label$4515;
				label$4514:;
			}
		}
		label$4495:;
	}
	label$4494:;
	label$4493:;
	label$4492:;
}

void _ZN4MATH7V3ARRAYv27selfcatERKS0_( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH7V3ARRAYE* A$1 )
{
	label$4516:;
	if( THIS$1 == A$1 ) goto label$4519;
	{
		if( *(int64*)A$1 == 0ll ) goto label$4521;
		{
			if( *(int64*)THIS$1 == 0ll ) goto label$4523;
			{
				struct $N4MATH4VEC3E* TMP$1692$4;
				uint64 TMP$1693$4;
				struct $N4MATH4VEC3E* TMP$1694$4;
				struct $N4MATH4VEC3E* Q$4;
				void* vr$6 = malloc( (uint64)(*(int64*)THIS$1 + *(int64*)A$1) * 24ull );
				TMP$1692$4 = (struct $N4MATH4VEC3E*)vr$6;
				if( TMP$1692$4 == (struct $N4MATH4VEC3E*)0ull ) goto label$4524;
				TMP$1694$4 = TMP$1692$4;
				TMP$1693$4 = (uint64)(*(int64*)THIS$1 + *(int64*)A$1);
				label$4525:;
				if( TMP$1693$4 == 0ull ) goto label$4526;
				_ZN4MATH4VEC3C1Ev( TMP$1694$4 );
				TMP$1694$4 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1694$4 + 24ll);
				TMP$1693$4 = TMP$1693$4 + 18446744073709551615ull;
				goto label$4525;
				label$4526:;
				label$4524:;
				Q$4 = TMP$1692$4;
				int64 I$4;
				__builtin_memset( &I$4, 0, 8ll );
				{
					I$4 = 0ll;
					int64 TMP$1695$5;
					TMP$1695$5 = *(int64*)THIS$1 + -1ll;
					goto label$4527;
					label$4530:;
					{
						_ZN4MATH4VEC3aSERKS0_( (struct $N4MATH4VEC3E*)((uint8*)Q$4 + (I$4 * 24ll)), (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) );
					}
					label$4528:;
					I$4 = I$4 + 1ll;
					label$4527:;
					if( I$4 <= TMP$1695$5 ) goto label$4530;
					label$4529:;
				}
				{
					I$4 = 0ll;
					int64 TMP$1696$5;
					TMP$1696$5 = *(int64*)A$1 + -1ll;
					goto label$4531;
					label$4534:;
					{
						_ZN4MATH4VEC3aSERKS0_( (struct $N4MATH4VEC3E*)((uint8*)Q$4 + ((*(int64*)THIS$1 + I$4) * 24ll)), (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)A$1 + 8ll) + (I$4 * 24ll)) );
					}
					label$4532:;
					I$4 = I$4 + 1ll;
					label$4531:;
					if( I$4 <= TMP$1696$5 ) goto label$4534;
					label$4533:;
				}
				*(int64*)THIS$1 = *(int64*)THIS$1 + *(int64*)A$1;
				if( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC3E*)0ull ) goto label$4535;
				free( *(void**)((uint8*)THIS$1 + 8ll) );
				label$4535:;
				*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = Q$4;
			}
			goto label$4522;
			label$4523:;
			{
				struct $N4MATH4VEC3E* TMP$1697$4;
				uint64 TMP$1698$4;
				struct $N4MATH4VEC3E* TMP$1699$4;
				*(int64*)THIS$1 = *(int64*)A$1;
				void* vr$42 = malloc( *(uint64*)THIS$1 * 24ull );
				TMP$1697$4 = (struct $N4MATH4VEC3E*)vr$42;
				if( TMP$1697$4 == (struct $N4MATH4VEC3E*)0ull ) goto label$4536;
				TMP$1699$4 = TMP$1697$4;
				TMP$1698$4 = *(uint64*)THIS$1;
				label$4537:;
				if( TMP$1698$4 == 0ull ) goto label$4538;
				_ZN4MATH4VEC3C1Ev( TMP$1699$4 );
				TMP$1699$4 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1699$4 + 24ll);
				TMP$1698$4 = TMP$1698$4 + 18446744073709551615ull;
				goto label$4537;
				label$4538:;
				label$4536:;
				*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = TMP$1697$4;
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1700$5;
					TMP$1700$5 = *(int64*)THIS$1 + -1ll;
					goto label$4539;
					label$4542:;
					{
						_ZN4MATH4VEC3aSERKS0_( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)), (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)A$1 + 8ll) + (I$5 * 24ll)) );
					}
					label$4540:;
					I$5 = I$5 + 1ll;
					label$4539:;
					if( I$5 <= TMP$1700$5 ) goto label$4542;
					label$4541:;
				}
			}
			label$4522:;
		}
		label$4521:;
		label$4520:;
	}
	goto label$4518;
	label$4519:;
	{
		if( *(int64*)THIS$1 == 0ll ) goto label$4544;
		{
			struct $N4MATH4VEC3E* TMP$1701$3;
			uint64 TMP$1702$3;
			struct $N4MATH4VEC3E* TMP$1703$3;
			struct $N4MATH4VEC3E* Q$3;
			void* vr$60 = malloc( (uint64)(*(int64*)THIS$1 << (1ll & 63ll)) * 24ull );
			TMP$1701$3 = (struct $N4MATH4VEC3E*)vr$60;
			if( TMP$1701$3 == (struct $N4MATH4VEC3E*)0ull ) goto label$4545;
			TMP$1703$3 = TMP$1701$3;
			TMP$1702$3 = (uint64)(*(int64*)THIS$1 << (1ll & 63ll));
			label$4546:;
			if( TMP$1702$3 == 0ull ) goto label$4547;
			_ZN4MATH4VEC3C1Ev( TMP$1703$3 );
			TMP$1703$3 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1703$3 + 24ll);
			TMP$1702$3 = TMP$1702$3 + 18446744073709551615ull;
			goto label$4546;
			label$4547:;
			label$4545:;
			Q$3 = TMP$1701$3;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1704$4;
				TMP$1704$4 = *(int64*)THIS$1 + -1ll;
				goto label$4548;
				label$4551:;
				{
					_ZN4MATH4VEC3aSERKS0_( (struct $N4MATH4VEC3E*)((uint8*)Q$3 + (I$4 * 24ll)), (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) );
					_ZN4MATH4VEC3aSERKS0_( (struct $N4MATH4VEC3E*)((uint8*)Q$3 + ((*(int64*)THIS$1 + I$4) * 24ll)), (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) );
				}
				label$4549:;
				I$4 = I$4 + 1ll;
				label$4548:;
				if( I$4 <= TMP$1704$4 ) goto label$4551;
				label$4550:;
			}
			*(int64*)THIS$1 = *(int64*)THIS$1 << (1ll & 63ll);
			if( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC3E*)0ull ) goto label$4552;
			free( *(void**)((uint8*)THIS$1 + 8ll) );
			label$4552:;
			*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = Q$3;
		}
		label$4544:;
		label$4543:;
	}
	label$4518:;
	label$4517:;
}

struct $N4MATH4VEC3E* _ZN4MATH7V3ARRAYixERKu7INTEGER( struct $N4MATH7V3ARRAYE* THIS$1, int64* I$1 )
{
	struct $N4MATH4VEC3E* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$4553:;
	if( ((int64)-(*I$1 >= 0ll) & (int64)-(*I$1 < *(int64*)THIS$1)) == 0ll ) goto label$4556;
	{
		fb$result$1 = (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (*I$1 * 24ll));
		goto label$4554;
		label$4556:;
	}
	*(double*)((uint8*)THIS$1 + 16ll) = 0x0p+0;
	*(double*)((uint8*)THIS$1 + 24ll) = 0x0p+0;
	*(double*)((uint8*)THIS$1 + 32ll) = 0x0p+0;
	fb$result$1 = (struct $N4MATH4VEC3E*)((uint8*)THIS$1 + 16ll);
	goto label$4554;
	label$4554:;
	return fb$result$1;
}

void _ZN4MATH7V3ARRAYpLERKNS_4VEC3E( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH4VEC3E* V$1 )
{
	label$4557:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4560;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1705$3;
			TMP$1705$3 = *(int64*)THIS$1 + -1ll;
			goto label$4561;
			label$4564:;
			{
				_ZN4MATH4VEC3pLERKS0_( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)), V$1 );
			}
			label$4562:;
			I$3 = I$3 + 1ll;
			label$4561:;
			if( I$3 <= TMP$1705$3 ) goto label$4564;
			label$4563:;
		}
	}
	label$4560:;
	label$4559:;
	label$4558:;
}

void _ZN4MATH7V3ARRAYpLERKNS_4CVECE( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH4CVECE* V$1 )
{
	label$4565:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4568;
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
			int64 TMP$1706$3;
			TMP$1706$3 = *(int64*)THIS$1 + -1ll;
			goto label$4569;
			label$4572:;
			{
				*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + X$2;
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 8ll) + Y$2;
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 16ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 16ll) + *(double*)V$1;
			}
			label$4570:;
			I$3 = I$3 + 1ll;
			label$4569:;
			if( I$3 <= TMP$1706$3 ) goto label$4572;
			label$4571:;
		}
	}
	label$4568:;
	label$4567:;
	label$4566:;
}

void _ZN4MATH7V3ARRAYpLERKS0_( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH7V3ARRAYE* A$1 )
{
	label$4573:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$4576;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1707$3;
			TMP$1707$3 = *(int64*)THIS$1 + -1ll;
			goto label$4577;
			label$4580:;
			{
				_ZN4MATH4VEC3pLERKS0_( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)), (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)A$1 + 8ll) + (I$3 * 24ll)) );
			}
			label$4578:;
			I$3 = I$3 + 1ll;
			label$4577:;
			if( I$3 <= TMP$1707$3 ) goto label$4580;
			label$4579:;
		}
	}
	label$4576:;
	label$4575:;
	label$4574:;
}

void _ZN4MATH7V3ARRAYmIERKNS_4VEC3E( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH4VEC3E* V$1 )
{
	label$4581:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4584;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1708$3;
			TMP$1708$3 = *(int64*)THIS$1 + -1ll;
			goto label$4585;
			label$4588:;
			{
				_ZN4MATH4VEC3mIERKS0_( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)), V$1 );
			}
			label$4586:;
			I$3 = I$3 + 1ll;
			label$4585:;
			if( I$3 <= TMP$1708$3 ) goto label$4588;
			label$4587:;
		}
	}
	label$4584:;
	label$4583:;
	label$4582:;
}

void _ZN4MATH7V3ARRAYmIERKNS_4CVECE( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH4CVECE* V$1 )
{
	label$4589:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4592;
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
			int64 TMP$1709$3;
			TMP$1709$3 = *(int64*)THIS$1 + -1ll;
			goto label$4593;
			label$4596:;
			{
				*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) - X$2;
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 8ll) - Y$2;
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 16ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 16ll) - *(double*)V$1;
			}
			label$4594:;
			I$3 = I$3 + 1ll;
			label$4593:;
			if( I$3 <= TMP$1709$3 ) goto label$4596;
			label$4595:;
		}
	}
	label$4592:;
	label$4591:;
	label$4590:;
}

void _ZN4MATH7V3ARRAYmIERKS0_( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH7V3ARRAYE* A$1 )
{
	label$4597:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$4600;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1710$3;
			TMP$1710$3 = *(int64*)THIS$1 + -1ll;
			goto label$4601;
			label$4604:;
			{
				_ZN4MATH4VEC3mIERKS0_( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)), (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)A$1 + 8ll) + (I$3 * 24ll)) );
			}
			label$4602:;
			I$3 = I$3 + 1ll;
			label$4601:;
			if( I$3 <= TMP$1710$3 ) goto label$4604;
			label$4603:;
		}
	}
	label$4600:;
	label$4599:;
	label$4598:;
}

void _ZN4MATH7V3ARRAYmLERKd( struct $N4MATH7V3ARRAYE* THIS$1, double* N$1 )
{
	label$4605:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4608;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1711$3;
			TMP$1711$3 = *(int64*)THIS$1 + -1ll;
			goto label$4609;
			label$4612:;
			{
				*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) * *N$1;
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 8ll) * *N$1;
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 16ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 16ll) * *N$1;
			}
			label$4610:;
			I$3 = I$3 + 1ll;
			label$4609:;
			if( I$3 <= TMP$1711$3 ) goto label$4612;
			label$4611:;
		}
	}
	label$4608:;
	label$4607:;
	label$4606:;
}

void _ZN4MATH7V3ARRAYmLERKNS_4VEC3E( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH4VEC3E* V$1 )
{
	label$4613:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4616;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1712$3;
			TMP$1712$3 = *(int64*)THIS$1 + -1ll;
			goto label$4617;
			label$4620:;
			{
				_ZN4MATH4VEC3mLERKS0_( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)), V$1 );
			}
			label$4618:;
			I$3 = I$3 + 1ll;
			label$4617:;
			if( I$3 <= TMP$1712$3 ) goto label$4620;
			label$4619:;
		}
	}
	label$4616:;
	label$4615:;
	label$4614:;
}

void _ZN4MATH7V3ARRAYmLERKNS_4CVECE( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH4CVECE* V$1 )
{
	label$4621:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4624;
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
			int64 TMP$1713$3;
			TMP$1713$3 = *(int64*)THIS$1 + -1ll;
			goto label$4625;
			label$4628:;
			{
				*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) * X$2;
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 8ll) * Y$2;
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 16ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 16ll) * *(double*)V$1;
			}
			label$4626:;
			I$3 = I$3 + 1ll;
			label$4625:;
			if( I$3 <= TMP$1713$3 ) goto label$4628;
			label$4627:;
		}
	}
	label$4624:;
	label$4623:;
	label$4622:;
}

void _ZN4MATH7V3ARRAYmLERKS0_( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH7V3ARRAYE* A$1 )
{
	label$4629:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$4632;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1714$3;
			TMP$1714$3 = *(int64*)THIS$1 + -1ll;
			goto label$4633;
			label$4636:;
			{
				_ZN4MATH4VEC3mLERKS0_( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)), (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)A$1 + 8ll) + (I$3 * 24ll)) );
			}
			label$4634:;
			I$3 = I$3 + 1ll;
			label$4633:;
			if( I$3 <= TMP$1714$3 ) goto label$4636;
			label$4635:;
		}
	}
	label$4632:;
	label$4631:;
	label$4630:;
}

void _ZN4MATH7V3ARRAYdVERKd( struct $N4MATH7V3ARRAYE* THIS$1, double* N$1 )
{
	label$4637:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4640;
	{
		if( *N$1 == 0x0p+0 ) goto label$4642;
		{
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1715$4;
				TMP$1715$4 = *(int64*)THIS$1 + -1ll;
				goto label$4643;
				label$4646:;
				{
					*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) / *N$1;
					*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) + 8ll) / *N$1;
					*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) + 16ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) + 16ll) / *N$1;
				}
				label$4644:;
				I$4 = I$4 + 1ll;
				label$4643:;
				if( I$4 <= TMP$1715$4 ) goto label$4646;
				label$4645:;
			}
		}
		goto label$4641;
		label$4642:;
		{
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1716$4;
				TMP$1716$4 = *(int64*)THIS$1 + -1ll;
				goto label$4647;
				label$4650:;
				{
					*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) = 0x0p+0;
					*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) + 8ll) = 0x0p+0;
					*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) + 16ll) = 0x0p+0;
				}
				label$4648:;
				I$4 = I$4 + 1ll;
				label$4647:;
				if( I$4 <= TMP$1716$4 ) goto label$4650;
				label$4649:;
			}
		}
		label$4641:;
	}
	label$4640:;
	label$4639:;
	label$4638:;
}

void _ZN4MATH7V3ARRAYdVERKNS_4VEC3E( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH4VEC3E* V$1 )
{
	label$4651:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4654;
	{
		if( *(double*)V$1 == 0x0p+0 ) goto label$4656;
		{
			if( *(double*)((uint8*)V$1 + 8ll) == 0x0p+0 ) goto label$4658;
			{
				if( *(double*)((uint8*)V$1 + 16ll) == 0x0p+0 ) goto label$4660;
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
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) / *(double*)((uint8*)V$1 + 16ll);
						}
						label$4662:;
						I$6 = I$6 + 1ll;
						label$4661:;
						if( I$6 <= TMP$1717$6 ) goto label$4664;
						label$4663:;
					}
				}
				goto label$4659;
				label$4660:;
				{
					{
						int64 I$6;
						I$6 = 0ll;
						int64 TMP$1718$6;
						TMP$1718$6 = *(int64*)THIS$1 + -1ll;
						goto label$4665;
						label$4668:;
						{
							*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) / *(double*)V$1;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) / *(double*)((uint8*)V$1 + 8ll);
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) = 0x0p+0;
						}
						label$4666:;
						I$6 = I$6 + 1ll;
						label$4665:;
						if( I$6 <= TMP$1718$6 ) goto label$4668;
						label$4667:;
					}
				}
				label$4659:;
			}
			goto label$4657;
			label$4658:;
			{
				if( *(double*)((uint8*)V$1 + 16ll) == 0x0p+0 ) goto label$4670;
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
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) / *(double*)((uint8*)V$1 + 16ll);
						}
						label$4672:;
						I$6 = I$6 + 1ll;
						label$4671:;
						if( I$6 <= TMP$1719$6 ) goto label$4674;
						label$4673:;
					}
				}
				goto label$4669;
				label$4670:;
				{
					{
						int64 I$6;
						I$6 = 0ll;
						int64 TMP$1720$6;
						TMP$1720$6 = *(int64*)THIS$1 + -1ll;
						goto label$4675;
						label$4678:;
						{
							*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) / *(double*)V$1;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) = 0x0p+0;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) = 0x0p+0;
						}
						label$4676:;
						I$6 = I$6 + 1ll;
						label$4675:;
						if( I$6 <= TMP$1720$6 ) goto label$4678;
						label$4677:;
					}
				}
				label$4669:;
			}
			label$4657:;
		}
		goto label$4655;
		label$4656:;
		{
			if( *(double*)((uint8*)V$1 + 8ll) == 0x0p+0 ) goto label$4680;
			{
				if( *(double*)((uint8*)V$1 + 16ll) == 0x0p+0 ) goto label$4682;
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
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) / *(double*)((uint8*)V$1 + 16ll);
						}
						label$4684:;
						I$6 = I$6 + 1ll;
						label$4683:;
						if( I$6 <= TMP$1721$6 ) goto label$4686;
						label$4685:;
					}
				}
				goto label$4681;
				label$4682:;
				{
					{
						int64 I$6;
						I$6 = 0ll;
						int64 TMP$1722$6;
						TMP$1722$6 = *(int64*)THIS$1 + -1ll;
						goto label$4687;
						label$4690:;
						{
							*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) = 0x0p+0;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) / *(double*)((uint8*)V$1 + 8ll);
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) = 0x0p+0;
						}
						label$4688:;
						I$6 = I$6 + 1ll;
						label$4687:;
						if( I$6 <= TMP$1722$6 ) goto label$4690;
						label$4689:;
					}
				}
				label$4681:;
			}
			goto label$4679;
			label$4680:;
			{
				if( *(double*)((uint8*)V$1 + 16ll) == 0x0p+0 ) goto label$4692;
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
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) / *(double*)((uint8*)V$1 + 16ll);
						}
						label$4694:;
						I$6 = I$6 + 1ll;
						label$4693:;
						if( I$6 <= TMP$1723$6 ) goto label$4696;
						label$4695:;
					}
				}
				goto label$4691;
				label$4692:;
				{
					{
						int64 I$6;
						I$6 = 0ll;
						int64 TMP$1724$6;
						TMP$1724$6 = *(int64*)THIS$1 + -1ll;
						goto label$4697;
						label$4700:;
						{
							*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) = 0x0p+0;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) = 0x0p+0;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) = 0x0p+0;
						}
						label$4698:;
						I$6 = I$6 + 1ll;
						label$4697:;
						if( I$6 <= TMP$1724$6 ) goto label$4700;
						label$4699:;
					}
				}
				label$4691:;
			}
			label$4679:;
		}
		label$4655:;
	}
	label$4654:;
	label$4653:;
	label$4652:;
}

void _ZN4MATH7V3ARRAYdVERKNS_4CVECE( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH4CVECE* V$1 )
{
	label$4701:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4704;
	{
		double X$2;
		double vr$1 = _ZNK4MATH4CVEC8X__get__Ev( V$1 );
		X$2 = vr$1;
		double Y$2;
		double vr$2 = _ZNK4MATH4CVEC8Y__get__Ev( V$1 );
		Y$2 = vr$2;
		if( X$2 == 0x0p+0 ) goto label$4706;
		{
			if( Y$2 == 0x0p+0 ) goto label$4708;
			{
				if( *(double*)V$1 == 0x0p+0 ) goto label$4710;
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
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) / *(double*)V$1;
						}
						label$4712:;
						I$6 = I$6 + 1ll;
						label$4711:;
						if( I$6 <= TMP$1725$6 ) goto label$4714;
						label$4713:;
					}
				}
				goto label$4709;
				label$4710:;
				{
					{
						int64 I$6;
						I$6 = 0ll;
						int64 TMP$1726$6;
						TMP$1726$6 = *(int64*)THIS$1 + -1ll;
						goto label$4715;
						label$4718:;
						{
							*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) / X$2;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) / Y$2;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) = 0x0p+0;
						}
						label$4716:;
						I$6 = I$6 + 1ll;
						label$4715:;
						if( I$6 <= TMP$1726$6 ) goto label$4718;
						label$4717:;
					}
				}
				label$4709:;
			}
			goto label$4707;
			label$4708:;
			{
				if( *(double*)V$1 == 0x0p+0 ) goto label$4720;
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
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) / *(double*)V$1;
						}
						label$4722:;
						I$6 = I$6 + 1ll;
						label$4721:;
						if( I$6 <= TMP$1727$6 ) goto label$4724;
						label$4723:;
					}
				}
				goto label$4719;
				label$4720:;
				{
					{
						int64 I$6;
						I$6 = 0ll;
						int64 TMP$1728$6;
						TMP$1728$6 = *(int64*)THIS$1 + -1ll;
						goto label$4725;
						label$4728:;
						{
							*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) / X$2;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) = 0x0p+0;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) = 0x0p+0;
						}
						label$4726:;
						I$6 = I$6 + 1ll;
						label$4725:;
						if( I$6 <= TMP$1728$6 ) goto label$4728;
						label$4727:;
					}
				}
				label$4719:;
			}
			label$4707:;
		}
		goto label$4705;
		label$4706:;
		{
			if( Y$2 == 0x0p+0 ) goto label$4730;
			{
				if( *(double*)V$1 == 0x0p+0 ) goto label$4732;
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
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) / *(double*)V$1;
						}
						label$4734:;
						I$6 = I$6 + 1ll;
						label$4733:;
						if( I$6 <= TMP$1729$6 ) goto label$4736;
						label$4735:;
					}
				}
				goto label$4731;
				label$4732:;
				{
					{
						int64 I$6;
						I$6 = 0ll;
						int64 TMP$1730$6;
						TMP$1730$6 = *(int64*)THIS$1 + -1ll;
						goto label$4737;
						label$4740:;
						{
							*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) = 0x0p+0;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) / Y$2;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) = 0x0p+0;
						}
						label$4738:;
						I$6 = I$6 + 1ll;
						label$4737:;
						if( I$6 <= TMP$1730$6 ) goto label$4740;
						label$4739:;
					}
				}
				label$4731:;
			}
			goto label$4729;
			label$4730:;
			{
				if( *(double*)V$1 == 0x0p+0 ) goto label$4742;
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
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) / *(double*)V$1;
						}
						label$4744:;
						I$6 = I$6 + 1ll;
						label$4743:;
						if( I$6 <= TMP$1731$6 ) goto label$4746;
						label$4745:;
					}
				}
				goto label$4741;
				label$4742:;
				{
					{
						int64 I$6;
						I$6 = 0ll;
						int64 TMP$1732$6;
						TMP$1732$6 = *(int64*)THIS$1 + -1ll;
						goto label$4747;
						label$4750:;
						{
							*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) = 0x0p+0;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 8ll) = 0x0p+0;
							*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$6 * 24ll)) + 16ll) = 0x0p+0;
						}
						label$4748:;
						I$6 = I$6 + 1ll;
						label$4747:;
						if( I$6 <= TMP$1732$6 ) goto label$4750;
						label$4749:;
					}
				}
				label$4741:;
			}
			label$4729:;
		}
		label$4705:;
	}
	label$4704:;
	label$4703:;
	label$4702:;
}

void _ZN4MATH7V3ARRAYdVERKS0_( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH7V3ARRAYE* A$1 )
{
	label$4751:;
	if( ((int64)-(*(int64*)A$1 > 0ll) & (int64)-(*(int64*)A$1 == *(int64*)THIS$1)) == 0ll ) goto label$4754;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1733$3;
			TMP$1733$3 = *(int64*)THIS$1 + -1ll;
			goto label$4755;
			label$4758:;
			{
				double TMP$1734$4;
				double TMP$1735$4;
				double TMP$1736$4;
				if( *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)A$1 + 8ll) + (I$3 * 24ll)) == 0x0p+0 ) goto label$4759;
				TMP$1734$4 = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) / *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)A$1 + 8ll) + (I$3 * 24ll));
				goto label$4762;
				label$4759:;
				TMP$1734$4 = 0x0p+0;
				label$4762:;
				*(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) = TMP$1734$4;
				if( *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)A$1 + 8ll) + (I$3 * 24ll)) + 8ll) == 0x0p+0 ) goto label$4760;
				TMP$1735$4 = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 8ll) / *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)A$1 + 8ll) + (I$3 * 24ll)) + 8ll);
				goto label$4763;
				label$4760:;
				TMP$1735$4 = 0x0p+0;
				label$4763:;
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 8ll) = TMP$1735$4;
				if( *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)A$1 + 8ll) + (I$3 * 24ll)) + 16ll) == 0x0p+0 ) goto label$4761;
				TMP$1736$4 = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 16ll) / *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)A$1 + 8ll) + (I$3 * 24ll)) + 16ll);
				goto label$4764;
				label$4761:;
				TMP$1736$4 = 0x0p+0;
				label$4764:;
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 16ll) = TMP$1736$4;
			}
			label$4756:;
			I$3 = I$3 + 1ll;
			label$4755:;
			if( I$3 <= TMP$1733$3 ) goto label$4758;
			label$4757:;
		}
	}
	label$4754:;
	label$4753:;
	label$4752:;
}

FBSTRING* _ZNK4MATH7V3ARRAYcv8FBSTRINGEv( struct $N4MATH7V3ARRAYE* THIS$1 )
{
	FBSTRING TMP$1738$1;
	FBSTRING TMP$1739$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$4765:;
	FBSTRING* vr$2 = fb_LongintToStr( *(int64*)THIS$1 );
	__builtin_memset( &TMP$1738$1, 0, 24ll );
	FBSTRING* vr$5 = fb_StrConcat( &TMP$1738$1, (void*)"<math.v3array>{ length : ", 26ll, (void*)vr$2, -1ll );
	__builtin_memset( &TMP$1739$1, 0, 24ll );
	FBSTRING* vr$8 = fb_StrConcat( &TMP$1739$1, (void*)vr$5, -1ll, (void*)" }", 3ll );
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$8, -1ll, 0 );
	goto label$4766;
	label$4766:;
	FBSTRING* vr$11 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$11;
}

void _ZN4MATH7V3ARRAYaSERKS0_( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH7V3ARRAYE* A$1 )
{
	label$4767:;
	if( THIS$1 == A$1 ) goto label$4770;
	{
		*(int64*)THIS$1 = 0ll;
		if( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC3E*)0ull ) goto label$4772;
		{
			if( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC3E*)0ull ) goto label$4773;
			free( *(void**)((uint8*)THIS$1 + 8ll) );
			label$4773:;
			*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = (struct $N4MATH4VEC3E*)0ull;
		}
		label$4772:;
		label$4771:;
		if( *(int64*)A$1 == 0ll ) goto label$4775;
		{
			struct $N4MATH4VEC3E* TMP$1740$3;
			uint64 TMP$1741$3;
			struct $N4MATH4VEC3E* TMP$1742$3;
			*(int64*)THIS$1 = *(int64*)A$1;
			void* vr$10 = malloc( *(uint64*)A$1 * 24ull );
			TMP$1740$3 = (struct $N4MATH4VEC3E*)vr$10;
			if( TMP$1740$3 == (struct $N4MATH4VEC3E*)0ull ) goto label$4776;
			TMP$1742$3 = TMP$1740$3;
			TMP$1741$3 = *(uint64*)A$1;
			label$4777:;
			if( TMP$1741$3 == 0ull ) goto label$4778;
			_ZN4MATH4VEC3C1Ev( TMP$1742$3 );
			TMP$1742$3 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1742$3 + 24ll);
			TMP$1741$3 = TMP$1741$3 + 18446744073709551615ull;
			goto label$4777;
			label$4778:;
			label$4776:;
			*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = TMP$1740$3;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1743$4;
				TMP$1743$4 = *(int64*)A$1 + -1ll;
				goto label$4779;
				label$4782:;
				{
					_ZN4MATH4VEC3aSERKS0_( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)), (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)A$1 + 8ll) + (I$4 * 24ll)) );
				}
				label$4780:;
				I$4 = I$4 + 1ll;
				label$4779:;
				if( I$4 <= TMP$1743$4 ) goto label$4782;
				label$4781:;
			}
		}
		label$4775:;
		label$4774:;
	}
	label$4770:;
	label$4769:;
	label$4768:;
}

struct $N4MATH4VEC3E* _ZNK4MATH7V3ARRAY11DATA__get__Ev( struct $N4MATH7V3ARRAYE* THIS$1 )
{
	struct $N4MATH4VEC3E* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$4783:;
	fb$result$1 = *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll);
	goto label$4784;
	label$4784:;
	return fb$result$1;
}

void _ZN4MATH7V3ARRAY13LENGTH__set__ERKu7INTEGER( struct $N4MATH7V3ARRAYE* THIS$1, int64* L$1 )
{
	label$4785:;
	if( *L$1 <= 0ll ) goto label$4788;
	{
		if( *(int64*)THIS$1 <= 0ll ) goto label$4790;
		{
			if( *L$1 == *(int64*)THIS$1 ) goto label$4792;
			{
				struct $N4MATH4VEC3E* TMP$1744$4;
				uint64 TMP$1745$4;
				struct $N4MATH4VEC3E* TMP$1746$4;
				struct $N4MATH4VEC3E* Q$4;
				void* vr$6 = malloc( *(uint64*)L$1 * 24ull );
				TMP$1744$4 = (struct $N4MATH4VEC3E*)vr$6;
				if( TMP$1744$4 == (struct $N4MATH4VEC3E*)0ull ) goto label$4793;
				TMP$1746$4 = TMP$1744$4;
				TMP$1745$4 = *(uint64*)L$1;
				label$4794:;
				if( TMP$1745$4 == 0ull ) goto label$4795;
				_ZN4MATH4VEC3C1Ev( TMP$1746$4 );
				TMP$1746$4 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1746$4 + 24ll);
				TMP$1745$4 = TMP$1745$4 + 18446744073709551615ull;
				goto label$4794;
				label$4795:;
				label$4793:;
				Q$4 = TMP$1744$4;
				{
					int64 TMP$1747$5;
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1748$5;
					if( *L$1 >= *(int64*)THIS$1 ) goto label$4796;
					TMP$1747$5 = *L$1;
					goto label$4809;
					label$4796:;
					TMP$1747$5 = *(int64*)THIS$1;
					label$4809:;
					TMP$1748$5 = TMP$1747$5 + -1ll;
					goto label$4797;
					label$4800:;
					{
						_ZN4MATH4VEC3aSERKS0_( (struct $N4MATH4VEC3E*)((uint8*)Q$4 + (I$5 * 24ll)), (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) );
					}
					label$4798:;
					I$5 = I$5 + 1ll;
					label$4797:;
					if( I$5 <= TMP$1748$5 ) goto label$4800;
					label$4799:;
				}
				*(int64*)THIS$1 = *L$1;
				if( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC3E*)0ull ) goto label$4801;
				free( *(void**)((uint8*)THIS$1 + 8ll) );
				label$4801:;
				*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = Q$4;
			}
			label$4792:;
			label$4791:;
		}
		goto label$4789;
		label$4790:;
		{
			struct $N4MATH4VEC3E* TMP$1749$3;
			uint64 TMP$1750$3;
			struct $N4MATH4VEC3E* TMP$1751$3;
			*(int64*)THIS$1 = *L$1;
			void* vr$30 = malloc( *(uint64*)THIS$1 * 24ull );
			TMP$1749$3 = (struct $N4MATH4VEC3E*)vr$30;
			if( TMP$1749$3 == (struct $N4MATH4VEC3E*)0ull ) goto label$4802;
			TMP$1751$3 = TMP$1749$3;
			TMP$1750$3 = *(uint64*)THIS$1;
			label$4803:;
			if( TMP$1750$3 == 0ull ) goto label$4804;
			_ZN4MATH4VEC3C1Ev( TMP$1751$3 );
			TMP$1751$3 = (struct $N4MATH4VEC3E*)((uint8*)TMP$1751$3 + 24ll);
			TMP$1750$3 = TMP$1750$3 + 18446744073709551615ull;
			goto label$4803;
			label$4804:;
			label$4802:;
			*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = TMP$1749$3;
		}
		label$4789:;
	}
	goto label$4787;
	label$4788:;
	if( *L$1 != 0ll ) goto label$4805;
	{
		if( *(int64*)THIS$1 <= 0ll ) goto label$4807;
		{
			*(int64*)THIS$1 = 0ll;
			if( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC3E*)0ull ) goto label$4808;
			free( *(void**)((uint8*)THIS$1 + 8ll) );
			label$4808:;
			*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) = (struct $N4MATH4VEC3E*)0ull;
		}
		label$4807:;
		label$4806:;
	}
	label$4805:;
	label$4787:;
	label$4786:;
}

double _ZNK4MATH7V3ARRAY11XMAX__get__Ev( struct $N4MATH7V3ARRAYE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$4810:;
	{
		int64 TMP$1752$2;
		TMP$1752$2 = *(int64*)THIS$1;
		if( TMP$1752$2 != 0ll ) goto label$4813;
		label$4814:;
		{
			fb$result$1 = 0x0p+0;
			goto label$4811;
		}
		goto label$4812;
		label$4813:;
		if( TMP$1752$2 != 1ll ) goto label$4815;
		label$4816:;
		{
			fb$result$1 = *(double*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll);
			goto label$4811;
		}
		goto label$4812;
		label$4815:;
		{
			double R$3;
			R$3 = *(double*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll);
			{
				int64 I$4;
				I$4 = 1ll;
				int64 TMP$1753$4;
				TMP$1753$4 = *(int64*)THIS$1 + -1ll;
				goto label$4818;
				label$4821:;
				{
					if( R$3 >= *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) ) goto label$4823;
					{
						R$3 = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll));
						label$4823:;
					}
				}
				label$4819:;
				I$4 = I$4 + 1ll;
				label$4818:;
				if( I$4 <= TMP$1753$4 ) goto label$4821;
				label$4820:;
			}
			fb$result$1 = R$3;
			goto label$4811;
		}
		label$4817:;
		label$4812:;
	}
	label$4811:;
	return fb$result$1;
}

double _ZNK4MATH7V3ARRAY11XMIN__get__Ev( struct $N4MATH7V3ARRAYE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$4824:;
	{
		int64 TMP$1754$2;
		TMP$1754$2 = *(int64*)THIS$1;
		if( TMP$1754$2 != 0ll ) goto label$4827;
		label$4828:;
		{
			fb$result$1 = 0x0p+0;
			goto label$4825;
		}
		goto label$4826;
		label$4827:;
		if( TMP$1754$2 != 1ll ) goto label$4829;
		label$4830:;
		{
			fb$result$1 = *(double*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll);
			goto label$4825;
		}
		goto label$4826;
		label$4829:;
		{
			double R$3;
			R$3 = *(double*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll);
			{
				int64 I$4;
				I$4 = 1ll;
				int64 TMP$1755$4;
				TMP$1755$4 = *(int64*)THIS$1 + -1ll;
				goto label$4832;
				label$4835:;
				{
					if( *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) >= R$3 ) goto label$4837;
					{
						R$3 = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll));
						label$4837:;
					}
				}
				label$4833:;
				I$4 = I$4 + 1ll;
				label$4832:;
				if( I$4 <= TMP$1755$4 ) goto label$4835;
				label$4834:;
			}
			fb$result$1 = R$3;
			goto label$4825;
		}
		label$4831:;
		label$4826:;
	}
	label$4825:;
	return fb$result$1;
}

double _ZNK4MATH7V3ARRAY11YMAX__get__Ev( struct $N4MATH7V3ARRAYE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$4838:;
	{
		int64 TMP$1756$2;
		TMP$1756$2 = *(int64*)THIS$1;
		if( TMP$1756$2 != 0ll ) goto label$4841;
		label$4842:;
		{
			fb$result$1 = 0x0p+0;
			goto label$4839;
		}
		goto label$4840;
		label$4841:;
		if( TMP$1756$2 != 1ll ) goto label$4843;
		label$4844:;
		{
			fb$result$1 = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + 8ll);
			goto label$4839;
		}
		goto label$4840;
		label$4843:;
		{
			double R$3;
			R$3 = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + 8ll);
			{
				int64 I$4;
				I$4 = 1ll;
				int64 TMP$1757$4;
				TMP$1757$4 = *(int64*)THIS$1 + -1ll;
				goto label$4846;
				label$4849:;
				{
					if( R$3 >= *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) + 8ll) ) goto label$4851;
					{
						R$3 = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) + 8ll);
						label$4851:;
					}
				}
				label$4847:;
				I$4 = I$4 + 1ll;
				label$4846:;
				if( I$4 <= TMP$1757$4 ) goto label$4849;
				label$4848:;
			}
			fb$result$1 = R$3;
			goto label$4839;
		}
		label$4845:;
		label$4840:;
	}
	label$4839:;
	return fb$result$1;
}

double _ZNK4MATH7V3ARRAY11YMIN__get__Ev( struct $N4MATH7V3ARRAYE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$4852:;
	{
		int64 TMP$1758$2;
		TMP$1758$2 = *(int64*)THIS$1;
		if( TMP$1758$2 != 0ll ) goto label$4855;
		label$4856:;
		{
			fb$result$1 = 0x0p+0;
			goto label$4853;
		}
		goto label$4854;
		label$4855:;
		if( TMP$1758$2 != 1ll ) goto label$4857;
		label$4858:;
		{
			fb$result$1 = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + 8ll);
			goto label$4853;
		}
		goto label$4854;
		label$4857:;
		{
			double R$3;
			R$3 = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + 8ll);
			{
				int64 I$4;
				I$4 = 1ll;
				int64 TMP$1759$4;
				TMP$1759$4 = *(int64*)THIS$1 + -1ll;
				goto label$4860;
				label$4863:;
				{
					if( *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) + 8ll) >= R$3 ) goto label$4865;
					{
						R$3 = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) + 8ll);
						label$4865:;
					}
				}
				label$4861:;
				I$4 = I$4 + 1ll;
				label$4860:;
				if( I$4 <= TMP$1759$4 ) goto label$4863;
				label$4862:;
			}
			fb$result$1 = R$3;
			goto label$4853;
		}
		label$4859:;
		label$4854:;
	}
	label$4853:;
	return fb$result$1;
}

double _ZNK4MATH7V3ARRAY11ZMAX__get__Ev( struct $N4MATH7V3ARRAYE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$4866:;
	{
		int64 TMP$1760$2;
		TMP$1760$2 = *(int64*)THIS$1;
		if( TMP$1760$2 != 0ll ) goto label$4869;
		label$4870:;
		{
			fb$result$1 = 0x0p+0;
			goto label$4867;
		}
		goto label$4868;
		label$4869:;
		if( TMP$1760$2 != 1ll ) goto label$4871;
		label$4872:;
		{
			fb$result$1 = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + 16ll);
			goto label$4867;
		}
		goto label$4868;
		label$4871:;
		{
			double R$3;
			R$3 = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + 16ll);
			{
				int64 I$4;
				I$4 = 1ll;
				int64 TMP$1761$4;
				TMP$1761$4 = *(int64*)THIS$1 + -1ll;
				goto label$4874;
				label$4877:;
				{
					if( R$3 >= *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) + 16ll) ) goto label$4879;
					{
						R$3 = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) + 16ll);
						label$4879:;
					}
				}
				label$4875:;
				I$4 = I$4 + 1ll;
				label$4874:;
				if( I$4 <= TMP$1761$4 ) goto label$4877;
				label$4876:;
			}
			fb$result$1 = R$3;
			goto label$4867;
		}
		label$4873:;
		label$4868:;
	}
	label$4867:;
	return fb$result$1;
}

double _ZNK4MATH7V3ARRAY11ZMIN__get__Ev( struct $N4MATH7V3ARRAYE* THIS$1 )
{
	double fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$4880:;
	{
		int64 TMP$1762$2;
		TMP$1762$2 = *(int64*)THIS$1;
		if( TMP$1762$2 != 0ll ) goto label$4883;
		label$4884:;
		{
			fb$result$1 = 0x0p+0;
			goto label$4881;
		}
		goto label$4882;
		label$4883:;
		if( TMP$1762$2 != 1ll ) goto label$4885;
		label$4886:;
		{
			fb$result$1 = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + 16ll);
			goto label$4881;
		}
		goto label$4882;
		label$4885:;
		{
			double R$3;
			R$3 = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + 16ll);
			{
				int64 I$4;
				I$4 = 1ll;
				int64 TMP$1763$4;
				TMP$1763$4 = *(int64*)THIS$1 + -1ll;
				goto label$4888;
				label$4891:;
				{
					if( *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) + 16ll) >= R$3 ) goto label$4893;
					{
						R$3 = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) + 16ll);
						label$4893:;
					}
				}
				label$4889:;
				I$4 = I$4 + 1ll;
				label$4888:;
				if( I$4 <= TMP$1763$4 ) goto label$4891;
				label$4890:;
			}
			fb$result$1 = R$3;
			goto label$4881;
		}
		label$4887:;
		label$4882:;
	}
	label$4881:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY7FOREACHEPFvRNS_4VEC3EERKb( struct $N4MATH7V3ARRAYE* THIS$1, tmp$1623 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4894:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4897;
	{
		if( F$1 == (tmp$1623)0ull ) goto label$4899;
		{
			if( *R$1 == (boolean)0ll ) goto label$4901;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4902;
					label$4905:;
					{
						(F$1)( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) );
					}
					label$4903:;
					I$5 = I$5 + -1ll;
					label$4902:;
					if( I$5 >= 0ll ) goto label$4905;
					label$4904:;
				}
			}
			goto label$4900;
			label$4901:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1764$5;
					TMP$1764$5 = *(int64*)THIS$1 + -1ll;
					goto label$4906;
					label$4909:;
					{
						(F$1)( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) );
					}
					label$4907:;
					I$5 = I$5 + 1ll;
					label$4906:;
					if( I$5 <= TMP$1764$5 ) goto label$4909;
					label$4908:;
				}
			}
			label$4900:;
			fb$result$1 = (boolean)1ll;
			goto label$4895;
		}
		label$4899:;
		label$4898:;
	}
	label$4897:;
	label$4896:;
	fb$result$1 = (boolean)0ll;
	goto label$4895;
	label$4895:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY7FOREACHEPFbRNS_4VEC3EERKb( struct $N4MATH7V3ARRAYE* THIS$1, tmp$1625 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4910:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4913;
	{
		if( F$1 == (tmp$1625)0ull ) goto label$4915;
		{
			if( *R$1 == (boolean)0ll ) goto label$4917;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4918;
					label$4921:;
					{
						boolean vr$8 = (F$1)( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) );
						if( vr$8 != (boolean)0ll ) goto label$4923;
						{
							goto label$4920;
						}
						label$4923:;
						label$4922:;
					}
					label$4919:;
					I$5 = I$5 + -1ll;
					label$4918:;
					if( I$5 >= 0ll ) goto label$4921;
					label$4920:;
				}
			}
			goto label$4916;
			label$4917:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1765$5;
					TMP$1765$5 = *(int64*)THIS$1 + -1ll;
					goto label$4924;
					label$4927:;
					{
						boolean vr$15 = (F$1)( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) );
						if( vr$15 != (boolean)0ll ) goto label$4929;
						{
							goto label$4926;
						}
						label$4929:;
						label$4928:;
					}
					label$4925:;
					I$5 = I$5 + 1ll;
					label$4924:;
					if( I$5 <= TMP$1765$5 ) goto label$4927;
					label$4926:;
				}
			}
			label$4916:;
			fb$result$1 = (boolean)1ll;
			goto label$4911;
		}
		label$4915:;
		label$4914:;
	}
	label$4913:;
	label$4912:;
	fb$result$1 = (boolean)0ll;
	goto label$4911;
	label$4911:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY7FOREACHEPFvRNS_4VEC3ERKu7INTEGERERKb( struct $N4MATH7V3ARRAYE* THIS$1, tmp$1624 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4930:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4933;
	{
		if( F$1 == (tmp$1624)0ull ) goto label$4935;
		{
			if( *R$1 == (boolean)0ll ) goto label$4937;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4938;
					label$4941:;
					{
						(F$1)( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)), (int64*)&I$5 );
					}
					label$4939:;
					I$5 = I$5 + -1ll;
					label$4938:;
					if( I$5 >= 0ll ) goto label$4941;
					label$4940:;
				}
			}
			goto label$4936;
			label$4937:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1766$5;
					TMP$1766$5 = *(int64*)THIS$1 + -1ll;
					goto label$4942;
					label$4945:;
					{
						(F$1)( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)), (int64*)&I$5 );
					}
					label$4943:;
					I$5 = I$5 + 1ll;
					label$4942:;
					if( I$5 <= TMP$1766$5 ) goto label$4945;
					label$4944:;
				}
			}
			label$4936:;
			fb$result$1 = (boolean)1ll;
			goto label$4931;
		}
		label$4935:;
		label$4934:;
	}
	label$4933:;
	label$4932:;
	fb$result$1 = (boolean)0ll;
	goto label$4931;
	label$4931:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY7FOREACHEPFbRNS_4VEC3ERKu7INTEGERERKb( struct $N4MATH7V3ARRAYE* THIS$1, tmp$1626 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4946:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4949;
	{
		if( F$1 == (tmp$1626)0ull ) goto label$4951;
		{
			if( *R$1 == (boolean)0ll ) goto label$4953;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4954;
					label$4957:;
					{
						boolean vr$9 = (F$1)( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)), (int64*)&I$5 );
						if( vr$9 != (boolean)0ll ) goto label$4959;
						{
							goto label$4956;
						}
						label$4959:;
						label$4958:;
					}
					label$4955:;
					I$5 = I$5 + -1ll;
					label$4954:;
					if( I$5 >= 0ll ) goto label$4957;
					label$4956:;
				}
			}
			goto label$4952;
			label$4953:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1767$5;
					TMP$1767$5 = *(int64*)THIS$1 + -1ll;
					goto label$4960;
					label$4963:;
					{
						boolean vr$17 = (F$1)( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)), (int64*)&I$5 );
						if( vr$17 != (boolean)0ll ) goto label$4965;
						{
							goto label$4962;
						}
						label$4965:;
						label$4964:;
					}
					label$4961:;
					I$5 = I$5 + 1ll;
					label$4960:;
					if( I$5 <= TMP$1767$5 ) goto label$4963;
					label$4962:;
				}
			}
			label$4952:;
			fb$result$1 = (boolean)1ll;
			goto label$4947;
		}
		label$4951:;
		label$4950:;
	}
	label$4949:;
	label$4948:;
	fb$result$1 = (boolean)0ll;
	goto label$4947;
	label$4947:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY8FOREACHXEPFvRdERKb( struct $N4MATH7V3ARRAYE* THIS$1, tmp$1294 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4966:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4969;
	{
		if( F$1 == (tmp$1294)0ull ) goto label$4971;
		{
			if( *R$1 == (boolean)0ll ) goto label$4973;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4974;
					label$4977:;
					{
						(F$1)( (double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) );
					}
					label$4975:;
					I$5 = I$5 + -1ll;
					label$4974:;
					if( I$5 >= 0ll ) goto label$4977;
					label$4976:;
				}
			}
			goto label$4972;
			label$4973:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1768$5;
					TMP$1768$5 = *(int64*)THIS$1 + -1ll;
					goto label$4978;
					label$4981:;
					{
						(F$1)( (double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) );
					}
					label$4979:;
					I$5 = I$5 + 1ll;
					label$4978:;
					if( I$5 <= TMP$1768$5 ) goto label$4981;
					label$4980:;
				}
			}
			label$4972:;
			fb$result$1 = (boolean)1ll;
			goto label$4967;
		}
		label$4971:;
		label$4970:;
	}
	label$4969:;
	label$4968:;
	fb$result$1 = (boolean)0ll;
	goto label$4967;
	label$4967:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY8FOREACHXEPFbRdERKb( struct $N4MATH7V3ARRAYE* THIS$1, tmp$1296 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$4982:;
	if( *(int64*)THIS$1 == 0ll ) goto label$4985;
	{
		if( F$1 == (tmp$1296)0ull ) goto label$4987;
		{
			if( *R$1 == (boolean)0ll ) goto label$4989;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$4990;
					label$4993:;
					{
						boolean vr$9 = (F$1)( (double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) );
						if( vr$9 != (boolean)0ll ) goto label$4995;
						{
							goto label$4992;
						}
						label$4995:;
						label$4994:;
					}
					label$4991:;
					I$5 = I$5 + -1ll;
					label$4990:;
					if( I$5 >= 0ll ) goto label$4993;
					label$4992:;
				}
			}
			goto label$4988;
			label$4989:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1769$5;
					TMP$1769$5 = *(int64*)THIS$1 + -1ll;
					goto label$4996;
					label$4999:;
					{
						boolean vr$17 = (F$1)( (double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) );
						if( vr$17 != (boolean)0ll ) goto label$5001;
						{
							goto label$4998;
						}
						label$5001:;
						label$5000:;
					}
					label$4997:;
					I$5 = I$5 + 1ll;
					label$4996:;
					if( I$5 <= TMP$1769$5 ) goto label$4999;
					label$4998:;
				}
			}
			label$4988:;
			fb$result$1 = (boolean)1ll;
			goto label$4983;
		}
		label$4987:;
		label$4986:;
	}
	label$4985:;
	label$4984:;
	fb$result$1 = (boolean)0ll;
	goto label$4983;
	label$4983:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY8FOREACHXEPFvRdRKu7INTEGERERKb( struct $N4MATH7V3ARRAYE* THIS$1, tmp$1295 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5002:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5005;
	{
		if( F$1 == (tmp$1295)0ull ) goto label$5007;
		{
			if( *R$1 == (boolean)0ll ) goto label$5009;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$5010;
					label$5013:;
					{
						(F$1)( (double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)), (int64*)&I$5 );
					}
					label$5011:;
					I$5 = I$5 + -1ll;
					label$5010:;
					if( I$5 >= 0ll ) goto label$5013;
					label$5012:;
				}
			}
			goto label$5008;
			label$5009:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1770$5;
					TMP$1770$5 = *(int64*)THIS$1 + -1ll;
					goto label$5014;
					label$5017:;
					{
						(F$1)( (double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)), (int64*)&I$5 );
					}
					label$5015:;
					I$5 = I$5 + 1ll;
					label$5014:;
					if( I$5 <= TMP$1770$5 ) goto label$5017;
					label$5016:;
				}
			}
			label$5008:;
			fb$result$1 = (boolean)1ll;
			goto label$5003;
		}
		label$5007:;
		label$5006:;
	}
	label$5005:;
	label$5004:;
	fb$result$1 = (boolean)0ll;
	goto label$5003;
	label$5003:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY8FOREACHXEPFbRdRKu7INTEGERERKb( struct $N4MATH7V3ARRAYE* THIS$1, tmp$1297 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5018:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5021;
	{
		if( F$1 == (tmp$1297)0ull ) goto label$5023;
		{
			if( *R$1 == (boolean)0ll ) goto label$5025;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$5026;
					label$5029:;
					{
						boolean vr$10 = (F$1)( (double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)), (int64*)&I$5 );
						if( vr$10 != (boolean)0ll ) goto label$5031;
						{
							goto label$5028;
						}
						label$5031:;
						label$5030:;
					}
					label$5027:;
					I$5 = I$5 + -1ll;
					label$5026:;
					if( I$5 >= 0ll ) goto label$5029;
					label$5028:;
				}
			}
			goto label$5024;
			label$5025:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1771$5;
					TMP$1771$5 = *(int64*)THIS$1 + -1ll;
					goto label$5032;
					label$5035:;
					{
						boolean vr$19 = (F$1)( (double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)), (int64*)&I$5 );
						if( vr$19 != (boolean)0ll ) goto label$5037;
						{
							goto label$5034;
						}
						label$5037:;
						label$5036:;
					}
					label$5033:;
					I$5 = I$5 + 1ll;
					label$5032:;
					if( I$5 <= TMP$1771$5 ) goto label$5035;
					label$5034:;
				}
			}
			label$5024:;
			fb$result$1 = (boolean)1ll;
			goto label$5019;
		}
		label$5023:;
		label$5022:;
	}
	label$5021:;
	label$5020:;
	fb$result$1 = (boolean)0ll;
	goto label$5019;
	label$5019:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY8FOREACHYEPFvRdERKb( struct $N4MATH7V3ARRAYE* THIS$1, tmp$1294 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5038:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5041;
	{
		if( F$1 == (tmp$1294)0ull ) goto label$5043;
		{
			if( *R$1 == (boolean)0ll ) goto label$5045;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$5046;
					label$5049:;
					{
						(F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) + 8ll) );
					}
					label$5047:;
					I$5 = I$5 + -1ll;
					label$5046:;
					if( I$5 >= 0ll ) goto label$5049;
					label$5048:;
				}
			}
			goto label$5044;
			label$5045:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1772$5;
					TMP$1772$5 = *(int64*)THIS$1 + -1ll;
					goto label$5050;
					label$5053:;
					{
						(F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) + 8ll) );
					}
					label$5051:;
					I$5 = I$5 + 1ll;
					label$5050:;
					if( I$5 <= TMP$1772$5 ) goto label$5053;
					label$5052:;
				}
			}
			label$5044:;
			fb$result$1 = (boolean)1ll;
			goto label$5039;
		}
		label$5043:;
		label$5042:;
	}
	label$5041:;
	label$5040:;
	fb$result$1 = (boolean)0ll;
	goto label$5039;
	label$5039:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY8FOREACHYEPFbRdERKb( struct $N4MATH7V3ARRAYE* THIS$1, tmp$1296 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5054:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5057;
	{
		if( F$1 == (tmp$1296)0ull ) goto label$5059;
		{
			if( *R$1 == (boolean)0ll ) goto label$5061;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$5062;
					label$5065:;
					{
						boolean vr$9 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) + 8ll) );
						if( vr$9 != (boolean)0ll ) goto label$5067;
						{
							goto label$5064;
						}
						label$5067:;
						label$5066:;
					}
					label$5063:;
					I$5 = I$5 + -1ll;
					label$5062:;
					if( I$5 >= 0ll ) goto label$5065;
					label$5064:;
				}
			}
			goto label$5060;
			label$5061:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1773$5;
					TMP$1773$5 = *(int64*)THIS$1 + -1ll;
					goto label$5068;
					label$5071:;
					{
						boolean vr$17 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) + 8ll) );
						if( vr$17 != (boolean)0ll ) goto label$5073;
						{
							goto label$5070;
						}
						label$5073:;
						label$5072:;
					}
					label$5069:;
					I$5 = I$5 + 1ll;
					label$5068:;
					if( I$5 <= TMP$1773$5 ) goto label$5071;
					label$5070:;
				}
			}
			label$5060:;
			fb$result$1 = (boolean)1ll;
			goto label$5055;
		}
		label$5059:;
		label$5058:;
	}
	label$5057:;
	label$5056:;
	fb$result$1 = (boolean)0ll;
	goto label$5055;
	label$5055:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY8FOREACHYEPFvRdRKu7INTEGERERKb( struct $N4MATH7V3ARRAYE* THIS$1, tmp$1295 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5074:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5077;
	{
		if( F$1 == (tmp$1295)0ull ) goto label$5079;
		{
			if( *R$1 == (boolean)0ll ) goto label$5081;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$5082;
					label$5085:;
					{
						(F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) + 8ll), (int64*)&I$5 );
					}
					label$5083:;
					I$5 = I$5 + -1ll;
					label$5082:;
					if( I$5 >= 0ll ) goto label$5085;
					label$5084:;
				}
			}
			goto label$5080;
			label$5081:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1774$5;
					TMP$1774$5 = *(int64*)THIS$1 + -1ll;
					goto label$5086;
					label$5089:;
					{
						(F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) + 8ll), (int64*)&I$5 );
					}
					label$5087:;
					I$5 = I$5 + 1ll;
					label$5086:;
					if( I$5 <= TMP$1774$5 ) goto label$5089;
					label$5088:;
				}
			}
			label$5080:;
			fb$result$1 = (boolean)1ll;
			goto label$5075;
		}
		label$5079:;
		label$5078:;
	}
	label$5077:;
	label$5076:;
	fb$result$1 = (boolean)0ll;
	goto label$5075;
	label$5075:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY8FOREACHYEPFbRdRKu7INTEGERERKb( struct $N4MATH7V3ARRAYE* THIS$1, tmp$1297 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5090:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5093;
	{
		if( F$1 == (tmp$1297)0ull ) goto label$5095;
		{
			if( *R$1 == (boolean)0ll ) goto label$5097;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$5098;
					label$5101:;
					{
						boolean vr$10 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) + 8ll), (int64*)&I$5 );
						if( vr$10 != (boolean)0ll ) goto label$5103;
						{
							goto label$5100;
						}
						label$5103:;
						label$5102:;
					}
					label$5099:;
					I$5 = I$5 + -1ll;
					label$5098:;
					if( I$5 >= 0ll ) goto label$5101;
					label$5100:;
				}
			}
			goto label$5096;
			label$5097:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1775$5;
					TMP$1775$5 = *(int64*)THIS$1 + -1ll;
					goto label$5104;
					label$5107:;
					{
						boolean vr$19 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) + 8ll), (int64*)&I$5 );
						if( vr$19 != (boolean)0ll ) goto label$5109;
						{
							goto label$5106;
						}
						label$5109:;
						label$5108:;
					}
					label$5105:;
					I$5 = I$5 + 1ll;
					label$5104:;
					if( I$5 <= TMP$1775$5 ) goto label$5107;
					label$5106:;
				}
			}
			label$5096:;
			fb$result$1 = (boolean)1ll;
			goto label$5091;
		}
		label$5095:;
		label$5094:;
	}
	label$5093:;
	label$5092:;
	fb$result$1 = (boolean)0ll;
	goto label$5091;
	label$5091:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY8FOREACHZEPFvRdERKb( struct $N4MATH7V3ARRAYE* THIS$1, tmp$1294 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5110:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5113;
	{
		if( F$1 == (tmp$1294)0ull ) goto label$5115;
		{
			if( *R$1 == (boolean)0ll ) goto label$5117;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$5118;
					label$5121:;
					{
						(F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) + 16ll) );
					}
					label$5119:;
					I$5 = I$5 + -1ll;
					label$5118:;
					if( I$5 >= 0ll ) goto label$5121;
					label$5120:;
				}
			}
			goto label$5116;
			label$5117:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1776$5;
					TMP$1776$5 = *(int64*)THIS$1 + -1ll;
					goto label$5122;
					label$5125:;
					{
						(F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) + 16ll) );
					}
					label$5123:;
					I$5 = I$5 + 1ll;
					label$5122:;
					if( I$5 <= TMP$1776$5 ) goto label$5125;
					label$5124:;
				}
			}
			label$5116:;
			fb$result$1 = (boolean)1ll;
			goto label$5111;
		}
		label$5115:;
		label$5114:;
	}
	label$5113:;
	label$5112:;
	fb$result$1 = (boolean)0ll;
	goto label$5111;
	label$5111:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY8FOREACHZEPFbRdERKb( struct $N4MATH7V3ARRAYE* THIS$1, tmp$1296 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5126:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5129;
	{
		if( F$1 == (tmp$1296)0ull ) goto label$5131;
		{
			if( *R$1 == (boolean)0ll ) goto label$5133;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$5134;
					label$5137:;
					{
						boolean vr$9 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) + 16ll) );
						if( vr$9 != (boolean)0ll ) goto label$5139;
						{
							goto label$5136;
						}
						label$5139:;
						label$5138:;
					}
					label$5135:;
					I$5 = I$5 + -1ll;
					label$5134:;
					if( I$5 >= 0ll ) goto label$5137;
					label$5136:;
				}
			}
			goto label$5132;
			label$5133:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1777$5;
					TMP$1777$5 = *(int64*)THIS$1 + -1ll;
					goto label$5140;
					label$5143:;
					{
						boolean vr$17 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) + 16ll) );
						if( vr$17 != (boolean)0ll ) goto label$5145;
						{
							goto label$5142;
						}
						label$5145:;
						label$5144:;
					}
					label$5141:;
					I$5 = I$5 + 1ll;
					label$5140:;
					if( I$5 <= TMP$1777$5 ) goto label$5143;
					label$5142:;
				}
			}
			label$5132:;
			fb$result$1 = (boolean)1ll;
			goto label$5127;
		}
		label$5131:;
		label$5130:;
	}
	label$5129:;
	label$5128:;
	fb$result$1 = (boolean)0ll;
	goto label$5127;
	label$5127:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY8FOREACHZEPFvRdRKu7INTEGERERKb( struct $N4MATH7V3ARRAYE* THIS$1, tmp$1295 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5146:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5149;
	{
		if( F$1 == (tmp$1295)0ull ) goto label$5151;
		{
			if( *R$1 == (boolean)0ll ) goto label$5153;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$5154;
					label$5157:;
					{
						(F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) + 16ll), (int64*)&I$5 );
					}
					label$5155:;
					I$5 = I$5 + -1ll;
					label$5154:;
					if( I$5 >= 0ll ) goto label$5157;
					label$5156:;
				}
			}
			goto label$5152;
			label$5153:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1778$5;
					TMP$1778$5 = *(int64*)THIS$1 + -1ll;
					goto label$5158;
					label$5161:;
					{
						(F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) + 16ll), (int64*)&I$5 );
					}
					label$5159:;
					I$5 = I$5 + 1ll;
					label$5158:;
					if( I$5 <= TMP$1778$5 ) goto label$5161;
					label$5160:;
				}
			}
			label$5152:;
			fb$result$1 = (boolean)1ll;
			goto label$5147;
		}
		label$5151:;
		label$5150:;
	}
	label$5149:;
	label$5148:;
	fb$result$1 = (boolean)0ll;
	goto label$5147;
	label$5147:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY8FOREACHZEPFbRdRKu7INTEGERERKb( struct $N4MATH7V3ARRAYE* THIS$1, tmp$1297 F$1, boolean* R$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5162:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5165;
	{
		if( F$1 == (tmp$1297)0ull ) goto label$5167;
		{
			if( *R$1 == (boolean)0ll ) goto label$5169;
			{
				{
					int64 I$5;
					I$5 = *(int64*)THIS$1 + -1ll;
					goto label$5170;
					label$5173:;
					{
						boolean vr$10 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) + 16ll), (int64*)&I$5 );
						if( vr$10 != (boolean)0ll ) goto label$5175;
						{
							goto label$5172;
						}
						label$5175:;
						label$5174:;
					}
					label$5171:;
					I$5 = I$5 + -1ll;
					label$5170:;
					if( I$5 >= 0ll ) goto label$5173;
					label$5172:;
				}
			}
			goto label$5168;
			label$5169:;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$1779$5;
					TMP$1779$5 = *(int64*)THIS$1 + -1ll;
					goto label$5176;
					label$5179:;
					{
						boolean vr$19 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$5 * 24ll)) + 16ll), (int64*)&I$5 );
						if( vr$19 != (boolean)0ll ) goto label$5181;
						{
							goto label$5178;
						}
						label$5181:;
						label$5180:;
					}
					label$5177:;
					I$5 = I$5 + 1ll;
					label$5176:;
					if( I$5 <= TMP$1779$5 ) goto label$5179;
					label$5178:;
				}
			}
			label$5168:;
			fb$result$1 = (boolean)1ll;
			goto label$5163;
		}
		label$5167:;
		label$5166:;
	}
	label$5165:;
	label$5164:;
	fb$result$1 = (boolean)0ll;
	goto label$5163;
	label$5163:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY3MAPERS0_PFNS_4VEC3ERKS2_E( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH7V3ARRAYE* A$1, tmp$1627 F$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5182:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5185;
	{
		if( F$1 == (tmp$1627)0ull ) goto label$5187;
		{
			_ZN4MATH7V3ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1780$4;
				TMP$1780$4 = *(int64*)THIS$1 + -1ll;
				goto label$5188;
				label$5191:;
				{
					struct $N4MATH4VEC3E TMP$1781$5;
					struct $N4MATH4VEC3E vr$9 = (F$1)( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) );
					TMP$1781$5 = vr$9;
					_ZN4MATH4VEC3aSERKS0_( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)A$1 + 8ll) + (I$4 * 24ll)), (struct $N4MATH4VEC3E*)&TMP$1781$5 );
				}
				label$5189:;
				I$4 = I$4 + 1ll;
				label$5188:;
				if( I$4 <= TMP$1780$4 ) goto label$5191;
				label$5190:;
			}
			fb$result$1 = (boolean)1ll;
			goto label$5183;
		}
		label$5187:;
		label$5186:;
	}
	label$5185:;
	label$5184:;
	fb$result$1 = (boolean)0ll;
	goto label$5183;
	label$5183:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY4MAPXERNS_5ARRAYE( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5192:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5195;
	{
		_ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
		double* P$2;
		double* vr$4 = _ZNK4MATH5ARRAY11DATA__get__Ev( (struct $N4MATH5ARRAYE*)A$1 );
		P$2 = vr$4;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1782$3;
			TMP$1782$3 = *(int64*)THIS$1 + -1ll;
			goto label$5196;
			label$5199:;
			{
				*(double*)((uint8*)P$2 + (I$3 << (3ll & 63ll))) = *(double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll));
			}
			label$5197:;
			I$3 = I$3 + 1ll;
			label$5196:;
			if( I$3 <= TMP$1782$3 ) goto label$5199;
			label$5198:;
		}
		fb$result$1 = (boolean)1ll;
		goto label$5193;
	}
	label$5195:;
	label$5194:;
	fb$result$1 = (boolean)0ll;
	goto label$5193;
	label$5193:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY4MAPXERNS_5ARRAYEPFdRKdE( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1, tmp$1298 F$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5200:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5203;
	{
		if( F$1 == (tmp$1298)0ull ) goto label$5205;
		{
			_ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
			double* P$3;
			double* vr$4 = _ZNK4MATH5ARRAY11DATA__get__Ev( (struct $N4MATH5ARRAYE*)A$1 );
			P$3 = vr$4;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1783$4;
				TMP$1783$4 = *(int64*)THIS$1 + -1ll;
				goto label$5206;
				label$5209:;
				{
					double vr$11 = (F$1)( (double*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) );
					*(double*)((uint8*)P$3 + (I$4 << (3ll & 63ll))) = vr$11;
				}
				label$5207:;
				I$4 = I$4 + 1ll;
				label$5206:;
				if( I$4 <= TMP$1783$4 ) goto label$5209;
				label$5208:;
			}
			fb$result$1 = (boolean)1ll;
			goto label$5201;
		}
		label$5205:;
		label$5204:;
	}
	label$5203:;
	label$5202:;
	fb$result$1 = (boolean)0ll;
	goto label$5201;
	label$5201:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY4MAPYERNS_5ARRAYE( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5210:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5213;
	{
		_ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
		double* P$2;
		double* vr$4 = _ZNK4MATH5ARRAY11DATA__get__Ev( (struct $N4MATH5ARRAYE*)A$1 );
		P$2 = vr$4;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1784$3;
			TMP$1784$3 = *(int64*)THIS$1 + -1ll;
			goto label$5214;
			label$5217:;
			{
				*(double*)((uint8*)P$2 + (I$3 << (3ll & 63ll))) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 8ll);
			}
			label$5215:;
			I$3 = I$3 + 1ll;
			label$5214:;
			if( I$3 <= TMP$1784$3 ) goto label$5217;
			label$5216:;
		}
		fb$result$1 = (boolean)1ll;
		goto label$5211;
	}
	label$5213:;
	label$5212:;
	fb$result$1 = (boolean)0ll;
	goto label$5211;
	label$5211:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY4MAPYERNS_5ARRAYEPFdRKdE( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1, tmp$1298 F$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5218:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5221;
	{
		if( F$1 == (tmp$1298)0ull ) goto label$5223;
		{
			_ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
			double* P$3;
			double* vr$4 = _ZNK4MATH5ARRAY11DATA__get__Ev( (struct $N4MATH5ARRAYE*)A$1 );
			P$3 = vr$4;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1785$4;
				TMP$1785$4 = *(int64*)THIS$1 + -1ll;
				goto label$5224;
				label$5227:;
				{
					double vr$11 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) + 8ll) );
					*(double*)((uint8*)P$3 + (I$4 << (3ll & 63ll))) = vr$11;
				}
				label$5225:;
				I$4 = I$4 + 1ll;
				label$5224:;
				if( I$4 <= TMP$1785$4 ) goto label$5227;
				label$5226:;
			}
			fb$result$1 = (boolean)1ll;
			goto label$5219;
		}
		label$5223:;
		label$5222:;
	}
	label$5221:;
	label$5220:;
	fb$result$1 = (boolean)0ll;
	goto label$5219;
	label$5219:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY4MAPZERNS_5ARRAYE( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5228:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5231;
	{
		_ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
		double* P$2;
		double* vr$4 = _ZNK4MATH5ARRAY11DATA__get__Ev( (struct $N4MATH5ARRAYE*)A$1 );
		P$2 = vr$4;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1786$3;
			TMP$1786$3 = *(int64*)THIS$1 + -1ll;
			goto label$5232;
			label$5235:;
			{
				*(double*)((uint8*)P$2 + (I$3 << (3ll & 63ll))) = *(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) + 16ll);
			}
			label$5233:;
			I$3 = I$3 + 1ll;
			label$5232:;
			if( I$3 <= TMP$1786$3 ) goto label$5235;
			label$5234:;
		}
		fb$result$1 = (boolean)1ll;
		goto label$5229;
	}
	label$5231:;
	label$5230:;
	fb$result$1 = (boolean)0ll;
	goto label$5229;
	label$5229:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY4MAPZERNS_5ARRAYEPFdRKdE( struct $N4MATH7V3ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A$1, tmp$1298 F$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5236:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5239;
	{
		if( F$1 == (tmp$1298)0ull ) goto label$5241;
		{
			_ZN4MATH5ARRAY13LENGTH__set__ERKu7INTEGER( A$1, (int64*)THIS$1 );
			double* P$3;
			double* vr$4 = _ZNK4MATH5ARRAY11DATA__get__Ev( (struct $N4MATH5ARRAYE*)A$1 );
			P$3 = vr$4;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$1787$4;
				TMP$1787$4 = *(int64*)THIS$1 + -1ll;
				goto label$5242;
				label$5245:;
				{
					double vr$11 = (F$1)( (double*)((uint8*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)) + 16ll) );
					*(double*)((uint8*)P$3 + (I$4 << (3ll & 63ll))) = vr$11;
				}
				label$5243:;
				I$4 = I$4 + 1ll;
				label$5242:;
				if( I$4 <= TMP$1787$4 ) goto label$5245;
				label$5244:;
			}
			fb$result$1 = (boolean)1ll;
			goto label$5237;
		}
		label$5241:;
		label$5240:;
	}
	label$5239:;
	label$5238:;
	fb$result$1 = (boolean)0ll;
	goto label$5237;
	label$5237:;
	return fb$result$1;
}

boolean _ZN4MATH7V3ARRAY9NORMALISEEv( struct $N4MATH7V3ARRAYE* THIS$1 )
{
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$5246:;
	if( *(int64*)THIS$1 == 0ll ) goto label$5249;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1788$3;
			TMP$1788$3 = *(int64*)THIS$1 + -1ll;
			goto label$5250;
			label$5253:;
			{
				_ZN4MATH4VEC39NORMALISEEv( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$3 * 24ll)) );
			}
			label$5251:;
			I$3 = I$3 + 1ll;
			label$5250:;
			if( I$3 <= TMP$1788$3 ) goto label$5253;
			label$5252:;
		}
		fb$result$1 = (boolean)1ll;
		goto label$5247;
	}
	label$5249:;
	label$5248:;
	fb$result$1 = (boolean)0ll;
	goto label$5247;
	label$5247:;
	return fb$result$1;
}

FBSTRING* _ZNK4MATH7V3ARRAY6TOJSONERKb( struct $N4MATH7V3ARRAYE* THIS$1, boolean* A$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$5254:;
	{
		int64 TMP$1789$2;
		TMP$1789$2 = *(int64*)THIS$1;
		if( TMP$1789$2 != 0ll ) goto label$5257;
		label$5258:;
		{
			fb_StrInit( (void*)&fb$result$1, -1ll, (void*)"[]", 3ll, 0 );
			goto label$5255;
		}
		goto label$5256;
		label$5257:;
		if( TMP$1789$2 != 1ll ) goto label$5259;
		label$5260:;
		{
			FBSTRING TMP$1790$3;
			FBSTRING TMP$1791$3;
			FBSTRING* vr$4 = _ZNK4MATH4VEC36TOJSONERKb( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll), A$1 );
			__builtin_memset( &TMP$1790$3, 0, 24ll );
			FBSTRING* vr$7 = fb_StrConcat( &TMP$1790$3, (void*)"[", 2ll, (void*)vr$4, -1ll );
			__builtin_memset( &TMP$1791$3, 0, 24ll );
			FBSTRING* vr$10 = fb_StrConcat( &TMP$1791$3, (void*)vr$7, -1ll, (void*)"]", 2ll );
			fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$10, -1ll, 0 );
			goto label$5255;
		}
		goto label$5256;
		label$5259:;
		{
			FBSTRING TMP$1792$3;
			FBSTRING TMP$1796$3;
			FBSTRING R$3;
			FBSTRING* vr$13 = _ZNK4MATH4VEC36TOJSONERKb( *(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll), A$1 );
			__builtin_memset( &TMP$1792$3, 0, 24ll );
			FBSTRING* vr$16 = fb_StrConcat( &TMP$1792$3, (void*)"[", 2ll, (void*)vr$13, -1ll );
			fb_StrInit( (void*)&R$3, -1ll, (void*)vr$16, -1ll, 0 );
			{
				int64 I$4;
				I$4 = 1ll;
				int64 TMP$1793$4;
				TMP$1793$4 = *(int64*)THIS$1 + -1ll;
				goto label$5262;
				label$5265:;
				{
					FBSTRING TMP$1794$5;
					FBSTRING TMP$1795$5;
					FBSTRING* vr$23 = _ZNK4MATH4VEC36TOJSONERKb( (struct $N4MATH4VEC3E*)((uint8*)*(struct $N4MATH4VEC3E**)((uint8*)THIS$1 + 8ll) + (I$4 * 24ll)), A$1 );
					__builtin_memset( &TMP$1794$5, 0, 24ll );
					FBSTRING* vr$26 = fb_StrConcat( &TMP$1794$5, (void*)",", 2ll, (void*)vr$23, -1ll );
					__builtin_memset( &TMP$1795$5, 0, 24ll );
					FBSTRING* vr$30 = fb_StrConcat( &TMP$1795$5, (void*)&R$3, -1ll, (void*)vr$26, -1ll );
					fb_StrAssign( (void*)&R$3, -1ll, (void*)vr$30, -1ll, 0 );
				}
				label$5263:;
				I$4 = I$4 + 1ll;
				label$5262:;
				if( I$4 <= TMP$1793$4 ) goto label$5265;
				label$5264:;
			}
			__builtin_memset( &TMP$1796$3, 0, 24ll );
			FBSTRING* vr$36 = fb_StrConcat( &TMP$1796$3, (void*)&R$3, -1ll, (void*)"]", 2ll );
			fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$36, -1ll, 0 );
			fb_StrDelete( (FBSTRING*)&R$3 );
			goto label$5255;
			fb_StrDelete( (FBSTRING*)&R$3 );
		}
		label$5261:;
		label$5256:;
	}
	label$5255:;
	FBSTRING* vr$41 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$41;
}

void _ZN4MATH7V4ARRAYC1Ev( struct $N4MATH7V4ARRAYE* THIS$1 )
{
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC4C1Ev( (struct $N4MATH4VEC4E*)((uint8*)THIS$1 + 16ll) );
	label$5266:;
	label$5267:;
}

void _ZN4MATH7V4ARRAYC1ERKNS_5ARRAYES3_S3_S3_( struct $N4MATH7V4ARRAYE* THIS$1, struct $N4MATH5ARRAYE* A1$1, struct $N4MATH5ARRAYE* A2$1, struct $N4MATH5ARRAYE* A3$1, struct $N4MATH5ARRAYE* A4$1 )
{
	label$5268:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC4C1Ev( (struct $N4MATH4VEC4E*)((uint8*)THIS$1 + 16ll) );
	if( ((((int64)-(*(int64*)A1$1 > 0ll) & (int64)-(*(int64*)A1$1 == *(int64*)A2$1)) & (int64)-(*(int64*)A2$1 == *(int64*)A3$1)) & (int64)-(*(int64*)A3$1 == *(int64*)A4$1)) == 0ll ) goto label$5271;
	{
		struct $N4MATH4VEC4E* TMP$1802$2;
		uint64 TMP$1803$2;
		struct $N4MATH4VEC4E* TMP$1804$2;
		*(int64*)THIS$1 = *(int64*)A1$1;
		void* vr$24 = malloc( *(uint64*)A1$1 << (5ull & 63ll) );
		TMP$1802$2 = (struct $N4MATH4VEC4E*)vr$24;
		if( TMP$1802$2 == (struct $N4MATH4VEC4E*)0ull ) goto label$5272;
		TMP$1804$2 = TMP$1802$2;
		TMP$1803$2 = *(uint64*)A1$1;
		label$5273:;
		if( TMP$1803$2 == 0ull ) goto label$5274;
		_ZN4MATH4VEC4C1Ev( TMP$1804$2 );
		TMP$1804$2 = (struct $N4MATH4VEC4E*)((uint8*)TMP$1804$2 + 32ll);
		TMP$1803$2 = TMP$1803$2 + 18446744073709551615ull;
		goto label$5273;
		label$5274:;
		label$5272:;
		*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) = TMP$1802$2;
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
			int64 TMP$1805$3;
			TMP$1805$3 = *(int64*)A1$1 + -1ll;
			goto label$5275;
			label$5278:;
			{
				*(double*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))) = *(double*)((uint8*)P1$2 + (I$3 << (3ll & 63ll)));
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))) + 8ll) = *(double*)((uint8*)P2$2 + (I$3 << (3ll & 63ll)));
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))) + 16ll) = *(double*)((uint8*)P3$2 + (I$3 << (3ll & 63ll)));
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))) + 24ll) = *(double*)((uint8*)P4$2 + (I$3 << (3ll & 63ll)));
			}
			label$5276:;
			I$3 = I$3 + 1ll;
			label$5275:;
			if( I$3 <= TMP$1805$3 ) goto label$5278;
			label$5277:;
		}
	}
	label$5271:;
	label$5270:;
	label$5269:;
}

void _ZN4MATH7V4ARRAYC1ERKNS_7V2ARRAYE( struct $N4MATH7V4ARRAYE* THIS$1, struct $N4MATH7V2ARRAYE* A$1 )
{
	label$5279:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC4C1Ev( (struct $N4MATH4VEC4E*)((uint8*)THIS$1 + 16ll) );
	if( *(int64*)A$1 == 0ll ) goto label$5282;
	{
		struct $N4MATH4VEC4E* TMP$1806$2;
		uint64 TMP$1807$2;
		struct $N4MATH4VEC4E* TMP$1808$2;
		*(int64*)THIS$1 = *(int64*)A$1;
		void* vr$11 = malloc( *(uint64*)A$1 << (5ull & 63ll) );
		TMP$1806$2 = (struct $N4MATH4VEC4E*)vr$11;
		if( TMP$1806$2 == (struct $N4MATH4VEC4E*)0ull ) goto label$5283;
		TMP$1808$2 = TMP$1806$2;
		TMP$1807$2 = *(uint64*)A$1;
		label$5284:;
		if( TMP$1807$2 == 0ull ) goto label$5285;
		_ZN4MATH4VEC4C1Ev( TMP$1808$2 );
		TMP$1808$2 = (struct $N4MATH4VEC4E*)((uint8*)TMP$1808$2 + 32ll);
		TMP$1807$2 = TMP$1807$2 + 18446744073709551615ull;
		goto label$5284;
		label$5285:;
		label$5283:;
		*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) = TMP$1806$2;
		struct $N4MATH4VEC2E* P$2;
		struct $N4MATH4VEC2E* vr$16 = _ZNK4MATH7V2ARRAY11DATA__get__Ev( A$1 );
		P$2 = vr$16;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1809$3;
			TMP$1809$3 = *(int64*)THIS$1 + -1ll;
			goto label$5286;
			label$5289:;
			{
				*(double*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))) = *(double*)((uint8*)P$2 + (I$3 << (4ll & 63ll)));
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))) + 8ll) = *(double*)((uint8*)((uint8*)P$2 + (I$3 << (4ll & 63ll))) + 8ll);
			}
			label$5287:;
			I$3 = I$3 + 1ll;
			label$5286:;
			if( I$3 <= TMP$1809$3 ) goto label$5289;
			label$5288:;
		}
	}
	label$5282:;
	label$5281:;
	label$5280:;
}

void _ZN4MATH7V4ARRAYC1ERKNS_7V2ARRAYERKNS_5ARRAYES6_( struct $N4MATH7V4ARRAYE* THIS$1, struct $N4MATH7V2ARRAYE* A12$1, struct $N4MATH5ARRAYE* A3$1, struct $N4MATH5ARRAYE* A4$1 )
{
	label$5290:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC4C1Ev( (struct $N4MATH4VEC4E*)((uint8*)THIS$1 + 16ll) );
	if( (((int64)-(*(int64*)A12$1 > 0ll) & (int64)-(*(int64*)A12$1 == *(int64*)A3$1)) & (int64)-(*(int64*)A3$1 == *(int64*)A4$1)) == 0ll ) goto label$5293;
	{
		struct $N4MATH4VEC4E* TMP$1810$2;
		uint64 TMP$1811$2;
		struct $N4MATH4VEC4E* TMP$1812$2;
		*(int64*)THIS$1 = *(int64*)A12$1;
		void* vr$20 = malloc( *(uint64*)A12$1 << (5ull & 63ll) );
		TMP$1810$2 = (struct $N4MATH4VEC4E*)vr$20;
		if( TMP$1810$2 == (struct $N4MATH4VEC4E*)0ull ) goto label$5294;
		TMP$1812$2 = TMP$1810$2;
		TMP$1811$2 = *(uint64*)A12$1;
		label$5295:;
		if( TMP$1811$2 == 0ull ) goto label$5296;
		_ZN4MATH4VEC4C1Ev( TMP$1812$2 );
		TMP$1812$2 = (struct $N4MATH4VEC4E*)((uint8*)TMP$1812$2 + 32ll);
		TMP$1811$2 = TMP$1811$2 + 18446744073709551615ull;
		goto label$5295;
		label$5296:;
		label$5294:;
		*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) = TMP$1810$2;
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
			int64 TMP$1813$3;
			TMP$1813$3 = *(int64*)A12$1 + -1ll;
			goto label$5297;
			label$5300:;
			{
				*(double*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))) = *(double*)((uint8*)P12$2 + (I$3 << (4ll & 63ll)));
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))) + 8ll) = *(double*)((uint8*)((uint8*)P12$2 + (I$3 << (4ll & 63ll))) + 8ll);
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))) + 16ll) = *(double*)((uint8*)P3$2 + (I$3 << (3ll & 63ll)));
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))) + 24ll) = *(double*)((uint8*)P4$2 + (I$3 << (3ll & 63ll)));
			}
			label$5298:;
			I$3 = I$3 + 1ll;
			label$5297:;
			if( I$3 <= TMP$1813$3 ) goto label$5300;
			label$5299:;
		}
	}
	label$5293:;
	label$5292:;
	label$5291:;
}

void _ZN4MATH7V4ARRAYC1ERKNS_7V3ARRAYE( struct $N4MATH7V4ARRAYE* THIS$1, struct $N4MATH7V3ARRAYE* A$1 )
{
	label$5301:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC4C1Ev( (struct $N4MATH4VEC4E*)((uint8*)THIS$1 + 16ll) );
	if( *(int64*)A$1 == 0ll ) goto label$5304;
	{
		struct $N4MATH4VEC4E* TMP$1814$2;
		uint64 TMP$1815$2;
		struct $N4MATH4VEC4E* TMP$1816$2;
		*(int64*)THIS$1 = *(int64*)A$1;
		void* vr$11 = malloc( *(uint64*)A$1 << (5ull & 63ll) );
		TMP$1814$2 = (struct $N4MATH4VEC4E*)vr$11;
		if( TMP$1814$2 == (struct $N4MATH4VEC4E*)0ull ) goto label$5305;
		TMP$1816$2 = TMP$1814$2;
		TMP$1815$2 = *(uint64*)A$1;
		label$5306:;
		if( TMP$1815$2 == 0ull ) goto label$5307;
		_ZN4MATH4VEC4C1Ev( TMP$1816$2 );
		TMP$1816$2 = (struct $N4MATH4VEC4E*)((uint8*)TMP$1816$2 + 32ll);
		TMP$1815$2 = TMP$1815$2 + 18446744073709551615ull;
		goto label$5306;
		label$5307:;
		label$5305:;
		*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) = TMP$1814$2;
		struct $N4MATH4VEC3E* P$2;
		struct $N4MATH4VEC3E* vr$16 = _ZNK4MATH7V3ARRAY11DATA__get__Ev( A$1 );
		P$2 = vr$16;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1817$3;
			TMP$1817$3 = *(int64*)THIS$1 + -1ll;
			goto label$5308;
			label$5311:;
			{
				*(double*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))) = *(double*)((uint8*)P$2 + (I$3 * 24ll));
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))) + 8ll) = *(double*)((uint8*)((uint8*)P$2 + (I$3 * 24ll)) + 8ll);
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))) + 16ll) = *(double*)((uint8*)((uint8*)P$2 + (I$3 * 24ll)) + 16ll);
			}
			label$5309:;
			I$3 = I$3 + 1ll;
			label$5308:;
			if( I$3 <= TMP$1817$3 ) goto label$5311;
			label$5310:;
		}
	}
	label$5304:;
	label$5303:;
	label$5302:;
}

void _ZN4MATH7V4ARRAYC1ERKNS_7V3ARRAYERKNS_5ARRAYE( struct $N4MATH7V4ARRAYE* THIS$1, struct $N4MATH7V3ARRAYE* A123$1, struct $N4MATH5ARRAYE* A4$1 )
{
	label$5312:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC4C1Ev( (struct $N4MATH4VEC4E*)((uint8*)THIS$1 + 16ll) );
	if( ((int64)-(*(int64*)A123$1 > 0ll) & (int64)-(*(int64*)A123$1 == *(int64*)A4$1)) == 0ll ) goto label$5315;
	{
		struct $N4MATH4VEC4E* TMP$1818$2;
		uint64 TMP$1819$2;
		struct $N4MATH4VEC4E* TMP$1820$2;
		*(int64*)THIS$1 = *(int64*)A123$1;
		void* vr$16 = malloc( *(uint64*)A123$1 << (5ull & 63ll) );
		TMP$1818$2 = (struct $N4MATH4VEC4E*)vr$16;
		if( TMP$1818$2 == (struct $N4MATH4VEC4E*)0ull ) goto label$5316;
		TMP$1820$2 = TMP$1818$2;
		TMP$1819$2 = *(uint64*)A123$1;
		label$5317:;
		if( TMP$1819$2 == 0ull ) goto label$5318;
		_ZN4MATH4VEC4C1Ev( TMP$1820$2 );
		TMP$1820$2 = (struct $N4MATH4VEC4E*)((uint8*)TMP$1820$2 + 32ll);
		TMP$1819$2 = TMP$1819$2 + 18446744073709551615ull;
		goto label$5317;
		label$5318:;
		label$5316:;
		*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) = TMP$1818$2;
		struct $N4MATH4VEC3E* P123$2;
		struct $N4MATH4VEC3E* vr$21 = _ZNK4MATH7V3ARRAY11DATA__get__Ev( A123$1 );
		P123$2 = vr$21;
		double* P4$2;
		double* vr$22 = _ZNK4MATH5ARRAY11DATA__get__Ev( A4$1 );
		P4$2 = vr$22;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1821$3;
			TMP$1821$3 = *(int64*)A123$1 + -1ll;
			goto label$5319;
			label$5322:;
			{
				*(double*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))) = *(double*)((uint8*)P123$2 + (I$3 * 24ll));
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))) + 8ll) = *(double*)((uint8*)((uint8*)P123$2 + (I$3 * 24ll)) + 8ll);
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))) + 16ll) = *(double*)((uint8*)((uint8*)P123$2 + (I$3 * 24ll)) + 16ll);
				*(double*)((uint8*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))) + 24ll) = *(double*)((uint8*)P4$2 + (I$3 << (3ll & 63ll)));
			}
			label$5320:;
			I$3 = I$3 + 1ll;
			label$5319:;
			if( I$3 <= TMP$1821$3 ) goto label$5322;
			label$5321:;
		}
	}
	label$5315:;
	label$5314:;
	label$5313:;
}

void _ZN4MATH7V4ARRAYC1ERKS0_( struct $N4MATH7V4ARRAYE* THIS$1, struct $N4MATH7V4ARRAYE* A$1 )
{
	label$5323:;
	__builtin_memset( (struct $N4MATH9BASEARRAYE*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	_ZN4MATH4VEC4C1Ev( (struct $N4MATH4VEC4E*)((uint8*)THIS$1 + 16ll) );
	if( *(int64*)A$1 == 0ll ) goto label$5326;
	{
		struct $N4MATH4VEC4E* TMP$1822$2;
		uint64 TMP$1823$2;
		struct $N4MATH4VEC4E* TMP$1824$2;
		*(int64*)THIS$1 = *(int64*)A$1;
		void* vr$11 = malloc( *(uint64*)A$1 << (5ull & 63ll) );
		TMP$1822$2 = (struct $N4MATH4VEC4E*)vr$11;
		if( TMP$1822$2 == (struct $N4MATH4VEC4E*)0ull ) goto label$5327;
		TMP$1824$2 = TMP$1822$2;
		TMP$1823$2 = *(uint64*)A$1;
		label$5328:;
		if( TMP$1823$2 == 0ull ) goto label$5329;
		_ZN4MATH4VEC4C1Ev( TMP$1824$2 );
		TMP$1824$2 = (struct $N4MATH4VEC4E*)((uint8*)TMP$1824$2 + 32ll);
		TMP$1823$2 = TMP$1823$2 + 18446744073709551615ull;
		goto label$5328;
		label$5329:;
		label$5327:;
		*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) = TMP$1822$2;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$1825$3;
			TMP$1825$3 = *(int64*)THIS$1 + -1ll;
			goto label$5330;
			label$5333:;
			{
				_ZN4MATH4VEC4aSERKS0_( (struct $N4MATH4VEC4E*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) + (I$3 << (5ll & 63ll))), (struct $N4MATH4VEC4E*)((uint8*)*(struct $N4MATH4VEC4E**)((uint8*)A$1 + 8ll) + (I$3 << (5ll & 63ll))) );
			}
			label$5331:;
			I$3 = I$3 + 1ll;
			label$5330:;
			if( I$3 <= TMP$1825$3 ) goto label$5333;
			label$5332:;
		}
	}
	label$5326:;
	label$5325:;
	label$5324:;
}

void _ZN4MATH7V4ARRAYD1Ev( struct $N4MATH7V4ARRAYE* THIS$1 )
{
	label$5334:;
	if( *(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC4E*)0ull ) goto label$5337;
	{
		if( *(struct $N4MATH4VEC4E**)((uint8*)THIS$1 + 8ll) == (struct $N4MATH4VEC4E*)0ull ) goto label$5338;
		free( *(void**)((uint8*)THIS$1 + 8ll) );
		label$5338:;
		label$5337:;
	}
	label$5335:;
}

FBSTRING* _ZNK4MATH7V4ARRAYcv8FBSTRINGEv( struct $N4MATH7V4ARRAYE* THIS$1 )
{
	FBSTRING TMP$1827$1;
	FBSTRING TMP$1828$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$5339:;
	FBSTRING* vr$2 = fb_LongintToStr( *(int64*)THIS$1 );
	__builtin_memset( &TMP$1827$1, 0, 24ll );
	FBSTRING* vr$5 = fb_StrConcat( &TMP$1827$1, (void*)"<math.v4array>{ length : ", 26ll, (void*)vr$2, -1ll );
	__builtin_memset( &TMP$1828$1, 0, 24ll );
	FBSTRING* vr$8 = fb_StrConcat( &TMP$1828$1, (void*)vr$5, -1ll, (void*)" }", 3ll );
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$8, -1ll, 0 );
	goto label$5340;
	label$5340:;
	FBSTRING* vr$11 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$11;
}

int32 main( int32 __FB_ARGC__$0, char** __FB_ARGV__$0 )
{
	double TMP$1836$0;
	double TMP$1837$0;
	double TMP$1838$0;
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
	TMP$1837$0 = 0x1.p+1;
	TMP$1836$0 = 0x1.8p+1;
	_ZN4MATH4VEC2C1ERKdS2_( &V$0, (double*)&TMP$1836$0, (double*)&TMP$1837$0 );
	FBSTRING* vr$8 = _ZNK4MATH4VEC2cv8FBSTRINGEv( (struct $N4MATH4VEC2E*)&V$0 );
	fb_PrintString( 0, (FBSTRING*)vr$8, 1 );
	TMP$1838$0 = 0x1.921FB54442D18p+0;
	_ZN4MATH4VEC26ROTATEERKd( &V$0, (double*)&TMP$1838$0 );
	FBSTRING* vr$12 = _ZNK4MATH4VEC2cv8FBSTRINGEv( (struct $N4MATH4VEC2E*)&V$0 );
	fb_PrintString( 0, (FBSTRING*)vr$12, 1 );
	fb_Sleep( -1 );
	label$1:;
	fb_End( 0 );
	return fb$result$0;
}

static void _ZN4MATH4MAT2D1Ev( struct $N4MATH4MAT2E* THIS$1 )
{
	label$2024:;
	label$2025:;
	_ZN4MATH10BASEMATRIXD1Ev( (struct $N4MATH10BASEMATRIXE*)THIS$1 );
}

static void _ZN4MATH4MAT3D1Ev( struct $N4MATH4MAT3E* THIS$1 )
{
	label$2150:;
	label$2151:;
	_ZN4MATH10BASEMATRIXD1Ev( (struct $N4MATH10BASEMATRIXE*)THIS$1 );
}

static void _ZN4MATH4MAT4D1Ev( struct $N4MATH4MAT4E* THIS$1 )
{
	label$2341:;
	label$2342:;
	_ZN4MATH10BASEMATRIXD1Ev( (struct $N4MATH10BASEMATRIXE*)THIS$1 );
}
