typedef struct _NDIS_PM_PACKET_PATTERN
{
  /* 0x0000 */ unsigned long Priority;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned long MaskSize;
  /* 0x000c */ unsigned long PatternOffset;
  /* 0x0010 */ unsigned long PatternSize;
  /* 0x0014 */ unsigned long PatternFlags;
} NDIS_PM_PACKET_PATTERN, *PNDIS_PM_PACKET_PATTERN; /* size: 0x0018 */

