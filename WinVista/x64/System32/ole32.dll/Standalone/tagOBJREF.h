typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagSTDOBJREF
{
  /* 0x0000 */ unsigned long flags;
  /* 0x0004 */ unsigned long cPublicRefs;
  /* 0x0008 */ unsigned __int64 oxid;
  /* 0x0010 */ unsigned __int64 oid;
  /* 0x0018 */ struct _GUID ipid;
}; /* size: 0x0028 */

struct tagDUALSTRINGARRAY
{
  /* 0x0000 */ unsigned short wNumEntries;
  /* 0x0002 */ unsigned short wSecurityOffset;
  /* 0x0004 */ unsigned short aStringArray[1];
}; /* size: 0x0006 */

struct tagOBJREF
{
  /* 0x0000 */ unsigned long signature;
  /* 0x0004 */ unsigned long flags;
  /* 0x0008 */ struct _GUID iid;
  union
  {
    union
    {
      struct
      {
        /* 0x0018 */ struct tagSTDOBJREF std;
        /* 0x0040 */ struct tagDUALSTRINGARRAY saResAddr;
        /* 0x0046 */ char __PADDING__[2];
      } /* size: 0x0030 */ u_standard;
      struct
      {
        /* 0x0018 */ struct tagSTDOBJREF std;
        /* 0x0040 */ struct _GUID clsid;
        /* 0x0050 */ struct tagDUALSTRINGARRAY saResAddr;
        /* 0x0056 */ char __PADDING__[2];
      } /* size: 0x0040 */ u_handler;
      struct
      {
        /* 0x0018 */ struct _GUID clsid;
        /* 0x0028 */ unsigned long cbExtension;
        /* 0x002c */ unsigned long size;
        /* 0x0030 */ unsigned char* pData;
      } /* size: 0x0020 */ u_custom;
      struct
      {
        /* 0x0018 */ struct tagSTDOBJREF std;
        /* 0x0040 */ struct tagOBJREFDATA* pORData;
        /* 0x0048 */ struct tagDUALSTRINGARRAY saResAddr;
        /* 0x004e */ char __PADDING__[2];
      } /* size: 0x0038 */ u_extended;
    }; /* size: 0x0040 */
  } /* size: 0x0040 */ u_objref;
}; /* size: 0x0058 */

