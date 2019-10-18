typedef struct _CMSI_RW_LOCK
{
  /* 0x0000 */ void* Reserved;
} CMSI_RW_LOCK, *PCMSI_RW_LOCK; /* size: 0x0004 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _CMP_VOLUME_MANAGER
{
  /* 0x0000 */ struct _CMSI_RW_LOCK VolumeContextListLock;
  /* 0x0004 */ struct _LIST_ENTRY VolumeContextListHead;
} CMP_VOLUME_MANAGER, *PCMP_VOLUME_MANAGER; /* size: 0x000c */

