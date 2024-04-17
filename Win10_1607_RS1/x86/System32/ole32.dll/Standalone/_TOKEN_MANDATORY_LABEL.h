typedef struct _SID_AND_ATTRIBUTES
{
  /* 0x0000 */ void* Sid;
  /* 0x0004 */ unsigned long Attributes;
} SID_AND_ATTRIBUTES, *PSID_AND_ATTRIBUTES; /* size: 0x0008 */

typedef struct _TOKEN_MANDATORY_LABEL
{
  /* 0x0000 */ struct _SID_AND_ATTRIBUTES Label;
} TOKEN_MANDATORY_LABEL, *PTOKEN_MANDATORY_LABEL; /* size: 0x0008 */

