typedef struct _FSCTL_GET_INTEGRITY_INFORMATION_BUFFER
{
  /* 0x0000 */ unsigned short ChecksumAlgorithm;
  /* 0x0002 */ unsigned short Reserved;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long ChecksumChunkSizeInBytes;
  /* 0x000c */ unsigned long ClusterSizeInBytes;
} FSCTL_GET_INTEGRITY_INFORMATION_BUFFER, *PFSCTL_GET_INTEGRITY_INFORMATION_BUFFER; /* size: 0x0010 */

