typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef enum _INTERRUPT_LINE_TYPE
{
  InterruptLineInvalidType = 0,
  InterruptLineUnusable = 1,
  InterruptLineStandardPin = 2,
  InterruptLineProcessorLocal = 3,
  InterruptLineSoftwareOnly = 4,
  InterruptLineSoftwareOnlyProcessorLocal = 5,
  InterruptLineOutputPin = 6,
  InterruptLineMsi = 7,
} INTERRUPT_LINE_TYPE, *PINTERRUPT_LINE_TYPE;

typedef enum _INTERRUPT_LINE_SUBTYPE
{
  InterruptLineSubTypeNone = 0,
  InterruptLineSubTypeV2m = 1,
  InterruptLineSubTypeLpi = 2,
} INTERRUPT_LINE_SUBTYPE, *PINTERRUPT_LINE_SUBTYPE;

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0004 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0008 */

typedef struct _INTERRUPT_LINES
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0008 */ unsigned long ControllerId;
  /* 0x000c */ long MinLine;
  /* 0x0010 */ long MaxLine;
  /* 0x0014 */ unsigned long GsiBase;
  /* 0x0018 */ enum _INTERRUPT_LINE_TYPE Type;
  /* 0x001c */ enum _INTERRUPT_LINE_SUBTYPE SubType;
  /* 0x0020 */ struct _INTERRUPT_LINE_STATE* State;
  /* 0x0024 */ struct _INTERRUPT_LINE_INTERNAL_STATE* InternalState;
  /* 0x0028 */ unsigned __int64 MsiAddress;
  /* 0x0030 */ unsigned long MsiData;
  /* 0x0034 */ struct _RTL_BITMAP MsiInUse;
  /* 0x003c */ long __PADDING__[1];
} INTERRUPT_LINES, *PINTERRUPT_LINES; /* size: 0x0040 */

