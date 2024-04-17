typedef struct _API_SET_VALUE_ENTRY
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long NameOffset;
  /* 0x0008 */ unsigned long NameLength;
  /* 0x000c */ unsigned long ValueOffset;
  /* 0x0010 */ unsigned long ValueLength;
} API_SET_VALUE_ENTRY, *PAPI_SET_VALUE_ENTRY; /* size: 0x0014 */

