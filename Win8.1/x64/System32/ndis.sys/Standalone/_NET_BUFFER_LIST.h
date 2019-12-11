typedef union _SLIST_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Alignment;
      /* 0x0008 */ unsigned __int64 Region;
    }; /* size: 0x0010 */
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 Reserved : 4; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ HeaderX64;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

typedef struct _NET_BUFFER_LIST_DATA
{
  /* 0x0000 */ struct _NET_BUFFER_LIST* Next;
  /* 0x0008 */ struct _NET_BUFFER* FirstNetBuffer;
} NET_BUFFER_LIST_DATA, *PNET_BUFFER_LIST_DATA; /* size: 0x0010 */

typedef union _NET_BUFFER_LIST_HEADER
{
  union
  {
    /* 0x0000 */ struct _NET_BUFFER_LIST_DATA NetBufferListData;
    /* 0x0000 */ union _SLIST_HEADER Link;
  }; /* size: 0x0010 */
} NET_BUFFER_LIST_HEADER, *PNET_BUFFER_LIST_HEADER; /* size: 0x0010 */

typedef struct _NET_BUFFER_LIST
{
  union
  {
    struct
    {
      /* 0x0000 */ struct _NET_BUFFER_LIST* Next;
      /* 0x0008 */ struct _NET_BUFFER* FirstNetBuffer;
    }; /* size: 0x0010 */
    /* 0x0000 */ union _SLIST_HEADER Link;
    /* 0x0000 */ union _NET_BUFFER_LIST_HEADER NetBufferListHeader;
  }; /* size: 0x0010 */
  /* 0x0010 */ struct _NET_BUFFER_LIST_CONTEXT* Context;
  /* 0x0018 */ struct _NET_BUFFER_LIST* ParentNetBufferList;
  /* 0x0020 */ void* NdisPoolHandle;
  /* 0x0030 */ void* NdisReserved[2];
  /* 0x0040 */ void* ProtocolReserved[4];
  /* 0x0060 */ void* MiniportReserved[2];
  /* 0x0070 */ void* Scratch;
  /* 0x0078 */ void* SourceHandle;
  /* 0x0080 */ unsigned long NblFlags;
  /* 0x0084 */ long ChildRefCount;
  /* 0x0088 */ unsigned long Flags;
  union
  {
    /* 0x008c */ int Status;
    /* 0x008c */ unsigned long NdisReserved2;
  }; /* size: 0x0004 */
  /* 0x0090 */ void* NetBufferListInfo[26];
} NET_BUFFER_LIST, *PNET_BUFFER_LIST; /* size: 0x0160 */

