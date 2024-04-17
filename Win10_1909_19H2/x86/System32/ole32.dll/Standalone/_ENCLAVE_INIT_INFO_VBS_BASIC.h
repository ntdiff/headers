typedef struct _ENCLAVE_INIT_INFO_VBS_BASIC
{
  /* 0x0000 */ unsigned char FamilyId[16];
  /* 0x0010 */ unsigned char ImageId[16];
  /* 0x0020 */ unsigned __int64 EnclaveSize;
  /* 0x0028 */ unsigned long EnclaveSvn;
  /* 0x002c */ unsigned long Reserved;
  union
  {
    /* 0x0030 */ void* SignatureInfoHandle;
    /* 0x0030 */ unsigned __int64 Unused;
  }; /* size: 0x0008 */
} ENCLAVE_INIT_INFO_VBS_BASIC, *PENCLAVE_INIT_INFO_VBS_BASIC; /* size: 0x0038 */

