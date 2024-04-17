typedef struct _FSCTL_OFFLOAD_WRITE_INPUT
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned __int64 FileOffset;
  /* 0x0010 */ unsigned __int64 CopyLength;
  /* 0x0018 */ unsigned __int64 TransferOffset;
  /* 0x0020 */ unsigned char Token[512];
} FSCTL_OFFLOAD_WRITE_INPUT, *PFSCTL_OFFLOAD_WRITE_INPUT; /* size: 0x0220 */

