typedef struct _SID_AND_ATTRIBUTES
{
  /* 0x0000 */ void* Sid;
  /* 0x0004 */ unsigned long Attributes;
} SID_AND_ATTRIBUTES, *PSID_AND_ATTRIBUTES; /* size: 0x0008 */

typedef struct _TOKEN_GROUPS
{
  /* 0x0000 */ unsigned long GroupCount;
  /* 0x0004 */ struct _SID_AND_ATTRIBUTES Groups[1];
} TOKEN_GROUPS, *PTOKEN_GROUPS; /* size: 0x000c */

