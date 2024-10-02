typedef struct _FSCTL_OFFLOAD_READ_INPUT
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long TokenTimeToLive;
  /* 0x000c */ unsigned long Reserved;
  /* 0x0010 */ unsigned __int64 FileOffset;
  /* 0x0018 */ unsigned __int64 CopyLength;
} FSCTL_OFFLOAD_READ_INPUT, *PFSCTL_OFFLOAD_READ_INPUT; /* size: 0x0020 */

