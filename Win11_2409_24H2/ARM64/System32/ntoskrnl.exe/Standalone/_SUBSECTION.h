typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0008 */

typedef union _MMSUBSECTION_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long SubsectionAccessed : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Protection : 5; /* bit position: 1 */
      /* 0x0000 */ unsigned long StartingSector4132 : 10; /* bit position: 6 */
      /* 0x0000 */ unsigned long SubsectionStatic : 1; /* bit position: 16 */
      /* 0x0000 */ unsigned long GlobalMemory : 1; /* bit position: 17 */
      /* 0x0000 */ unsigned long Spare : 1; /* bit position: 18 */
      /* 0x0000 */ unsigned long OnDereferenceList : 1; /* bit position: 19 */
      /* 0x0000 */ unsigned long SectorEndOffset : 12; /* bit position: 20 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long EntireField;
  }; /* size: 0x0004 */
} MMSUBSECTION_FLAGS, *PMMSUBSECTION_FLAGS; /* size: 0x0004 */

typedef struct _MI_SUBSECTION_ENTRY1
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long CrossPartitionReferences : 30; /* bit position: 0 */
    /* 0x0000 */ unsigned long SubsectionMappedLarge : 2; /* bit position: 30 */
  }; /* bitfield */
} MI_SUBSECTION_ENTRY1, *PMI_SUBSECTION_ENTRY1; /* size: 0x0004 */

typedef struct _SUBSECTION
{
  /* 0x0000 */ struct _CONTROL_AREA* ControlArea;
  /* 0x0008 */ struct _MMPTE* SubsectionBase;
  /* 0x0010 */ struct _SUBSECTION* NextSubsection;
  union
  {
    /* 0x0018 */ struct _RTL_AVL_TREE GlobalPerSessionHead;
    /* 0x0018 */ struct _MI_CONTROL_AREA_WAIT_BLOCK* CreationWaitList;
  }; /* size: 0x0008 */
  /* 0x0020 */ union _MMSUBSECTION_FLAGS SubsectionFlags;
  /* 0x0024 */ unsigned long StartingSector;
  /* 0x0028 */ unsigned long NumberOfFullSectors;
  /* 0x002c */ unsigned long PtesInSubsection;
  union
  {
    union
    {
      /* 0x0030 */ struct _MI_SUBSECTION_ENTRY1 e1;
      /* 0x0030 */ unsigned long EntireField;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  struct /* bitfield */
  {
    /* 0x0034 */ unsigned long UnusedPtes : 30; /* bit position: 0 */
    /* 0x0034 */ unsigned long ExtentQueryNeeded : 1; /* bit position: 30 */
    /* 0x0034 */ unsigned long Spare : 1; /* bit position: 31 */
  }; /* bitfield */
} SUBSECTION, *PSUBSECTION; /* size: 0x0038 */

