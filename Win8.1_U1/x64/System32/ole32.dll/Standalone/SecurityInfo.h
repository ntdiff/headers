struct tagSecurityInfoData
{
  /* 0x0000 */ unsigned long dwAuthnFlags;
  /* 0x0008 */ struct _COSERVERINFO* pServerInfo;
  /* 0x0010 */ struct _COAUTHIDENTITY* pAuthIdentityInfo;
}; /* size: 0x0018 */

class SecurityInfo
{
  /* 0x0028 */ struct tagSecurityInfoData _securityInfoData;
  /* 0x0040 */ struct tagSecurityInfoData _securityInfoDataFixedUp;
  /* 0x0058 */ unsigned long _dwFixupServerInfoBufSize;
}; /* size: 0x0060 */

