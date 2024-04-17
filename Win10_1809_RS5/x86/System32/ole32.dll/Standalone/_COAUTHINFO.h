typedef struct _COAUTHINFO
{
  /* 0x0000 */ unsigned long dwAuthnSvc;
  /* 0x0004 */ unsigned long dwAuthzSvc;
  /* 0x0008 */ wchar_t* pwszServerPrincName;
  /* 0x000c */ unsigned long dwAuthnLevel;
  /* 0x0010 */ unsigned long dwImpersonationLevel;
  /* 0x0014 */ struct _COAUTHIDENTITY* pAuthIdentityData;
  /* 0x0018 */ unsigned long dwCapabilities;
} COAUTHINFO, *PCOAUTHINFO; /* size: 0x001c */

