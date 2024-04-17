typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef union __MIDL___MIDL_itf_wtypes_0000_0001_0001::__MIDL___MIDL_itf_wtypes_0000_0001_0005
{
  union
  {
    /* 0x0000 */ struct _GUID clsid;
    /* 0x0000 */ wchar_t* pFileExt;
    /* 0x0000 */ wchar_t* pMimeType;
    /* 0x0000 */ wchar_t* pProgId;
    /* 0x0000 */ wchar_t* pFileName;
    struct
    {
      /* 0x0000 */ wchar_t* pPackageName;
      /* 0x0004 */ struct _GUID PolicyId;
    } /* size: 0x0014 */ ByName;
    struct
    {
      /* 0x0000 */ struct _GUID ObjectId;
      /* 0x0010 */ struct _GUID PolicyId;
    } /* size: 0x0020 */ ByObjectId;
  }; /* size: 0x0020 */
} _MIDL___MIDL_itf_wtypes_0000_0001_0001::__MIDL___MIDL_itf_wtypes_0000_0001_0005, *P_MIDL___MIDL_itf_wtypes_0000_0001_0001::__MIDL___MIDL_itf_wtypes_0000_0001_0005; /* size: 0x0020 */

typedef struct __MIDL___MIDL_itf_wtypes_0000_0001_0001
{
  /* 0x0000 */ unsigned long tyspec;
  /* 0x0004 */ union __MIDL___MIDL_itf_wtypes_0000_0001_0001::__MIDL___MIDL_itf_wtypes_0000_0001_0005 tagged_union;
} _MIDL___MIDL_itf_wtypes_0000_0001_0001, *P_MIDL___MIDL_itf_wtypes_0000_0001_0001; /* size: 0x0024 */

