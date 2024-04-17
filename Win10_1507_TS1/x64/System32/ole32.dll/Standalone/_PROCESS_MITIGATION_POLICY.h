typedef enum _PROCESS_MITIGATION_POLICY
{
  ProcessDEPPolicy = 0,
  ProcessASLRPolicy = 1,
  ProcessDynamicCodePolicy = 2,
  ProcessStrictHandleCheckPolicy = 3,
  ProcessSystemCallDisablePolicy = 4,
  ProcessMitigationOptionsMask = 5,
  ProcessExtensionPointDisablePolicy = 6,
  ProcessReserved1Policy = 7,
  ProcessSignaturePolicy = 8,
  ProcessFontDisablePolicy = 9,
  MaxProcessMitigationPolicy = 10,
} PROCESS_MITIGATION_POLICY, *PPROCESS_MITIGATION_POLICY;

