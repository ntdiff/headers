typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _WAITING_IRP
{
  /* 0x0000 */ struct _LIST_ENTRY Links;
  /* 0x0008 */ struct _IRP* Irp;
  /* 0x000c */ void* CompletionRoutine /* function */;
  /* 0x0010 */ void* Context;
  /* 0x0014 */ struct _KEVENT* Event;
  /* 0x0018 */ unsigned long Information;
  /* 0x001c */ unsigned char BreakAllRH;
  /* 0x001d */ unsigned char OplockBreakNotify;
  /* 0x0020 */ struct _FILE_OBJECT* FileObject;
} WAITING_IRP, *PWAITING_IRP; /* size: 0x0024 */

