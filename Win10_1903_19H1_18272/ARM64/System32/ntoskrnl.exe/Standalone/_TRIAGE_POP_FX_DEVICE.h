typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _TRIAGE_POP_FX_DEVICE
{
  /* 0x0000 */ struct _LIST_ENTRY Link;
  /* 0x0010 */ struct _IRP* Irp;
  /* 0x0018 */ struct _TRIAGE_POP_IRP_DATA* IrpData;
  /* 0x0020 */ long Status;
  /* 0x0024 */ long PowerReqCall;
  /* 0x0028 */ long PowerNotReqCall;
  /* 0x0030 */ struct _TRIAGE_DEVICE_NODE* DeviceNode;
} TRIAGE_POP_FX_DEVICE, *PTRIAGE_POP_FX_DEVICE; /* size: 0x0038 */

