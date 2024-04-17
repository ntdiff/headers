struct tagENTRY
{
  /* 0x0000 */ unsigned long propid;
  /* 0x0004 */ unsigned long cch;
  /* 0x0008 */ char sz[1];
  /* 0x0009 */ char __PADDING__[3];
}; /* size: 0x000c */

struct tagDICTIONARY
{
  /* 0x0000 */ unsigned long cEntries;
  /* 0x0004 */ struct tagENTRY rgEntry[1];
}; /* size: 0x0010 */

