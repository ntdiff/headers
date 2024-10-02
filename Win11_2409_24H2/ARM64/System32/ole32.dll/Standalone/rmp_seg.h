struct rmp_seg
{
  /* 0x0000 */ unsigned __int64 rmp_gpa;
  /* 0x0008 */ char rmp_entry;
  /* 0x0009 */ char rmp_pageSize;
  /* 0x000a */ char rmp_pageMark;
  /* 0x000b */ char rmp_reserved;
  /* 0x000c */ int rmp_ASID;
}; /* size: 0x0010 */

