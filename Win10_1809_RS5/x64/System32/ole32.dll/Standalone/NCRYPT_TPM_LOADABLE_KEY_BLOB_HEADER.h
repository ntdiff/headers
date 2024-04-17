struct NCRYPT_TPM_LOADABLE_KEY_BLOB_HEADER
{
  /* 0x0000 */ unsigned long magic;
  /* 0x0004 */ unsigned long cbHeader;
  /* 0x0008 */ unsigned long cbPublic;
  /* 0x000c */ unsigned long cbPrivate;
  /* 0x0010 */ unsigned long cbName;
}; /* size: 0x0014 */

