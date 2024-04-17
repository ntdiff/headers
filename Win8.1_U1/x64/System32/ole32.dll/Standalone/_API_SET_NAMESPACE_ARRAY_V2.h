typedef struct _API_SET_NAMESPACE_ENTRY_V2
{
  /* 0x0000 */ unsigned long NameOffset;
  /* 0x0004 */ unsigned long NameLength;
  /* 0x0008 */ unsigned long DataOffset;
} API_SET_NAMESPACE_ENTRY_V2, *PAPI_SET_NAMESPACE_ENTRY_V2; /* size: 0x000c */

typedef struct _API_SET_NAMESPACE_ARRAY_V2
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Count;
  /* 0x0008 */ struct _API_SET_NAMESPACE_ENTRY_V2 Array[1];
} API_SET_NAMESPACE_ARRAY_V2, *PAPI_SET_NAMESPACE_ARRAY_V2; /* size: 0x0014 */

