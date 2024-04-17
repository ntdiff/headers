typedef struct _MEMORY_FRAME_INFORMATION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 UseDescription : 4; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 ListDescription : 3; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 Reserved0 : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned __int64 Pinned : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 DontUse : 48; /* bit position: 9 */
    /* 0x0000 */ unsigned __int64 Priority : 3; /* bit position: 57 */
    /* 0x0000 */ unsigned __int64 Reserved : 4; /* bit position: 60 */
  }; /* bitfield */
} MEMORY_FRAME_INFORMATION, *PMEMORY_FRAME_INFORMATION; /* size: 0x0008 */

typedef struct _FILEOFFSET_INFORMATION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 DontUse : 9; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Offset : 48; /* bit position: 9 */
    /* 0x0000 */ unsigned __int64 Reserved : 7; /* bit position: 57 */
  }; /* bitfield */
} FILEOFFSET_INFORMATION, *PFILEOFFSET_INFORMATION; /* size: 0x0008 */

typedef struct _PAGEDIR_INFORMATION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 DontUse : 9; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 PageDirectoryBase : 48; /* bit position: 9 */
    /* 0x0000 */ unsigned __int64 Reserved : 7; /* bit position: 57 */
  }; /* bitfield */
} PAGEDIR_INFORMATION, *PPAGEDIR_INFORMATION; /* size: 0x0008 */

typedef struct _UNIQUE_PROCESS_INFORMATION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 DontUse : 9; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 UniqueProcessKey : 48; /* bit position: 9 */
    /* 0x0000 */ unsigned __int64 Reserved : 7; /* bit position: 57 */
  }; /* bitfield */
} UNIQUE_PROCESS_INFORMATION, *PUNIQUE_PROCESS_INFORMATION; /* size: 0x0008 */

typedef struct _MMPFN_IDENTITY
{
  union
  {
    union
    {
      /* 0x0000 */ struct _MEMORY_FRAME_INFORMATION e1;
      /* 0x0000 */ struct _FILEOFFSET_INFORMATION e2;
      /* 0x0000 */ struct _PAGEDIR_INFORMATION e3;
      /* 0x0000 */ struct _UNIQUE_PROCESS_INFORMATION e4;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u1;
  /* 0x0008 */ unsigned long PageFrameIndex;
  union
  {
    union
    {
      struct
      {
        struct /* bitfield */
        {
          /* 0x000c */ unsigned long Image : 1; /* bit position: 0 */
          /* 0x000c */ unsigned long Mismatch : 1; /* bit position: 1 */
        }; /* bitfield */
      } /* size: 0x0004 */ e1;
      struct
      {
        /* 0x000c */ unsigned long CombinedPage : 1; /* bit position: 0 */
      } /* size: 0x0004 */ e2;
      /* 0x000c */ void* FileObject;
      /* 0x000c */ void* UniqueFileObjectKey;
      /* 0x000c */ void* ProtoPteAddress;
      /* 0x000c */ void* VirtualAddress;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u2;
} MMPFN_IDENTITY, *PMMPFN_IDENTITY; /* size: 0x0010 */

