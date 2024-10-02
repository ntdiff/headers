struct tagCIEXYZ
{
  /* 0x0000 */ long ciexyzX;
  /* 0x0004 */ long ciexyzY;
  /* 0x0008 */ long ciexyzZ;
}; /* size: 0x000c */

struct tagICEXYZTRIPLE
{
  /* 0x0000 */ struct tagCIEXYZ ciexyzRed;
  /* 0x000c */ struct tagCIEXYZ ciexyzGreen;
  /* 0x0018 */ struct tagCIEXYZ ciexyzBlue;
}; /* size: 0x0024 */

