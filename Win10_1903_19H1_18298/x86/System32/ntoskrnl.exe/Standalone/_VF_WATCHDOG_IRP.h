typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _VF_WATCHDOG_IRP
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0008 */ struct _IRP* Irp;
  /* 0x000c */ unsigned long DueTickCount;
  /* 0x0010 */ volatile unsigned char Inserted;
  /* 0x0011 */ char TrackedStackLocation;
  /* 0x0012 */ unsigned short CancelTimeoutTicks;
} VF_WATCHDOG_IRP, *PVF_WATCHDOG_IRP; /* size: 0x0014 */

