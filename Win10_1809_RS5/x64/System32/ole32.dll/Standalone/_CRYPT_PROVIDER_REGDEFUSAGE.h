typedef struct _CRYPT_PROVIDER_REGDEFUSAGE
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0008 */ struct _GUID* pgActionID;
  /* 0x0010 */ wchar_t* pwszDllName;
  /* 0x0018 */ char* pwszLoadCallbackDataFunctionName;
  /* 0x0020 */ char* pwszFreeCallbackDataFunctionName;
} CRYPT_PROVIDER_REGDEFUSAGE, *PCRYPT_PROVIDER_REGDEFUSAGE; /* size: 0x0028 */

