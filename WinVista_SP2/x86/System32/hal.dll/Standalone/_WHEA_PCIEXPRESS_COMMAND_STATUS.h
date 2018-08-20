typedef union _WHEA_PCIEXPRESS_COMMAND_STATUS
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short Command;
      /* 0x0002 */ unsigned short Status;
    }; /* size: 0x0004 */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} WHEA_PCIEXPRESS_COMMAND_STATUS, *PWHEA_PCIEXPRESS_COMMAND_STATUS; /* size: 0x0004 */

