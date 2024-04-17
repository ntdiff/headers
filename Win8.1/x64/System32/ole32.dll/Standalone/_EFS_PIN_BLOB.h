typedef struct _EFS_PIN_BLOB
{
  /* 0x0000 */ unsigned long cbPadding;
  /* 0x0004 */ unsigned long cbData;
  /* 0x0008 */ unsigned char* pbData;
} EFS_PIN_BLOB, *PEFS_PIN_BLOB; /* size: 0x0010 */

