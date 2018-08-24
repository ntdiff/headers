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
  /* 0x0018 */ struct _FILE_OBJECT* File;
  /* 0x001c */ struct _MMMOD_WRITER_MDL_ENTRY* Entry[2];
  /* 0x0024 */ struct _UNICODE_STRING PageFileName;
  /* 0x002c */ struct _RTL_BITMAP* volatile Bitmap;
  /* 0x0030 */ struct _RTL_BITMAP* volatile EvictStoreBitmap;
  /* 0x0034 */ unsigned long BitmapHint;
  /* 0x0038 */ unsigned long LastAllocationSize;
  /* 0x003c */ unsigned long ToBeEvictedCount;
  struct /* bitfield */
  {
    /* 0x0040 */ unsigned short PageFileNumber : 4; /* bit position: 0 */
    /* 0x0040 */ unsigned short BootPartition : 1; /* bit position: 4 */
    /* 0x0040 */ unsigned short Spare0 : 11; /* bit position: 5 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x0042 */ unsigned short AdriftMdls : 1; /* bit position: 0 */
    /* 0x0042 */ unsigned short Spare1 : 15; /* bit position: 1 */
  }; /* bitfield */
  /* 0x0044 */ void* FileHandle;
  /* 0x0048 */ unsigned long Lock;
  /* 0x004c */ struct _ETHREAD* LockOwner;
} MMPAGING_FILE, *PMMPAGING_FILE; /* size: 0x0050 */

