typedef struct _SLIST_ENTRY32
{
  /* 0x0000 */ unsigned long Next;
} SLIST_ENTRY32, *PSLIST_ENTRY32; /* size: 0x0004 */

typedef union _SLIST_HEADER32
{
  union
  {
    /* 0x0000 */ unsigned __int64 Alignment;
    struct
    {
      /* 0x0000 */ struct _SLIST_ENTRY32 Next;
      /* 0x0004 */ unsigned short Depth;
      /* 0x0006 */ unsigned short Sequence;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} SLIST_HEADER32, *PSLIST_HEADER32; /* size: 0x0008 */

