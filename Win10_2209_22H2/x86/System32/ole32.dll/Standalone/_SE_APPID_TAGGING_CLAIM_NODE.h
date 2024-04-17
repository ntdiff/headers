typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _SE_APPID_TAGGING_CLAIM_NODE
{
  /* 0x0000 */ struct _UNICODE_STRING AppIdTaggingKey;
  /* 0x0008 */ struct _UNICODE_STRING AppIdTaggingValue;
  /* 0x0010 */ struct _SINGLE_LIST_ENTRY ListEntry;
} SE_APPID_TAGGING_CLAIM_NODE, *PSE_APPID_TAGGING_CLAIM_NODE; /* size: 0x0014 */

