typedef struct _BCRYPT_ECC_CURVE_NAMES
{
  /* 0x0000 */ unsigned long dwEccCurveNames;
  /* 0x0004 */ wchar_t** pEccCurveNames;
} BCRYPT_ECC_CURVE_NAMES, *PBCRYPT_ECC_CURVE_NAMES; /* size: 0x0008 */

