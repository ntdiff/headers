typedef enum _CONFIGURATION_CLASS
{
  SystemClass = 0,
  ProcessorClass = 1,
  CacheClass = 2,
  AdapterClass = 3,
  ControllerClass = 4,
  PeripheralClass = 5,
  MemoryClass = 6,
  MaximumClass = 7,
} CONFIGURATION_CLASS, *PCONFIGURATION_CLASS;

typedef enum _CONFIGURATION_TYPE
{
  ArcSystem = 0,
  CentralProcessor = 1,
  FloatingPointProcessor = 2,
  PrimaryIcache = 3,
  PrimaryDcache = 4,
  SecondaryIcache = 5,
  SecondaryDcache = 6,
  SecondaryCache = 7,
  EisaAdapter = 8,
  TcAdapter = 9,
  ScsiAdapter = 10,
  DtiAdapter = 11,
  MultiFunctionAdapter = 12,
  DiskController = 13,
  TapeController = 14,
  CdromController = 15,
  WormController = 16,
  SerialController = 17,
  NetworkController = 18,
  DisplayController = 19,
  ParallelController = 20,
  PointerController = 21,
  KeyboardController = 22,
  AudioController = 23,
  OtherController = 24,
  DiskPeripheral = 25,
  FloppyDiskPeripheral = 26,
  TapePeripheral = 27,
  ModemPeripheral = 28,
  MonitorPeripheral = 29,
  PrinterPeripheral = 30,
  PointerPeripheral = 31,
  KeyboardPeripheral = 32,
  TerminalPeripheral = 33,
  OtherPeripheral = 34,
  LinePeripheral = 35,
  NetworkPeripheral = 36,
  SystemMemory = 37,
  DockingInformation = 38,
  RealModeIrqRoutingTable = 39,
  RealModePCIEnumeration = 40,
  MaximumType = 41,
} CONFIGURATION_TYPE, *PCONFIGURATION_TYPE;

typedef struct _DEVICE_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Failed : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long ReadOnly : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long Removable : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long ConsoleIn : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long ConsoleOut : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned long Input : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned long Output : 1; /* bit position: 6 */
  }; /* bitfield */
} DEVICE_FLAGS, *PDEVICE_FLAGS; /* size: 0x0004 */

typedef struct _CONFIGURATION_COMPONENT
{
  /* 0x0000 */ enum _CONFIGURATION_CLASS Class;
  /* 0x0004 */ enum _CONFIGURATION_TYPE Type;
  /* 0x0008 */ struct _DEVICE_FLAGS Flags;
  /* 0x000c */ unsigned short Version;
  /* 0x000e */ unsigned short Revision;
  /* 0x0010 */ unsigned long Key;
  union
  {
    /* 0x0014 */ unsigned long AffinityMask;
    struct
    {
      /* 0x0014 */ unsigned short Group;
      /* 0x0016 */ unsigned short GroupIndex;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0018 */ unsigned long ConfigurationDataLength;
  /* 0x001c */ unsigned long IdentifierLength;
  /* 0x0020 */ char* Identifier;
} CONFIGURATION_COMPONENT, *PCONFIGURATION_COMPONENT; /* size: 0x0028 */

typedef struct _CONFIGURATION_COMPONENT_DATA
{
  /* 0x0000 */ struct _CONFIGURATION_COMPONENT_DATA* Parent;
  /* 0x0008 */ struct _CONFIGURATION_COMPONENT_DATA* Child;
  /* 0x0010 */ struct _CONFIGURATION_COMPONENT_DATA* Sibling;
  /* 0x0018 */ struct _CONFIGURATION_COMPONENT ComponentEntry;
  /* 0x0040 */ void* ConfigurationData;
} CONFIGURATION_COMPONENT_DATA, *PCONFIGURATION_COMPONENT_DATA; /* size: 0x0048 */

