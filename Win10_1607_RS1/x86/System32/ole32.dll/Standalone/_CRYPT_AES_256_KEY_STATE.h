typedef struct _CRYPT_AES_256_KEY_STATE
{
  /* 0x0000 */ unsigned char Key[32];
  /* 0x0020 */ unsigned char IV[16];
  /* 0x0030 */ unsigned char EncryptionState[16][15];
  /* 0x0120 */ unsigned char DecryptionState[16][15];
  /* 0x0210 */ unsigned char Feedback[16];
} CRYPT_AES_256_KEY_STATE, *PCRYPT_AES_256_KEY_STATE; /* size: 0x0220 */

