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
  /* 0x0030 */ struct _FILE_OBJECT* File;
  /* 0x0038 */ struct _MMMOD_WRITER_MDL_ENTRY* Entry[2];
  /* 0x0048 */ struct _UNICODE_STRING PageFileName;
  /* 0x0058 */ struct _RTL_BITMAP* volatile Bitmap;
  /* 0x0060 */ struct _RTL_BITMAP* volatile EvictStoreBitmap;
  /* 0x0068 */ unsigned long BitmapHint;
  /* 0x006c */ unsigned long LastAllocationSize;
  /* 0x0070 */ unsigned long ToBeEvictedCount;
  struct /* bitfield */
  {
    /* 0x0074 */ unsigned short PageFileNumber : 4; /* bit position: 0 */
    /* 0x0074 */ unsigned short BootPartition : 1; /* bit position: 4 */
    /* 0x0074 */ unsigned short Spare0 : 11; /* bit position: 5 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x0076 */ unsigned short AdriftMdls : 1; /* bit position: 0 */
    /* 0x0076 */ unsigned short Spare1 : 15; /* bit position: 1 */
  }; /* bitfield */
  /* 0x0078 */ void* FileHandle;
  /* 0x0080 */ unsigned __int64 Lock;
  /* 0x0088 */ struct _ETHREAD* LockOwner;
} MMPAGING_FILE, *PMMPAGING_FILE; /* size: 0x0090 */

