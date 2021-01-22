typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_RSC_STATISTICS_INFO
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0008 */ unsigned __int64 CoalescedPkts;
  /* 0x0010 */ unsigned __int64 CoalescedOctets;
  /* 0x0018 */ unsigned __int64 CoalesceEvents;
  /* 0x0020 */ unsigned __int64 Aborts;
} NDIS_RSC_STATISTICS_INFO, *PNDIS_RSC_STATISTICS_INFO; /* size: 0x0028 */

