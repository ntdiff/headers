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

typedef struct _CONSOLE_SCREEN_BUFFER_INFOEX
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ struct _COORD dwSize;
  /* 0x0008 */ struct _COORD dwCursorPosition;
  /* 0x000c */ unsigned short wAttributes;
  /* 0x000e */ struct _SMALL_RECT srWindow;
  /* 0x0016 */ struct _COORD dwMaximumWindowSize;
  /* 0x001a */ unsigned short wPopupAttributes;
  /* 0x001c */ int bFullscreenSupported;
  /* 0x0020 */ unsigned long ColorTable[16];
} CONSOLE_SCREEN_BUFFER_INFOEX, *PCONSOLE_SCREEN_BUFFER_INFOEX; /* size: 0x0060 */

