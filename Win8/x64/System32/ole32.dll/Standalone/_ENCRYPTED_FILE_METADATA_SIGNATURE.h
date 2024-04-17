typedef struct _ENCRYPTED_FILE_METADATA_SIGNATURE
{
  /* 0x0000 */ unsigned long dwEfsAccessType;
  /* 0x0008 */ struct _ENCRYPTION_CERTIFICATE_HASH_LIST* pCertificatesAdded;
  /* 0x0010 */ struct _ENCRYPTION_CERTIFICATE* pEncryptionCertificate;
  /* 0x0018 */ struct _EFS_RPC_BLOB* pEfsStreamSignature;
} ENCRYPTED_FILE_METADATA_SIGNATURE, *PENCRYPTED_FILE_METADATA_SIGNATURE; /* size: 0x0020 */

