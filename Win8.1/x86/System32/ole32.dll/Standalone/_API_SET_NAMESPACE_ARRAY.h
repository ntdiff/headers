typedef struct _API_SET_NAMESPACE_ENTRY
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long NameOffset;
  /* 0x0008 */ unsigned long NameLength;
  /* 0x000c */ unsigned long AliasOffset;
  /* 0x0010 */ unsigned long AliasLength;
  /* 0x0014 */ unsigned long DataOffset;
} API_SET_NAMESPACE_ENTRY, *PAPI_SET_NAMESPACE_ENTRY; /* size: 0x0018 */

typedef struct _API_SET_NAMESPACE_ARRAY
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ unsigned long Count;
  /* 0x0010 */ struct _API_SET_NAMESPACE_ENTRY Array[1];
} API_SET_NAMESPACE_ARRAY, *PAPI_SET_NAMESPACE_ARRAY; /* size: 0x0028 */

