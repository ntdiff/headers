typedef struct _HMAC_Info
{
  /* 0x0000 */ unsigned int HashAlgid;
  /* 0x0008 */ unsigned char* pbInnerString;
  /* 0x0010 */ unsigned long cbInnerString;
  /* 0x0018 */ unsigned char* pbOuterString;
  /* 0x0020 */ unsigned long cbOuterString;
  /* 0x0024 */ long __PADDING__[1];
} HMAC_Info, *PHMAC_Info; /* size: 0x0028 */

