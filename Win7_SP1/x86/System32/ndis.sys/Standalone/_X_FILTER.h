typedef struct _NDIS_FRAME_TYPE_AND_OPEN
{
  /* 0x0000 */ unsigned short Type;
  /* 0x0004 */ struct _NDIS_OPEN_BLOCK* Open;
} NDIS_FRAME_TYPE_AND_OPEN, *PNDIS_FRAME_TYPE_AND_OPEN; /* size: 0x0008 */

typedef struct _NDIS_FRAME_TYPE_RECORD
{
  /* 0x0000 */ unsigned int NumEntries;
  /* 0x0004 */ struct _NDIS_FRAME_TYPE_AND_OPEN Entry[16];
} NDIS_FRAME_TYPE_RECORD, *PNDIS_FRAME_TYPE_RECORD; /* size: 0x0084 */

typedef struct _X_FILTER
{
  /* 0x0000 */ struct _NDIS_OPEN_BLOCK* OpenList;
  /* 0x0004 */ struct _NDIS_OPEN_BLOCK* NoFTypeOpenList;
  /* 0x0008 */ struct _NDIS_OPEN_BLOCK* FTypeOpenList;
  /* 0x000c */ struct _NDIS_FRAME_TYPE_RECORD FrameTypeRecord;
  /* 0x0090 */ struct _NDIS_RW_LOCK_EX* BindListLock;
  /* 0x0094 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x0098 */ unsigned int CombinedPacketFilter;
  /* 0x009c */ unsigned int OldCombinedPacketFilter;
  /* 0x00a0 */ unsigned int MiniportPacketFilter;
  /* 0x00a4 */ unsigned int NumOpens;
  /* 0x00a8 */ unsigned int NumNoETypeOpens;
  /* 0x00ac */ struct _NDIS_OPEN_BLOCK* MCastSet;
  /* 0x00b0 */ struct _NDIS_OPEN_BLOCK* SingleActiveOpen;
  /* 0x00b4 */ unsigned char AdapterAddress[6];
  union
  {
    struct
    {
      /* 0x00bc */ unsigned int MaxMulticastAddresses;
      /* 0x00c0 */ unsigned char* NextMCastAddressBuf[6];
      /* 0x00c4 */ unsigned char* NextOldMCastAddressBuf[6];
      /* 0x00c8 */ unsigned int NextNumAddresses;
      /* 0x00cc */ unsigned int NextOldNumAddresses;
      /* 0x00d0 */ unsigned char* MiniportMCastAddressBuf[6];
      /* 0x00d4 */ unsigned int MiniportNumAddresses;
      /* 0x00d8 */ unsigned char* MiniportOldMCastAddressBuf[6];
      /* 0x00dc */ unsigned int MiniportOldNumAddresses;
    }; /* size: 0x0024 */
    struct
    {
      /* 0x00bc */ unsigned long CombinedFunctionalAddress;
      /* 0x00c0 */ unsigned long MiniportFunctionalAddress;
      /* 0x00c4 */ unsigned long CombinedGroupAddress;
      /* 0x00c8 */ unsigned long MiniportGroupAddress;
      /* 0x00cc */ unsigned int CombinedGroupReferences;
      /* 0x00d0 */ unsigned long OldCombinedFunctionalAddress;
      /* 0x00d4 */ unsigned long OldCombinedGroupAddress;
      /* 0x00d8 */ unsigned int OldCombinedGroupReferences;
      /* 0x00dc */ long __PADDING__[1];
    }; /* size: 0x0024 */
  }; /* size: 0x0024 */
} X_FILTER, *PX_FILTER; /* size: 0x00e0 */

