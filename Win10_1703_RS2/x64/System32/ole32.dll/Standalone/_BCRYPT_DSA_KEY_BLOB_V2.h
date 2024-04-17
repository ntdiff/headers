enum HASHALGORITHM_ENUM
{
  DSA_HASH_ALGORITHM_SHA1 = 0,
  DSA_HASH_ALGORITHM_SHA256 = 1,
  DSA_HASH_ALGORITHM_SHA512 = 2,
};

enum DSAFIPSVERSION_ENUM
{
  DSA_FIPS186_2 = 0,
  DSA_FIPS186_3 = 1,
};

typedef struct _BCRYPT_DSA_KEY_BLOB_V2
{
  /* 0x0000 */ unsigned long dwMagic;
  /* 0x0004 */ unsigned long cbKey;
  /* 0x0008 */ enum HASHALGORITHM_ENUM hashAlgorithm;
  /* 0x000c */ enum DSAFIPSVERSION_ENUM standardVersion;
  /* 0x0010 */ unsigned long cbSeedLength;
  /* 0x0014 */ unsigned long cbGroupSize;
  /* 0x0018 */ unsigned char Count[4];
} BCRYPT_DSA_KEY_BLOB_V2, *PBCRYPT_DSA_KEY_BLOB_V2; /* size: 0x001c */

