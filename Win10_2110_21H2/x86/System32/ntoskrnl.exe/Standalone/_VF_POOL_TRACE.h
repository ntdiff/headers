typedef struct _VF_POOL_TRACE
{
  /* 0x0000 */ void* Address;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ struct _ETHREAD* Thread;
  /* 0x000c */ void* StackTrace[13];
} VF_POOL_TRACE, *PVF_POOL_TRACE; /* size: 0x0040 */

