typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_GFT_STATISTICS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long TableId;
  /* 0x000c */ unsigned long VPortId;
  /* 0x0010 */ unsigned long ProviderFlowEntryId;
  /* 0x0018 */ unsigned __int64 Packets;
  /* 0x0020 */ unsigned __int64 Bytes;
  /* 0x0028 */ unsigned __int64 L1CacheHits;
  /* 0x0030 */ unsigned __int64 L2CacheHits;
  /* 0x0038 */ unsigned __int64 L3CacheHits;
  /* 0x0040 */ unsigned __int64 L1CacheMisses;
  /* 0x0048 */ unsigned __int64 L2CacheMisses;
  /* 0x0050 */ unsigned __int64 L3CacheMisses;
} NDIS_GFT_STATISTICS, *PNDIS_GFT_STATISTICS; /* size: 0x0058 */

