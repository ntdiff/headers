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
      /* 0x0000 */ unsigned long ReservedFlags : 31; /* bit position: 1 */
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
      /* 0x0000 */ unsigned long ReservedFlags : 31; /* bit position: 1 */
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
      /* 0x0000 */ unsigned long ReservedFlags : 31; /* bit position: 1 */
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
      /* 0x0000 */ unsigned long ReservedFlags : 31; /* bit position: 1 */
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
  }; /* size: 0x0004 */
} PROCESS_MITIGATION_POLICY_INFORMATION, *PPROCESS_MITIGATION_POLICY_INFORMATION; /* size: 0x0008 */

