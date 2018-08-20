typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef enum _KINTERRUPT_MODE
{
  LevelSensitive = 0,
  Latched = 1,
} KINTERRUPT_MODE, *PKINTERRUPT_MODE;

typedef enum _KINTERRUPT_POLARITY
{
  InterruptPolarityUnknown = 0,
  InterruptActiveHigh = 1,
  InterruptActiveLow = 2,
} KINTERRUPT_POLARITY, *PKINTERRUPT_POLARITY;

typedef struct _KINTERRUPT
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ short Size;
  /* 0x0008 */ struct _LIST_ENTRY InterruptListEntry;
  /* 0x0018 */ void* ServiceRoutine /* function */;
  /* 0x0020 */ void* MessageServiceRoutine /* function */;
  /* 0x0028 */ unsigned long MessageIndex;
  /* 0x0030 */ void* ServiceContext;
  /* 0x0038 */ unsigned __int64 SpinLock;
  /* 0x0040 */ unsigned long TickCount;
  /* 0x0048 */ unsigned __int64* ActualLock;
  /* 0x0050 */ void* DispatchAddress /* function */;
  /* 0x0058 */ unsigned long Vector;
  /* 0x005c */ unsigned char Irql;
  /* 0x005d */ unsigned char SynchronizeIrql;
  /* 0x005e */ unsigned char FloatingSave;
  /* 0x005f */ unsigned char Connected;
  /* 0x0060 */ char Number;
  /* 0x0061 */ unsigned char ShareVector;
  /* 0x0064 */ enum _KINTERRUPT_MODE Mode;
  /* 0x0068 */ enum _KINTERRUPT_POLARITY Polarity;
  /* 0x006c */ unsigned long ServiceCount;
  /* 0x0070 */ unsigned long DispatchCount;
  /* 0x0078 */ unsigned __int64 Rsvd1;
  /* 0x0080 */ struct _KTRAP_FRAME* TrapFrame;
  /* 0x0088 */ void* Reserved;
  /* 0x0090 */ unsigned long DispatchCode[4];
} KINTERRUPT, *PKINTERRUPT; /* size: 0x00a0 */

