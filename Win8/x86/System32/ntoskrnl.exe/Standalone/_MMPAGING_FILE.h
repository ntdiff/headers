typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _MMPAGING_FILE
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long MaximumSize;
  /* 0x0008 */ unsigned long MinimumSize;
  /* 0x000c */ unsigned long FreeSpace;
  /* 0x0010 */ unsigned long PeakUsage;
  /* 0x0014 */ unsigned long HighestPage;
  /* 0x0018 */ unsigned long FreeReservationSpace;
  /* 0x001c */ unsigned long LargestReserveCluster;
  /* 0x0020 */ struct _FILE_OBJECT* File;
  /* 0x0024 */ struct _MMMOD_WRITER_MDL_ENTRY* Entry[2];
  /* 0x002c */ struct _UNICODE_STRING PageFileName;
  /* 0x0034 */ struct _MI_PAGING_FILE_SPACE_BITMAPS* Bitmaps;
  /* 0x0038 */ unsigned long AllocationBitmapHint;
  /* 0x003c */ unsigned long ReservationBitmapHint;
  /* 0x0040 */ unsigned long LargestNonReservedClusterSize;
  /* 0x0044 */ unsigned long RefreshClusterSize;
  /* 0x0048 */ unsigned long LastRefreshClusterSize;
  /* 0x004c */ unsigned long ReservedClusterSizeAggregate;
  /* 0x0050 */ unsigned long ToBeEvictedCount;
  struct /* bitfield */
  {
    /* 0x0054 */ unsigned short PageFileNumber : 4; /* bit position: 0 */
    /* 0x0054 */ unsigned short BootPartition : 1; /* bit position: 4 */
    /* 0x0054 */ unsigned short WsSwapPagefile : 1; /* bit position: 5 */
    /* 0x0054 */ unsigned short NoReservations : 1; /* bit position: 6 */
    /* 0x0054 */ unsigned short Spare0 : 9; /* bit position: 7 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x0056 */ unsigned char AdriftMdls : 1; /* bit position: 0 */
    /* 0x0056 */ unsigned char Spare1 : 7; /* bit position: 1 */
  }; /* bitfield */
  /* 0x0057 */ unsigned char Spare2 : 8; /* bit position: 0 */
  /* 0x0058 */ void* FileHandle;
  /* 0x005c */ unsigned long Lock;
  /* 0x0060 */ struct _ETHREAD* LockOwner;
} MMPAGING_FILE, *PMMPAGING_FILE; /* size: 0x0064 */

