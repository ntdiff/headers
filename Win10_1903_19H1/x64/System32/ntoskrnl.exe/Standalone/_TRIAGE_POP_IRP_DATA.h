typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _TRIAGE_POP_IRP_DATA
{
  /* 0x0000 */ struct _LIST_ENTRY Link;
  /* 0x0010 */ struct _IRP* Irp;
  /* 0x0018 */ struct _DEVICE_OBJECT* Pdo;
} TRIAGE_POP_IRP_DATA, *PTRIAGE_POP_IRP_DATA; /* size: 0x0020 */

