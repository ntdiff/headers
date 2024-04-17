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

struct tagMONCBSTRUCT
{
  /* 0x0000 */ unsigned int cb;
  /* 0x0004 */ unsigned long dwTime;
  /* 0x0008 */ void* hTask;
  /* 0x000c */ unsigned long dwRet;
  /* 0x0010 */ unsigned int wType;
  /* 0x0014 */ unsigned int wFmt;
  /* 0x0018 */ struct HCONV__* hConv;
  /* 0x001c */ struct HSZ__* hsz1;
  /* 0x0020 */ struct HSZ__* hsz2;
  /* 0x0024 */ struct HDDEDATA__* hData;
  /* 0x0028 */ unsigned long dwData1;
  /* 0x002c */ unsigned long dwData2;
  /* 0x0030 */ struct tagCONVCONTEXT cc;
  /* 0x0054 */ unsigned long cbData;
  /* 0x0058 */ unsigned long Data[8];
}; /* size: 0x0078 */

