typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _KAPC_STATE
{
  /* 0x0000 */ struct _LIST_ENTRY ApcListHead[2];
  /* 0x0020 */ struct _KPROCESS* Process;
  union
  {
    /* 0x0028 */ unsigned char InProgressFlags;
    struct /* bitfield */
    {
      /* 0x0028 */ unsigned char KernelApcInProgress : 1; /* bit position: 0 */
      /* 0x0028 */ unsigned char SpecialApcInProgress : 1; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x0029 */ unsigned char KernelApcPending;
  union
  {
    /* 0x002a */ unsigned char UserApcPendingAll;
    struct /* bitfield */
    {
      /* 0x002a */ unsigned char SpecialUserApcPending : 1; /* bit position: 0 */
      /* 0x002a */ unsigned char UserApcPending : 1; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x002b */ char __PADDING__[5];
} KAPC_STATE, *PKAPC_STATE; /* size: 0x0030 */

