typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef union _ULARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} ULARGE_INTEGER, *PULARGE_INTEGER; /* size: 0x0008 */

union tagCY
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long Lo;
      /* 0x0004 */ long Hi;
    }; /* size: 0x0008 */
    /* 0x0000 */ __int64 int64;
  }; /* size: 0x0008 */
}; /* size: 0x0008 */

typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

struct tagBSTRBLOB
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ unsigned char* pData;
}; /* size: 0x0010 */

struct tagBLOB
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ unsigned char* pBlobData;
}; /* size: 0x0010 */

struct tagCAC
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0008 */ char* pElems;
}; /* size: 0x0010 */

struct tagCAUB
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0008 */ unsigned char* pElems;
}; /* size: 0x0010 */

struct tagCAI
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0008 */ short* pElems;
}; /* size: 0x0010 */

struct tagCAUI
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0008 */ wchar_t* pElems;
}; /* size: 0x0010 */

struct tagCAL
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0008 */ long* pElems;
}; /* size: 0x0010 */

struct tagCAUL
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0008 */ unsigned long* pElems;
}; /* size: 0x0010 */

struct tagCAH
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0008 */ union _LARGE_INTEGER* pElems;
}; /* size: 0x0010 */

struct tagCAUH
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0008 */ union _ULARGE_INTEGER* pElems;
}; /* size: 0x0010 */

struct tagCAFLT
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0008 */ float* pElems;
}; /* size: 0x0010 */

struct tagCADBL
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0008 */ double* pElems;
}; /* size: 0x0010 */

struct tagCABOOL
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0008 */ short* pElems;
}; /* size: 0x0010 */

struct tagCASCODE
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0008 */ long* pElems;
}; /* size: 0x0010 */

struct tagCACY
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0008 */ union tagCY* pElems;
}; /* size: 0x0010 */

struct tagCADATE
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0008 */ double* pElems;
}; /* size: 0x0010 */

struct tagCAFILETIME
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0008 */ struct _FILETIME* pElems;
}; /* size: 0x0010 */

struct tagCACLSID
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0008 */ struct _GUID* pElems;
}; /* size: 0x0010 */

struct tagCACLIPDATA
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0008 */ struct tagCLIPDATA* pElems;
}; /* size: 0x0010 */

struct tagCABSTR
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0008 */ wchar_t** pElems;
}; /* size: 0x0010 */

struct tagCABSTRBLOB
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0008 */ struct tagBSTRBLOB* pElems;
}; /* size: 0x0010 */

struct tagCALPSTR
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0008 */ char** pElems;
}; /* size: 0x0010 */

struct tagCALPWSTR
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0008 */ wchar_t** pElems;
}; /* size: 0x0010 */

struct tagCAPROPVARIANT
{
  /* 0x0000 */ unsigned long cElems;
  /* 0x0008 */ struct tagPROPVARIANT* pElems;
}; /* size: 0x0010 */

struct tagDEC
{
  /* 0x0000 */ unsigned short wReserved;
  union
  {
    struct
    {
      /* 0x0002 */ unsigned char scale;
      /* 0x0003 */ unsigned char sign;
    }; /* size: 0x0002 */
    /* 0x0002 */ unsigned short signscale;
  }; /* size: 0x0002 */
  /* 0x0004 */ unsigned long Hi32;
  union
  {
    struct
    {
      /* 0x0008 */ unsigned long Lo32;
      /* 0x000c */ unsigned long Mid32;
    }; /* size: 0x0008 */
    /* 0x0008 */ unsigned __int64 Lo64;
  }; /* size: 0x0008 */
}; /* size: 0x0010 */

struct tagPROPVARIANT
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short vt;
      /* 0x0002 */ unsigned short wReserved1;
      /* 0x0004 */ unsigned short wReserved2;
      /* 0x0006 */ unsigned short wReserved3;
      union
      {
        /* 0x0008 */ char cVal;
        /* 0x0008 */ unsigned char bVal;
        /* 0x0008 */ short iVal;
        /* 0x0008 */ unsigned short uiVal;
        /* 0x0008 */ long lVal;
        /* 0x0008 */ unsigned long ulVal;
        /* 0x0008 */ int intVal;
        /* 0x0008 */ unsigned int uintVal;
        /* 0x0008 */ union _LARGE_INTEGER hVal;
        /* 0x0008 */ union _ULARGE_INTEGER uhVal;
        /* 0x0008 */ float fltVal;
        /* 0x0008 */ double dblVal;
        /* 0x0008 */ short boolVal;
        /* 0x0008 */ long scode;
        /* 0x0008 */ union tagCY cyVal;
        /* 0x0008 */ double date;
        /* 0x0008 */ struct _FILETIME filetime;
        /* 0x0008 */ struct _GUID* puuid;
        /* 0x0008 */ struct tagCLIPDATA* pclipdata;
        /* 0x0008 */ wchar_t* bstrVal;
        /* 0x0008 */ struct tagBSTRBLOB bstrblobVal;
        /* 0x0008 */ struct tagBLOB blob;
        /* 0x0008 */ char* pszVal;
        /* 0x0008 */ wchar_t* pwszVal;
        /* 0x0008 */ struct IUnknown* punkVal;
        /* 0x0008 */ struct IDispatch* pdispVal;
        /* 0x0008 */ struct IStream* pStream;
        /* 0x0008 */ struct IStorage* pStorage;
        /* 0x0008 */ struct tagVersionedStream* pVersionedStream;
        /* 0x0008 */ struct tagSAFEARRAY* parray;
        /* 0x0008 */ struct tagCAC cac;
        /* 0x0008 */ struct tagCAUB caub;
        /* 0x0008 */ struct tagCAI cai;
        /* 0x0008 */ struct tagCAUI caui;
        /* 0x0008 */ struct tagCAL cal;
        /* 0x0008 */ struct tagCAUL caul;
        /* 0x0008 */ struct tagCAH cah;
        /* 0x0008 */ struct tagCAUH cauh;
        /* 0x0008 */ struct tagCAFLT caflt;
        /* 0x0008 */ struct tagCADBL cadbl;
        /* 0x0008 */ struct tagCABOOL cabool;
        /* 0x0008 */ struct tagCASCODE cascode;
        /* 0x0008 */ struct tagCACY cacy;
        /* 0x0008 */ struct tagCADATE cadate;
        /* 0x0008 */ struct tagCAFILETIME cafiletime;
        /* 0x0008 */ struct tagCACLSID cauuid;
        /* 0x0008 */ struct tagCACLIPDATA caclipdata;
        /* 0x0008 */ struct tagCABSTR cabstr;
        /* 0x0008 */ struct tagCABSTRBLOB cabstrblob;
        /* 0x0008 */ struct tagCALPSTR calpstr;
        /* 0x0008 */ struct tagCALPWSTR calpwstr;
        /* 0x0008 */ struct tagCAPROPVARIANT capropvar;
        /* 0x0008 */ char* pcVal;
        /* 0x0008 */ unsigned char* pbVal;
        /* 0x0008 */ short* piVal;
        /* 0x0008 */ wchar_t* puiVal;
        /* 0x0008 */ long* plVal;
        /* 0x0008 */ unsigned long* pulVal;
        /* 0x0008 */ int* pintVal;
        /* 0x0008 */ unsigned int* puintVal;
        /* 0x0008 */ float* pfltVal;
        /* 0x0008 */ double* pdblVal;
        /* 0x0008 */ short* pboolVal;
        /* 0x0008 */ struct tagDEC* pdecVal;
        /* 0x0008 */ long* pscode;
        /* 0x0008 */ union tagCY* pcyVal;
        /* 0x0008 */ double* pdate;
        /* 0x0008 */ wchar_t** pbstrVal;
        /* 0x0008 */ struct IUnknown** ppunkVal;
        /* 0x0008 */ struct IDispatch** ppdispVal;
        /* 0x0008 */ struct tagSAFEARRAY** pparray;
        /* 0x0008 */ struct tagPROPVARIANT* pvarVal;
      }; /* size: 0x0010 */
    }; /* size: 0x0018 */
    struct
    {
      /* 0x0000 */ struct tagDEC decVal;
      /* 0x0010 */ long __PADDING__[2];
    }; /* size: 0x0018 */
  }; /* size: 0x0018 */
}; /* size: 0x0018 */

