typedef struct _RTL_QUERY_REGISTRY_TABLE
{
  /* 0x0000 */ void* QueryRoutine /* function */;
  /* 0x0008 */ unsigned long Flags;
  /* 0x0010 */ wchar_t* Name;
  /* 0x0018 */ void* EntryContext;
  /* 0x0020 */ unsigned long DefaultType;
  /* 0x0028 */ void* DefaultData;
  /* 0x0030 */ unsigned long DefaultLength;
  /* 0x0034 */ long __PADDING__[1];
} RTL_QUERY_REGISTRY_TABLE, *PRTL_QUERY_REGISTRY_TABLE; /* size: 0x0038 */

