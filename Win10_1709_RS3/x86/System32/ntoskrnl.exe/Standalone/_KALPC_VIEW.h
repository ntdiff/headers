typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _KALPC_VIEW
{
  /* 0x0000 */ struct _LIST_ENTRY ViewListEntry;
  /* 0x0008 */ struct _KALPC_REGION* Region;
  /* 0x000c */ struct _ALPC_PORT* OwnerPort;
  /* 0x0010 */ struct _EPROCESS* OwnerProcess;
  /* 0x0014 */ void* Address;
  /* 0x0018 */ unsigned long Size;
  /* 0x001c */ void* SecureViewHandle;
  /* 0x0020 */ void* WriteAccessHandle;
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0024 */ unsigned long WriteAccess : 1; /* bit position: 0 */
        /* 0x0024 */ unsigned long AutoRelease : 1; /* bit position: 1 */
        /* 0x0024 */ unsigned long ForceUnlink : 1; /* bit position: 2 */
        /* 0x0024 */ unsigned long SystemSpace : 1; /* bit position: 3 */
      }; /* bitfield */
    } /* size: 0x0004 */ s1;
  } /* size: 0x0004 */ u1;
  /* 0x0028 */ unsigned long NumberOfOwnerMessages;
  /* 0x002c */ struct _LIST_ENTRY ProcessViewListEntry;
} KALPC_VIEW, *PKALPC_VIEW; /* size: 0x0034 */

