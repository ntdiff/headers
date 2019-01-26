typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef enum _TYPE_OF_MEMORY
{
  LoaderExceptionBlock = 0,
  LoaderSystemBlock = 1,
  LoaderFree = 2,
  LoaderBad = 3,
  LoaderLoadedProgram = 4,
  LoaderFirmwareTemporary = 5,
  LoaderFirmwarePermanent = 6,
  LoaderOsloaderHeap = 7,
  LoaderOsloaderStack = 8,
  LoaderSystemCode = 9,
  LoaderHalCode = 10,
  LoaderBootDriver = 11,
  LoaderConsoleInDriver = 12,
  LoaderConsoleOutDriver = 13,
  LoaderStartupDpcStack = 14,
  LoaderStartupKernelStack = 15,
  LoaderStartupPanicStack = 16,
  LoaderStartupPcrPage = 17,
  LoaderStartupPdrPage = 18,
  LoaderRegistryData = 19,
  LoaderMemoryData = 20,
  LoaderNlsData = 21,
  LoaderSpecialMemory = 22,
  LoaderBBTMemory = 23,
  LoaderZero = 24,
  LoaderXIPRom = 25,
  LoaderHALCachedMemory = 26,
  LoaderLargePageFiller = 27,
  LoaderErrorLogMemory = 28,
  LoaderVsmMemory = 29,
  LoaderFirmwareCode = 30,
  LoaderFirmwareData = 31,
  LoaderFirmwareReserved = 32,
  LoaderEnclaveMemory = 33,
  LoaderFirmwareKsr = 34,
  LoaderEnclaveKsr = 35,
  LoaderSkMemory = 36,
  LoaderSkFirmwareReserved = 37,
  LoaderIoSpaceMemoryZeroed = 38,
  LoaderIoSpaceMemoryFree = 39,
  LoaderIoSpaceMemoryKsr = 40,
  LoaderMaximum = 41,
} TYPE_OF_MEMORY, *PTYPE_OF_MEMORY;

typedef struct _MEMORY_ALLOCATION_DESCRIPTOR
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ enum _TYPE_OF_MEMORY MemoryType;
  /* 0x0018 */ unsigned __int64 BasePage;
  /* 0x0020 */ unsigned __int64 PageCount;
} MEMORY_ALLOCATION_DESCRIPTOR, *PMEMORY_ALLOCATION_DESCRIPTOR; /* size: 0x0028 */

