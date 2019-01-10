typedef union _SLIST_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Alignment;
      /* 0x0008 */ unsigned __int64 Region;
    }; /* size: 0x0010 */
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 Reserved : 4; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ HeaderX64;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _MMPAGING_FILE
{
  /* 0x0000 */ unsigned __int64 Size;
  /* 0x0008 */ unsigned __int64 MaximumSize;
  /* 0x0010 */ unsigned __int64 MinimumSize;
  /* 0x0018 */ unsigned __int64 FreeSpace;
  /* 0x0020 */ unsigned __int64 PeakUsage;
  /* 0x0028 */ unsigned __int64 HighestPage;
  /* 0x0030 */ unsigned __int64 FreeReservationSpace;
  /* 0x0038 */ unsigned __int64 LargestReserveCluster;
  /* 0x0040 */ struct _FILE_OBJECT* File;
  /* 0x0048 */ struct _MMMOD_WRITER_MDL_ENTRY* Entry[2];
  /* 0x0060 */ union _SLIST_HEADER PfnsToFree;
  /* 0x0070 */ struct _UNICODE_STRING PageFileName;
  /* 0x0080 */ struct _MI_PAGING_FILE_SPACE_BITMAPS* Bitmaps;
  /* 0x0088 */ unsigned long AllocationBitmapHint;
  /* 0x008c */ unsigned long ReservationBitmapHint;
  /* 0x0090 */ unsigned long LargestNonReservedClusterSize;
  /* 0x0094 */ unsigned long RefreshClusterSize;
  /* 0x0098 */ unsigned long LastRefreshClusterSize;
  /* 0x009c */ unsigned long ReservedClusterSizeAggregate;
  /* 0x00a0 */ unsigned long ToBeEvictedCount;
  /* 0x00a4 */ unsigned long HybridPriority;
  struct /* bitfield */
  {
    /* 0x00a8 */ unsigned short PageFileNumber : 4; /* bit position: 0 */
    /* 0x00a8 */ unsigned short BootPartition : 1; /* bit position: 4 */
    /* 0x00a8 */ unsigned short WsSwapPagefile : 1; /* bit position: 5 */
    /* 0x00a8 */ unsigned short NoReservations : 1; /* bit position: 6 */
    /* 0x00a8 */ unsigned short Spare0 : 9; /* bit position: 7 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x00aa */ unsigned char AdriftMdls : 1; /* bit position: 0 */
    /* 0x00aa */ unsigned char Spare1 : 7; /* bit position: 1 */
  }; /* bitfield */
  /* 0x00ab */ unsigned char Spare2 : 8; /* bit position: 0 */
  /* 0x00ac */ unsigned long PageHashPages;
  /* 0x00b0 */ unsigned long PageHashPagesPeak;
  /* 0x00b8 */ unsigned long* PageHash;
  /* 0x00c0 */ void* FileHandle;
  /* 0x00c8 */ unsigned __int64 Lock;
  /* 0x00d0 */ struct _ETHREAD* LockOwner;
  /* 0x00d8 */ long __PADDING__[2];
} MMPAGING_FILE, *PMMPAGING_FILE; /* size: 0x00e0 */

