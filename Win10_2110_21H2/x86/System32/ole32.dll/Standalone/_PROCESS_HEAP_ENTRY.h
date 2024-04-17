typedef struct _PROCESS_HEAP_ENTRY
{
  /* 0x0000 */ void* lpData;
  /* 0x0004 */ unsigned long cbData;
  /* 0x0008 */ unsigned char cbOverhead;
  /* 0x0009 */ unsigned char iRegionIndex;
  /* 0x000a */ unsigned short wFlags;
  union
  {
    struct
    {
      /* 0x000c */ void* hMem;
      /* 0x0010 */ unsigned long dwReserved[3];
    } /* size: 0x0010 */ Block;
    struct
    {
      /* 0x000c */ unsigned long dwCommittedSize;
      /* 0x0010 */ unsigned long dwUnCommittedSize;
      /* 0x0014 */ void* lpFirstBlock;
      /* 0x0018 */ void* lpLastBlock;
    } /* size: 0x0010 */ Region;
  }; /* size: 0x0010 */
} PROCESS_HEAP_ENTRY, *PPROCESS_HEAP_ENTRY; /* size: 0x001c */

