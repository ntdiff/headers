typedef struct _COAUTHINFO
{
  /* 0x0000 */ unsigned long dwAuthnSvc;
  /* 0x0004 */ unsigned long dwAuthzSvc;
  /* 0x0008 */ unsigned short* pwszServerPrincName;
  /* 0x0010 */ unsigned long dwAuthnLevel;
  /* 0x0014 */ unsigned long dwImpersonationLevel;
  /* 0x0018 */ struct _COAUTHIDENTITY* pAuthIdentityData;
  /* 0x0020 */ unsigned long dwCapabilities;
  /* 0x0024 */ long __PADDING__[1];
} COAUTHINFO, *PCOAUTHINFO; /* size: 0x0028 */

