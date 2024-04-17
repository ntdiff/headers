typedef struct _SID_AND_ATTRIBUTES
{
  /* 0x0000 */ void* Sid;
  /* 0x0008 */ unsigned long Attributes;
  /* 0x000c */ long __PADDING__[1];
} SID_AND_ATTRIBUTES, *PSID_AND_ATTRIBUTES; /* size: 0x0010 */

typedef struct _TOKEN_GROUPS
{
  /* 0x0000 */ unsigned long GroupCount;
  /* 0x0008 */ struct _SID_AND_ATTRIBUTES Groups[1];
} TOKEN_GROUPS, *PTOKEN_GROUPS; /* size: 0x0018 */

