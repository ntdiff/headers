typedef struct _SECURITY_TOKEN_AUDIT_DATA
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ unsigned long GrantMask;
  /* 0x0008 */ unsigned long DenyMask;
} SECURITY_TOKEN_AUDIT_DATA, *PSECURITY_TOKEN_AUDIT_DATA; /* size: 0x000c */

