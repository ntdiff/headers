typedef struct _CRYPT_OID_FUNC_ENTRY
{
  /* 0x0000 */ const char* pszOID;
  /* 0x0004 */ void* pvFuncAddr;
} CRYPT_OID_FUNC_ENTRY, *PCRYPT_OID_FUNC_ENTRY; /* size: 0x0008 */

