struct METADC
{
  /* 0x0000 */ int xMwo;
  /* 0x0004 */ int yMwo;
  /* 0x0008 */ int xMwe;
  /* 0x000c */ int yMwe;
  /* 0x0010 */ int xre;
  /* 0x0014 */ int yre;
  /* 0x0018 */ struct METADC* pNext;
}; /* size: 0x001c */

struct METAINFO
{
  /* 0x0000 */ struct METADC headDc;
  /* 0x001c */ int xwo;
  /* 0x0020 */ int ywo;
  /* 0x0024 */ int xwe;
  /* 0x0028 */ int ywe;
  /* 0x002c */ int xro;
  /* 0x0030 */ int yro;
}; /* size: 0x0034 */

