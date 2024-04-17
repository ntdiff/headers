typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

typedef struct _OCSP_BASIC_REVOKED_INFO
{
  /* 0x0000 */ struct _FILETIME RevocationDate;
  /* 0x0008 */ unsigned long dwCrlReasonCode;
} OCSP_BASIC_REVOKED_INFO, *POCSP_BASIC_REVOKED_INFO; /* size: 0x000c */

