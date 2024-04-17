typedef struct _CERT_REVOCATION_STATUS
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long dwIndex;
  /* 0x0008 */ unsigned long dwError;
  /* 0x000c */ unsigned long dwReason;
  /* 0x0010 */ int fHasFreshnessTime;
  /* 0x0014 */ unsigned long dwFreshnessTime;
} CERT_REVOCATION_STATUS, *PCERT_REVOCATION_STATUS; /* size: 0x0018 */

