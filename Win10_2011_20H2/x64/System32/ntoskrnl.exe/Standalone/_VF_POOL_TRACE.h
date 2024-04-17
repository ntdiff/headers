typedef struct _VF_POOL_TRACE
{
  /* 0x0000 */ void* Address;
  /* 0x0008 */ unsigned __int64 Size;
  /* 0x0010 */ struct _ETHREAD* Thread;
  /* 0x0018 */ void* StackTrace[13];
} VF_POOL_TRACE, *PVF_POOL_TRACE; /* size: 0x0080 */

