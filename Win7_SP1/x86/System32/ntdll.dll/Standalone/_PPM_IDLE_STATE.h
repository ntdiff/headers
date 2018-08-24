typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned long Bitmap[1];
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x000c */

typedef struct _PPM_IDLE_STATE
{
  /* 0x0000 */ struct _KAFFINITY_EX DomainMembers;
  /* 0x000c */ void* IdleCheck /* function */;
  /* 0x0010 */ void* IdleHandler /* function */;
  /* 0x0014 */ void* Context;
  /* 0x0018 */ unsigned long Latency;
  /* 0x001c */ unsigned long Power;
  /* 0x0020 */ unsigned long TimeCheck;
  /* 0x0024 */ unsigned long StateFlags;
  /* 0x0028 */ unsigned char PromotePercent;
  /* 0x0029 */ unsigned char DemotePercent;
  /* 0x002a */ unsigned char PromotePercentBase;
  /* 0x002b */ unsigned char DemotePercentBase;
  /* 0x002c */ unsigned char StateType;
  /* 0x002d */ char __PADDING__[3];
} PPM_IDLE_STATE, *PPPM_IDLE_STATE; /* size: 0x0030 */

