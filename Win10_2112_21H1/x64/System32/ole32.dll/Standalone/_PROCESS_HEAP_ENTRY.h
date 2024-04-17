typedef struct _PROCESS_HEAP_ENTRY
{
  /* 0x0000 */ void* lpData;
  /* 0x0008 */ unsigned long cbData;
  /* 0x000c */ unsigned char cbOverhead;
  /* 0x000d */ unsigned char iRegionIndex;
  /* 0x000e */ unsigned short wFlags;
  union
  {
    struct
    {
      /* 0x0010 */ void* hMem;
      /* 0x0018 */ unsigned long dwReserved[3];
      /* 0x0024 */ long __PADDING__[1];
    } /* size: 0x0018 */ Block;
    struct
    {
      /* 0x0010 */ unsigned long dwCommittedSize;
      /* 0x0014 */ unsigned long dwUnCommittedSize;
      /* 0x0018 */ void* lpFirstBlock;
      /* 0x0020 */ void* lpLastBlock;
    } /* size: 0x0018 */ Region;
  }; /* size: 0x0018 */
} PROCESS_HEAP_ENTRY, *PPROCESS_HEAP_ENTRY; /* size: 0x0028 */

