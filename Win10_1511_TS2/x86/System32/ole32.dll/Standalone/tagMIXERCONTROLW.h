struct tagMIXERCONTROLW
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0004 */ unsigned long dwControlID;
  /* 0x0008 */ unsigned long dwControlType;
  /* 0x000c */ unsigned long fdwControl;
  /* 0x0010 */ unsigned long cMultipleItems;
  /* 0x0014 */ wchar_t szShortName[16];
  /* 0x0034 */ wchar_t szName[64];
  union
  {
    union
    {
      struct
      {
        /* 0x00b4 */ long lMinimum;
        /* 0x00b8 */ long lMaximum;
      }; /* size: 0x0008 */
      struct
      {
        /* 0x00b4 */ unsigned long dwMinimum;
        /* 0x00b8 */ unsigned long dwMaximum;
      }; /* size: 0x0008 */
      /* 0x00b4 */ unsigned long dwReserved[6];
    }; /* size: 0x0018 */
  } /* size: 0x0018 */ Bounds;
  union
  {
    union
    {
      /* 0x00cc */ unsigned long cSteps;
      /* 0x00cc */ unsigned long cbCustomData;
      /* 0x00cc */ unsigned long dwReserved[6];
    }; /* size: 0x0018 */
  } /* size: 0x0018 */ Metrics;
}; /* size: 0x00e4 */

