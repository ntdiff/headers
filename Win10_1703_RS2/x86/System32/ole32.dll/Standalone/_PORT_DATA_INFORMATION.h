typedef struct _PORT_DATA_ENTRY
{
  /* 0x0000 */ void* Base;
  /* 0x0004 */ unsigned long Size;
} PORT_DATA_ENTRY, *PPORT_DATA_ENTRY; /* size: 0x0008 */

typedef struct _PORT_DATA_INFORMATION
{
  /* 0x0000 */ unsigned long CountDataEntries;
  /* 0x0004 */ struct _PORT_DATA_ENTRY DataEntries[1];
} PORT_DATA_INFORMATION, *PPORT_DATA_INFORMATION; /* size: 0x000c */

