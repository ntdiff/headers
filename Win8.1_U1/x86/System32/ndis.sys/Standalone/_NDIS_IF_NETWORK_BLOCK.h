typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _IF_COUNTED_STRING_LH
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ wchar_t String[257];
} IF_COUNTED_STRING_LH, *PIF_COUNTED_STRING_LH; /* size: 0x0204 */

typedef struct _NDIS_NSI_NETWORK_RW
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned int CompartmentId;
  /* 0x0008 */ unsigned long SiteId;
  /* 0x000c */ struct _IF_COUNTED_STRING_LH NetworkName;
} NDIS_NSI_NETWORK_RW, *PNDIS_NSI_NETWORK_RW; /* size: 0x0210 */

typedef struct _NDIS_IF_NETWORK_BLOCK
{
  /* 0x0000 */ struct _LIST_ENTRY Link;
  /* 0x0008 */ struct _LIST_ENTRY CompartmentLink;
  /* 0x0010 */ struct _GUID NetworkGuid;
  /* 0x0020 */ struct _NDIS_IF_COMPARTMENT_BLOCK* Compartment;
  /* 0x0024 */ struct _LIST_ENTRY InterfaceLink;
  /* 0x002c */ unsigned long Flags;
  /* 0x0030 */ long Ref;
  /* 0x0034 */ struct _NDIS_NSI_NETWORK_RW NetworkInfo;
  /* 0x0244 */ struct _KEVENT* AsyncEvent;
} NDIS_IF_NETWORK_BLOCK, *PNDIS_IF_NETWORK_BLOCK; /* size: 0x0248 */

