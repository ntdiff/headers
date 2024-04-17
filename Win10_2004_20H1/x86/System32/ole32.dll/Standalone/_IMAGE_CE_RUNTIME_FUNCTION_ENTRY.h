typedef struct _IMAGE_CE_RUNTIME_FUNCTION_ENTRY
{
  /* 0x0000 */ unsigned long FuncStart;
  struct /* bitfield */
  {
    /* 0x0004 */ unsigned long PrologLen : 8; /* bit position: 0 */
    /* 0x0004 */ unsigned long FuncLen : 22; /* bit position: 8 */
    /* 0x0004 */ unsigned long ThirtyTwoBit : 1; /* bit position: 30 */
    /* 0x0004 */ unsigned long ExceptionFlag : 1; /* bit position: 31 */
  }; /* bitfield */
} IMAGE_CE_RUNTIME_FUNCTION_ENTRY, *PIMAGE_CE_RUNTIME_FUNCTION_ENTRY; /* size: 0x0008 */

