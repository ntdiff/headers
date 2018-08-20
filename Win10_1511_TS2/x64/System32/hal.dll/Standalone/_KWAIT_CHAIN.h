typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _KWAIT_CHAIN
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY Head;
} KWAIT_CHAIN, *PKWAIT_CHAIN; /* size: 0x0008 */

