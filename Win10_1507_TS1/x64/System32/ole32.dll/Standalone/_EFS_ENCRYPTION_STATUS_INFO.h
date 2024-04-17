typedef struct _EFS_ENCRYPTION_STATUS_INFO
{
  /* 0x0000 */ int bHasCurrentKey;
  /* 0x0004 */ unsigned long dwEncryptionError;
} EFS_ENCRYPTION_STATUS_INFO, *PEFS_ENCRYPTION_STATUS_INFO; /* size: 0x0008 */

