typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _FSRTL_PER_STREAM_CONTEXT
{
  /* 0x0000 */ struct _LIST_ENTRY Links;
  /* 0x0010 */ void* OwnerId;
  /* 0x0018 */ void* InstanceId;
  /* 0x0020 */ void* FreeCallback /* function */;
} FSRTL_PER_STREAM_CONTEXT, *PFSRTL_PER_STREAM_CONTEXT; /* size: 0x0028 */

