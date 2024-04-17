typedef struct _CRYPT_ENCODE_PARA
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ void* pfnAlloc /* function */;
  /* 0x0010 */ void* pfnFree /* function */;
} CRYPT_ENCODE_PARA, *PCRYPT_ENCODE_PARA; /* size: 0x0018 */

