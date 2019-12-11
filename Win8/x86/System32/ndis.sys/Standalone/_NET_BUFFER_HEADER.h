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

typedef union _NET_BUFFER_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ struct _NET_BUFFER* Next;
      /* 0x0004 */ struct _MDL* CurrentMdl;
      /* 0x0008 */ unsigned long CurrentMdlOffset;
      union
      {
        /* 0x000c */ unsigned long DataLength;
        struct
        {
          /* 0x000c */ unsigned long stDataLength;
          /* 0x0010 */ struct _MDL* MdlChain;
          /* 0x0014 */ unsigned long DataOffset;
        }; /* size: 0x000c */
      }; /* size: 0x000c */
    }; /* size: 0x0018 */
    /* 0x0000 */ union _SLIST_HEADER Link;
  }; /* size: 0x0018 */
} NET_BUFFER_HEADER, *PNET_BUFFER_HEADER; /* size: 0x0018 */

