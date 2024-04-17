struct RTL_FILTER_LUNICODE_STRING_FILTER
{
  /* 0x0000 */ void* Transform /* function */;
  /* 0x0004 */ void* Match /* function */;
  /* 0x0008 */ void* MatchContext;
  /* 0x000c */ unsigned char DropHighUnicodeValues;
  /* 0x000d */ unsigned char MatchFirst;
  /* 0x000e */ char __PADDING__[2];
}; /* size: 0x0010 */

