typedef struct _NDIS_REFCOUNT_STACK_ENTRY
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Stack : 26; /* bit position: 0 */
    /* 0x0000 */ unsigned long RefCount : 6; /* bit position: 26 */
  }; /* bitfield */
} NDIS_REFCOUNT_STACK_ENTRY, *PNDIS_REFCOUNT_STACK_ENTRY; /* size: 0x0004 */

