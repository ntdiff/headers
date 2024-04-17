typedef struct _CRYPT_PROVUI_FUNCS
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0008 */ struct _CRYPT_PROVUI_DATA* psUIData;
  /* 0x0010 */ void* pfnOnMoreInfoClick /* function */;
  /* 0x0018 */ void* pfnOnMoreInfoClickDefault /* function */;
  /* 0x0020 */ void* pfnOnAdvancedClick /* function */;
  /* 0x0028 */ void* pfnOnAdvancedClickDefault /* function */;
} CRYPT_PROVUI_FUNCS, *PCRYPT_PROVUI_FUNCS; /* size: 0x0030 */

