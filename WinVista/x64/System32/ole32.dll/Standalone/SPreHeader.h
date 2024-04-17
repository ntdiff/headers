struct SPreHeader
{
  /* 0x0018 */ unsigned short _uMinorVersion;
  /* 0x001a */ unsigned short _uDllVersion;
  /* 0x001c */ unsigned short _uByteOrder;
  /* 0x001e */ unsigned short _uSectorShift;
  /* 0x0020 */ unsigned short _uMiniSectorShift;
  /* 0x0022 */ unsigned short _usReserved;
  /* 0x0024 */ unsigned long _ulReserved1;
  /* 0x0028 */ unsigned long _csectDir;
  /* 0x002c */ unsigned long _csectFat;
  /* 0x0030 */ unsigned long _sectDirStart;
  /* 0x0034 */ unsigned long _signature;
  /* 0x0038 */ unsigned long _ulMiniSectorCutoff;
  /* 0x003c */ unsigned long _sectMiniFatStart;
  /* 0x0040 */ unsigned long _csectMiniFat;
  /* 0x0044 */ unsigned long _sectDifStart;
  /* 0x0048 */ unsigned long _csectDif;
}; /* size: 0x004c */

