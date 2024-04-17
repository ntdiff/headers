typedef struct _SILOOBJECT_BASIC_INFORMATION
{
  /* 0x0000 */ unsigned long SiloId;
  /* 0x0004 */ unsigned long SiloParentId;
  /* 0x0008 */ unsigned long NumberOfProcesses;
  /* 0x000c */ unsigned char IsInServerSilo;
  /* 0x000d */ unsigned char Reserved[3];
} SILOOBJECT_BASIC_INFORMATION, *PSILOOBJECT_BASIC_INFORMATION; /* size: 0x0010 */

