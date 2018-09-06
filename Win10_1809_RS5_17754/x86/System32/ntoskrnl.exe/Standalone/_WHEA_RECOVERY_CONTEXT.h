typedef struct _WHEA_RECOVERY_CONTEXT
{
  struct // _TAG_UNNAMED_235
  {
    /* 0x0000 */ unsigned long Address;
    /* 0x0004 */ unsigned char Consumed;
    /* 0x0006 */ unsigned short ErrorCode;
    /* 0x0008 */ unsigned char ErrorIpValid;
    /* 0x0009 */ unsigned char RestartIpValid;
    /* 0x000a */ char __PADDING__[2];
  } /* size: 0x000c */ MemoryError;
  /* 0x0010 */ unsigned __int64 PartitionId;
  /* 0x0018 */ unsigned int VpIndex;
  /* 0x001c */ long __PADDING__[1];
} WHEA_RECOVERY_CONTEXT, *PWHEA_RECOVERY_CONTEXT; /* size: 0x0020 */

