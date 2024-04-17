typedef struct _KAFFINITY_ENUMERATION_CONTEXT
{
  /* 0x0000 */ struct _KAFFINITY_EX* Affinity;
  /* 0x0008 */ unsigned __int64 CurrentMask;
  /* 0x0010 */ unsigned short CurrentIndex;
  /* 0x0012 */ char __PADDING__[6];
} KAFFINITY_ENUMERATION_CONTEXT, *PKAFFINITY_ENUMERATION_CONTEXT; /* size: 0x0018 */

