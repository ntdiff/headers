typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _TRIAGE_DEVICE_NODE
{
  /* 0x0000 */ struct _TRIAGE_DEVICE_NODE* Sibling;
  /* 0x0004 */ struct _TRIAGE_DEVICE_NODE* Child;
  /* 0x0008 */ struct _TRIAGE_DEVICE_NODE* Parent;
  /* 0x000c */ struct _TRIAGE_DEVICE_NODE* LastChild;
  /* 0x0010 */ struct _DEVICE_OBJECT* PhysicalDeviceObject;
  /* 0x0014 */ struct _UNICODE_STRING InstancePath;
  /* 0x001c */ struct _UNICODE_STRING ServiceName;
  /* 0x0024 */ struct _IRP* PendingIrp;
  /* 0x0028 */ struct _TRIAGE_POP_FX_DEVICE* FxDevice;
} TRIAGE_DEVICE_NODE, *PTRIAGE_DEVICE_NODE; /* size: 0x002c */

