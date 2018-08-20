typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned __int64 Bitmap[20];
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x00a8 */

typedef struct _PPM_IDLE_STATE
{
  /* 0x0000 */ struct _KAFFINITY_EX DomainMembers;
  /* 0x00a8 */ unsigned long Latency;
  /* 0x00ac */ unsigned long Power;
  /* 0x00b0 */ unsigned long StateFlags;
  /* 0x00b4 */ unsigned char StateType;
  /* 0x00b5 */ unsigned char InterruptsEnabled;
  /* 0x00b6 */ unsigned char Interruptible;
  /* 0x00b7 */ unsigned char ContextRetained;
  /* 0x00b8 */ unsigned char CacheCoherent;
  /* 0x00b9 */ char __PADDING__[7];
} PPM_IDLE_STATE, *PPPM_IDLE_STATE; /* size: 0x00c0 */

