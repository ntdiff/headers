typedef struct _HMAC_Info
{
  /* 0x0000 */ unsigned int HashAlgid;
  /* 0x0004 */ unsigned char* pbInnerString;
  /* 0x0008 */ unsigned long cbInnerString;
  /* 0x000c */ unsigned char* pbOuterString;
  /* 0x0010 */ unsigned long cbOuterString;
} HMAC_Info, *PHMAC_Info; /* size: 0x0014 */

