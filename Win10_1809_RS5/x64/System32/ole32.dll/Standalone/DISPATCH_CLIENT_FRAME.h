struct FRAME_RemoteInvoke
{
  /* 0x0000 */ struct IDispatch* This;
  /* 0x0008 */ long dispIdMember;
  /* 0x000c */ char __pad1[4];
  /* 0x0010 */ struct _GUID* piid;
  /* 0x0018 */ unsigned long lcid;
  /* 0x001c */ char __pad3[4];
  /* 0x0020 */ unsigned long dwFlags;
  /* 0x0024 */ char __pad4[4];
  /* 0x0028 */ struct tagDISPPARAMS* pDispParams;
  /* 0x0030 */ struct tagVARIANT* pVarResult;
  /* 0x0038 */ struct tagEXCEPINFO* pExcepInfo;
  /* 0x0040 */ unsigned int* puArgErr;
  /* 0x0048 */ unsigned int cVarRef;
  /* 0x004c */ char __pad9[4];
  /* 0x0050 */ unsigned int* rgVarRefIdx;
  /* 0x0058 */ struct tagVARIANT* rgVarRef;
}; /* size: 0x0060 */

struct tagDISPPARAMS
{
  /* 0x0000 */ struct tagVARIANT* rgvarg;
  /* 0x0008 */ long* rgdispidNamedArgs;
  /* 0x0010 */ unsigned int cArgs;
  /* 0x0014 */ unsigned int cNamedArgs;
}; /* size: 0x0018 */

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
        /* 0x0008 */ wchar_t* puiVal;
        /* 0x0008 */ unsigned long* pulVal;
        /* 0x0008 */ unsigned __int64* pullVal;
        /* 0x0008 */ int* pintVal;
        /* 0x0008 */ unsigned int* puintVal;
        struct
        {
          /* 0x0008 */ void* pvRecord;
          /* 0x0010 */ struct IRecordInfo* pRecInfo;
        }; /* size: 0x0010 */
      }; /* size: 0x0010 */
    }; /* size: 0x0018 */
    struct
    {
      /* 0x0000 */ struct tagDEC decVal;
      /* 0x0010 */ long __PADDING__[2];
    }; /* size: 0x0018 */
  }; /* size: 0x0018 */
}; /* size: 0x0018 */

struct tagEXCEPINFO
{
  /* 0x0000 */ unsigned short wCode;
  /* 0x0002 */ unsigned short wReserved;
  /* 0x0008 */ wchar_t* bstrSource;
  /* 0x0010 */ wchar_t* bstrDescription;
  /* 0x0018 */ wchar_t* bstrHelpFile;
  /* 0x0020 */ unsigned long dwHelpContext;
  /* 0x0028 */ void* pvReserved;
  /* 0x0030 */ void* pfnDeferredFillIn /* function */;
  /* 0x0038 */ long scode;
  /* 0x003c */ long __PADDING__[1];
}; /* size: 0x0040 */

struct DISPATCH_CLIENT_FRAME
{
  /* 0x0058 */ int m_fDoneProxyPrecheck;
  /* 0x005c */ int m_fIsCopy;
  /* 0x0060 */ struct FRAME_RemoteInvoke m_remoteFrame;
  /* 0x00c0 */ struct tagDISPPARAMS m_dispParams;
  /* 0x00d8 */ struct tagVARIANT m_varResult;
  /* 0x00f0 */ struct tagEXCEPINFO m_excepInfo;
  /* 0x0130 */ unsigned int m_uArgErr;
  /* 0x0134 */ unsigned int m_aVarRefIdx[16];
  /* 0x0178 */ struct tagVARIANT m_aVarRef[16];
  /* 0x02f8 */ struct tagVARIANT m_aVarArg[16];
  /* 0x0478 */ unsigned char* m_pBuffer;
}; /* size: 0x0480 */

