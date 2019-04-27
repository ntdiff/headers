typedef struct _KAFFINITY_ENUMERATION_CONTEXT
{
  /* 0x0000 */ struct _KAFFINITY_EX* Affinity;
  /* 0x0004 */ unsigned long CurrentMask;
  /* 0x0008 */ unsigned short CurrentIndex;
  /* 0x000a */ char __PADDING__[2];
} KAFFINITY_ENUMERATION_CONTEXT, *PKAFFINITY_ENUMERATION_CONTEXT; /* size: 0x000c */

