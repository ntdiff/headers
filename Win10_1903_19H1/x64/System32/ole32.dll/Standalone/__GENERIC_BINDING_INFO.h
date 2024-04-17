typedef struct __GENERIC_BINDING_INFO
{
  /* 0x0000 */ void* pObj;
  /* 0x0008 */ unsigned int Size;
  /* 0x0010 */ void* pfnBind /* function */;
  /* 0x0018 */ void* pfnUnbind /* function */;
} _GENERIC_BINDING_INFO, *P_GENERIC_BINDING_INFO; /* size: 0x0020 */

