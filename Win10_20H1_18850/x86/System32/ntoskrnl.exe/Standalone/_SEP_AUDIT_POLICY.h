typedef struct _TOKEN_AUDIT_POLICY
{
  /* 0x0000 */ unsigned char PerUserPolicy[30];
} TOKEN_AUDIT_POLICY, *PTOKEN_AUDIT_POLICY; /* size: 0x001e */

typedef struct _SEP_AUDIT_POLICY
{
  /* 0x0000 */ struct _TOKEN_AUDIT_POLICY AdtTokenPolicy;
  /* 0x001e */ unsigned char PolicySetStatus;
} SEP_AUDIT_POLICY, *PSEP_AUDIT_POLICY; /* size: 0x001f */

