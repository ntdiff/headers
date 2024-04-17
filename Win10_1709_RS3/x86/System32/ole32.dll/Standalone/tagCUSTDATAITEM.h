typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

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

struct tagVARIANT
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
        /* 0x0008 */ __int64 llVal;
        /* 0x0008 */ long lVal;
        /* 0x0008 */ unsigned char bVal;
        /* 0x0008 */ short iVal;
        /* 0x0008 */ float fltVal;
        /* 0x0008 */ double dblVal;
        /* 0x0008 */ short boolVal;
        /* 0x0008 */ long scode;
        /* 0x0008 */ union tagCY cyVal;
        /* 0x0008 */ double date;
        /* 0x0008 */ wchar_t* bstrVal;
        /* 0x0008 */ struct IUnknown* punkVal;
        /* 0x0008 */ struct IDispatch* pdispVal;
        /* 0x0008 */ struct tagSAFEARRAY* parray;
        /* 0x0008 */ unsigned char* pbVal;
        /* 0x0008 */ short* piVal;
        /* 0x0008 */ long* plVal;
        /* 0x0008 */ __int64* pllVal;
        /* 0x0008 */ float* pfltVal;
        /* 0x0008 */ double* pdblVal;
        /* 0x0008 */ short* pboolVal;
        /* 0x0008 */ long* pscode;
        /* 0x0008 */ union tagCY* pcyVal;
        /* 0x0008 */ double* pdate;
        /* 0x0008 */ wchar_t** pbstrVal;
        /* 0x0008 */ struct IUnknown** ppunkVal;
        /* 0x0008 */ struct IDispatch** ppdispVal;
        /* 0x0008 */ struct tagSAFEARRAY** pparray;
        /* 0x0008 */ struct tagVARIANT* pvarVal;
        /* 0x0008 */ void* byref;
        /* 0x0008 */ char cVal;
        /* 0x0008 */ unsigned short uiVal;
        /* 0x0008 */ unsigned long ulVal;
        /* 0x0008 */ unsigned __int64 ullVal;
        /* 0x0008 */ int intVal;
        /* 0x0008 */ unsigned int uintVal;
        /* 0x0008 */ struct tagDEC* pdecVal;
        /* 0x0008 */ char* pcVal;
        /* 0x0008 */ unsigned short* puiVal;
        /* 0x0008 */ unsigned long* pulVal;
        /* 0x0008 */ unsigned __int64* pullVal;
        /* 0x0008 */ int* pintVal;
        /* 0x0008 */ unsigned int* puintVal;
        struct
        {
          /* 0x0008 */ void* pvRecord;
          /* 0x000c */ struct IRecordInfo* pRecInfo;
        }; /* size: 0x0008 */
      }; /* size: 0x0008 */
    }; /* size: 0x0010 */
    /* 0x0000 */ struct tagDEC decVal;
  }; /* size: 0x0010 */
}; /* size: 0x0010 */

struct tagCUSTDATAITEM
{
  /* 0x0000 */ struct _GUID guid;
  /* 0x0010 */ struct tagVARIANT varValue;
}; /* size: 0x0020 */

