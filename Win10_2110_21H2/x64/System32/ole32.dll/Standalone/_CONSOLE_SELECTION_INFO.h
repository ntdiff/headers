typedef struct _COORD
{
  /* 0x0000 */ short X;
  /* 0x0002 */ short Y;
} COORD, *PCOORD; /* size: 0x0004 */

typedef struct _SMALL_RECT
{
  /* 0x0000 */ short Left;
  /* 0x0002 */ short Top;
  /* 0x0004 */ short Right;
  /* 0x0006 */ short Bottom;
} SMALL_RECT, *PSMALL_RECT; /* size: 0x0008 */

typedef struct _CONSOLE_SELECTION_INFO
{
  /* 0x0000 */ unsigned long dwFlags;
  /* 0x0004 */ struct _COORD dwSelectionAnchor;
  /* 0x0008 */ struct _SMALL_RECT srSelection;
} CONSOLE_SELECTION_INFO, *PCONSOLE_SELECTION_INFO; /* size: 0x0010 */

