struct tagMIXERCONTROLA
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0004 */ unsigned long dwControlID;
  /* 0x0008 */ unsigned long dwControlType;
  /* 0x000c */ unsigned long fdwControl;
  /* 0x0010 */ unsigned long cMultipleItems;
  /* 0x0014 */ char szShortName[16];
  /* 0x0024 */ char szName[64];
  union
  {
    union
    {
      struct
      {
        /* 0x0064 */ long lMinimum;
        /* 0x0068 */ long lMaximum;
      }; /* size: 0x0008 */
      struct
      {
        /* 0x0064 */ unsigned long dwMinimum;
        /* 0x0068 */ unsigned long dwMaximum;
      }; /* size: 0x0008 */
      /* 0x0064 */ unsigned long dwReserved[6];
    }; /* size: 0x0018 */
  } /* size: 0x0018 */ Bounds;
  union
  {
    union
    {
      /* 0x007c */ unsigned long cSteps;
      /* 0x007c */ unsigned long cbCustomData;
      /* 0x007c */ unsigned long dwReserved[6];
    }; /* size: 0x0018 */
  } /* size: 0x0018 */ Metrics;
}; /* size: 0x0094 */

