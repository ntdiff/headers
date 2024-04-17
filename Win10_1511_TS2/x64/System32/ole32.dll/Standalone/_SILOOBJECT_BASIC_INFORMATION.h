typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _SILOOBJECT_BASIC_INFORMATION
{
  /* 0x0000 */ struct _GUID SiloIdNumber;
  /* 0x0010 */ struct _GUID SiloParentIdNumber;
  /* 0x0020 */ unsigned long NumberOfProcesses;
  /* 0x0024 */ unsigned long NumberOfChildSilos;
  /* 0x0028 */ unsigned char IsInServerSilo;
  /* 0x0029 */ char __PADDING__[3];
} SILOOBJECT_BASIC_INFORMATION, *PSILOOBJECT_BASIC_INFORMATION; /* size: 0x002c */

