struct tagCOMVERSION
{
  /* 0x0000 */ unsigned short MajorVersion;
  /* 0x0002 */ unsigned short MinorVersion;
}; /* size: 0x0004 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef enum __MIDL_ILocalObjectExporter_0006
{
  OR_OXID_CLIENT_DEPENDENCY_NONE = 0,
  OR_OXID_CLIENT_DEPENDENCY_UNIDIRECTIONAL = 1,
  OR_OXID_CLIENT_DEPENDENCY_BIDIRECTIONAL = 2,
} _MIDL_ILocalObjectExporter_0006, *P_MIDL_ILocalObjectExporter_0006;

typedef struct __MIDL_ILocalObjectExporter_0007
{
  /* 0x0000 */ unsigned long dwTid;
  /* 0x0004 */ unsigned long dwPid;
  /* 0x0008 */ unsigned long dwAuthnHint;
  /* 0x000c */ struct tagCOMVERSION version;
  /* 0x0010 */ struct _GUID ipidRemUnknown;
  /* 0x0020 */ unsigned long dwFlags;
  /* 0x0024 */ struct tagDUALSTRINGARRAY* psa;
  /* 0x0028 */ struct _GUID guidProcessIdentifier;
  /* 0x0038 */ unsigned __int64 processHostId;
  /* 0x0040 */ enum __MIDL_ILocalObjectExporter_0006 clientDependencyBehavior;
  /* 0x0044 */ long __PADDING__[1];
} _MIDL_ILocalObjectExporter_0007, *P_MIDL_ILocalObjectExporter_0007; /* size: 0x0048 */

