typedef struct _COORD
{
  /* 0x0000 */ short X;
  /* 0x0002 */ short Y;
} COORD, *PCOORD; /* size: 0x0004 */

typedef struct _CONSOLE_FONT_INFOEX
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long nFont;
  /* 0x0008 */ struct _COORD dwFontSize;
  /* 0x000c */ unsigned int FontFamily;
  /* 0x0010 */ unsigned int FontWeight;
  /* 0x0014 */ wchar_t FaceName[32];
} CONSOLE_FONT_INFOEX, *PCONSOLE_FONT_INFOEX; /* size: 0x0054 */

