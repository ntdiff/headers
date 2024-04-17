struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

typedef struct _GLYPHMETRICS
{
  /* 0x0000 */ unsigned int gmBlackBoxX;
  /* 0x0004 */ unsigned int gmBlackBoxY;
  /* 0x0008 */ struct tagPOINT gmptGlyphOrigin;
  /* 0x0010 */ short gmCellIncX;
  /* 0x0012 */ short gmCellIncY;
} GLYPHMETRICS, *PGLYPHMETRICS; /* size: 0x0014 */

