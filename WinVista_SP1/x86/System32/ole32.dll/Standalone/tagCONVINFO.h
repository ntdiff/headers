typedef enum _SECURITY_IMPERSONATION_LEVEL
{
  SecurityAnonymous = 0,
  SecurityIdentification = 1,
  SecurityImpersonation = 2,
  SecurityDelegation = 3,
} SECURITY_IMPERSONATION_LEVEL, *PSECURITY_IMPERSONATION_LEVEL;

typedef struct _SECURITY_QUALITY_OF_SERVICE
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
  /* 0x0008 */ unsigned char ContextTrackingMode;
  /* 0x0009 */ unsigned char EffectiveOnly;
  /* 0x000a */ char __PADDING__[2];
} SECURITY_QUALITY_OF_SERVICE, *PSECURITY_QUALITY_OF_SERVICE; /* size: 0x000c */

struct tagCONVCONTEXT
{
  /* 0x0000 */ unsigned int cb;
  /* 0x0004 */ unsigned int wFlags;
  /* 0x0008 */ unsigned int wCountryID;
  /* 0x000c */ int iCodePage;
  /* 0x0010 */ unsigned long dwLangID;
  /* 0x0014 */ unsigned long dwSecurity;
  /* 0x0018 */ struct _SECURITY_QUALITY_OF_SERVICE qos;
}; /* size: 0x0024 */

struct tagCONVINFO
{
  /* 0x0000 */ unsigned long cb;
  /* 0x0004 */ unsigned long hUser;
  /* 0x0008 */ struct HCONV__* hConvPartner;
  /* 0x000c */ struct HSZ__* hszSvcPartner;
  /* 0x0010 */ struct HSZ__* hszServiceReq;
  /* 0x0014 */ struct HSZ__* hszTopic;
  /* 0x0018 */ struct HSZ__* hszItem;
  /* 0x001c */ unsigned int wFmt;
  /* 0x0020 */ unsigned int wType;
  /* 0x0024 */ unsigned int wStatus;
  /* 0x0028 */ unsigned int wConvst;
  /* 0x002c */ unsigned int wLastError;
  /* 0x0030 */ struct HCONVLIST__* hConvList;
  /* 0x0034 */ struct tagCONVCONTEXT ConvCtxt;
  /* 0x0058 */ struct HWND__* hwnd;
  /* 0x005c */ struct HWND__* hwndPartner;
}; /* size: 0x0060 */

