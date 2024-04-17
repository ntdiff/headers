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

typedef struct _CONSOLE_SCREEN_BUFFER_INFO
{
  /* 0x0000 */ struct _COORD dwSize;
  /* 0x0004 */ struct _COORD dwCursorPosition;
  /* 0x0008 */ unsigned short wAttributes;
  /* 0x000a */ struct _SMALL_RECT srWindow;
  /* 0x0012 */ struct _COORD dwMaximumWindowSize;
} CONSOLE_SCREEN_BUFFER_INFO, *PCONSOLE_SCREEN_BUFFER_INFO; /* size: 0x0016 */

