typedef union _WHEA_PCIEXPRESS_VERSION
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned char MinorVersion;
      /* 0x0001 */ unsigned char MajorVersion;
      /* 0x0002 */ unsigned short Reserved;
    }; /* size: 0x0004 */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} WHEA_PCIEXPRESS_VERSION, *PWHEA_PCIEXPRESS_VERSION; /* size: 0x0004 */

