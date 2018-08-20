typedef struct _HCELL
{
  /* 0x0000 */ long Size;
  union // _TAG_UNNAMED_149
  {
    union
    {
      struct // _TAG_UNNAMED_150
      {
        /* 0x0004 */ unsigned long Last;
        union // _TAG_UNNAMED_151
        {
          union
          {
            /* 0x0008 */ unsigned long UserData;
            /* 0x0008 */ unsigned long Next;
          }; /* size: 0x0004 */
        } /* size: 0x0004 */ u;
      } /* size: 0x0008 */ OldCell;
      struct // _TAG_UNNAMED_152
      {
        union // _TAG_UNNAMED_151
        {
          union
          {
            /* 0x0004 */ unsigned long UserData;
            /* 0x0004 */ unsigned long Next;
          }; /* size: 0x0004 */
        } /* size: 0x0004 */ u;
      } /* size: 0x0004 */ NewCell;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u;
} HCELL, *PHCELL; /* size: 0x000c */

