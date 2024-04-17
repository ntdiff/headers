typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _OBJECT_NAME_INFORMATION
{
  /* 0x0000 */ struct _UNICODE_STRING Name;
} OBJECT_NAME_INFORMATION, *POBJECT_NAME_INFORMATION; /* size: 0x0010 */

typedef struct _SYSTEM_OBJECT_INFORMATION
{
  /* 0x0000 */ unsigned long NextEntryOffset;
  /* 0x0008 */ void* Object;
  /* 0x0010 */ void* CreatorUniqueProcess;
  /* 0x0018 */ unsigned short CreatorBackTraceIndex;
  /* 0x001a */ unsigned short Flags;
  /* 0x001c */ long PointerCount;
  /* 0x0020 */ long HandleCount;
  /* 0x0024 */ unsigned long PagedPoolCharge;
  /* 0x0028 */ unsigned long NonPagedPoolCharge;
  /* 0x0030 */ void* ExclusiveProcessId;
  /* 0x0038 */ void* SecurityDescriptor;
  /* 0x0040 */ struct _OBJECT_NAME_INFORMATION NameInfo;
} SYSTEM_OBJECT_INFORMATION, *PSYSTEM_OBJECT_INFORMATION; /* size: 0x0050 */

