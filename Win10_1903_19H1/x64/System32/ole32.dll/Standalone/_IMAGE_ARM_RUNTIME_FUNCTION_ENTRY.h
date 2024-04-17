typedef struct _IMAGE_ARM_RUNTIME_FUNCTION_ENTRY
{
  /* 0x0000 */ unsigned long BeginAddress;
  union
  {
    /* 0x0004 */ unsigned long UnwindData;
    struct /* bitfield */
    {
      /* 0x0004 */ unsigned long Flag : 2; /* bit position: 0 */
      /* 0x0004 */ unsigned long FunctionLength : 11; /* bit position: 2 */
      /* 0x0004 */ unsigned long Ret : 2; /* bit position: 13 */
      /* 0x0004 */ unsigned long H : 1; /* bit position: 15 */
      /* 0x0004 */ unsigned long Reg : 3; /* bit position: 16 */
      /* 0x0004 */ unsigned long R : 1; /* bit position: 19 */
      /* 0x0004 */ unsigned long L : 1; /* bit position: 20 */
      /* 0x0004 */ unsigned long C : 1; /* bit position: 21 */
      /* 0x0004 */ unsigned long StackAdjust : 10; /* bit position: 22 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} IMAGE_ARM_RUNTIME_FUNCTION_ENTRY, *PIMAGE_ARM_RUNTIME_FUNCTION_ENTRY; /* size: 0x0008 */

