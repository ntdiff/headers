typedef struct _ARM_LOADER_BLOCK
{
  /* 0x0000 */ unsigned __int64 VirtualBias;
  /* 0x0008 */ void* KdCpuBuffer;
} ARM_LOADER_BLOCK, *PARM_LOADER_BLOCK; /* size: 0x0010 */

