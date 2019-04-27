typedef struct _IMAGE_ARM64_RUNTIME_FUNCTION_ENTRY
{
  /* 0x0000 */ unsigned long BeginAddress;
  union
  {
    /* 0x0004 */ unsigned long UnwindData;
    struct /* bitfield */
    {
      /* 0x0004 */ unsigned long Flag : 2; /* bit position: 0 */
      /* 0x0004 */ unsigned long FunctionLength : 11; /* bit position: 2 */
      /* 0x0004 */ unsigned long RegF : 3; /* bit position: 13 */
      /* 0x0004 */ unsigned long RegI : 4; /* bit position: 16 */
      /* 0x0004 */ unsigned long H : 1; /* bit position: 20 */
      /* 0x0004 */ unsigned long CR : 2; /* bit position: 21 */
      /* 0x0004 */ unsigned long FrameSize : 9; /* bit position: 23 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} IMAGE_ARM64_RUNTIME_FUNCTION_ENTRY, *PIMAGE_ARM64_RUNTIME_FUNCTION_ENTRY; /* size: 0x0008 */

