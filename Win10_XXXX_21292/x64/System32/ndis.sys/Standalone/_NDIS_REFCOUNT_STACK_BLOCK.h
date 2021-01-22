typedef struct _NDIS_REFCOUNT_STACK_ENTRY
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Stack : 26; /* bit position: 0 */
    /* 0x0000 */ unsigned long RefCount : 6; /* bit position: 26 */
  }; /* bitfield */
} NDIS_REFCOUNT_STACK_ENTRY, *PNDIS_REFCOUNT_STACK_ENTRY; /* size: 0x0004 */

typedef struct _NDIS_REFCOUNT_STACK_BLOCK
{
  /* 0x0000 */ struct _NDIS_REFCOUNT_STACK_BLOCK* Next;
  /* 0x0008 */ struct _NDIS_REFCOUNT_STACK_ENTRY References[6];
  /* 0x0020 */ struct _NDIS_REFCOUNT_STACK_ENTRY Dereferences[6];
} NDIS_REFCOUNT_STACK_BLOCK, *PNDIS_REFCOUNT_STACK_BLOCK; /* size: 0x0038 */

