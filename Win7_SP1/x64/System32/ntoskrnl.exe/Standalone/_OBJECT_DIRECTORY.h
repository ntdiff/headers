typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0008 */

typedef struct _OBJECT_DIRECTORY
{
  /* 0x0000 */ struct _OBJECT_DIRECTORY_ENTRY* HashBuckets[37];
  /* 0x0128 */ struct _EX_PUSH_LOCK Lock;
  /* 0x0130 */ struct _DEVICE_MAP* DeviceMap;
  /* 0x0138 */ unsigned long SessionId;
  /* 0x0140 */ void* NamespaceEntry;
  /* 0x0148 */ unsigned long Flags;
  /* 0x014c */ long __PADDING__[1];
} OBJECT_DIRECTORY, *POBJECT_DIRECTORY; /* size: 0x0150 */

