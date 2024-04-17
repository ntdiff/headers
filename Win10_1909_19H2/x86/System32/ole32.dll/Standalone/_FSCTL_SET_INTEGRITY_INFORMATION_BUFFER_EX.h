typedef struct _FSCTL_SET_INTEGRITY_INFORMATION_BUFFER_EX
{
  /* 0x0000 */ unsigned char EnableIntegrity;
  /* 0x0001 */ unsigned char KeepIntegrityStateUnchanged;
  /* 0x0002 */ unsigned short Reserved;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned char Version;
  /* 0x0009 */ unsigned char Reserved2[7];
} FSCTL_SET_INTEGRITY_INFORMATION_BUFFER_EX, *PFSCTL_SET_INTEGRITY_INFORMATION_BUFFER_EX; /* size: 0x0010 */

