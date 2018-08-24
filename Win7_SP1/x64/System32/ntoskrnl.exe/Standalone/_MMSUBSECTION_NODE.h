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

typedef struct _MMSUBSECTION_NODE
{
  union // _TAG_UNNAMED_8
  {
    union
    {
      /* 0x0000 */ unsigned long LongFlags;
      /* 0x0000 */ struct _MMSUBSECTION_FLAGS SubsectionFlags;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
  /* 0x0004 */ unsigned long StartingSector;
  /* 0x0008 */ unsigned long NumberOfFullSectors;
  union // _TAG_UNNAMED_9
  {
    union
    {
      /* 0x0010 */ __int64 Balance : 2; /* bit position: 0 */
      /* 0x0010 */ struct _MMSUBSECTION_NODE* Parent;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u1;
  /* 0x0018 */ struct _MMSUBSECTION_NODE* LeftChild;
  /* 0x0020 */ struct _MMSUBSECTION_NODE* RightChild;
} MMSUBSECTION_NODE, *PMMSUBSECTION_NODE; /* size: 0x0028 */

