struct CM_EXTENDED_PARAMETER
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Type : 8; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Reserved : 56; /* bit position: 8 */
  }; /* bitfield */
  union
  {
    /* 0x0008 */ unsigned __int64 ULong64;
    /* 0x0008 */ void* Pointer;
    /* 0x0008 */ unsigned long Size;
    /* 0x0008 */ void* Handle;
    /* 0x0008 */ unsigned long ULong;
    struct
    {
      /* 0x0008 */ unsigned long AccessMask;
      /* 0x000c */ long __PADDING__[1];
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
}; /* size: 0x0010 */

