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
      /* 0x0000 */ unsigned __int64 SpinLock;
      /* 0x0008 */ void* Context;
    }; /* size: 0x0010 */
    /* 0x0000 */ unsigned char Reserved[16];
  }; /* size: 0x0010 */
  /* 0x0010 */ union _NDIS_RW_LOCK_REFCOUNT RefCount[64];
} NDIS_RW_LOCK, *PNDIS_RW_LOCK; /* size: 0x0410 */

typedef struct _X_FILTER
{
  /* 0x0000 */ struct _NDIS_OPEN_BLOCK* OpenList;
  /* 0x0008 */ struct _NDIS_OPEN_BLOCK* NoFTypeOpenList;
  /* 0x0010 */ struct _NDIS_OPEN_BLOCK* FTypeOpenList;
  /* 0x0018 */ struct _NDIS_FRAME_TYPE_RECORD FrameTypeRecord;
  /* 0x0120 */ struct _NDIS_RW_LOCK BindListLock;
  /* 0x0530 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x0538 */ unsigned int CombinedPacketFilter;
  /* 0x053c */ unsigned int OldCombinedPacketFilter;
  /* 0x0540 */ unsigned int MiniportPacketFilter;
  /* 0x0544 */ unsigned int NumOpens;
  /* 0x0548 */ unsigned int NumNoETypeOpens;
  /* 0x0550 */ struct _NDIS_OPEN_BLOCK* MCastSet;
  /* 0x0558 */ struct _NDIS_OPEN_BLOCK* SingleActiveOpen;
  /* 0x0560 */ unsigned char AdapterAddress[6];
  union
  {
    struct
    {
      /* 0x0568 */ unsigned int MaxMulticastAddresses;
      /* 0x0570 */ unsigned char* NextMCastAddressBuf[6];
      /* 0x0578 */ unsigned char* NextOldMCastAddressBuf[6];
      /* 0x0580 */ unsigned int NextNumAddresses;
      /* 0x0584 */ unsigned int NextOldNumAddresses;
      /* 0x0588 */ unsigned char* MiniportMCastAddressBuf[6];
      /* 0x0590 */ unsigned int MiniportNumAddresses;
      /* 0x0598 */ unsigned char* MiniportOldMCastAddressBuf[6];
      /* 0x05a0 */ unsigned int MiniportOldNumAddresses;
    }; /* size: 0x0034 */
    struct
    {
      /* 0x0568 */ unsigned long CombinedFunctionalAddress;
      /* 0x056c */ unsigned long MiniportFunctionalAddress;
      /* 0x0570 */ unsigned long CombinedGroupAddress;
      /* 0x0574 */ unsigned long MiniportGroupAddress;
      /* 0x0578 */ unsigned int CombinedGroupReferences;
      /* 0x057c */ unsigned long OldCombinedFunctionalAddress;
      /* 0x0580 */ unsigned long OldCombinedGroupAddress;
      /* 0x0584 */ unsigned int OldCombinedGroupReferences;
      /* 0x0588 */ long __PADDING__[8];
    }; /* size: 0x0040 */
  }; /* size: 0x0040 */
} X_FILTER, *PX_FILTER; /* size: 0x05a8 */

