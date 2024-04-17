typedef struct _ENCRYPTION_CERTIFICATE
{
  /* 0x0000 */ unsigned long cbTotalLength;
  /* 0x0008 */ struct _SID* pUserSid;
  /* 0x0010 */ struct _CERTIFICATE_BLOB* pCertBlob;
} ENCRYPTION_CERTIFICATE, *PENCRYPTION_CERTIFICATE; /* size: 0x0018 */

