typedef struct _RTL_QUERY_REGISTRY_TABLE
{
  /* 0x0000 */ void* QueryRoutine /* function */;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ wchar_t* Name;
  /* 0x000c */ void* EntryContext;
  /* 0x0010 */ unsigned long DefaultType;
  /* 0x0014 */ void* DefaultData;
  /* 0x0018 */ unsigned long DefaultLength;
} RTL_QUERY_REGISTRY_TABLE, *PRTL_QUERY_REGISTRY_TABLE; /* size: 0x001c */

