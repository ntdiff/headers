typedef struct _RTL_HP_SEG_ALLOC_POLICY
{
  /* 0x0000 */ unsigned long MinLargePages;
  /* 0x0004 */ unsigned long MaxLargePages;
  /* 0x0008 */ unsigned char MinUtilization;
  /* 0x0009 */ char __PADDING__[3];
} RTL_HP_SEG_ALLOC_POLICY, *PRTL_HP_SEG_ALLOC_POLICY; /* size: 0x000c */

