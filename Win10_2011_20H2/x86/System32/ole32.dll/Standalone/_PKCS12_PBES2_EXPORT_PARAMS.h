typedef struct _PKCS12_PBES2_EXPORT_PARAMS
{
  /* 0x0000 */ unsigned long dwSize;
  /* 0x0004 */ void* hNcryptDescriptor;
  /* 0x0008 */ wchar_t* pwszPbes2Alg;
} PKCS12_PBES2_EXPORT_PARAMS, *PPKCS12_PBES2_EXPORT_PARAMS; /* size: 0x000c */

