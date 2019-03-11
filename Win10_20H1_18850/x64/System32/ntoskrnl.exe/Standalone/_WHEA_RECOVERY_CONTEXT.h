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
      /* 0x0000 */ unsigned __int64 Address;
      /* 0x0008 */ unsigned char Consumed;
      /* 0x000a */ unsigned short ErrorCode;
      /* 0x000c */ unsigned char ErrorIpValid;
      /* 0x000d */ unsigned char RestartIpValid;
      /* 0x000e */ unsigned char ClearPoison;
      /* 0x000f */ char __PADDING__[1];
    } /* size: 0x0010 */ MemoryError;
    struct
    {
      /* 0x0000 */ unsigned __int64 PmemErrInfo;
    } /* size: 0x0008 */ PmemError;
  }; /* size: 0x0010 */
  /* 0x0010 */ unsigned __int64 PartitionId;
  /* 0x0018 */ unsigned int VpIndex;
  /* 0x001c */ enum _WHEA_RECOVERY_CONTEXT_ERROR_TYPE ErrorType;
} WHEA_RECOVERY_CONTEXT, *PWHEA_RECOVERY_CONTEXT; /* size: 0x0020 */

