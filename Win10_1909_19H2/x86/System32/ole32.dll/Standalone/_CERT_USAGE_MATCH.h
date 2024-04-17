typedef struct _CTL_USAGE
{
  /* 0x0000 */ unsigned long cUsageIdentifier;
  /* 0x0004 */ char** rgpszUsageIdentifier;
} CTL_USAGE, *PCTL_USAGE; /* size: 0x0008 */

typedef struct _CERT_USAGE_MATCH
{
  /* 0x0000 */ unsigned long dwType;
  /* 0x0004 */ struct _CTL_USAGE Usage;
} CERT_USAGE_MATCH, *PCERT_USAGE_MATCH; /* size: 0x000c */

