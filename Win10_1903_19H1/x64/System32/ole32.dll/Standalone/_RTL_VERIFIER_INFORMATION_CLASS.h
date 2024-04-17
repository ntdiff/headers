typedef enum _RTL_VERIFIER_INFORMATION_CLASS
{
  VerifierAllInformation = 0,
  VerifierPageHeapsInformation = 1,
  VerifierRuntimeFlagsInformation = 2,
  VerifierFaultInjectInformation = 3,
  MaxVerifierInformation = 4,
} RTL_VERIFIER_INFORMATION_CLASS, *PRTL_VERIFIER_INFORMATION_CLASS;

