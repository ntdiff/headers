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
        /* 0x0000 */ unsigned __int64 Sequence : 9; /* bit position: 16 */
        /* 0x0000 */ unsigned __int64 NextEntry : 39; /* bit position: 25 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 HeaderType : 1; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 Init : 1; /* bit position: 1 */
        /* 0x0008 */ unsigned __int64 Reserved : 59; /* bit position: 2 */
        /* 0x0008 */ unsigned __int64 Region : 3; /* bit position: 61 */
      }; /* bitfield */
    } /* size: 0x0010 */ Header8;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 HeaderType : 1; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 Reserved : 3; /* bit position: 1 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ HeaderX64;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

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

