typedef struct _VF_KE_CRITICAL_REGION_TRACE
{
  /* 0x0000 */ struct _ETHREAD* Thread;
  /* 0x0004 */ void* StackTrace[7];
} VF_KE_CRITICAL_REGION_TRACE, *PVF_KE_CRITICAL_REGION_TRACE; /* size: 0x0020 */

