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

typedef union _NDIS_RW_LOCK_REFCOUNT
{
  union
  {
    /* 0x0000 */ unsigned int RefCount;
    /* 0x0000 */ unsigned char cacheLine[16];
  }; /* size: 0x0010 */
} NDIS_RW_LOCK_REFCOUNT, *PNDIS_RW_LOCK_REFCOUNT; /* size: 0x0010 */

typedef struct _NDIS_RW_LOCK
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long SpinLock;
      /* 0x0004 */ void* Context;
    }; /* size: 0x0008 */
    /* 0x0000 */ unsigned char Reserved[16];
  }; /* size: 0x0010 */
  /* 0x0010 */ union _NDIS_RW_LOCK_REFCOUNT RefCount[32];
} NDIS_RW_LOCK, *PNDIS_RW_LOCK; /* size: 0x0210 */

typedef struct _X_FILTER
{
  /* 0x0000 */ struct _NDIS_OPEN_BLOCK* OpenList;
  /* 0x0004 */ struct _NDIS_OPEN_BLOCK* NoFTypeOpenList;
  /* 0x0008 */ struct _NDIS_OPEN_BLOCK* FTypeOpenList;
  /* 0x000c */ struct _NDIS_FRAME_TYPE_RECORD FrameTypeRecord;
  /* 0x0090 */ struct _NDIS_RW_LOCK BindListLock;
  /* 0x02a0 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x02a4 */ unsigned int CombinedPacketFilter;
  /* 0x02a8 */ unsigned int OldCombinedPacketFilter;
  /* 0x02ac */ unsigned int MiniportPacketFilter;
  /* 0x02b0 */ unsigned int NumOpens;
  /* 0x02b4 */ unsigned int NumNoETypeOpens;
  /* 0x02b8 */ struct _NDIS_OPEN_BLOCK* MCastSet;
  /* 0x02bc */ struct _NDIS_OPEN_BLOCK* SingleActiveOpen;
  /* 0x02c0 */ unsigned char AdapterAddress[6];
  union
  {
    struct
    {
      /* 0x02c8 */ unsigned int MaxMulticastAddresses;
      /* 0x02cc */ unsigned char* NextMCastAddressBuf[6];
      /* 0x02d0 */ unsigned char* NextOldMCastAddressBuf[6];
      /* 0x02d4 */ unsigned int NextNumAddresses;
      /* 0x02d8 */ unsigned int NextOldNumAddresses;
      /* 0x02dc */ unsigned char* MiniportMCastAddressBuf[6];
      /* 0x02e0 */ unsigned int MiniportNumAddresses;
      /* 0x02e4 */ unsigned char* MiniportOldMCastAddressBuf[6];
      /* 0x02e8 */ unsigned int MiniportOldNumAddresses;
    }; /* size: 0x0024 */
    struct
    {
      /* 0x02c8 */ unsigned long CombinedFunctionalAddress;
      /* 0x02cc */ unsigned long MiniportFunctionalAddress;
      /* 0x02d0 */ unsigned long CombinedGroupAddress;
      /* 0x02d4 */ unsigned long MiniportGroupAddress;
      /* 0x02d8 */ unsigned int CombinedGroupReferences;
      /* 0x02dc */ unsigned long OldCombinedFunctionalAddress;
      /* 0x02e0 */ unsigned long OldCombinedGroupAddress;
      /* 0x02e4 */ unsigned int OldCombinedGroupReferences;
      /* 0x02e8 */ long __PADDING__[1];
    }; /* size: 0x0024 */
  }; /* size: 0x0024 */
} X_FILTER, *PX_FILTER; /* size: 0x02ec */

