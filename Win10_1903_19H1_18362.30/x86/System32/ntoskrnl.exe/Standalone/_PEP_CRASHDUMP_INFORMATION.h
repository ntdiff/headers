typedef struct _PEP_CRASHDUMP_INFORMATION
{
  /* 0x0000 */ struct PEPHANDLE__* DeviceHandle;
  /* 0x0004 */ void* DeviceContext;
} PEP_CRASHDUMP_INFORMATION, *PPEP_CRASHDUMP_INFORMATION; /* size: 0x0008 */

