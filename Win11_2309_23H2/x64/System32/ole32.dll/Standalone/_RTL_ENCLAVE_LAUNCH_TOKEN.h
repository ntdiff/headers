typedef struct _RTL_ENCLAVE_LAUNCH_TOKEN
{
  /* 0x0000 */ unsigned char Measurement[32];
  /* 0x0020 */ unsigned char AuthorId[32];
  /* 0x0040 */ unsigned char FamilyId[16];
  /* 0x0050 */ unsigned char ImageId[16];
  /* 0x0060 */ unsigned __int64 EnclaveSize;
  /* 0x0068 */ unsigned long EnclaveSvn;
  /* 0x006c */ unsigned long PolicyFlags;
} RTL_ENCLAVE_LAUNCH_TOKEN, *PRTL_ENCLAVE_LAUNCH_TOKEN; /* size: 0x0070 */

