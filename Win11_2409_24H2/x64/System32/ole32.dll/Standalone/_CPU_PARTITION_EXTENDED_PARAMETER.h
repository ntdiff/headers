typedef struct _CPU_PARTITION_EXTENDED_PARAMETER
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
    /* 0x0008 */ unsigned __int64 Size;
    /* 0x0008 */ void* Handle;
    /* 0x0008 */ unsigned long ULong;
    struct
    {
      /* 0x0008 */ unsigned char Boolean;
      /* 0x0009 */ char __PADDING__[7];
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} CPU_PARTITION_EXTENDED_PARAMETER, *PCPU_PARTITION_EXTENDED_PARAMETER; /* size: 0x0010 */

