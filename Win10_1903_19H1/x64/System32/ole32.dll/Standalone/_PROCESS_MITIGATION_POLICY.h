typedef enum _PROCESS_MITIGATION_POLICY
{
  ProcessDEPPolicy = 0,
  ProcessASLRPolicy = 1,
  ProcessDynamicCodePolicy = 2,
  ProcessStrictHandleCheckPolicy = 3,
  ProcessSystemCallDisablePolicy = 4,
  ProcessMitigationOptionsMask = 5,
  ProcessExtensionPointDisablePolicy = 6,
  ProcessControlFlowGuardPolicy = 7,
  ProcessSignaturePolicy = 8,
  ProcessFontDisablePolicy = 9,
  ProcessImageLoadPolicy = 10,
  ProcessSystemCallFilterPolicy = 11,
  ProcessPayloadRestrictionPolicy = 12,
  ProcessChildProcessPolicy = 13,
  ProcessSideChannelIsolationPolicy = 14,
  MaxProcessMitigationPolicy = 15,
} PROCESS_MITIGATION_POLICY, *PPROCESS_MITIGATION_POLICY;

