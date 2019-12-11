typedef struct _NDIS_FRAME_TYPE_AND_OPEN
{
  /* 0x0000 */ unsigned short Type;
  /* 0x0008 */ struct _NDIS_OPEN_BLOCK* Open;
} NDIS_FRAME_TYPE_AND_OPEN, *PNDIS_FRAME_TYPE_AND_OPEN; /* size: 0x0010 */

typedef struct _NDIS_FRAME_TYPE_RECORD
{
  /* 0x0000 */ unsigned int NumEntries;
  /* 0x0008 */ struct _NDIS_FRAME_TYPE_AND_OPEN Entry[16];
} NDIS_FRAME_TYPE_RECORD, *PNDIS_FRAME_TYPE_RECORD; /* size: 0x0108 */

typedef struct _X_FILTER
{
  /* 0x0000 */ struct _NDIS_OPEN_BLOCK* OpenList;
  /* 0x0008 */ struct _NDIS_OPEN_BLOCK* NoFTypeOpenList;
  /* 0x0010 */ struct _NDIS_OPEN_BLOCK* FTypeOpenList;
  /* 0x0018 */ struct _NDIS_FRAME_TYPE_RECORD FrameTypeRecord;
  /* 0x0120 */ struct _NDIS_RW_LOCK_EX* BindListLock;
  /* 0x0128 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x0130 */ unsigned int CombinedPacketFilter;
  /* 0x0134 */ unsigned int OldCombinedPacketFilter;
  /* 0x0138 */ unsigned int MiniportPacketFilter;
  /* 0x013c */ unsigned int NumOpens;
  /* 0x0140 */ unsigned int NumNoETypeOpens;
  /* 0x0148 */ struct _NDIS_OPEN_BLOCK* SingleActiveOpen;
  /* 0x0150 */ unsigned char AdapterAddress[6];
  /* 0x0158 */ unsigned int MaxMulticastAddresses;
  /* 0x0160 */ unsigned char* NextMCastAddressBuf[6];
  /* 0x0168 */ unsigned char* NextOldMCastAddressBuf[6];
  /* 0x0170 */ unsigned int NextNumAddresses;
  /* 0x0174 */ unsigned int NextOldNumAddresses;
  /* 0x0178 */ unsigned char* MiniportMCastAddressBuf[6];
  /* 0x0180 */ unsigned int MiniportNumAddresses;
  /* 0x0188 */ unsigned char* MiniportOldMCastAddressBuf[6];
  /* 0x0190 */ unsigned int MiniportOldNumAddresses;
  /* 0x0194 */ long __PADDING__[1];
} X_FILTER, *PX_FILTER; /* size: 0x0198 */

