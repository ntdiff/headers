typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_GFT_FREE_COUNTER_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long TableId;
  /* 0x000c */ unsigned long CounterIdStart;
  /* 0x0010 */ unsigned long NumCounters;
  /* 0x0014 */ unsigned long LastCounterValueAndStateArrayOffset;
  /* 0x0018 */ unsigned long LastCounterValueAndStateArrayNumElements;
  /* 0x001c */ unsigned long LastCounterValueAndStateArrayElementSize;
} NDIS_GFT_FREE_COUNTER_PARAMETERS, *PNDIS_GFT_FREE_COUNTER_PARAMETERS; /* size: 0x0020 */

