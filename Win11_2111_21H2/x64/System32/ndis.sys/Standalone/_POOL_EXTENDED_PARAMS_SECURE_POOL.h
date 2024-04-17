typedef struct _POOL_EXTENDED_PARAMS_SECURE_POOL
{
  /* 0x0000 */ void* SecurePoolHandle;
  /* 0x0008 */ void* Buffer;
  /* 0x0010 */ unsigned __int64 Cookie;
  /* 0x0018 */ unsigned long SecurePoolFlags;
  /* 0x001c */ long __PADDING__[1];
} POOL_EXTENDED_PARAMS_SECURE_POOL, *PPOOL_EXTENDED_PARAMS_SECURE_POOL; /* size: 0x0020 */

