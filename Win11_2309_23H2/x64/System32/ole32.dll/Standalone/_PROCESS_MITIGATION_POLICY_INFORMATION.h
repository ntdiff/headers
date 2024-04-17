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
  ProcessActivationContextTrustPolicy = 19,
  MaxProcessMitigationPolicy = 20,
} PROCESS_MITIGATION_POLICY, *PPROCESS_MITIGATION_POLICY;

typedef struct _PROCESS_MITIGATION_ASLR_POLICY
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long EnableBottomUpRandomization : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long EnableForceRelocateImages : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long EnableHighEntropy : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long DisallowStrippedImages : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long ReservedFlags : 28; /* bit position: 4 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PROCESS_MITIGATION_ASLR_POLICY, *PPROCESS_MITIGATION_ASLR_POLICY; /* size: 0x0004 */

typedef struct _PROCESS_MITIGATION_STRICT_HANDLE_CHECK_POLICY
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long RaiseExceptionOnInvalidHandleReference : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long HandleExceptionsPermanentlyEnabled : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long ReservedFlags : 30; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PROCESS_MITIGATION_STRICT_HANDLE_CHECK_POLICY, *PPROCESS_MITIGATION_STRICT_HANDLE_CHECK_POLICY; /* size: 0x0004 */

typedef struct _PROCESS_MITIGATION_SYSTEM_CALL_DISABLE_POLICY
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long DisallowWin32kSystemCalls : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long AuditDisallowWin32kSystemCalls : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long DisallowFsctlSystemCalls : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long AuditDisallowFsctlSystemCalls : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long ReservedFlags : 28; /* bit position: 4 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PROCESS_MITIGATION_SYSTEM_CALL_DISABLE_POLICY, *PPROCESS_MITIGATION_SYSTEM_CALL_DISABLE_POLICY; /* size: 0x0004 */

typedef struct _PROCESS_MITIGATION_EXTENSION_POINT_DISABLE_POLICY
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long DisableExtensionPoints : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long ReservedFlags : 31; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PROCESS_MITIGATION_EXTENSION_POINT_DISABLE_POLICY, *PPROCESS_MITIGATION_EXTENSION_POINT_DISABLE_POLICY; /* size: 0x0004 */

typedef struct _PROCESS_MITIGATION_DYNAMIC_CODE_POLICY
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long ProhibitDynamicCode : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long AllowThreadOptOut : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long AllowRemoteDowngrade : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long AuditProhibitDynamicCode : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long ReservedFlags : 28; /* bit position: 4 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PROCESS_MITIGATION_DYNAMIC_CODE_POLICY, *PPROCESS_MITIGATION_DYNAMIC_CODE_POLICY; /* size: 0x0004 */

typedef struct _PROCESS_MITIGATION_CONTROL_FLOW_GUARD_POLICY
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long EnableControlFlowGuard : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long EnableExportSuppression : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long StrictMode : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long EnableXfg : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long EnableXfgAuditMode : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long ReservedFlags : 27; /* bit position: 5 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PROCESS_MITIGATION_CONTROL_FLOW_GUARD_POLICY, *PPROCESS_MITIGATION_CONTROL_FLOW_GUARD_POLICY; /* size: 0x0004 */

typedef struct _PROCESS_MITIGATION_BINARY_SIGNATURE_POLICY
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long MicrosoftSignedOnly : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long StoreSignedOnly : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long MitigationOptIn : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long AuditMicrosoftSignedOnly : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long AuditStoreSignedOnly : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long ReservedFlags : 27; /* bit position: 5 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PROCESS_MITIGATION_BINARY_SIGNATURE_POLICY, *PPROCESS_MITIGATION_BINARY_SIGNATURE_POLICY; /* size: 0x0004 */

typedef struct _PROCESS_MITIGATION_FONT_DISABLE_POLICY
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long DisableNonSystemFonts : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long AuditNonSystemFontLoading : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long ReservedFlags : 30; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PROCESS_MITIGATION_FONT_DISABLE_POLICY, *PPROCESS_MITIGATION_FONT_DISABLE_POLICY; /* size: 0x0004 */

typedef struct _PROCESS_MITIGATION_IMAGE_LOAD_POLICY
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long NoRemoteImages : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long NoLowMandatoryLabelImages : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long PreferSystem32Images : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long AuditNoRemoteImages : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long AuditNoLowMandatoryLabelImages : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long ReservedFlags : 27; /* bit position: 5 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PROCESS_MITIGATION_IMAGE_LOAD_POLICY, *PPROCESS_MITIGATION_IMAGE_LOAD_POLICY; /* size: 0x0004 */

typedef struct _PROCESS_MITIGATION_SYSTEM_CALL_FILTER_POLICY
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long FilterId : 4; /* bit position: 0 */
      /* 0x0000 */ unsigned long ReservedFlags : 28; /* bit position: 4 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PROCESS_MITIGATION_SYSTEM_CALL_FILTER_POLICY, *PPROCESS_MITIGATION_SYSTEM_CALL_FILTER_POLICY; /* size: 0x0004 */

typedef struct _PROCESS_MITIGATION_PAYLOAD_RESTRICTION_POLICY
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long EnableExportAddressFilter : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long AuditExportAddressFilter : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long EnableExportAddressFilterPlus : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long AuditExportAddressFilterPlus : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long EnableImportAddressFilter : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long AuditImportAddressFilter : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned long EnableRopStackPivot : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned long AuditRopStackPivot : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned long EnableRopCallerCheck : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned long AuditRopCallerCheck : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned long EnableRopSimExec : 1; /* bit position: 10 */
      /* 0x0000 */ unsigned long AuditRopSimExec : 1; /* bit position: 11 */
      /* 0x0000 */ unsigned long ReservedFlags : 20; /* bit position: 12 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PROCESS_MITIGATION_PAYLOAD_RESTRICTION_POLICY, *PPROCESS_MITIGATION_PAYLOAD_RESTRICTION_POLICY; /* size: 0x0004 */

typedef struct _PROCESS_MITIGATION_CHILD_PROCESS_POLICY
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long NoChildProcessCreation : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long AuditNoChildProcessCreation : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long AllowSecureProcessCreation : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long ReservedFlags : 29; /* bit position: 3 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PROCESS_MITIGATION_CHILD_PROCESS_POLICY, *PPROCESS_MITIGATION_CHILD_PROCESS_POLICY; /* size: 0x0004 */

typedef struct _PROCESS_MITIGATION_SIDE_CHANNEL_ISOLATION_POLICY
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long SmtBranchTargetIsolation : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long IsolateSecurityDomain : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long DisablePageCombine : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long SpeculativeStoreBypassDisable : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long RestrictCoreSharing : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long ReservedFlags : 27; /* bit position: 5 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PROCESS_MITIGATION_SIDE_CHANNEL_ISOLATION_POLICY, *PPROCESS_MITIGATION_SIDE_CHANNEL_ISOLATION_POLICY; /* size: 0x0004 */

typedef struct _PROCESS_MITIGATION_USER_SHADOW_STACK_POLICY
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long EnableUserShadowStack : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long AuditUserShadowStack : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long SetContextIpValidation : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long AuditSetContextIpValidation : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long EnableUserShadowStackStrictMode : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long BlockNonCetBinaries : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned long BlockNonCetBinariesNonEhcont : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned long AuditBlockNonCetBinaries : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned long CetDynamicApisOutOfProcOnly : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned long SetContextIpValidationRelaxedMode : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned long ReservedFlags : 22; /* bit position: 10 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PROCESS_MITIGATION_USER_SHADOW_STACK_POLICY, *PPROCESS_MITIGATION_USER_SHADOW_STACK_POLICY; /* size: 0x0004 */

typedef struct _PROCESS_MITIGATION_REDIRECTION_TRUST_POLICY
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long EnforceRedirectionTrust : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long AuditRedirectionTrust : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long ReservedFlags : 30; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PROCESS_MITIGATION_REDIRECTION_TRUST_POLICY, *PPROCESS_MITIGATION_REDIRECTION_TRUST_POLICY; /* size: 0x0004 */

typedef struct _PROCESS_MITIGATION_USER_POINTER_AUTH_POLICY
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long EnablePointerAuthUserIp : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long ReservedFlags : 31; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PROCESS_MITIGATION_USER_POINTER_AUTH_POLICY, *PPROCESS_MITIGATION_USER_POINTER_AUTH_POLICY; /* size: 0x0004 */

typedef struct _PROCESS_MITIGATION_ACTIVATION_CONTEXT_TRUST_POLICY
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long AssemblyManifestRedirectionTrust : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long ReservedFlags : 31; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PROCESS_MITIGATION_ACTIVATION_CONTEXT_TRUST_POLICY, *PPROCESS_MITIGATION_ACTIVATION_CONTEXT_TRUST_POLICY; /* size: 0x0004 */

typedef struct _PROCESS_MITIGATION_POLICY_INFORMATION
{
  /* 0x0000 */ enum _PROCESS_MITIGATION_POLICY Policy;
  union
  {
    /* 0x0004 */ struct _PROCESS_MITIGATION_ASLR_POLICY ASLRPolicy;
    /* 0x0004 */ struct _PROCESS_MITIGATION_STRICT_HANDLE_CHECK_POLICY StrictHandleCheckPolicy;
    /* 0x0004 */ struct _PROCESS_MITIGATION_SYSTEM_CALL_DISABLE_POLICY SystemCallDisablePolicy;
    /* 0x0004 */ struct _PROCESS_MITIGATION_EXTENSION_POINT_DISABLE_POLICY ExtensionPointDisablePolicy;
    /* 0x0004 */ struct _PROCESS_MITIGATION_DYNAMIC_CODE_POLICY DynamicCodePolicy;
    /* 0x0004 */ struct _PROCESS_MITIGATION_CONTROL_FLOW_GUARD_POLICY ControlFlowGuardPolicy;
    /* 0x0004 */ struct _PROCESS_MITIGATION_BINARY_SIGNATURE_POLICY SignaturePolicy;
    /* 0x0004 */ struct _PROCESS_MITIGATION_FONT_DISABLE_POLICY FontDisablePolicy;
    /* 0x0004 */ struct _PROCESS_MITIGATION_IMAGE_LOAD_POLICY ImageLoadPolicy;
    /* 0x0004 */ struct _PROCESS_MITIGATION_SYSTEM_CALL_FILTER_POLICY SystemCallFilterPolicy;
    /* 0x0004 */ struct _PROCESS_MITIGATION_PAYLOAD_RESTRICTION_POLICY PayloadRestrictionPolicy;
    /* 0x0004 */ struct _PROCESS_MITIGATION_CHILD_PROCESS_POLICY ChildProcessPolicy;
    /* 0x0004 */ struct _PROCESS_MITIGATION_SIDE_CHANNEL_ISOLATION_POLICY SideChannelIsolationPolicy;
    /* 0x0004 */ struct _PROCESS_MITIGATION_USER_SHADOW_STACK_POLICY UserShadowStackPolicy;
    /* 0x0004 */ struct _PROCESS_MITIGATION_REDIRECTION_TRUST_POLICY RedirectionTrustPolicy;
    /* 0x0004 */ struct _PROCESS_MITIGATION_USER_POINTER_AUTH_POLICY UserPointerAuthPolicy;
    /* 0x0004 */ struct _PROCESS_MITIGATION_ACTIVATION_CONTEXT_TRUST_POLICY ActivationContextTrustPolicy;
  }; /* size: 0x0004 */
} PROCESS_MITIGATION_POLICY_INFORMATION, *PPROCESS_MITIGATION_POLICY_INFORMATION; /* size: 0x0008 */

