typedef struct _NET_BUFFER_LIST_DATA
{
  /* 0x0000 */ struct _NET_BUFFER_LIST* Next;
  /* 0x0004 */ struct _NET_BUFFER* FirstNetBuffer;
} NET_BUFFER_LIST_DATA, *PNET_BUFFER_LIST_DATA; /* size: 0x0008 */

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
      /* 0x0006 */ unsigned short CpuId;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0008 */

typedef union _NET_BUFFER_LIST_HEADER
{
  union
  {
    /* 0x0000 */ struct _NET_BUFFER_LIST_DATA NetBufferListData;
    /* 0x0000 */ union _SLIST_HEADER Link;
  }; /* size: 0x0008 */
} NET_BUFFER_LIST_HEADER, *PNET_BUFFER_LIST_HEADER; /* size: 0x0008 */

