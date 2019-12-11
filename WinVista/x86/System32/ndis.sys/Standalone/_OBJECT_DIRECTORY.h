typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Shared : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0004 */

typedef struct _OBJECT_DIRECTORY
{
  /* 0x0000 */ struct _OBJECT_DIRECTORY_ENTRY* HashBuckets[37];
  /* 0x0094 */ struct _EX_PUSH_LOCK Lock;
  /* 0x0098 */ struct _DEVICE_MAP* DeviceMap;
  /* 0x009c */ unsigned long SessionId;
  /* 0x00a0 */ void* NamespaceEntry;
  /* 0x00a4 */ unsigned long Flags;
} OBJECT_DIRECTORY, *POBJECT_DIRECTORY; /* size: 0x00a8 */

