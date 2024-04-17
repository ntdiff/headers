typedef struct _ROOT_INFO_LUID
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ long HighPart;
} ROOT_INFO_LUID, *PROOT_INFO_LUID; /* size: 0x0008 */

typedef struct _CRYPT_SMART_CARD_ROOT_INFO
{
  /* 0x0000 */ unsigned char rgbCardID[16];
  /* 0x0010 */ struct _ROOT_INFO_LUID luid;
} CRYPT_SMART_CARD_ROOT_INFO, *PCRYPT_SMART_CARD_ROOT_INFO; /* size: 0x0018 */

