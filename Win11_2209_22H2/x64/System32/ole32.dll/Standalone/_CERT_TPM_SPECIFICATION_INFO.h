typedef struct _CERT_TPM_SPECIFICATION_INFO
{
  /* 0x0000 */ wchar_t* pwszFamily;
  /* 0x0008 */ unsigned long dwLevel;
  /* 0x000c */ unsigned long dwRevision;
} CERT_TPM_SPECIFICATION_INFO, *PCERT_TPM_SPECIFICATION_INFO; /* size: 0x0010 */

