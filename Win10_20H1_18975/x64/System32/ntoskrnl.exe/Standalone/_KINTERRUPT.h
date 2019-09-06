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
  InterruptRisingEdge = 1,
  InterruptActiveLow = 2,
  InterruptFallingEdge = 2,
  InterruptActiveBoth = 3,
  InterruptActiveBothTriggerLow = 3,
  InterruptActiveBothTriggerHigh = 4,
} KINTERRUPT_POLARITY, *PKINTERRUPT_POLARITY;

typedef struct _ISRDPCSTATS_SEQUENCE
{
  /* 0x0000 */ unsigned long SequenceNumber;
  /* 0x0008 */ unsigned __int64 IsrTime;
  /* 0x0010 */ unsigned __int64 IsrCount;
  /* 0x0018 */ unsigned __int64 DpcTime;
  /* 0x0020 */ unsigned __int64 DpcCount;
} ISRDPCSTATS_SEQUENCE, *PISRDPCSTATS_SEQUENCE; /* size: 0x0028 */

typedef struct _ISRDPCSTATS
{
  /* 0x0000 */ unsigned __int64 IsrTime;
  /* 0x0008 */ unsigned __int64 IsrTimeStart;
  /* 0x0010 */ unsigned __int64 IsrCount;
  /* 0x0018 */ unsigned __int64 DpcTime;
  /* 0x0020 */ unsigned __int64 DpcTimeStart;
  /* 0x0028 */ unsigned __int64 DpcCount;
  /* 0x0030 */ unsigned char IsrActive;
  /* 0x0031 */ unsigned char Reserved[7];
  /* 0x0038 */ struct _ISRDPCSTATS_SEQUENCE DpcWatchdog;
} ISRDPCSTATS, *PISRDPCSTATS; /* size: 0x0060 */

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
  /* 0x0060 */ unsigned long Number;
  /* 0x0064 */ unsigned char ShareVector;
  /* 0x0065 */ unsigned char EmulateActiveBoth;
  /* 0x0066 */ unsigned short ActiveCount;
  /* 0x0068 */ long InternalState;
  /* 0x006c */ enum _KINTERRUPT_MODE Mode;
  /* 0x0070 */ enum _KINTERRUPT_POLARITY Polarity;
  /* 0x0074 */ unsigned long ServiceCount;
  /* 0x0078 */ unsigned long DispatchCount;
  /* 0x0080 */ struct _KEVENT* PassiveEvent;
  /* 0x0088 */ struct _KTRAP_FRAME* TrapFrame;
  /* 0x0090 */ void* DisconnectData;
  /* 0x0098 */ struct _KTHREAD* volatile ServiceThread;
  /* 0x00a0 */ struct _INTERRUPT_CONNECTION_DATA* ConnectionData;
  /* 0x00a8 */ void* IntTrackEntry;
  /* 0x00b0 */ struct _ISRDPCSTATS IsrDpcStats;
  /* 0x0110 */ void* RedirectObject;
  /* 0x0118 */ void* PhysicalDeviceObject;
} KINTERRUPT, *PKINTERRUPT; /* size: 0x0120 */

