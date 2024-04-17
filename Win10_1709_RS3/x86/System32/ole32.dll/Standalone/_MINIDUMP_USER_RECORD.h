typedef struct _MINIDUMP_LOCATION_DESCRIPTOR
{
  /* 0x0000 */ unsigned int DataSize;
  /* 0x0004 */ unsigned long Rva;
} MINIDUMP_LOCATION_DESCRIPTOR, *PMINIDUMP_LOCATION_DESCRIPTOR; /* size: 0x0008 */

typedef struct _MINIDUMP_USER_RECORD
{
  /* 0x0000 */ unsigned int Type;
  /* 0x0004 */ struct _MINIDUMP_LOCATION_DESCRIPTOR Memory;
} MINIDUMP_USER_RECORD, *PMINIDUMP_USER_RECORD; /* size: 0x000c */

