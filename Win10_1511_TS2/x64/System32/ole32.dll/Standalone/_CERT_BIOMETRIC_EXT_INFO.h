typedef struct _CERT_BIOMETRIC_EXT_INFO
{
  /* 0x0000 */ unsigned long cBiometricData;
  /* 0x0008 */ struct _CERT_BIOMETRIC_DATA* rgBiometricData;
} CERT_BIOMETRIC_EXT_INFO, *PCERT_BIOMETRIC_EXT_INFO; /* size: 0x0010 */

