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
  /* 0x0000 */ unsigned __int64 Size;
  /* 0x0008 */ unsigned __int64 PreviousSize;
} FAKE_HEAP_ENTRY, *PFAKE_HEAP_ENTRY; /* size: 0x0010 */

typedef struct _EXCEPTION_RECORD
{
  /* 0x0000 */ long ExceptionCode;
  /* 0x0004 */ unsigned long ExceptionFlags;
  /* 0x0008 */ struct _EXCEPTION_RECORD* ExceptionRecord;
  /* 0x0010 */ void* ExceptionAddress;
  /* 0x0018 */ unsigned long NumberParameters;
  /* 0x0020 */ unsigned __int64 ExceptionInformation[15];
} EXCEPTION_RECORD, *PEXCEPTION_RECORD; /* size: 0x0098 */

typedef union _ARM64_NT_NEON128
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Low;
      /* 0x0008 */ __int64 High;
    }; /* size: 0x0010 */
    /* 0x0000 */ double D[2];
    /* 0x0000 */ float S[4];
    /* 0x0000 */ unsigned short H[8];
    /* 0x0000 */ unsigned char B[16];
  }; /* size: 0x0010 */
} ARM64_NT_NEON128, *PARM64_NT_NEON128; /* size: 0x0010 */

typedef struct _CONTEXT
{
  /* 0x0000 */ unsigned long ContextFlags;
  /* 0x0004 */ unsigned long Cpsr;
  union
  {
    struct
    {
      /* 0x0008 */ unsigned __int64 X0;
      /* 0x0010 */ unsigned __int64 X1;
      /* 0x0018 */ unsigned __int64 X2;
      /* 0x0020 */ unsigned __int64 X3;
      /* 0x0028 */ unsigned __int64 X4;
      /* 0x0030 */ unsigned __int64 X5;
      /* 0x0038 */ unsigned __int64 X6;
      /* 0x0040 */ unsigned __int64 X7;
      /* 0x0048 */ unsigned __int64 X8;
      /* 0x0050 */ unsigned __int64 X9;
      /* 0x0058 */ unsigned __int64 X10;
      /* 0x0060 */ unsigned __int64 X11;
      /* 0x0068 */ unsigned __int64 X12;
      /* 0x0070 */ unsigned __int64 X13;
      /* 0x0078 */ unsigned __int64 X14;
      /* 0x0080 */ unsigned __int64 X15;
      /* 0x0088 */ unsigned __int64 X16;
      /* 0x0090 */ unsigned __int64 X17;
      /* 0x0098 */ unsigned __int64 X18;
      /* 0x00a0 */ unsigned __int64 X19;
      /* 0x00a8 */ unsigned __int64 X20;
      /* 0x00b0 */ unsigned __int64 X21;
      /* 0x00b8 */ unsigned __int64 X22;
      /* 0x00c0 */ unsigned __int64 X23;
      /* 0x00c8 */ unsigned __int64 X24;
      /* 0x00d0 */ unsigned __int64 X25;
      /* 0x00d8 */ unsigned __int64 X26;
      /* 0x00e0 */ unsigned __int64 X27;
      /* 0x00e8 */ unsigned __int64 X28;
      /* 0x00f0 */ unsigned __int64 Fp;
      /* 0x00f8 */ unsigned __int64 Lr;
    }; /* size: 0x00f8 */
    /* 0x0008 */ unsigned __int64 X[31];
  }; /* size: 0x00f8 */
  /* 0x0100 */ unsigned __int64 Sp;
  /* 0x0108 */ unsigned __int64 Pc;
  /* 0x0110 */ union _ARM64_NT_NEON128 V[32];
  /* 0x0310 */ unsigned long Fpcr;
  /* 0x0314 */ unsigned long Fpsr;
  /* 0x0318 */ unsigned long Bcr[8];
  /* 0x0338 */ unsigned __int64 Bvr[8];
  /* 0x0378 */ unsigned long Wcr[2];
  /* 0x0380 */ unsigned __int64 Wvr[2];
} CONTEXT, *PCONTEXT; /* size: 0x0390 */

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
  /* 0x0038 */ void* PreviousBlock;
  /* 0x0040 */ void* NextBlock;
  /* 0x0048 */ struct _FAKE_HEAP_ENTRY ExpectedDecodedEntry;
  /* 0x0058 */ void* StackTrace[32];
  /* 0x0158 */ unsigned char HeapMajorVersion;
  /* 0x0159 */ unsigned char HeapMinorVersion;
  /* 0x0160 */ struct _EXCEPTION_RECORD ExceptionRecord;
  /* 0x0200 */ struct _CONTEXT ContextRecord;
} HEAP_FAILURE_INFORMATION, *PHEAP_FAILURE_INFORMATION; /* size: 0x0590 */

