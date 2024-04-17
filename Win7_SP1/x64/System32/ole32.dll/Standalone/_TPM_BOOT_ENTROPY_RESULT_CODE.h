typedef enum _TPM_BOOT_ENTROPY_RESULT_CODE
{
  TpmBootEntropyStructureUninitialized = 0,
  TpmBootEntropyDisabledByPolicy = 1,
  TpmBootEntropyNoTpmFound = 2,
  TpmBootEntropyTpmError = 3,
  TpmBootEntropySuccess = 4,
} TPM_BOOT_ENTROPY_RESULT_CODE, *PTPM_BOOT_ENTROPY_RESULT_CODE;

