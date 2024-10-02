union IMAGE_ARM64_RUNTIME_FUNCTION_ENTRY_XDATA_EXTENDED
{
  union
  {
    /* 0x0000 */ unsigned long ExtendedHeaderData;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long ExtendedEpilogCount : 16; /* bit position: 0 */
      /* 0x0000 */ unsigned long ExtendedCodeWords : 8; /* bit position: 16 */
    }; /* bitfield */
  }; /* size: 0x0004 */
}; /* size: 0x0004 */

