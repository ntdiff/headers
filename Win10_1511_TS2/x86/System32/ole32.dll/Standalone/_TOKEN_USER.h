typedef struct _SID_AND_ATTRIBUTES
{
  /* 0x0000 */ void* Sid;
  /* 0x0004 */ unsigned long Attributes;
} SID_AND_ATTRIBUTES, *PSID_AND_ATTRIBUTES; /* size: 0x0008 */

typedef struct _TOKEN_USER
{
  /* 0x0000 */ struct _SID_AND_ATTRIBUTES User;
} TOKEN_USER, *PTOKEN_USER; /* size: 0x0008 */

