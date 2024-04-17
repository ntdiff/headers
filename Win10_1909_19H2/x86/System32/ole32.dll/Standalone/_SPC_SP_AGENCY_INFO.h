typedef struct _SPC_SP_AGENCY_INFO
{
  /* 0x0000 */ struct SPC_LINK_* pPolicyInformation;
  /* 0x0004 */ wchar_t* pwszPolicyDisplayText;
  /* 0x0008 */ struct _SPC_IMAGE* pLogoImage;
  /* 0x000c */ struct SPC_LINK_* pLogoLink;
} SPC_SP_AGENCY_INFO, *PSPC_SP_AGENCY_INFO; /* size: 0x0010 */

