typedef union _FOUR_PART_VERSION
{
  union
  {
    /* 0x0000 */ unsigned __int64 Version64;
    struct
    {
      /* 0x0000 */ unsigned long BuildAndRevision;
      /* 0x0004 */ unsigned long MajorAndMinor;
    } /* size: 0x0008 */ Version32;
    struct
    {
      /* 0x0000 */ unsigned short Revision;
      /* 0x0002 */ unsigned short Build;
      /* 0x0004 */ unsigned short Minor;
      /* 0x0006 */ unsigned short Major;
    } /* size: 0x0008 */ Version16;
  }; /* size: 0x0008 */
} FOUR_PART_VERSION, *PFOUR_PART_VERSION; /* size: 0x0008 */

