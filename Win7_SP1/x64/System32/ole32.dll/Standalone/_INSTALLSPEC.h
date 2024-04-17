typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef union _INSTALLSPEC
{
  union
  {
    struct
    {
      /* 0x0000 */ wchar_t* Name;
      /* 0x0008 */ struct _GUID GPOId;
    } /* size: 0x0018 */ AppName;
    /* 0x0000 */ wchar_t* FileExt;
    /* 0x0000 */ wchar_t* ProgId;
    struct
    {
      /* 0x0000 */ struct _GUID Clsid;
      /* 0x0010 */ unsigned long ClsCtx;
    } /* size: 0x0014 */ COMClass;
  }; /* size: 0x0018 */
} INSTALLSPEC, *PINSTALLSPEC; /* size: 0x0018 */

