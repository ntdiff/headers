typedef struct _SILOOBJECT_BASIC_INFORMATION
{
  /* 0x0000 */ void* SiloIdNumber;
  /* 0x0004 */ void* SiloParentIdNumber;
  /* 0x0008 */ unsigned long NumberOfProcesses;
  /* 0x000c */ unsigned long NumberOfChildSilos;
  /* 0x0010 */ unsigned char IsInServerSilo;
  /* 0x0011 */ char __PADDING__[3];
} SILOOBJECT_BASIC_INFORMATION, *PSILOOBJECT_BASIC_INFORMATION; /* size: 0x0014 */

