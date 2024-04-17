typedef struct _CRYPT_AES_128_KEY_STATE
{
  /* 0x0000 */ unsigned char Key[16];
  /* 0x0010 */ unsigned char IV[16];
  /* 0x0020 */ unsigned char EncryptionState[16][11];
  /* 0x00d0 */ unsigned char DecryptionState[16][11];
  /* 0x0180 */ unsigned char Feedback[16];
} CRYPT_AES_128_KEY_STATE, *PCRYPT_AES_128_KEY_STATE; /* size: 0x0190 */

