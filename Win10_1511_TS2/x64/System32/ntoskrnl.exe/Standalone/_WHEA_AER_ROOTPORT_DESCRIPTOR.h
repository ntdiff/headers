typedef struct _WHEA_PCI_SLOT_NUMBER
{
  union
  {
    union
    {
      struct
      {
        struct /* bitfield */
        {
          /* 0x0000 */ unsigned long DeviceNumber : 5; /* bit position: 0 */
          /* 0x0000 */ unsigned long FunctionNumber : 3; /* bit position: 5 */
          /* 0x0000 */ unsigned long Reserved : 24; /* bit position: 8 */
        }; /* bitfield */
      } /* size: 0x0004 */ bits;
      /* 0x0000 */ unsigned long AsULONG;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
} WHEA_PCI_SLOT_NUMBER, *PWHEA_PCI_SLOT_NUMBER; /* size: 0x0004 */

typedef union _AER_ROOTPORT_DESCRIPTOR_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned short UncorrectableErrorMaskRW : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned short UncorrectableErrorSeverityRW : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned short CorrectableErrorMaskRW : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned short AdvancedCapsAndControlRW : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned short RootErrorCommandRW : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned short Reserved : 11; /* bit position: 5 */
    }; /* bitfield */
    /* 0x0000 */ unsigned short AsUSHORT;
  }; /* size: 0x0002 */
} AER_ROOTPORT_DESCRIPTOR_FLAGS, *PAER_ROOTPORT_DESCRIPTOR_FLAGS; /* size: 0x0002 */

typedef struct _WHEA_AER_ROOTPORT_DESCRIPTOR
{
  /* 0x0000 */ unsigned short Type;
  /* 0x0002 */ unsigned char Enabled;
  /* 0x0003 */ unsigned char Reserved;
  /* 0x0004 */ unsigned long BusNumber;
  /* 0x0008 */ struct _WHEA_PCI_SLOT_NUMBER Slot;
  /* 0x000c */ unsigned short DeviceControl;
  /* 0x000e */ union _AER_ROOTPORT_DESCRIPTOR_FLAGS Flags;
  /* 0x0010 */ unsigned long UncorrectableErrorMask;
  /* 0x0014 */ unsigned long UncorrectableErrorSeverity;
  /* 0x0018 */ unsigned long CorrectableErrorMask;
  /* 0x001c */ unsigned long AdvancedCapsAndControl;
  /* 0x0020 */ unsigned long RootErrorCommand;
} WHEA_AER_ROOTPORT_DESCRIPTOR, *PWHEA_AER_ROOTPORT_DESCRIPTOR; /* size: 0x0024 */

