typedef struct _CERT_CREATE_CONTEXT_PARA
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ void* pfnFree /* function */;
  /* 0x0010 */ void* pvFree;
  /* 0x0018 */ void* pfnSort /* function */;
  /* 0x0020 */ void* pvSort;
} CERT_CREATE_CONTEXT_PARA, *PCERT_CREATE_CONTEXT_PARA; /* size: 0x0028 */

