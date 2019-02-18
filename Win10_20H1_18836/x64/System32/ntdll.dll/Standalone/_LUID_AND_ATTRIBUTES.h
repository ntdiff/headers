typedef struct _LUID
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ long HighPart;
} LUID, *PLUID; /* size: 0x0008 */

typedef struct _LUID_AND_ATTRIBUTES
{
  /* 0x0000 */ struct _LUID Luid;
  /* 0x0008 */ unsigned long Attributes;
} LUID_AND_ATTRIBUTES, *PLUID_AND_ATTRIBUTES; /* size: 0x000c */

