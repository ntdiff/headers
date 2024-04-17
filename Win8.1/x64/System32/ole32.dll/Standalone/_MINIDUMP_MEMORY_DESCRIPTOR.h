typedef struct _MINIDUMP_LOCATION_DESCRIPTOR
{
  /* 0x0000 */ unsigned int DataSize;
  /* 0x0004 */ unsigned long Rva;
} MINIDUMP_LOCATION_DESCRIPTOR, *PMINIDUMP_LOCATION_DESCRIPTOR; /* size: 0x0008 */

typedef struct _MINIDUMP_MEMORY_DESCRIPTOR
{
  /* 0x0000 */ unsigned __int64 StartOfMemoryRange;
  /* 0x0008 */ struct _MINIDUMP_LOCATION_DESCRIPTOR Memory;
} MINIDUMP_MEMORY_DESCRIPTOR, *PMINIDUMP_MEMORY_DESCRIPTOR; /* size: 0x0010 */

