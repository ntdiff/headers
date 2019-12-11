typedef enum _PS_PROTECTED_SIGNER
{
  PsProtectedSignerNone = 0,
  PsProtectedSignerAuthenticode = 1,
  PsProtectedSignerCodeGen = 2,
  PsProtectedSignerAntimalware = 3,
  PsProtectedSignerLsa = 4,
  PsProtectedSignerWindows = 5,
  PsProtectedSignerWinTcb = 6,
  PsProtectedSignerWinSystem = 7,
  PsProtectedSignerMax = 8,
} PS_PROTECTED_SIGNER, *PPS_PROTECTED_SIGNER;

