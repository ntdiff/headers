typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _CHILD_LIST
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0004 */ unsigned long List;
} CHILD_LIST, *PCHILD_LIST; /* size: 0x0008 */

typedef struct _CM_KEY_REFERENCE
{
  /* 0x0000 */ unsigned long KeyCell;
  /* 0x0004 */ struct _HHIVE* KeyHive;
} CM_KEY_REFERENCE, *PCM_KEY_REFERENCE; /* size: 0x0008 */

typedef struct _CM_KEY_NODE
{
  /* 0x0000 */ unsigned short Signature;
  /* 0x0002 */ unsigned short Flags;
  /* 0x0004 */ union _LARGE_INTEGER LastWriteTime;
  /* 0x000c */ unsigned char AccessBits;
  struct /* bitfield */
  {
    /* 0x000d */ unsigned char LayerSemantics : 2; /* bit position: 0 */
    /* 0x000d */ unsigned char Spare1 : 5; /* bit position: 2 */
    /* 0x000d */ unsigned char InheritClass : 1; /* bit position: 7 */
  }; /* bitfield */
  /* 0x000e */ unsigned short Spare2;
  /* 0x0010 */ unsigned long Parent;
  /* 0x0014 */ unsigned long SubKeyCounts[2];
  union
  {
    struct
    {
      /* 0x001c */ unsigned long SubKeyLists[2];
      /* 0x0024 */ struct _CHILD_LIST ValueList;
    }; /* size: 0x0010 */
    /* 0x001c */ struct _CM_KEY_REFERENCE ChildHiveReference;
  }; /* size: 0x0010 */
  /* 0x002c */ unsigned long Security;
  /* 0x0030 */ unsigned long Class;
  struct /* bitfield */
  {
    /* 0x0034 */ unsigned long MaxNameLen : 16; /* bit position: 0 */
    /* 0x0034 */ unsigned long UserFlags : 4; /* bit position: 16 */
    /* 0x0034 */ unsigned long VirtControlFlags : 4; /* bit position: 20 */
    /* 0x0034 */ unsigned long Debug : 8; /* bit position: 24 */
  }; /* bitfield */
  /* 0x0038 */ unsigned long MaxClassLen;
  /* 0x003c */ unsigned long MaxValueNameLen;
  /* 0x0040 */ unsigned long MaxValueDataLen;
  /* 0x0044 */ unsigned long WorkVar;
  /* 0x0048 */ unsigned short NameLength;
  /* 0x004a */ unsigned short ClassLength;
  /* 0x004c */ wchar_t Name[1];
  /* 0x004e */ char __PADDING__[2];
} CM_KEY_NODE, *PCM_KEY_NODE; /* size: 0x0050 */

