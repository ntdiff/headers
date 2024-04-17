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

typedef struct _RTL_IMAGE_MITIGATION_PAYLOAD_RESTRICTION_POLICY
{
  /* 0x0000 */ union _RTL_IMAGE_MITIGATION_POLICY EnableExportAddressFilter;
  /* 0x0008 */ union _RTL_IMAGE_MITIGATION_POLICY EnableExportAddressFilterPlus;
  /* 0x0010 */ union _RTL_IMAGE_MITIGATION_POLICY EnableImportAddressFilter;
  /* 0x0018 */ union _RTL_IMAGE_MITIGATION_POLICY EnableRopStackPivot;
  /* 0x0020 */ union _RTL_IMAGE_MITIGATION_POLICY EnableRopCallerCheck;
  /* 0x0028 */ union _RTL_IMAGE_MITIGATION_POLICY EnableRopSimExec;
  /* 0x0030 */ wchar_t EafPlusModuleList[512];
} RTL_IMAGE_MITIGATION_PAYLOAD_RESTRICTION_POLICY, *PRTL_IMAGE_MITIGATION_PAYLOAD_RESTRICTION_POLICY; /* size: 0x0430 */

