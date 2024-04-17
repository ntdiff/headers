typedef struct _CRYPT_RC4_KEY_STATE
{
  /* 0x0000 */ unsigned char Key[16];
  /* 0x0010 */ unsigned char SBox[256];
  /* 0x0110 */ unsigned char i;
  /* 0x0111 */ unsigned char j;
} CRYPT_RC4_KEY_STATE, *PCRYPT_RC4_KEY_STATE; /* size: 0x0112 */

