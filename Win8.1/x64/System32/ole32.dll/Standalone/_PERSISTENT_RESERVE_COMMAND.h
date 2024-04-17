typedef struct _PERSISTENT_RESERVE_COMMAND
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned char ServiceAction : 5; /* bit position: 0 */
        /* 0x0008 */ unsigned char Reserved1 : 3; /* bit position: 5 */
      }; /* bitfield */
      /* 0x000a */ unsigned short AllocationLength;
    } /* size: 0x0004 */ PR_IN;
    struct
    {
      struct
      {
        struct /* bitfield */
        {
          /* 0x0008 */ unsigned char ServiceAction : 5; /* bit position: 0 */
          /* 0x0008 */ unsigned char Reserved1 : 3; /* bit position: 5 */
        }; /* bitfield */
        struct /* bitfield */
        {
          /* 0x0009 */ unsigned char Type : 4; /* bit position: 0 */
          /* 0x0009 */ unsigned char Scope : 4; /* bit position: 4 */
        }; /* bitfield */
        /* 0x000a */ unsigned char* ParameterList /* zero-length array */;
      } /* size: 0x0002 */ PR_OUT;
      /* 0x000a */ char __PADDING__[2];
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
} PERSISTENT_RESERVE_COMMAND, *PPERSISTENT_RESERVE_COMMAND; /* size: 0x000c */

