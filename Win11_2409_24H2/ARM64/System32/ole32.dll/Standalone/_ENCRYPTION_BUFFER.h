typedef struct _ENCRYPTION_BUFFER
{
  /* 0x0000 */ unsigned long EncryptionOperation;
  /* 0x0004 */ unsigned char Private[1];
  /* 0x0005 */ char __PADDING__[3];
} ENCRYPTION_BUFFER, *PENCRYPTION_BUFFER; /* size: 0x0008 */

