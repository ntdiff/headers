typedef struct _DSSSEED
{
  /* 0x0000 */ unsigned long counter;
  /* 0x0004 */ unsigned char seed[20];
} DSSSEED, *PDSSSEED; /* size: 0x0018 */

typedef struct _PRIVKEYVER3
{
  /* 0x0000 */ unsigned long magic;
  /* 0x0004 */ unsigned long bitlenP;
  /* 0x0008 */ unsigned long bitlenQ;
  /* 0x000c */ unsigned long bitlenJ;
  /* 0x0010 */ unsigned long bitlenX;
  /* 0x0014 */ struct _DSSSEED DSSSeed;
} PRIVKEYVER3, *PPRIVKEYVER3; /* size: 0x002c */

