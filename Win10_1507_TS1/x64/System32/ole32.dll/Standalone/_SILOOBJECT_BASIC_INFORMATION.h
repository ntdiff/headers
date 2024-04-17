typedef struct _SILOOBJECT_BASIC_INFORMATION
{
  /* 0x0000 */ void* SiloIdNumber;
  /* 0x0008 */ void* SiloParentIdNumber;
  /* 0x0010 */ unsigned long NumberOfProcesses;
  /* 0x0014 */ unsigned long NumberOfChildSilos;
  /* 0x0018 */ unsigned char IsInServerSilo;
  /* 0x0019 */ char __PADDING__[7];
} SILOOBJECT_BASIC_INFORMATION, *PSILOOBJECT_BASIC_INFORMATION; /* size: 0x0020 */

