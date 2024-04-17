enum ECC_CURVE_TYPE_ENUM
{
  BCRYPT_ECC_PRIME_SHORT_WEIERSTRASS_CURVE = 1,
  BCRYPT_ECC_PRIME_TWISTED_EDWARDS_CURVE = 2,
  BCRYPT_ECC_PRIME_MONTGOMERY_CURVE = 3,
};

enum ECC_CURVE_ALG_ID_ENUM
{
  BCRYPT_NO_CURVE_GENERATION_ALG_ID = 0,
};

typedef struct _BCRYPT_ECCFULLKEY_BLOB
{
  /* 0x0000 */ unsigned long dwMagic;
  /* 0x0004 */ unsigned long dwVersion;
  /* 0x0008 */ enum ECC_CURVE_TYPE_ENUM dwCurveType;
  /* 0x000c */ enum ECC_CURVE_ALG_ID_ENUM dwCurveGenerationAlgId;
  /* 0x0010 */ unsigned long cbFieldLength;
  /* 0x0014 */ unsigned long cbSubgroupOrder;
  /* 0x0018 */ unsigned long cbCofactor;
  /* 0x001c */ unsigned long cbSeed;
} BCRYPT_ECCFULLKEY_BLOB, *PBCRYPT_ECCFULLKEY_BLOB; /* size: 0x0020 */

