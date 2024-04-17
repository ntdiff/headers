typedef struct _ENCRYPTION_CERTIFICATE
{
  /* 0x0000 */ unsigned long cbTotalLength;
  /* 0x0004 */ struct _SID* pUserSid;
  /* 0x0008 */ struct _CERTIFICATE_BLOB* pCertBlob;
} ENCRYPTION_CERTIFICATE, *PENCRYPTION_CERTIFICATE; /* size: 0x000c */

