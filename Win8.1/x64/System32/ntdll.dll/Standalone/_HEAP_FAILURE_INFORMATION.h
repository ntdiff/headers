typedef enum _HEAP_FAILURE_TYPE
{
  heap_failure_internal = 0,
  heap_failure_unknown = 1,
  heap_failure_generic = 2,
  heap_failure_entry_corruption = 3,
  heap_failure_multiple_entries_corruption = 4,
  heap_failure_virtual_block_corruption = 5,
  heap_failure_buffer_overrun = 6,
  heap_failure_buffer_underrun = 7,
  heap_failure_block_not_busy = 8,
  heap_failure_invalid_argument = 9,
  heap_failure_usage_after_free = 10,
  heap_failure_cross_heap_operation = 11,
  heap_failure_freelists_corruption = 12,
  heap_failure_listentry_corruption = 13,
  heap_failure_lfh_bitmap_mismatch = 14,
  heap_failure_segment_lfh_bitmap_corruption = 15,
  heap_failure_segment_lfh_double_free = 16,
} HEAP_FAILURE_TYPE, *PHEAP_FAILURE_TYPE;

typedef struct _HEAP_ENTRY
{
  union
  {
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

typedef struct _HEAP_FAILURE_INFORMATION
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long StructureSize;
  /* 0x0008 */ enum _HEAP_FAILURE_TYPE FailureType;
  /* 0x0010 */ void* HeapAddress;
  /* 0x0018 */ void* Address;
  /* 0x0020 */ void* Param1;
  /* 0x0028 */ void* Param2;
  /* 0x0030 */ void* Param3;
  /* 0x0038 */ struct _HEAP_ENTRY* PreviousBlock;
  /* 0x0040 */ struct _HEAP_ENTRY* NextBlock;
  /* 0x0048 */ struct _HEAP_ENTRY ExpectedEncodedEntry;
  /* 0x0058 */ struct _HEAP_ENTRY ExpectedDecodedEntry;
  /* 0x0068 */ void* StackTrace[32];
} HEAP_FAILURE_INFORMATION, *PHEAP_FAILURE_INFORMATION; /* size: 0x0168 */

