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
  heap_failure_invalid_allocation_type = 10,
  heap_failure_usage_after_free = 11,
  heap_failure_cross_heap_operation = 12,
  heap_failure_freelists_corruption = 13,
  heap_failure_listentry_corruption = 14,
  heap_failure_lfh_bitmap_mismatch = 15,
  heap_failure_segment_lfh_bitmap_corruption = 16,
  heap_failure_segment_lfh_double_free = 17,
  heap_failure_vs_subsegment_corruption = 18,
  heap_failure_null_heap = 19,
  heap_failure_allocation_limit = 20,
  heap_failure_commit_limit = 21,
  heap_failure_invalid_va_mgr_query = 22,
} HEAP_FAILURE_TYPE, *PHEAP_FAILURE_TYPE;

typedef struct _FAKE_HEAP_ENTRY
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long PreviousSize;
} FAKE_HEAP_ENTRY, *PFAKE_HEAP_ENTRY; /* size: 0x0008 */

typedef struct _EXCEPTION_RECORD
{
  /* 0x0000 */ long ExceptionCode;
  /* 0x0004 */ unsigned long ExceptionFlags;
  /* 0x0008 */ struct _EXCEPTION_RECORD* ExceptionRecord;
  /* 0x000c */ void* ExceptionAddress;
  /* 0x0010 */ unsigned long NumberParameters;
  /* 0x0014 */ unsigned long ExceptionInformation[15];
} EXCEPTION_RECORD, *PEXCEPTION_RECORD; /* size: 0x0050 */

typedef struct _FLOATING_SAVE_AREA
{
  /* 0x0000 */ unsigned long ControlWord;
  /* 0x0004 */ unsigned long StatusWord;
  /* 0x0008 */ unsigned long TagWord;
  /* 0x000c */ unsigned long ErrorOffset;
  /* 0x0010 */ unsigned long ErrorSelector;
  /* 0x0014 */ unsigned long DataOffset;
  /* 0x0018 */ unsigned long DataSelector;
  /* 0x001c */ unsigned char RegisterArea[80];
  /* 0x006c */ unsigned long Spare0;
} FLOATING_SAVE_AREA, *PFLOATING_SAVE_AREA; /* size: 0x0070 */

typedef struct _CONTEXT
{
  /* 0x0000 */ unsigned long ContextFlags;
  /* 0x0004 */ unsigned long Dr0;
  /* 0x0008 */ unsigned long Dr1;
  /* 0x000c */ unsigned long Dr2;
  /* 0x0010 */ unsigned long Dr3;
  /* 0x0014 */ unsigned long Dr6;
  /* 0x0018 */ unsigned long Dr7;
  /* 0x001c */ struct _FLOATING_SAVE_AREA FloatSave;
  /* 0x008c */ unsigned long SegGs;
  /* 0x0090 */ unsigned long SegFs;
  /* 0x0094 */ unsigned long SegEs;
  /* 0x0098 */ unsigned long SegDs;
  /* 0x009c */ unsigned long Edi;
  /* 0x00a0 */ unsigned long Esi;
  /* 0x00a4 */ unsigned long Ebx;
  /* 0x00a8 */ unsigned long Edx;
  /* 0x00ac */ unsigned long Ecx;
  /* 0x00b0 */ unsigned long Eax;
  /* 0x00b4 */ unsigned long Ebp;
  /* 0x00b8 */ unsigned long Eip;
  /* 0x00bc */ unsigned long SegCs;
  /* 0x00c0 */ unsigned long EFlags;
  /* 0x00c4 */ unsigned long Esp;
  /* 0x00c8 */ unsigned long SegSs;
  /* 0x00cc */ unsigned char ExtendedRegisters[512];
} CONTEXT, *PCONTEXT; /* size: 0x02cc */

typedef struct _HEAP_FAILURE_INFORMATION
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long StructureSize;
  /* 0x0008 */ enum _HEAP_FAILURE_TYPE FailureType;
  /* 0x000c */ void* HeapAddress;
  /* 0x0010 */ void* Address;
  /* 0x0014 */ void* Param1;
  /* 0x0018 */ void* Param2;
  /* 0x001c */ void* Param3;
  /* 0x0020 */ void* PreviousBlock;
  /* 0x0024 */ void* NextBlock;
  /* 0x0028 */ struct _FAKE_HEAP_ENTRY ExpectedDecodedEntry;
  /* 0x0030 */ void* StackTrace[32];
  /* 0x00b0 */ unsigned char HeapMajorVersion;
  /* 0x00b1 */ unsigned char HeapMinorVersion;
  /* 0x00b4 */ struct _EXCEPTION_RECORD ExceptionRecord;
  /* 0x0104 */ struct _CONTEXT ContextRecord;
} HEAP_FAILURE_INFORMATION, *PHEAP_FAILURE_INFORMATION; /* size: 0x03d0 */

