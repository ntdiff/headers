typedef struct _ENCRYPTION_CERTIFICATE_HASH
{
  /* 0x0000 */ unsigned long cbTotalLength;
  /* 0x0004 */ struct _SID* pUserSid;
  /* 0x0008 */ struct _EFS_HASH_BLOB* pHash;
  /* 0x000c */ wchar_t* lpDisplayInformation;
} ENCRYPTION_CERTIFICATE_HASH, *PENCRYPTION_CERTIFICATE_HASH; /* size: 0x0010 */

