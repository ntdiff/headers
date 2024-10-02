struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

typedef struct _HD_HITTESTINFO
{
  /* 0x0000 */ struct tagPOINT pt;
  /* 0x0008 */ unsigned int flags;
  /* 0x000c */ int iItem;
} HD_HITTESTINFO, *PHD_HITTESTINFO; /* size: 0x0010 */

