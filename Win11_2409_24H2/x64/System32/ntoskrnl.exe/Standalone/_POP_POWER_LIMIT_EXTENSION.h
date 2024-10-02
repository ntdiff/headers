typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

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

typedef struct _POP_RW_LOCK
{
  /* 0x0000 */ struct _EX_PUSH_LOCK Lock;
  /* 0x0008 */ struct _KTHREAD* Thread;
} POP_RW_LOCK, *PPOP_RW_LOCK; /* size: 0x0010 */

typedef struct _POWER_LIMIT_INTERFACE
{
  /* 0x0000 */ unsigned short Size;
  /* 0x0002 */ unsigned short Version;
  /* 0x0008 */ void* Context;
  /* 0x0010 */ void* InterfaceReference /* function */;
  /* 0x0018 */ void* InterfaceDereference /* function */;
  /* 0x0020 */ unsigned long DomainCount;
  /* 0x0028 */ void* QueryAttributes /* function */;
  /* 0x0030 */ void* SetPowerLimit /* function */;
  /* 0x0038 */ void* QueryPowerLimit /* function */;
} POWER_LIMIT_INTERFACE, *PPOWER_LIMIT_INTERFACE; /* size: 0x0040 */

typedef struct _POP_POWER_LIMIT_EXTENSION
{
  /* 0x0000 */ struct _LIST_ENTRY Link;
  /* 0x0010 */ struct _LIST_ENTRY RequestListHead;
  /* 0x0020 */ struct _POP_RW_LOCK Lock;
  /* 0x0030 */ unsigned char Enabled;
  /* 0x0038 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0040 */ void* NotificationEntry;
  /* 0x0048 */ unsigned long LimitCount;
  /* 0x0050 */ struct _POWER_LIMIT_ATTRIBUTES* LimitAttributes;
  /* 0x0058 */ struct _POWER_LIMIT_VALUE* LimitValues;
  /* 0x0060 */ unsigned long UpdateMaskCount;
  /* 0x0068 */ unsigned __int64* UpdateMask;
  /* 0x0070 */ struct _POWER_LIMIT_INTERFACE Interface;
  /* 0x00b0 */ unsigned long PendingSetCount;
  /* 0x00b4 */ unsigned long PendingQueryCount;
  /* 0x00b8 */ struct _KEVENT* RemovalFlushEvent;
  /* 0x00c0 */ struct _KEVENT* PnpFlushEvent;
} POP_POWER_LIMIT_EXTENSION, *PPOP_POWER_LIMIT_EXTENSION; /* size: 0x00c8 */

