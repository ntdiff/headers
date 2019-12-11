typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef union _NET_LUID_LH
{
  union
  {
    /* 0x0000 */ unsigned __int64 Value;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Reserved : 24; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 NetLuidIndex : 24; /* bit position: 24 */
        /* 0x0000 */ unsigned __int64 IfType : 16; /* bit position: 48 */
      }; /* bitfield */
    } /* size: 0x0008 */ Info;
  }; /* size: 0x0008 */
} NET_LUID_LH, *PNET_LUID_LH; /* size: 0x0008 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _IF_COUNTED_STRING_LH
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ wchar_t String[257];
} IF_COUNTED_STRING_LH, *PIF_COUNTED_STRING_LH; /* size: 0x0204 */

typedef enum _NDIS_NSI_COMPARTMENT_TYPE
{
  NDIS_NSI_COMPARTMENT_TYPE_UNSPECIFIED = 0,
  NDIS_NSI_COMPARTMENT_TYPE_NATIVE = 1,
  NDIS_NSI_COMPARTMENT_TYPE_ROUTING_DOMAIN = 2,
} NDIS_NSI_COMPARTMENT_TYPE, *PNDIS_NSI_COMPARTMENT_TYPE;

typedef struct _NDIS_NSI_COMPARTMENT_RW
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0008 */ union _NET_LUID_LH LoopbackIfLuid;
  /* 0x0010 */ struct _GUID LoopbackIfNetworkGuid;
  /* 0x0020 */ struct _GUID LoopbackIfInterfaceGuid;
  /* 0x0030 */ struct _IF_COUNTED_STRING_LH LoopbackIfDescr;
  /* 0x0234 */ struct _IF_COUNTED_STRING_LH LoopbackIfAlias;
  /* 0x0438 */ struct _GUID CompartmentGuid;
  /* 0x0448 */ struct _IF_COUNTED_STRING_LH CompartmentDescr;
  /* 0x064c */ enum _NDIS_NSI_COMPARTMENT_TYPE CompartmentType;
  /* 0x0650 */ unsigned long Flags;
  /* 0x0654 */ long __PADDING__[1];
} NDIS_NSI_COMPARTMENT_RW, *PNDIS_NSI_COMPARTMENT_RW; /* size: 0x0658 */

typedef struct _NDIS_IF_COMPARTMENT_BLOCK
{
  /* 0x0000 */ struct _LIST_ENTRY Link;
  /* 0x0008 */ unsigned int CompartmentId;
  /* 0x000c */ struct _LIST_ENTRY NetworkLink;
  /* 0x0014 */ unsigned long Flags;
  /* 0x0018 */ long Ref;
  /* 0x001c */ long UserRef;
  /* 0x0020 */ struct _NDIS_IF_NETWORK_BLOCK* LoopbackNetwork;
  /* 0x0028 */ struct _NDIS_NSI_COMPARTMENT_RW LoopbackInfo;
  /* 0x0680 */ struct _NDIS_IF_BLOCK* LoopbackIf;
  /* 0x0684 */ struct _KEVENT* AsyncEvent;
} NDIS_IF_COMPARTMENT_BLOCK, *PNDIS_IF_COMPARTMENT_BLOCK; /* size: 0x0688 */

