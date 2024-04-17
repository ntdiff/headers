typedef struct _ENCLAVE_INIT_INFO_SGX
{
  /* 0x0000 */ unsigned char SigStruct[1808];
  /* 0x0710 */ unsigned char Reserved1[240];
  /* 0x0800 */ unsigned char EInitToken[304];
  /* 0x0930 */ unsigned char Reserved2[1744];
} ENCLAVE_INIT_INFO_SGX, *PENCLAVE_INIT_INFO_SGX; /* size: 0x1000 */

