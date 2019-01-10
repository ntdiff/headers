enum INTERRUPT_CONNECTION_TYPE
{
  InterruptTypeControllerInput = 0,
  InterruptTypeXapicMessage = 1,
  InterruptTypeHypertransport = 2,
  InterruptTypeMessageRequest = 3,
};

typedef enum _KINTERRUPT_POLARITY
{
  InterruptPolarityUnknown = 0,
  InterruptActiveHigh = 1,
  InterruptRisingEdge = 1,
  InterruptActiveLow = 2,
  InterruptFallingEdge = 2,
  InterruptActiveBoth = 3,
  InterruptActiveBothTriggerLow = 3,
  InterruptActiveBothTriggerHigh = 4,
} KINTERRUPT_POLARITY, *PKINTERRUPT_POLARITY;

typedef enum _KINTERRUPT_MODE
{
  LevelSensitive = 0,
  Latched = 1,
} KINTERRUPT_MODE, *PKINTERRUPT_MODE;

typedef struct _GROUP_AFFINITY
{
  /* 0x0000 */ unsigned long Mask;
  /* 0x0004 */ unsigned short Group;
  /* 0x0006 */ unsigned short Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY; /* size: 0x000c */

typedef struct _INTERRUPT_REMAPPING_INFO
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long IrtIndex : 30; /* bit position: 0 */
    /* 0x0000 */ unsigned long FlagHalInternal : 1; /* bit position: 30 */
    /* 0x0000 */ unsigned long FlagTranslated : 1; /* bit position: 31 */
  }; /* bitfield */
  union
  {
    struct
    {
      /* 0x0004 */ unsigned long MessageAddressHigh;
      /* 0x0008 */ unsigned long MessageAddressLow;
      /* 0x000c */ unsigned short MessageData;
      /* 0x000e */ unsigned short Reserved;
    } /* size: 0x000c */ Msi;
  } /* size: 0x000c */ u;
} INTERRUPT_REMAPPING_INFO, *PINTERRUPT_REMAPPING_INFO; /* size: 0x0010 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _INTERRUPT_HT_INTR_INFO
{
  union
  {
    union
    {
      struct
      {
        struct /* bitfield */
        {
          /* 0x0000 */ unsigned long Mask : 1; /* bit position: 0 */
          /* 0x0000 */ unsigned long Polarity : 1; /* bit position: 1 */
          /* 0x0000 */ unsigned long MessageType : 3; /* bit position: 2 */
          /* 0x0000 */ unsigned long RequestEOI : 1; /* bit position: 5 */
          /* 0x0000 */ unsigned long DestinationMode : 1; /* bit position: 6 */
          /* 0x0000 */ unsigned long MessageType3 : 1; /* bit position: 7 */
          /* 0x0000 */ unsigned long Destination : 8; /* bit position: 8 */
          /* 0x0000 */ unsigned long Vector : 8; /* bit position: 16 */
          /* 0x0000 */ unsigned long ExtendedAddress : 8; /* bit position: 24 */
        }; /* bitfield */
      } /* size: 0x0004 */ bits;
      /* 0x0000 */ unsigned long AsULONG;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ LowPart;
  union
  {
    union
    {
      struct
      {
        struct /* bitfield */
        {
          /* 0x0004 */ unsigned long ExtendedDestination : 24; /* bit position: 0 */
          /* 0x0004 */ unsigned long Reserved : 6; /* bit position: 24 */
          /* 0x0004 */ unsigned long PassPW : 1; /* bit position: 30 */
          /* 0x0004 */ unsigned long WaitingForEOI : 1; /* bit position: 31 */
        }; /* bitfield */
      } /* size: 0x0004 */ bits;
      /* 0x0004 */ unsigned long AsULONG;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ HighPart;
} INTERRUPT_HT_INTR_INFO, *PINTERRUPT_HT_INTR_INFO; /* size: 0x0008 */

enum HAL_APIC_DESTINATION_MODE
{
  ApicDestinationModePhysical = 1,
  ApicDestinationModeLogicalFlat = 2,
  ApicDestinationModeLogicalClustered = 3,
  ApicDestinationModeUnknown = 4,
};

typedef struct _INTERRUPT_VECTOR_DATA
{
  /* 0x0000 */ enum INTERRUPT_CONNECTION_TYPE Type;
  /* 0x0004 */ unsigned long Vector;
  /* 0x0008 */ unsigned char Irql;
  /* 0x000c */ enum _KINTERRUPT_POLARITY Polarity;
  /* 0x0010 */ enum _KINTERRUPT_MODE Mode;
  /* 0x0014 */ struct _GROUP_AFFINITY TargetProcessors;
  /* 0x0020 */ struct _INTERRUPT_REMAPPING_INFO IntRemapInfo;
  struct
  {
    /* 0x0030 */ unsigned long Gsiv;
    struct /* bitfield */
    {
      /* 0x0034 */ unsigned long WakeInterrupt : 1; /* bit position: 0 */
      /* 0x0034 */ unsigned long ReservedFlags : 31; /* bit position: 1 */
    }; /* bitfield */
  } /* size: 0x0008 */ ControllerInput;
  /* 0x0038 */ unsigned __int64 HvDeviceId;
  union
  {
    struct
    {
      /* 0x0040 */ union _LARGE_INTEGER Address;
      /* 0x0048 */ unsigned long DataPayload;
      /* 0x004c */ long __PADDING__[1];
    } /* size: 0x0010 */ XapicMessage;
    struct
    {
      /* 0x0040 */ struct _INTERRUPT_HT_INTR_INFO IntrInfo;
    } /* size: 0x0008 */ Hypertransport;
    struct
    {
      /* 0x0040 */ union _LARGE_INTEGER Address;
      /* 0x0048 */ unsigned long DataPayload;
      /* 0x004c */ long __PADDING__[1];
    } /* size: 0x0010 */ GenericMessage;
    struct
    {
      struct
      {
        /* 0x0040 */ enum HAL_APIC_DESTINATION_MODE DestinationMode;
      } /* size: 0x0004 */ MessageRequest;
      /* 0x0044 */ long __PADDING__[3];
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
} INTERRUPT_VECTOR_DATA, *PINTERRUPT_VECTOR_DATA; /* size: 0x0050 */

