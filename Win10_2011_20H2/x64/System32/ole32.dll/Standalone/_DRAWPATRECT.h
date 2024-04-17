struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

typedef struct _DRAWPATRECT
{
  /* 0x0000 */ struct tagPOINT ptPosition;
  /* 0x0008 */ struct tagPOINT ptSize;
  /* 0x0010 */ unsigned short wStyle;
  /* 0x0012 */ unsigned short wPattern;
} DRAWPATRECT, *PDRAWPATRECT; /* size: 0x0014 */

