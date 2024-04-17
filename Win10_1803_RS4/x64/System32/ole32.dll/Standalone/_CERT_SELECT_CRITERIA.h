typedef struct _CERT_SELECT_CRITERIA
{
  /* 0x0000 */ unsigned long dwType;
  /* 0x0004 */ unsigned long cPara;
  /* 0x0008 */ void** ppPara;
} CERT_SELECT_CRITERIA, *PCERT_SELECT_CRITERIA; /* size: 0x0010 */

