typedef struct _EFS_DECRYPTION_STATUS_INFO
{
  /* 0x0000 */ unsigned long dwDecryptionError;
  /* 0x0004 */ unsigned long dwHashOffset;
  /* 0x0008 */ unsigned long cbHash;
} EFS_DECRYPTION_STATUS_INFO, *PEFS_DECRYPTION_STATUS_INFO; /* size: 0x000c */

