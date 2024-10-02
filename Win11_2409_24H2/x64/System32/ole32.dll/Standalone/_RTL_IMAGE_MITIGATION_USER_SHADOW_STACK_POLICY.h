typedef union _RTL_IMAGE_MITIGATION_POLICY
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 AuditState : 2; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 AuditFlag : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 EnableAdditionalAuditingOption : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Reserved : 60; /* bit position: 4 */
    }; /* bitfield */
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 PolicyState : 2; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 AlwaysInherit : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 EnableAdditionalPolicyOption : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 AuditReserved : 60; /* bit position: 4 */
    }; /* bitfield */
  }; /* size: 0x0008 */
} RTL_IMAGE_MITIGATION_POLICY, *PRTL_IMAGE_MITIGATION_POLICY; /* size: 0x0008 */

typedef struct _RTL_IMAGE_MITIGATION_USER_SHADOW_STACK_POLICY
{
  /* 0x0000 */ union _RTL_IMAGE_MITIGATION_POLICY UserShadowStack;
  /* 0x0008 */ union _RTL_IMAGE_MITIGATION_POLICY SetContextIpValidation;
  /* 0x0010 */ union _RTL_IMAGE_MITIGATION_POLICY BlockNonCetBinaries;
} RTL_IMAGE_MITIGATION_USER_SHADOW_STACK_POLICY, *PRTL_IMAGE_MITIGATION_USER_SHADOW_STACK_POLICY; /* size: 0x0018 */

