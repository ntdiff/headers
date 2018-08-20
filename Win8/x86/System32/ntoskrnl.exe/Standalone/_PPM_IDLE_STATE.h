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
  /* 0x000c */ unsigned long Latency;
  /* 0x0010 */ unsigned long Power;
  /* 0x0014 */ unsigned long StateFlags;
  /* 0x0018 */ unsigned char StateType;
  /* 0x0019 */ unsigned char InterruptsEnabled;
  /* 0x001a */ unsigned char Interruptible;
  /* 0x001b */ unsigned char ContextRetained;
  /* 0x001c */ unsigned char CacheCoherent;
  /* 0x001d */ char __PADDING__[3];
} PPM_IDLE_STATE, *PPPM_IDLE_STATE; /* size: 0x0020 */

