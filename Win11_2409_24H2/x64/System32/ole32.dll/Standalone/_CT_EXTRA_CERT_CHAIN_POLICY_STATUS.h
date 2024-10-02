typedef struct _CT_EXTRA_CERT_CHAIN_POLICY_STATUS
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ long lErrorStatus;
  /* 0x0008 */ long lErrorSubStatus;
  /* 0x000c */ unsigned long cEntries;
  /* 0x0010 */ unsigned long cValidated;
} CT_EXTRA_CERT_CHAIN_POLICY_STATUS, *PCT_EXTRA_CERT_CHAIN_POLICY_STATUS; /* size: 0x0014 */

