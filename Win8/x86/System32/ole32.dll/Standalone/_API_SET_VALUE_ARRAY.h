typedef struct _API_SET_VALUE_ENTRY
{
  /* 0x0000 */ unsigned long NameOffset;
  /* 0x0004 */ unsigned long NameLength;
  /* 0x0008 */ unsigned long ValueOffset;
  /* 0x000c */ unsigned long ValueLength;
} API_SET_VALUE_ENTRY, *PAPI_SET_VALUE_ENTRY; /* size: 0x0010 */

typedef struct _API_SET_VALUE_ARRAY
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0004 */ struct _API_SET_VALUE_ENTRY Array[1];
} API_SET_VALUE_ARRAY, *PAPI_SET_VALUE_ARRAY; /* size: 0x0014 */

