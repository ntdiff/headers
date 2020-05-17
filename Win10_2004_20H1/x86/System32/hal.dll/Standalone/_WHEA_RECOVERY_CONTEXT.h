typedef enum _WHEA_RECOVERY_CONTEXT_ERROR_TYPE
{
  WheaRecoveryContextErrorTypeMemory = 1,
  WheaRecoveryContextErrorTypePmem = 2,
  WheaRecoveryContextErrorTypeMax = 3,
} WHEA_RECOVERY_CONTEXT_ERROR_TYPE, *PWHEA_RECOVERY_CONTEXT_ERROR_TYPE;

typedef struct _WHEA_RECOVERY_CONTEXT
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long Address;
      /* 0x0004 */ unsigned char Consumed;
      /* 0x0006 */ unsigned short ErrorCode;
      /* 0x0008 */ unsigned char ErrorIpValid;
      /* 0x0009 */ unsigned char RestartIpValid;
      /* 0x000a */ unsigned char ClearPoison;
      /* 0x000b */ char __PADDING__[1];
    } /* size: 0x000c */ MemoryError;
    struct
    {
      /* 0x0000 */ unsigned long PmemErrInfo;
    } /* size: 0x0004 */ PmemError;
  }; /* size: 0x000c */
  /* 0x0010 */ unsigned __int64 PartitionId;
  /* 0x0018 */ unsigned int VpIndex;
  /* 0x001c */ enum _WHEA_RECOVERY_CONTEXT_ERROR_TYPE ErrorType;
} WHEA_RECOVERY_CONTEXT, *PWHEA_RECOVERY_CONTEXT; /* size: 0x0020 */

