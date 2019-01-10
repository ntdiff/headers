typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _KALPC_VIEW
{
  /* 0x0000 */ struct _LIST_ENTRY ViewListEntry;
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0010 */ unsigned long WriteAccess : 1; /* bit position: 0 */
        /* 0x0010 */ unsigned long AutoRelease : 1; /* bit position: 1 */
        /* 0x0010 */ unsigned long ForceUnlink : 1; /* bit position: 2 */
      }; /* bitfield */
    } /* size: 0x0004 */ s1;
  } /* size: 0x0004 */ u1;
  /* 0x0018 */ struct _KALPC_REGION* Region;
  /* 0x0020 */ struct _ALPC_PORT* OwnerPort;
  /* 0x0028 */ struct _EPROCESS* OwnerProcess;
  /* 0x0030 */ void* Address;
  /* 0x0038 */ unsigned __int64 Size;
  /* 0x0040 */ void* SecureViewHandle;
  /* 0x0048 */ void* WriteAccessHandle;
  /* 0x0050 */ unsigned long NumberOfOwnerMessages;
  /* 0x0058 */ struct _LIST_ENTRY ProcessViewListEntry;
} KALPC_VIEW, *PKALPC_VIEW; /* size: 0x0068 */

