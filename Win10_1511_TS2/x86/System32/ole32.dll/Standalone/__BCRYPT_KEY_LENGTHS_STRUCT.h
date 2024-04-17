typedef struct __BCRYPT_KEY_LENGTHS_STRUCT
{
  /* 0x0000 */ unsigned long dwMinLength;
  /* 0x0004 */ unsigned long dwMaxLength;
  /* 0x0008 */ unsigned long dwIncrement;
} _BCRYPT_KEY_LENGTHS_STRUCT, *P_BCRYPT_KEY_LENGTHS_STRUCT; /* size: 0x000c */

