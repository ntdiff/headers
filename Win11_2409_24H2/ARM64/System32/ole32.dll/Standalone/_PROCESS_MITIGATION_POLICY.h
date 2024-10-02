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
  ProcessUserShadowStackPolicy = 15,
  ProcessRedirectionTrustPolicy = 16,
  ProcessUserPointerAuthPolicy = 17,
  ProcessSEHOPPolicy = 18,
  MaxProcessMitigationPolicy = 19,
} PROCESS_MITIGATION_POLICY, *PPROCESS_MITIGATION_POLICY;

