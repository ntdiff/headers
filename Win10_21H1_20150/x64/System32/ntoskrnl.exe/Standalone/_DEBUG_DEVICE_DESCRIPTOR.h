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
  /* 0x0008 */ unsigned char* TranslatedAddress;
  /* 0x0010 */ unsigned long Length;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

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
  /* 0x0018 */ unsigned long Length;
  /* 0x001c */ unsigned char Cached;
  /* 0x001d */ unsigned char Aligned;
  /* 0x001e */ char __PADDING__[2];
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

typedef struct _DEBUG_IOMMU_EFI_DATA
{
  /* 0x0000 */ void* PciIoProtocolHandle;
  /* 0x0008 */ void* Mapping;
} DEBUG_IOMMU_EFI_DATA, *PDEBUG_IOMMU_EFI_DATA; /* size: 0x0010 */

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
  /* 0x0018 */ struct DEBUG_DEVICE_ADDRESS BaseAddress[6];
  /* 0x00a8 */ struct DEBUG_MEMORY_REQUIREMENTS Memory;
  /* 0x00c8 */ unsigned long Dbg2TableIndex;
  /* 0x00cc */ unsigned short PortType;
  /* 0x00ce */ unsigned short PortSubtype;
  /* 0x00d0 */ void* OemData;
  /* 0x00d8 */ unsigned long OemDataLength;
  /* 0x00dc */ enum KD_NAMESPACE_ENUM NameSpace;
  /* 0x00e0 */ wchar_t* NameSpacePath;
  /* 0x00e8 */ unsigned long NameSpacePathLength;
  /* 0x00ec */ unsigned long TransportType;
  /* 0x00f0 */ struct _DEBUG_TRANSPORT_DATA TransportData;
  /* 0x00f8 */ struct _DEBUG_IOMMU_EFI_DATA EfiIoMmuData;
} DEBUG_DEVICE_DESCRIPTOR, *PDEBUG_DEVICE_DESCRIPTOR; /* size: 0x0108 */

