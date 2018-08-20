typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _ALPC_COMPLETION_LIST
{
  /* 0x0000 */ struct _LIST_ENTRY Entry;
  /* 0x0010 */ struct _EPROCESS* OwnerProcess;
  /* 0x0018 */ struct _MDL* Mdl;
  /* 0x0020 */ void* UserVa;
  /* 0x0028 */ void* UserLimit;
  /* 0x0030 */ void* DataUserVa;
  /* 0x0038 */ void* SystemVa;
  /* 0x0040 */ unsigned __int64 TotalSize;
  /* 0x0048 */ struct _ALPC_COMPLETION_LIST_HEADER* Header;
  /* 0x0050 */ void* List;
  /* 0x0058 */ unsigned __int64 ListSize;
  /* 0x0060 */ void* Bitmap;
  /* 0x0068 */ unsigned __int64 BitmapSize;
  /* 0x0070 */ void* Data;
  /* 0x0078 */ unsigned __int64 DataSize;
  /* 0x0080 */ unsigned long BitmapLimit;
  /* 0x0084 */ unsigned long BitmapNextHint;
  /* 0x0088 */ unsigned long ConcurrencyCount;
  /* 0x008c */ unsigned long AttributeFlags;
  /* 0x0090 */ unsigned long AttributeSize;
  /* 0x0094 */ long __PADDING__[1];
} ALPC_COMPLETION_LIST, *PALPC_COMPLETION_LIST; /* size: 0x0098 */

