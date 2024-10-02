typedef struct _FSCTL_SET_INTEGRITY_INFORMATION_BUFFER
{
  /* 0x0000 */ unsigned short ChecksumAlgorithm;
  /* 0x0002 */ unsigned short Reserved;
  /* 0x0004 */ unsigned long Flags;
} FSCTL_SET_INTEGRITY_INFORMATION_BUFFER, *PFSCTL_SET_INTEGRITY_INFORMATION_BUFFER; /* size: 0x0008 */

