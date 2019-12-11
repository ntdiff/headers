typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _NDIS_GFT_FLOW_ENTRY_TYPE
{
  NdisGftFlowEntryTypeUndefined = 0,
  NdisGftFlowEntryTypeExactMatch = 1,
  NdisGftFlowEntryTypeWildcard = 2,
  NdisGftFlowEntryTypeMax = 3,
} NDIS_GFT_FLOW_ENTRY_TYPE, *PNDIS_GFT_FLOW_ENTRY_TYPE;

typedef struct _NDIS_GFT_FLOW_ENTRY_ARRAY
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ enum _NDIS_GFT_FLOW_ENTRY_TYPE EntryType;
  /* 0x000c */ unsigned long FlowEntryArrayOffset;
  /* 0x0010 */ unsigned long FlowEntryArrayNumElements;
  /* 0x0014 */ unsigned long FlowEntryArrayElementSize;
} NDIS_GFT_FLOW_ENTRY_ARRAY, *PNDIS_GFT_FLOW_ENTRY_ARRAY; /* size: 0x0018 */

