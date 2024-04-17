typedef struct _IMAGE_ENCLAVE_CONFIG32
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long MinimumRequiredConfigSize;
  /* 0x0008 */ unsigned long PolicyFlags;
  /* 0x000c */ unsigned long NumberOfImports;
  /* 0x0010 */ unsigned long ImportList;
  /* 0x0014 */ unsigned long ImportEntrySize;
  /* 0x0018 */ unsigned char FamilyID[16];
  /* 0x0028 */ unsigned char ImageID[16];
  /* 0x0038 */ unsigned long ImageVersion;
  /* 0x003c */ unsigned long SecurityVersion;
  /* 0x0040 */ unsigned long EnclaveSize;
  /* 0x0044 */ unsigned long NumberOfThreads;
  /* 0x0048 */ unsigned long EnclaveFlags;
} IMAGE_ENCLAVE_CONFIG32, *PIMAGE_ENCLAVE_CONFIG32; /* size: 0x004c */

