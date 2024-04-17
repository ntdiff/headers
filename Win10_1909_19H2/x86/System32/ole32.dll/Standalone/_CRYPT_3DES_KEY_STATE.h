typedef struct _CRYPT_3DES_KEY_STATE
{
  /* 0x0000 */ unsigned char Key[24];
  /* 0x0018 */ unsigned char IV[8];
  /* 0x0020 */ unsigned char Feedback[8];
} CRYPT_3DES_KEY_STATE, *PCRYPT_3DES_KEY_STATE; /* size: 0x0028 */

