typedef struct _RSAPUBKEY
{
  /* 0x0000 */ unsigned long magic;
  /* 0x0004 */ unsigned long bitlen;
  /* 0x0008 */ unsigned long pubexp;
} RSAPUBKEY, *PRSAPUBKEY; /* size: 0x000c */

