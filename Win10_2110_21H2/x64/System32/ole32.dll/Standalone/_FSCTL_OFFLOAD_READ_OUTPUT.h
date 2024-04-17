typedef struct _FSCTL_OFFLOAD_READ_OUTPUT
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned __int64 TransferLength;
  /* 0x0010 */ unsigned char Token[512];
} FSCTL_OFFLOAD_READ_OUTPUT, *PFSCTL_OFFLOAD_READ_OUTPUT; /* size: 0x0210 */

