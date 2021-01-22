typedef struct _POOL_EXTENDED_PARAMS_SECURE_POOL
{
  /* 0x0000 */ void* SecurePoolHandle;
  /* 0x0004 */ void* Buffer;
  /* 0x0008 */ unsigned long Cookie;
  /* 0x000c */ unsigned long SecurePoolFlags;
} POOL_EXTENDED_PARAMS_SECURE_POOL, *PPOOL_EXTENDED_PARAMS_SECURE_POOL; /* size: 0x0010 */

