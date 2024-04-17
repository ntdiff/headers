typedef struct _CRYPT_BIT_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0008 */ unsigned char* pbData;
  /* 0x0010 */ unsigned long cUnusedBits;
  /* 0x0014 */ long __PADDING__[1];
} CRYPT_BIT_BLOB, *PCRYPT_BIT_BLOB; /* size: 0x0018 */

typedef struct _SPC_PE_IMAGE_DATA
{
  /* 0x0000 */ struct _CRYPT_BIT_BLOB Flags;
  /* 0x0018 */ struct SPC_LINK_* pFile;
} SPC_PE_IMAGE_DATA, *PSPC_PE_IMAGE_DATA; /* size: 0x0020 */

