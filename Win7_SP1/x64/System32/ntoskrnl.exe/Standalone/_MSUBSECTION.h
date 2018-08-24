typedef struct _MMSUBSECTION_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned short SubsectionAccessed : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned short Protection : 5; /* bit position: 1 */
    /* 0x0000 */ unsigned short StartingSector4132 : 10; /* bit position: 6 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x0002 */ unsigned short SubsectionStatic : 1; /* bit position: 0 */
    /* 0x0002 */ unsigned short GlobalMemory : 1; /* bit position: 1 */
    /* 0x0002 */ unsigned short DirtyPages : 1; /* bit position: 2 */
    /* 0x0002 */ unsigned short Spare : 1; /* bit position: 3 */
    /* 0x0002 */ unsigned short SectorEndOffset : 12; /* bit position: 4 */
  }; /* bitfield */
} MMSUBSECTION_FLAGS, *PMMSUBSECTION_FLAGS; /* size: 0x0004 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _MSUBSECTION
{
  /* 0x0000 */ struct _CONTROL_AREA* ControlArea;
  /* 0x0008 */ struct _MMPTE* SubsectionBase;
  union
  {
    /* 0x0010 */ struct _SUBSECTION* NextSubsection;
    /* 0x0010 */ struct _MSUBSECTION* NextMappedSubsection;
  }; /* size: 0x0008 */
  /* 0x0018 */ unsigned long PtesInSubsection;
  union
  {
    /* 0x0020 */ unsigned long UnusedPtes;
    /* 0x0020 */ struct _MM_AVL_TABLE* GlobalPerSessionHead;
  }; /* size: 0x0008 */
  union // _TAG_UNNAMED_8
  {
    union
    {
      /* 0x0028 */ unsigned long LongFlags;
      /* 0x0028 */ struct _MMSUBSECTION_FLAGS SubsectionFlags;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
  /* 0x002c */ unsigned long StartingSector;
  /* 0x0030 */ unsigned long NumberOfFullSectors;
  union // _TAG_UNNAMED_9
  {
    union
    {
      /* 0x0038 */ __int64 Balance : 2; /* bit position: 0 */
      /* 0x0038 */ struct _MMSUBSECTION_NODE* Parent;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u1;
  /* 0x0040 */ struct _MMSUBSECTION_NODE* LeftChild;
  /* 0x0048 */ struct _MMSUBSECTION_NODE* RightChild;
  /* 0x0050 */ struct _LIST_ENTRY DereferenceList;
  /* 0x0060 */ unsigned __int64 NumberOfMappedViews;
} MSUBSECTION, *PMSUBSECTION; /* size: 0x0068 */

