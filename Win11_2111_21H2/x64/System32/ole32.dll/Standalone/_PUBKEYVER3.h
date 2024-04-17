typedef struct _DSSSEED
{
  /* 0x0000 */ unsigned long counter;
  /* 0x0004 */ unsigned char seed[20];
} DSSSEED, *PDSSSEED; /* size: 0x0018 */

typedef struct _PUBKEYVER3
{
  /* 0x0000 */ unsigned long magic;
  /* 0x0004 */ unsigned long bitlenP;
  /* 0x0008 */ unsigned long bitlenQ;
  /* 0x000c */ unsigned long bitlenJ;
  /* 0x0010 */ struct _DSSSEED DSSSeed;
} PUBKEYVER3, *PPUBKEYVER3; /* size: 0x0028 */

