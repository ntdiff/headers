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

typedef struct _M128A
{
  /* 0x0000 */ unsigned __int64 Low;
  /* 0x0008 */ __int64 High;
} M128A, *PM128A; /* size: 0x0010 */

typedef struct _XSAVE_FORMAT
{
  /* 0x0000 */ unsigned short ControlWord;
  /* 0x0002 */ unsigned short StatusWord;
  /* 0x0004 */ unsigned char TagWord;
  /* 0x0005 */ unsigned char Reserved1;
  /* 0x0006 */ unsigned short ErrorOpcode;
  /* 0x0008 */ unsigned long ErrorOffset;
  /* 0x000c */ unsigned short ErrorSelector;
  /* 0x000e */ unsigned short Reserved2;
  /* 0x0010 */ unsigned long DataOffset;
  /* 0x0014 */ unsigned short DataSelector;
  /* 0x0016 */ unsigned short Reserved3;
  /* 0x0018 */ unsigned long MxCsr;
  /* 0x001c */ unsigned long MxCsr_Mask;
  /* 0x0020 */ struct _M128A FloatRegisters[8];
  /* 0x00a0 */ struct _M128A XmmRegisters[16];
  /* 0x01a0 */ unsigned char Reserved4[96];
} XSAVE_FORMAT, *PXSAVE_FORMAT; /* size: 0x0200 */

typedef struct _CONTEXT
{
  /* 0x0000 */ unsigned __int64 P1Home;
  /* 0x0008 */ unsigned __int64 P2Home;
  /* 0x0010 */ unsigned __int64 P3Home;
  /* 0x0018 */ unsigned __int64 P4Home;
  /* 0x0020 */ unsigned __int64 P5Home;
  /* 0x0028 */ unsigned __int64 P6Home;
  /* 0x0030 */ unsigned long ContextFlags;
  /* 0x0034 */ unsigned long MxCsr;
  /* 0x0038 */ unsigned short SegCs;
  /* 0x003a */ unsigned short SegDs;
  /* 0x003c */ unsigned short SegEs;
  /* 0x003e */ unsigned short SegFs;
  /* 0x0040 */ unsigned short SegGs;
  /* 0x0042 */ unsigned short SegSs;
  /* 0x0044 */ unsigned long EFlags;
  /* 0x0048 */ unsigned __int64 Dr0;
  /* 0x0050 */ unsigned __int64 Dr1;
  /* 0x0058 */ unsigned __int64 Dr2;
  /* 0x0060 */ unsigned __int64 Dr3;
  /* 0x0068 */ unsigned __int64 Dr6;
  /* 0x0070 */ unsigned __int64 Dr7;
  /* 0x0078 */ unsigned __int64 Rax;
  /* 0x0080 */ unsigned __int64 Rcx;
  /* 0x0088 */ unsigned __int64 Rdx;
  /* 0x0090 */ unsigned __int64 Rbx;
  /* 0x0098 */ unsigned __int64 Rsp;
  /* 0x00a0 */ unsigned __int64 Rbp;
  /* 0x00a8 */ unsigned __int64 Rsi;
  /* 0x00b0 */ unsigned __int64 Rdi;
  /* 0x00b8 */ unsigned __int64 R8;
  /* 0x00c0 */ unsigned __int64 R9;
  /* 0x00c8 */ unsigned __int64 R10;
  /* 0x00d0 */ unsigned __int64 R11;
  /* 0x00d8 */ unsigned __int64 R12;
  /* 0x00e0 */ unsigned __int64 R13;
  /* 0x00e8 */ unsigned __int64 R14;
  /* 0x00f0 */ unsigned __int64 R15;
  /* 0x00f8 */ unsigned __int64 Rip;
  union
  {
    /* 0x0100 */ struct _XSAVE_FORMAT FltSave;
    struct
    {
      /* 0x0100 */ struct _M128A Header[2];
      /* 0x0120 */ struct _M128A Legacy[8];
      /* 0x01a0 */ struct _M128A Xmm0;
      /* 0x01b0 */ struct _M128A Xmm1;
      /* 0x01c0 */ struct _M128A Xmm2;
      /* 0x01d0 */ struct _M128A Xmm3;
      /* 0x01e0 */ struct _M128A Xmm4;
      /* 0x01f0 */ struct _M128A Xmm5;
      /* 0x0200 */ struct _M128A Xmm6;
      /* 0x0210 */ struct _M128A Xmm7;
      /* 0x0220 */ struct _M128A Xmm8;
      /* 0x0230 */ struct _M128A Xmm9;
      /* 0x0240 */ struct _M128A Xmm10;
      /* 0x0250 */ struct _M128A Xmm11;
      /* 0x0260 */ struct _M128A Xmm12;
      /* 0x0270 */ struct _M128A Xmm13;
      /* 0x0280 */ struct _M128A Xmm14;
      /* 0x0290 */ struct _M128A Xmm15;
    }; /* size: 0x01a0 */
  }; /* size: 0x0200 */
  /* 0x0300 */ struct _M128A VectorRegister[26];
  /* 0x04a0 */ unsigned __int64 VectorControl;
  /* 0x04a8 */ unsigned __int64 DebugControl;
  /* 0x04b0 */ unsigned __int64 LastBranchToRip;
  /* 0x04b8 */ unsigned __int64 LastBranchFromRip;
  /* 0x04c0 */ unsigned __int64 LastExceptionToRip;
  /* 0x04c8 */ unsigned __int64 LastExceptionFromRip;
} CONTEXT, *PCONTEXT; /* size: 0x04d0 */

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
} HEAP_FAILURE_INFORMATION, *PHEAP_FAILURE_INFORMATION; /* size: 0x06d0 */

