typedef enum _TPM_BOOT_ENTROPY_RESULT_CODE
{
  TpmBootEntropyStructureUninitialized = 0,
  TpmBootEntropyDisabledByPolicy = 1,
  TpmBootEntropyNoTpmFound = 2,
  TpmBootEntropyTpmError = 3,
  TpmBootEntropySuccess = 4,
} TPM_BOOT_ENTROPY_RESULT_CODE, *PTPM_BOOT_ENTROPY_RESULT_CODE;

typedef struct _TPM_BOOT_ENTROPY_LDR_RESULT
{
  /* 0x0000 */ unsigned __int64 Policy;
  /* 0x0008 */ enum _TPM_BOOT_ENTROPY_RESULT_CODE ResultCode;
  /* 0x000c */ long ResultStatus;
  /* 0x0010 */ unsigned __int64 Time;
  /* 0x0018 */ unsigned long EntropyLength;
  /* 0x001c */ unsigned char EntropyData[40];
  /* 0x0044 */ long __PADDING__[1];
} TPM_BOOT_ENTROPY_LDR_RESULT, *PTPM_BOOT_ENTROPY_LDR_RESULT; /* size: 0x0048 */

