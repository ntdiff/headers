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
  /* 0x0058 */ struct _UNICODE_STRING PageFileName;
  /* 0x0068 */ struct _MI_PAGING_FILE_SPACE_BITMAPS* Bitmaps;
  /* 0x0070 */ unsigned long AllocationBitmapHint;
  /* 0x0074 */ unsigned long ReservationBitmapHint;
  /* 0x0078 */ unsigned long LargestNonReservedClusterSize;
  /* 0x007c */ unsigned long RefreshClusterSize;
  /* 0x0080 */ unsigned long LastRefreshClusterSize;
  /* 0x0084 */ unsigned long ReservedClusterSizeAggregate;
  /* 0x0088 */ unsigned long ToBeEvictedCount;
  struct /* bitfield */
  {
    /* 0x008c */ unsigned short PageFileNumber : 4; /* bit position: 0 */
    /* 0x008c */ unsigned short BootPartition : 1; /* bit position: 4 */
    /* 0x008c */ unsigned short WsSwapPagefile : 1; /* bit position: 5 */
    /* 0x008c */ unsigned short NoReservations : 1; /* bit position: 6 */
    /* 0x008c */ unsigned short Spare0 : 9; /* bit position: 7 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x008e */ unsigned char AdriftMdls : 1; /* bit position: 0 */
    /* 0x008e */ unsigned char Spare1 : 7; /* bit position: 1 */
  }; /* bitfield */
  /* 0x008f */ unsigned char Spare2 : 8; /* bit position: 0 */
  /* 0x0090 */ void* FileHandle;
  /* 0x0098 */ unsigned __int64 Lock;
  /* 0x00a0 */ struct _ETHREAD* LockOwner;
} MMPAGING_FILE, *PMMPAGING_FILE; /* size: 0x00a8 */

