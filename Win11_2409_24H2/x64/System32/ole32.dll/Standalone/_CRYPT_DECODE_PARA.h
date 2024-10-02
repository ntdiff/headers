typedef struct _CRYPT_DECODE_PARA
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ void* pfnAlloc /* function */;
  /* 0x0010 */ void* pfnFree /* function */;
} CRYPT_DECODE_PARA, *PCRYPT_DECODE_PARA; /* size: 0x0018 */

