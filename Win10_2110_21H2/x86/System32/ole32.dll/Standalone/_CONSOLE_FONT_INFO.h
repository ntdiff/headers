typedef struct _COORD
{
  /* 0x0000 */ short X;
  /* 0x0002 */ short Y;
} COORD, *PCOORD; /* size: 0x0004 */

typedef struct _CONSOLE_FONT_INFO
{
  /* 0x0000 */ unsigned long nFont;
  /* 0x0004 */ struct _COORD dwFontSize;
} CONSOLE_FONT_INFO, *PCONSOLE_FONT_INFO; /* size: 0x0008 */

