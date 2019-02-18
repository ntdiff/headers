typedef struct _HEAP_UNPACKED_ENTRY
{
  /* 0x0000 */ void* PreviousBlockPrivateData;
  union
  {
    struct
    {
      /* 0x0008 */ unsigned short Size;
      /* 0x000a */ unsigned char Flags;
      /* 0x000b */ unsigned char SmallTagIndex;
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0008 */ unsigned long SubSegmentCode;
      /* 0x000c */ unsigned short PreviousSize;
      union
      {
        /* 0x000e */ unsigned char SegmentOffset;
        struct
        {
          /* 0x000e */ unsigned char LFHFlags;
          /* 0x000f */ unsigned char UnusedBytes;
        }; /* size: 0x0002 */
      }; /* size: 0x0002 */
    }; /* size: 0x0008 */
    /* 0x0008 */ unsigned __int64 CompactHeader;
  }; /* size: 0x0008 */
} HEAP_UNPACKED_ENTRY, *PHEAP_UNPACKED_ENTRY; /* size: 0x0010 */

typedef struct _HEAP_EXTENDED_ENTRY
{
  /* 0x0000 */ void* Reserved;
  union
  {
    struct
    {
      /* 0x0008 */ unsigned short FunctionIndex;
      /* 0x000a */ unsigned short ContextValue;
    }; /* size: 0x0004 */
    /* 0x0008 */ unsigned long InterceptorValue;
  }; /* size: 0x0004 */
  /* 0x000c */ unsigned short UnusedBytesLength;
  /* 0x000e */ unsigned char EntryOffset;
  /* 0x000f */ unsigned char ExtendedBlockSignature;
} HEAP_EXTENDED_ENTRY, *PHEAP_EXTENDED_ENTRY; /* size: 0x0010 */

typedef struct _HEAP_ENTRY
{
  union
  {
    /* 0x0000 */ struct _HEAP_UNPACKED_ENTRY UnpackedEntry;
    struct
    {
      /* 0x0000 */ void* PreviousBlockPrivateData;
      union
      {
        struct
        {
          /* 0x0008 */ unsigned short Size;
          /* 0x000a */ unsigned char Flags;
          /* 0x000b */ unsigned char SmallTagIndex;
        }; /* size: 0x0004 */
        struct
        {
          /* 0x0008 */ unsigned long SubSegmentCode;
          /* 0x000c */ unsigned short PreviousSize;
          union
          {
            /* 0x000e */ unsigned char SegmentOffset;
            struct
            {
              /* 0x000e */ unsigned char LFHFlags;
              /* 0x000f */ unsigned char UnusedBytes;
            }; /* size: 0x0002 */
          }; /* size: 0x0002 */
        }; /* size: 0x0008 */
        /* 0x0008 */ unsigned __int64 CompactHeader;
      }; /* size: 0x0008 */
    }; /* size: 0x0010 */
    /* 0x0000 */ struct _HEAP_EXTENDED_ENTRY ExtendedEntry;
    struct
    {
      /* 0x0000 */ void* Reserved;
      union
      {
        struct
        {
          /* 0x0008 */ unsigned short FunctionIndex;
          /* 0x000a */ unsigned short ContextValue;
        }; /* size: 0x0004 */
        struct
        {
          /* 0x0008 */ unsigned long InterceptorValue;
          /* 0x000c */ unsigned short UnusedBytesLength;
          /* 0x000e */ unsigned char EntryOffset;
          /* 0x000f */ unsigned char ExtendedBlockSignature;
        }; /* size: 0x0008 */
      }; /* size: 0x0008 */
    }; /* size: 0x0010 */
    struct
    {
      /* 0x0000 */ void* ReservedForAlignment;
      union
      {
        struct
        {
          /* 0x0008 */ unsigned long Code1;
          union
          {
            struct
            {
              /* 0x000c */ unsigned short Code2;
              /* 0x000e */ unsigned char Code3;
              /* 0x000f */ unsigned char Code4;
            }; /* size: 0x0004 */
            /* 0x000c */ unsigned long Code234;
          }; /* size: 0x0004 */
        }; /* size: 0x0008 */
        /* 0x0008 */ unsigned __int64 AgregateCode;
      }; /* size: 0x0008 */
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
} HEAP_ENTRY, *PHEAP_ENTRY; /* size: 0x0010 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _HEAP_FREE_ENTRY
{
  union
  {
    /* 0x0000 */ struct _HEAP_ENTRY HeapEntry;
    /* 0x0000 */ struct _HEAP_UNPACKED_ENTRY UnpackedEntry;
    struct
    {
      /* 0x0000 */ void* PreviousBlockPrivateData;
      union
      {
        struct
        {
          /* 0x0008 */ unsigned short Size;
          /* 0x000a */ unsigned char Flags;
          /* 0x000b */ unsigned char SmallTagIndex;
        }; /* size: 0x0004 */
        struct
        {
          /* 0x0008 */ unsigned long SubSegmentCode;
          /* 0x000c */ unsigned short PreviousSize;
          union
          {
            /* 0x000e */ unsigned char SegmentOffset;
            struct
            {
              /* 0x000e */ unsigned char LFHFlags;
              /* 0x000f */ unsigned char UnusedBytes;
            }; /* size: 0x0002 */
          }; /* size: 0x0002 */
        }; /* size: 0x0008 */
        /* 0x0008 */ unsigned __int64 CompactHeader;
      }; /* size: 0x0008 */
    }; /* size: 0x0010 */
    /* 0x0000 */ struct _HEAP_EXTENDED_ENTRY ExtendedEntry;
    struct
    {
      /* 0x0000 */ void* Reserved;
      union
      {
        struct
        {
          /* 0x0008 */ unsigned short FunctionIndex;
          /* 0x000a */ unsigned short ContextValue;
        }; /* size: 0x0004 */
        struct
        {
          /* 0x0008 */ unsigned long InterceptorValue;
          /* 0x000c */ unsigned short UnusedBytesLength;
          /* 0x000e */ unsigned char EntryOffset;
          /* 0x000f */ unsigned char ExtendedBlockSignature;
        }; /* size: 0x0008 */
      }; /* size: 0x0008 */
    }; /* size: 0x0010 */
    struct
    {
      /* 0x0000 */ void* ReservedForAlignment;
      union
      {
        struct
        {
          /* 0x0008 */ unsigned long Code1;
          union
          {
            struct
            {
              /* 0x000c */ unsigned short Code2;
              /* 0x000e */ unsigned char Code3;
              /* 0x000f */ unsigned char Code4;
            }; /* size: 0x0004 */
            /* 0x000c */ unsigned long Code234;
          }; /* size: 0x0004 */
        }; /* size: 0x0008 */
        /* 0x0008 */ unsigned __int64 AgregateCode;
      }; /* size: 0x0008 */
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  /* 0x0010 */ struct _LIST_ENTRY FreeList;
} HEAP_FREE_ENTRY, *PHEAP_FREE_ENTRY; /* size: 0x0020 */

