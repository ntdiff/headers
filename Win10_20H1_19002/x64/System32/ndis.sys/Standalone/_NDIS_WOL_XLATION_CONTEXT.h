typedef struct _NDIS_WOL_XLATION_CONTEXT
{
  /* 0x0000 */ unsigned long OriginalOid;
  /* 0x0008 */ void* InformationBuffer;
  /* 0x0010 */ unsigned long InformationBufferLength;
  union
  {
    /* 0x0018 */ struct _NDIS_PM_WOL_PATTERN* WolPattern;
    /* 0x0018 */ struct _NDIS_PM_PACKET_PATTERN* PacketPattern;
    struct
    {
      /* 0x0018 */ unsigned long PatternToRemove;
      /* 0x001c */ long __PADDING__[1];
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} NDIS_WOL_XLATION_CONTEXT, *PNDIS_WOL_XLATION_CONTEXT; /* size: 0x0020 */

