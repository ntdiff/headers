typedef struct _HCELL
{
  /* 0x0000 */ long Size;
  union // _TAG_UNNAMED_165
  {
    struct // _TAG_UNNAMED_166
    {
      union // _TAG_UNNAMED_167
      {
        union
        {
          /* 0x0004 */ unsigned long UserData;
          /* 0x0004 */ unsigned long Next;
        }; /* size: 0x0004 */
      } /* size: 0x0004 */ u;
    } /* size: 0x0004 */ NewCell;
  } /* size: 0x0004 */ u;
} HCELL, *PHCELL; /* size: 0x0008 */

