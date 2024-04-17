typedef struct _CRYPT_TRUST_REG_ENTRY
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0008 */ wchar_t* pwszDLLName;
  /* 0x0010 */ wchar_t* pwszFunctionName;
} CRYPT_TRUST_REG_ENTRY, *PCRYPT_TRUST_REG_ENTRY; /* size: 0x0018 */

