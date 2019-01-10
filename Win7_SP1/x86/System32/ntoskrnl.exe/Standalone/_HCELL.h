typedef struct _HCELL
{
  /* 0x0000 */ long Size;
  union
  {
    union
    {
      struct
      {
        /* 0x0004 */ unsigned long Last;
        union
        {
          union
          {
            /* 0x0008 */ unsigned long UserData;
            /* 0x0008 */ unsigned long Next;
          }; /* size: 0x0004 */
        } /* size: 0x0004 */ u;
      } /* size: 0x0008 */ OldCell;
      struct
      {
        union
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

