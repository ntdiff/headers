typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _POP_IRP_WORKER_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY Link;
  /* 0x0010 */ struct _ETHREAD* Thread;
  /* 0x0018 */ struct _IRP* Irp;
  /* 0x0020 */ struct _DEVICE_OBJECT* Device;
  /* 0x0028 */ unsigned char Static;
  /* 0x0029 */ char __PADDING__[7];
} POP_IRP_WORKER_ENTRY, *PPOP_IRP_WORKER_ENTRY; /* size: 0x0030 */

