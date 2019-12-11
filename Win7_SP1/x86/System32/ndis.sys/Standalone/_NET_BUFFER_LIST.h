typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef union _SLIST_HEADER
{
  union
  {
    /* 0x0000 */ unsigned __int64 Alignment;
    struct
    {
      /* 0x0000 */ struct _SINGLE_LIST_ENTRY Next;
      /* 0x0004 */ unsigned short Depth;
      /* 0x0006 */ unsigned short Sequence;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0008 */

typedef struct _NET_BUFFER_LIST
{
  union
  {
    struct
    {
      /* 0x0000 */ struct _NET_BUFFER_LIST* Next;
      /* 0x0004 */ struct _NET_BUFFER* FirstNetBuffer;
    }; /* size: 0x0008 */
    /* 0x0000 */ union _SLIST_HEADER Link;
  }; /* size: 0x0008 */
  /* 0x0008 */ struct _NET_BUFFER_LIST_CONTEXT* Context;
  /* 0x000c */ struct _NET_BUFFER_LIST* ParentNetBufferList;
  /* 0x0010 */ void* NdisPoolHandle;
  /* 0x0018 */ void* NdisReserved[2];
  /* 0x0020 */ void* ProtocolReserved[4];
  /* 0x0030 */ void* MiniportReserved[2];
  /* 0x0038 */ void* Scratch;
  /* 0x003c */ void* SourceHandle;
  /* 0x0040 */ unsigned long NblFlags;
  /* 0x0044 */ long ChildRefCount;
  /* 0x0048 */ unsigned long Flags;
  /* 0x004c */ int Status;
  /* 0x0050 */ void* NetBufferListInfo[19];
  /* 0x009c */ long __PADDING__[1];
} NET_BUFFER_LIST, *PNET_BUFFER_LIST; /* size: 0x00a0 */

