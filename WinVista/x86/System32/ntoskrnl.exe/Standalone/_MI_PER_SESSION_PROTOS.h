typedef struct _MI_PER_SESSION_PROTOS
{
  union // _TAG_UNNAMED_146
  {
    union
    {
      /* 0x0000 */ long Balance : 2; /* bit position: 0 */
      /* 0x0000 */ struct _MMADDRESS_NODE* Parent;
      /* 0x0000 */ struct _MI_PER_SESSION_PROTOS* NextToFree;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  /* 0x0004 */ struct _MMADDRESS_NODE* LeftChild;
  /* 0x0008 */ struct _MMADDRESS_NODE* RightChild;
  union
  {
    /* 0x000c */ unsigned long SessionId;
    /* 0x000c */ unsigned long StartingVpn;
    /* 0x000c */ struct _SUBSECTION* Subsection;
  }; /* size: 0x0004 */
  /* 0x0010 */ unsigned long EndingVpn;
  /* 0x0014 */ struct _MMPTE* SubsectionBase;
  union // _TAG_UNNAMED_147
  {
    union
    {
      /* 0x0018 */ unsigned long ReferenceCount;
      /* 0x0018 */ unsigned long NumberOfPtesToFree;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u2;
} MI_PER_SESSION_PROTOS, *PMI_PER_SESSION_PROTOS; /* size: 0x001c */

