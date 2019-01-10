struct DEBUG_DEVICE_ADDRESS
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Valid;
  union
  {
    /* 0x0002 */ unsigned char Reserved[2];
    struct
    {
      /* 0x0002 */ unsigned char BitWidth;
      /* 0x0003 */ unsigned char AccessSize;
    }; /* size: 0x0002 */
  }; /* size: 0x0002 */
  /* 0x0004 */ unsigned char* TranslatedAddress;
  /* 0x0008 */ unsigned long Length;
}; /* size: 0x000c */

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

struct DEBUG_MEMORY_REQUIREMENTS
{
  /* 0x0000 */ union _LARGE_INTEGER Start;
  /* 0x0008 */ union _LARGE_INTEGER MaxEnd;
  /* 0x0010 */ void* VirtualAddress;
  /* 0x0014 */ unsigned long Length;
  /* 0x0018 */ unsigned char Cached;
  /* 0x0019 */ unsigned char Aligned;
  /* 0x001a */ char __PADDING__[6];
}; /* size: 0x0020 */

enum KD_NAMESPACE_ENUM
{
  KdNameSpacePCI = 0,
  KdNameSpaceACPI = 1,
  KdNameSpaceAny = 2,
  KdNameSpaceNone = 3,
  KdNameSpaceMax = 4,
};

typedef struct _DEBUG_TRANSPORT_DATA
{
  /* 0x0000 */ unsigned long HwContextSize;
  /* 0x0004 */ unsigned char UseSerialFraming;
  /* 0x0005 */ unsigned char ValidUSBCoreId;
  /* 0x0006 */ unsigned char USBCoreId;
  /* 0x0007 */ char __PADDING__[1];
} DEBUG_TRANSPORT_DATA, *PDEBUG_TRANSPORT_DATA; /* size: 0x0008 */

typedef struct _DEBUG_DEVICE_DESCRIPTOR
{
  /* 0x0000 */ unsigned long Bus;
  /* 0x0004 */ unsigned long Slot;
  /* 0x0008 */ unsigned short Segment;
  /* 0x000a */ unsigned short VendorID;
  /* 0x000c */ unsigned short DeviceID;
  /* 0x000e */ unsigned char BaseClass;
  /* 0x000f */ unsigned char SubClass;
  /* 0x0010 */ unsigned char ProgIf;
  union
  {
    /* 0x0011 */ unsigned char Flags;
    struct /* bitfield */
    {
      /* 0x0011 */ unsigned char DbgHalScratchAllocated : 1; /* bit position: 0 */
      /* 0x0011 */ unsigned char DbgBarsMapped : 1; /* bit position: 1 */
      /* 0x0011 */ unsigned char DbgScratchAllocated : 1; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x0012 */ unsigned char Initialized;
  /* 0x0013 */ unsigned char Configured;
  /* 0x0014 */ struct DEBUG_DEVICE_ADDRESS BaseAddress[6];
  /* 0x0060 */ struct DEBUG_MEMORY_REQUIREMENTS Memory;
  /* 0x0080 */ unsigned long Dbg2TableIndex;
  /* 0x0084 */ unsigned short PortType;
  /* 0x0086 */ unsigned short PortSubtype;
  /* 0x0088 */ void* OemData;
  /* 0x008c */ unsigned long OemDataLength;
  /* 0x0090 */ enum KD_NAMESPACE_ENUM NameSpace;
  /* 0x0094 */ wchar_t* NameSpacePath;
  /* 0x0098 */ unsigned long NameSpacePathLength;
  /* 0x009c */ unsigned long TransportType;
  /* 0x00a0 */ struct _DEBUG_TRANSPORT_DATA TransportData;
} DEBUG_DEVICE_DESCRIPTOR, *PDEBUG_DEVICE_DESCRIPTOR; /* size: 0x00a8 */

