struct FormatEntry
{
  /* 0x0000 */ unsigned short cfFormat;
  /* 0x0004 */ unsigned long tymed;
  /* 0x0008 */ wchar_t* formatName;
  /* 0x0010 */ int formatNameLen;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

