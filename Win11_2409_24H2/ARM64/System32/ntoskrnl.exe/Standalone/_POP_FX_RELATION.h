typedef enum _POP_FX_RELATION_TYPE
{
  PopFxRelationTypeDevice = 0,
  PopFxRelationTypeComponent = 1,
  PopFxRelationTypeMax = 2,
} POP_FX_RELATION_TYPE, *PPOP_FX_RELATION_TYPE;

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _POP_FX_RELATION
{
  /* 0x0000 */ enum _POP_FX_RELATION_TYPE RelationType;
  /* 0x0008 */ unsigned __int64 RelationLock;
  union
  {
    union
    {
      struct /* bitfield */
      {
        /* 0x0010 */ unsigned long Activating : 1; /* bit position: 0 */
        /* 0x0010 */ unsigned long Activated : 1; /* bit position: 1 */
        /* 0x0010 */ unsigned long ParentLinkValid : 1; /* bit position: 2 */
        /* 0x0010 */ unsigned long ChildLinkValid : 1; /* bit position: 3 */
        /* 0x0010 */ unsigned long ShallowestNonBlockingState : 2; /* bit position: 4 */
        /* 0x0010 */ unsigned long Reserved : 26; /* bit position: 6 */
      }; /* bitfield */
      /* 0x0010 */ unsigned long AsUlong;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ Flags;
  /* 0x0018 */ struct _POP_FX_COMPONENT* ParentComponent;
  /* 0x0020 */ struct _LIST_ENTRY ParentLink;
  /* 0x0030 */ unsigned __int64* ChildRelationLock;
  /* 0x0038 */ struct _LIST_ENTRY ChildLink;
} POP_FX_RELATION, *PPOP_FX_RELATION; /* size: 0x0048 */

