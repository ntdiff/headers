typedef struct _TlgProvider_t
{
  /* 0x0000 */ unsigned int LevelPlus1;
  /* 0x0004 */ const unsigned short* ProviderMetadataPtr;
  /* 0x0008 */ unsigned __int64 KeywordAny;
  /* 0x0010 */ unsigned __int64 KeywordAll;
  /* 0x0018 */ unsigned __int64 RegHandle;
  /* 0x0020 */ void* EnableCallback /* function */;
  /* 0x0024 */ void* CallbackContext;
} TlgProvider_t, *PTlgProvider_t; /* size: 0x0028 */

