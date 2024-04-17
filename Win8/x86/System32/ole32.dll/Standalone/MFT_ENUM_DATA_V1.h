struct MFT_ENUM_DATA_V1
{
  /* 0x0000 */ unsigned __int64 StartFileReferenceNumber;
  /* 0x0008 */ __int64 LowUsn;
  /* 0x0010 */ __int64 HighUsn;
  /* 0x0018 */ unsigned short MinMajorVersion;
  /* 0x001a */ unsigned short MaxMajorVersion;
  /* 0x001c */ long __PADDING__[1];
}; /* size: 0x0020 */

