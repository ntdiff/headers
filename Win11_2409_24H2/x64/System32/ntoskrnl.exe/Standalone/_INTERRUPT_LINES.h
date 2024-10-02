typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

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
  /* 0x0008 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0010 */

typedef struct _INTERRUPT_LINES
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ unsigned long ControllerId;
  /* 0x0014 */ long MinLine;
  /* 0x0018 */ long MaxLine;
  /* 0x001c */ unsigned long GsiBase;
  /* 0x0020 */ enum _INTERRUPT_LINE_TYPE Type;
  /* 0x0024 */ enum _INTERRUPT_LINE_SUBTYPE SubType;
  /* 0x0028 */ struct _INTERRUPT_LINE_STATE* State;
  /* 0x0030 */ struct _INTERRUPT_LINE_INTERNAL_STATE* InternalState;
  /* 0x0038 */ unsigned __int64 MsiAddress;
  /* 0x0040 */ unsigned long MsiData;
  /* 0x0048 */ struct _RTL_BITMAP MsiInUse;
} INTERRUPT_LINES, *PINTERRUPT_LINES; /* size: 0x0058 */

