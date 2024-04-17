enum BCRYPT_HASH_OPERATION_TYPE
{
  BCRYPT_HASH_OPERATION_HASH_DATA = 1,
  BCRYPT_HASH_OPERATION_FINISH_HASH = 2,
};

typedef struct _BCRYPT_MULTI_HASH_OPERATION
{
  /* 0x0000 */ unsigned long iHash;
  /* 0x0004 */ enum BCRYPT_HASH_OPERATION_TYPE hashOperation;
  /* 0x0008 */ unsigned char* pbBuffer;
  /* 0x000c */ unsigned long cbBuffer;
} BCRYPT_MULTI_HASH_OPERATION, *PBCRYPT_MULTI_HASH_OPERATION; /* size: 0x0010 */

