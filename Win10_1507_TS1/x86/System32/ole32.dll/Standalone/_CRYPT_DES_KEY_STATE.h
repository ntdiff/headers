typedef struct _CRYPT_DES_KEY_STATE
{
  /* 0x0000 */ unsigned char Key[8];
  /* 0x0008 */ unsigned char IV[8];
  /* 0x0010 */ unsigned char Feedback[8];
} CRYPT_DES_KEY_STATE, *PCRYPT_DES_KEY_STATE; /* size: 0x0018 */

