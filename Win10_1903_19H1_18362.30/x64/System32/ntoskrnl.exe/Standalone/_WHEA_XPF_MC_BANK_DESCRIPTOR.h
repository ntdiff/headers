typedef union _XPF_MC_BANK_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char ClearOnInitializationRW : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned char ControlDataRW : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned char Reserved : 6; /* bit position: 2 */
    }; /* bitfield */
    /* 0x0000 */ unsigned char AsUCHAR;
  }; /* size: 0x0001 */
} XPF_MC_BANK_FLAGS, *PXPF_MC_BANK_FLAGS; /* size: 0x0001 */

typedef struct _WHEA_XPF_MC_BANK_DESCRIPTOR
{
  /* 0x0000 */ unsigned char BankNumber;
  /* 0x0001 */ unsigned char ClearOnInitialization;
  /* 0x0002 */ unsigned char StatusDataFormat;
  /* 0x0003 */ union _XPF_MC_BANK_FLAGS Flags;
  /* 0x0004 */ unsigned long ControlMsr;
  /* 0x0008 */ unsigned long StatusMsr;
  /* 0x000c */ unsigned long AddressMsr;
  /* 0x0010 */ unsigned long MiscMsr;
  /* 0x0014 */ unsigned __int64 ControlData;
} WHEA_XPF_MC_BANK_DESCRIPTOR, *PWHEA_XPF_MC_BANK_DESCRIPTOR; /* size: 0x001c */

