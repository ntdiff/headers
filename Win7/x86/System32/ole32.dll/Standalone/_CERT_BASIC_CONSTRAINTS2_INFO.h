typedef struct _CERT_BASIC_CONSTRAINTS2_INFO
{
  /* 0x0000 */ int fCA;
  /* 0x0004 */ int fPathLenConstraint;
  /* 0x0008 */ unsigned long dwPathLenConstraint;
} CERT_BASIC_CONSTRAINTS2_INFO, *PCERT_BASIC_CONSTRAINTS2_INFO; /* size: 0x000c */

