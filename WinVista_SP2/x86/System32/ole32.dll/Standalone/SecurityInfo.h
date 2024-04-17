struct tagSecurityInfoData
{
  /* 0x0000 */ unsigned long dwAuthnFlags;
  /* 0x0004 */ struct _COSERVERINFO* pServerInfo;
  /* 0x0008 */ struct _COAUTHIDENTITY* pAuthIdentityInfo;
}; /* size: 0x000c */

class SecurityInfo
{
  /* 0x0018 */ struct tagSecurityInfoData _securityInfoData;
  /* 0x0024 */ struct tagSecurityInfoData _securityInfoDataFixedUp;
  /* 0x0030 */ unsigned long _dwFixupServerInfoBufSize;
}; /* size: 0x0034 */

