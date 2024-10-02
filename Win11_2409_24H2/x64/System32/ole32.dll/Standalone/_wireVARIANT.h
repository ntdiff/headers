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

typedef struct _wireVARIANT
{
  /* 0x0000 */ unsigned long clSize;
  /* 0x0004 */ unsigned long rpcReserved;
  /* 0x0008 */ unsigned short vt;
  /* 0x000a */ unsigned short wReserved1;
  /* 0x000c */ unsigned short wReserved2;
  /* 0x000e */ unsigned short wReserved3;
  union
  {
    /* 0x0010 */ __int64 llVal;
    /* 0x0010 */ long lVal;
    /* 0x0010 */ unsigned char bVal;
    /* 0x0010 */ short iVal;
    /* 0x0010 */ float fltVal;
    /* 0x0010 */ double dblVal;
    /* 0x0010 */ short boolVal;
    /* 0x0010 */ long scode;
    /* 0x0010 */ union tagCY cyVal;
    /* 0x0010 */ double date;
    /* 0x0010 */ struct _FLAGGED_WORD_BLOB* bstrVal;
    /* 0x0010 */ struct IUnknown* punkVal;
    /* 0x0010 */ struct IDispatch* pdispVal;
    /* 0x0010 */ struct _wireSAFEARRAY** parray;
    /* 0x0010 */ struct _wireBRECORD* brecVal;
    /* 0x0010 */ unsigned char* pbVal;
    /* 0x0010 */ short* piVal;
    /* 0x0010 */ long* plVal;
    /* 0x0010 */ __int64* pllVal;
    /* 0x0010 */ float* pfltVal;
    /* 0x0010 */ double* pdblVal;
    /* 0x0010 */ short* pboolVal;
    /* 0x0010 */ long* pscode;
    /* 0x0010 */ union tagCY* pcyVal;
    /* 0x0010 */ double* pdate;
    /* 0x0010 */ struct _FLAGGED_WORD_BLOB** pbstrVal;
    /* 0x0010 */ struct IUnknown** ppunkVal;
    /* 0x0010 */ struct IDispatch** ppdispVal;
    /* 0x0010 */ struct _wireSAFEARRAY*** pparray;
    /* 0x0010 */ struct _wireVARIANT** pvarVal;
    /* 0x0010 */ char cVal;
    /* 0x0010 */ unsigned short uiVal;
    /* 0x0010 */ unsigned long ulVal;
    /* 0x0010 */ unsigned __int64 ullVal;
    /* 0x0010 */ int intVal;
    /* 0x0010 */ unsigned int uintVal;
    /* 0x0010 */ struct tagDEC decVal;
    /* 0x0010 */ struct tagDEC* pdecVal;
    /* 0x0010 */ char* pcVal;
    /* 0x0010 */ unsigned short* puiVal;
    /* 0x0010 */ unsigned long* pulVal;
    /* 0x0010 */ unsigned __int64* pullVal;
    /* 0x0010 */ int* pintVal;
    struct
    {
      /* 0x0010 */ unsigned int* puintVal;
      /* 0x0018 */ long __PADDING__[2];
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
} wireVARIANT, *PwireVARIANT; /* size: 0x0020 */

