typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _WAITING_IRP
{
  /* 0x0000 */ struct _LIST_ENTRY Links;
  /* 0x0010 */ struct _IRP* Irp;
  /* 0x0018 */ void* CompletionRoutine /* function */;
  /* 0x0020 */ void* Context;
  /* 0x0028 */ struct _KEVENT* Event;
  /* 0x0030 */ unsigned long Information;
  /* 0x0034 */ unsigned char BreakAllRH;
  /* 0x0035 */ unsigned char OplockBreakNotify;
  /* 0x0038 */ struct _FILE_OBJECT* FileObject;
} WAITING_IRP, *PWAITING_IRP; /* size: 0x0040 */

