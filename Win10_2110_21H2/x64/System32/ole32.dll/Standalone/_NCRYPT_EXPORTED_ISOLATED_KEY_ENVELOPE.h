typedef struct _NCRYPT_EXPORTED_ISOLATED_KEY_HEADER
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long KeyUsage;
  struct /* bitfield */
  {
    /* 0x0008 */ unsigned long PerBootKey : 1; /* bit position: 0 */
    /* 0x0008 */ unsigned long Reserved : 31; /* bit position: 1 */
  }; /* bitfield */
  /* 0x000c */ unsigned long cbAlgName;
  /* 0x0010 */ unsigned long cbNonce;
  /* 0x0014 */ unsigned long cbAuthTag;
  /* 0x0018 */ unsigned long cbWrappingKey;
  /* 0x001c */ unsigned long cbIsolatedKey;
} NCRYPT_EXPORTED_ISOLATED_KEY_HEADER, *PNCRYPT_EXPORTED_ISOLATED_KEY_HEADER; /* size: 0x0020 */

typedef struct _NCRYPT_EXPORTED_ISOLATED_KEY_ENVELOPE
{
  /* 0x0000 */ struct _NCRYPT_EXPORTED_ISOLATED_KEY_HEADER Header;
} NCRYPT_EXPORTED_ISOLATED_KEY_ENVELOPE, *PNCRYPT_EXPORTED_ISOLATED_KEY_ENVELOPE; /* size: 0x0020 */

