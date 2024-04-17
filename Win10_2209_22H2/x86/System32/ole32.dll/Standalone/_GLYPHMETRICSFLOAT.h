typedef struct _POINTFLOAT
{
  /* 0x0000 */ float x;
  /* 0x0004 */ float y;
} POINTFLOAT, *PPOINTFLOAT; /* size: 0x0008 */

typedef struct _GLYPHMETRICSFLOAT
{
  /* 0x0000 */ float gmfBlackBoxX;
  /* 0x0004 */ float gmfBlackBoxY;
  /* 0x0008 */ struct _POINTFLOAT gmfptGlyphOrigin;
  /* 0x0010 */ float gmfCellIncX;
  /* 0x0014 */ float gmfCellIncY;
} GLYPHMETRICSFLOAT, *PGLYPHMETRICSFLOAT; /* size: 0x0018 */

