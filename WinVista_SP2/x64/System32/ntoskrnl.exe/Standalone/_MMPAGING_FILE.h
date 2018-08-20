typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef union _SLIST_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Alignment;
      /* 0x0008 */ unsigned __int64 Region;
    }; /* size: 0x0010 */
    struct // _TAG_UNNAMED_37
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 9; /* bit position: 16 */
        /* 0x0000 */ unsigned __int64 NextEntry : 39; /* bit position: 25 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 HeaderType : 1; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 Init : 1; /* bit position: 1 */
        /* 0x0008 */ unsigned __int64 Reserved : 59; /* bit position: 2 */
        /* 0x0008 */ unsigned __int64 Region : 3; /* bit position: 61 */
      }; /* bitfield */
    } /* size: 0x0010 */ Header8;
    struct // _TAG_UNNAMED_38
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 HeaderType : 1; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 Init : 1; /* bit position: 1 */
        /* 0x0008 */ unsigned __int64 Reserved : 2; /* bit position: 2 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ Header16;
    struct // _TAG_UNNAMED_39
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 HeaderType : 1; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 Reserved : 3; /* bit position: 1 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ HeaderX64;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

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
  /* 0x0060 */ unsigned long BitmapHint;
  /* 0x0064 */ unsigned long LastAllocationSize;
  struct /* bitfield */
  {
    /* 0x0068 */ unsigned short PageFileNumber : 4; /* bit position: 0 */
    /* 0x0068 */ unsigned short BootPartition : 1; /* bit position: 4 */
    /* 0x0068 */ unsigned short Spare0 : 11; /* bit position: 5 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x006a */ unsigned short AdriftMdls : 1; /* bit position: 0 */
    /* 0x006a */ unsigned short Spare1 : 15; /* bit position: 1 */
  }; /* bitfield */
  /* 0x0070 */ void* FileHandle;
  /* 0x0080 */ union _SLIST_HEADER AvailableList;
  /* 0x0090 */ union _SLIST_HEADER NeedProcessingList;
} MMPAGING_FILE, *PMMPAGING_FILE; /* size: 0x00a0 */

