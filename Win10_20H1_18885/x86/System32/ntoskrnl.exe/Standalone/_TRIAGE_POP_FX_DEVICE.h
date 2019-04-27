typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _TRIAGE_POP_FX_DEVICE
{
  /* 0x0000 */ struct _LIST_ENTRY Link;
  /* 0x0008 */ struct _IRP* Irp;
  /* 0x000c */ struct _TRIAGE_POP_IRP_DATA* IrpData;
  /* 0x0010 */ long Status;
  /* 0x0014 */ long PowerReqCall;
  /* 0x0018 */ long PowerNotReqCall;
  /* 0x001c */ struct _TRIAGE_DEVICE_NODE* DeviceNode;
} TRIAGE_POP_FX_DEVICE, *PTRIAGE_POP_FX_DEVICE; /* size: 0x0020 */

