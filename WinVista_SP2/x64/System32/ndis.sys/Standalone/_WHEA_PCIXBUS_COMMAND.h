typedef union _WHEA_PCIXBUS_COMMAND
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Command : 56; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 PCIXCommand : 1; /* bit position: 56 */
      /* 0x0000 */ unsigned __int64 Reserved : 7; /* bit position: 57 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 AsULONGLONG;
  }; /* size: 0x0008 */
} WHEA_PCIXBUS_COMMAND, *PWHEA_PCIXBUS_COMMAND; /* size: 0x0008 */

