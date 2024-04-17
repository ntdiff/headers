typedef struct _SYSTEM_ROOT_SILO_INFORMATION
{
  /* 0x0000 */ unsigned long NumberOfSilos;
  /* 0x0008 */ void* SiloIdList[1];
} SYSTEM_ROOT_SILO_INFORMATION, *PSYSTEM_ROOT_SILO_INFORMATION; /* size: 0x0010 */

