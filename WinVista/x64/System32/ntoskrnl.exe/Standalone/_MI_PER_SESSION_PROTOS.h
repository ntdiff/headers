typedef struct _MI_PER_SESSION_PROTOS
{
  union // _TAG_UNNAMED_143
  {
    union
    {
      /* 0x0000 */ __int64 Balance : 2; /* bit position: 0 */
      /* 0x0000 */ struct _MMADDRESS_NODE* Parent;
      /* 0x0000 */ struct _MI_PER_SESSION_PROTOS* NextToFree;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u1;
  /* 0x0008 */ struct _MMADDRESS_NODE* LeftChild;
  /* 0x0010 */ struct _MMADDRESS_NODE* RightChild;
  union
  {
    /* 0x0018 */ unsigned long SessionId;
    /* 0x0018 */ unsigned __int64 StartingVpn;
    /* 0x0018 */ struct _SUBSECTION* Subsection;
  }; /* size: 0x0008 */
  /* 0x0020 */ unsigned __int64 EndingVpn;
  /* 0x0028 */ struct _MMPTE* SubsectionBase;
  union // _TAG_UNNAMED_144
  {
    union
    {
      /* 0x0030 */ unsigned long ReferenceCount;
      /* 0x0030 */ unsigned long NumberOfPtesToFree;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u2;
  /* 0x0034 */ long __PADDING__[1];
} MI_PER_SESSION_PROTOS, *PMI_PER_SESSION_PROTOS; /* size: 0x0038 */

