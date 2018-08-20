typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _ALPC_COMPLETION_LIST
{
  /* 0x0000 */ struct _LIST_ENTRY Entry;
  /* 0x0008 */ struct _EPROCESS* OwnerProcess;
  /* 0x000c */ struct _MDL* Mdl;
  /* 0x0010 */ void* UserVa;
  /* 0x0014 */ void* UserLimit;
  /* 0x0018 */ void* DataUserVa;
  /* 0x001c */ void* SystemVa;
  /* 0x0020 */ unsigned long TotalSize;
  /* 0x0024 */ struct _ALPC_COMPLETION_LIST_HEADER* Header;
  /* 0x0028 */ void* List;
  /* 0x002c */ unsigned long ListSize;
  /* 0x0030 */ void* Bitmap;
  /* 0x0034 */ unsigned long BitmapSize;
  /* 0x0038 */ void* Data;
  /* 0x003c */ unsigned long DataSize;
  /* 0x0040 */ unsigned long BitmapLimit;
  /* 0x0044 */ unsigned long BitmapNextHint;
  /* 0x0048 */ unsigned long ConcurrencyCount;
  /* 0x004c */ unsigned long AttributeFlags;
  /* 0x0050 */ unsigned long AttributeSize;
} ALPC_COMPLETION_LIST, *PALPC_COMPLETION_LIST; /* size: 0x0054 */

