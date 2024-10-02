union IMAGE_ARM64_RUNTIME_FUNCTION_ENTRY_XDATA_EPILOG_SCOPE
{
  union
  {
    /* 0x0000 */ unsigned long EpilogScopeData;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long EpilogStartOffset : 18; /* bit position: 0 */
      /* 0x0000 */ unsigned long Res0 : 4; /* bit position: 18 */
      /* 0x0000 */ unsigned long EpilogStartIndex : 10; /* bit position: 22 */
    }; /* bitfield */
  }; /* size: 0x0004 */
}; /* size: 0x0004 */

