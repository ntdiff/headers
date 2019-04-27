typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

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

typedef struct _POP_RW_LOCK
{
  /* 0x0000 */ struct _EX_PUSH_LOCK Lock;
  /* 0x0004 */ struct _KTHREAD* Thread;
} POP_RW_LOCK, *PPOP_RW_LOCK; /* size: 0x0008 */

typedef struct _THERMAL_COOLING_INTERFACE
{
  /* 0x0000 */ unsigned short Size;
  /* 0x0002 */ unsigned short Version;
  /* 0x0004 */ void* Context;
  /* 0x0008 */ void* InterfaceReference /* function */;
  /* 0x000c */ void* InterfaceDereference /* function */;
  /* 0x0010 */ unsigned long Flags;
  /* 0x0014 */ void* ActiveCooling /* function */;
  /* 0x0018 */ void* PassiveCooling /* function */;
} THERMAL_COOLING_INTERFACE, *PTHERMAL_COOLING_INTERFACE; /* size: 0x001c */

typedef struct _POP_COOLING_EXTENSION
{
  /* 0x0000 */ struct _LIST_ENTRY Link;
  /* 0x0008 */ struct _LIST_ENTRY RequestListHead;
  /* 0x0010 */ struct _POP_RW_LOCK Lock;
  /* 0x0018 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x001c */ void* NotificationEntry;
  /* 0x0020 */ unsigned char Enabled;
  /* 0x0021 */ unsigned char ActiveEngaged;
  /* 0x0022 */ unsigned char ThrottleLimit;
  /* 0x0023 */ unsigned char UpdatingToCurrent;
  /* 0x0024 */ struct _KEVENT* RemovalFlushEvent;
  /* 0x0028 */ struct _KEVENT* PnpFlushEvent;
  /* 0x002c */ struct _THERMAL_COOLING_INTERFACE Interface;
} POP_COOLING_EXTENSION, *PPOP_COOLING_EXTENSION; /* size: 0x0048 */

