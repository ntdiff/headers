union IMAGE_ARM64_RUNTIME_FUNCTION_ENTRY_XDATA
{
  union
  {
    /* 0x0000 */ unsigned long HeaderData;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long FunctionLength : 18; /* bit position: 0 */
      /* 0x0000 */ unsigned long Version : 2; /* bit position: 18 */
      /* 0x0000 */ unsigned long ExceptionDataPresent : 1; /* bit position: 20 */
      /* 0x0000 */ unsigned long EpilogInHeader : 1; /* bit position: 21 */
      /* 0x0000 */ unsigned long EpilogCount : 5; /* bit position: 22 */
      /* 0x0000 */ unsigned long CodeWords : 5; /* bit position: 27 */
    }; /* bitfield */
  }; /* size: 0x0004 */
}; /* size: 0x0004 */

