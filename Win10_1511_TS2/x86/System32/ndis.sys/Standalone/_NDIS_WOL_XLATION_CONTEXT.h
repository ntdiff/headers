typedef struct _NDIS_WOL_XLATION_CONTEXT
{
  /* 0x0000 */ unsigned long OriginalOid;
  /* 0x0004 */ void* InformationBuffer;
  /* 0x0008 */ unsigned long InformationBufferLength;
  union
  {
    /* 0x000c */ struct _NDIS_PM_WOL_PATTERN* WolPattern;
    /* 0x000c */ struct _NDIS_PM_PACKET_PATTERN* PacketPattern;
    /* 0x000c */ unsigned long PatternToRemove;
  }; /* size: 0x0004 */
} NDIS_WOL_XLATION_CONTEXT, *PNDIS_WOL_XLATION_CONTEXT; /* size: 0x0010 */

