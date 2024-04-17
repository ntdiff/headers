typedef union _STORAGE_SPEC_VERSION
{
  union
  {
    struct
    {
      union
      {
        union
        {
          struct
          {
            /* 0x0000 */ unsigned char SubMinor;
            /* 0x0001 */ unsigned char Minor;
          }; /* size: 0x0002 */
          /* 0x0000 */ unsigned short AsUshort;
        }; /* size: 0x0002 */
      } /* size: 0x0002 */ MinorVersion;
      /* 0x0002 */ unsigned short MajorVersion;
    }; /* size: 0x0004 */
    /* 0x0000 */ unsigned long AsUlong;
  }; /* size: 0x0004 */
} STORAGE_SPEC_VERSION, *PSTORAGE_SPEC_VERSION; /* size: 0x0004 */

