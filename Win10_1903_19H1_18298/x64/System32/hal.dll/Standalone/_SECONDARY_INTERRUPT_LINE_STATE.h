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

typedef struct _SECONDARY_INTERRUPT_LINE_STATE
{
  /* 0x0000 */ enum _KINTERRUPT_POLARITY Polarity;
  /* 0x0004 */ enum _KINTERRUPT_MODE Mode;
  /* 0x0008 */ unsigned long Vector;
  /* 0x000c */ unsigned char Unmasked;
  /* 0x000d */ char __PADDING__[3];
} SECONDARY_INTERRUPT_LINE_STATE, *PSECONDARY_INTERRUPT_LINE_STATE; /* size: 0x0010 */

