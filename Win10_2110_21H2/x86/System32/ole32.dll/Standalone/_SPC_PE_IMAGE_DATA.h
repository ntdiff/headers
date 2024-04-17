typedef struct _CRYPT_BIT_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0004 */ unsigned char* pbData;
  /* 0x0008 */ unsigned long cUnusedBits;
} CRYPT_BIT_BLOB, *PCRYPT_BIT_BLOB; /* size: 0x000c */

typedef struct _SPC_PE_IMAGE_DATA
{
  /* 0x0000 */ struct _CRYPT_BIT_BLOB Flags;
  /* 0x000c */ struct SPC_LINK_* pFile;
} SPC_PE_IMAGE_DATA, *PSPC_PE_IMAGE_DATA; /* size: 0x0010 */

