typedef struct _RTL_HP_SEG_ALLOC_POLICY
{
  /* 0x0000 */ unsigned __int64 MinLargePages;
  /* 0x0008 */ unsigned __int64 MaxLargePages;
  /* 0x0010 */ unsigned char MinUtilization;
  /* 0x0011 */ char __PADDING__[7];
} RTL_HP_SEG_ALLOC_POLICY, *PRTL_HP_SEG_ALLOC_POLICY; /* size: 0x0018 */

