typedef struct _CRYPT_CONTEXTS
{
  /* 0x0000 */ unsigned long cContexts;
  /* 0x0008 */ wchar_t** rgpszContexts;
} CRYPT_CONTEXTS, *PCRYPT_CONTEXTS; /* size: 0x0010 */

