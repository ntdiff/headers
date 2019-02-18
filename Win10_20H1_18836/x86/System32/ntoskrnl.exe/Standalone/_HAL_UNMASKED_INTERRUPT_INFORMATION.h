typedef union _HAL_UNMASKED_INTERRUPT_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned short SecondaryInterrupt : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned short Reserved : 15; /* bit position: 1 */
    }; /* bitfield */
    /* 0x0000 */ unsigned short AsUSHORT;
  }; /* size: 0x0002 */
} HAL_UNMASKED_INTERRUPT_FLAGS, *PHAL_UNMASKED_INTERRUPT_FLAGS; /* size: 0x0002 */

typedef enum _KINTERRUPT_MODE
{
  LevelSensitive = 0,
  Latched = 1,
} KINTERRUPT_MODE, *PKINTERRUPT_MODE;

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

typedef struct _HAL_UNMASKED_INTERRUPT_INFORMATION
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ union _HAL_UNMASKED_INTERRUPT_FLAGS Flags;
  /* 0x0008 */ enum _KINTERRUPT_MODE Mode;
  /* 0x000c */ enum _KINTERRUPT_POLARITY Polarity;
  /* 0x0010 */ unsigned long Gsiv;
  /* 0x0014 */ unsigned short PinNumber;
  /* 0x0018 */ void* DeviceHandle;
} HAL_UNMASKED_INTERRUPT_INFORMATION, *PHAL_UNMASKED_INTERRUPT_INFORMATION; /* size: 0x001c */

