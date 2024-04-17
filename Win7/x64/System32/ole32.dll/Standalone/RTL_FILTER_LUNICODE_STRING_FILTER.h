struct RTL_FILTER_LUNICODE_STRING_FILTER
{
  /* 0x0000 */ void* Transform /* function */;
  /* 0x0008 */ void* Match /* function */;
  /* 0x0010 */ void* MatchContext;
  /* 0x0018 */ unsigned char DropHighUnicodeValues;
  /* 0x0019 */ unsigned char MatchFirst;
  /* 0x001a */ char __PADDING__[6];
}; /* size: 0x0020 */

