typedef struct _WHEA_RECOVERY_CONTEXT
{
  struct
  {
    /* 0x0000 */ unsigned __int64 Address;
    /* 0x0008 */ unsigned char Consumed;
    /* 0x000a */ unsigned short ErrorCode;
    /* 0x000c */ unsigned char ErrorIpValid;
    /* 0x000d */ unsigned char RestartIpValid;
    /* 0x000e */ char __PADDING__[2];
  } /* size: 0x0010 */ MemoryError;
  /* 0x0010 */ unsigned __int64 PartitionId;
  /* 0x0018 */ unsigned int VpIndex;
  /* 0x001c */ long __PADDING__[1];
} WHEA_RECOVERY_CONTEXT, *PWHEA_RECOVERY_CONTEXT; /* size: 0x0020 */

