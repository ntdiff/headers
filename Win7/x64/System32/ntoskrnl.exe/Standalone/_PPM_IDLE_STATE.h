typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned __int64 Bitmap[4];
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x0028 */

typedef struct _PPM_IDLE_STATE
{
  /* 0x0000 */ struct _KAFFINITY_EX DomainMembers;
  /* 0x0028 */ void* IdleCheck /* function */;
  /* 0x0030 */ void* IdleHandler /* function */;
  /* 0x0038 */ unsigned __int64 HvConfig;
  /* 0x0040 */ void* Context;
  /* 0x0048 */ unsigned long Latency;
  /* 0x004c */ unsigned long Power;
  /* 0x0050 */ unsigned long TimeCheck;
  /* 0x0054 */ unsigned long StateFlags;
  /* 0x0058 */ unsigned char PromotePercent;
  /* 0x0059 */ unsigned char DemotePercent;
  /* 0x005a */ unsigned char PromotePercentBase;
  /* 0x005b */ unsigned char DemotePercentBase;
  /* 0x005c */ unsigned char StateType;
  /* 0x005d */ char __PADDING__[3];
} PPM_IDLE_STATE, *PPPM_IDLE_STATE; /* size: 0x0060 */

