struct tagSWITCH_CONTEXT_ATTRIBUTE
{
  /* 0x0000 */ unsigned __int64 ulContextUpdateCounter;
  /* 0x0008 */ int fAllowContextUpdate;
  /* 0x000c */ int fEnableTrace;
  /* 0x0010 */ unsigned __int64 EtwHandle;
}; /* size: 0x0018 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagSWITCH_CONTEXT_DATA
{
  /* 0x0000 */ unsigned __int64 ullOsMaxVersionTested;
  /* 0x0008 */ unsigned long ulTargetPlatform;
  /* 0x0010 */ unsigned __int64 ullContextMinimum;
  /* 0x0018 */ struct _GUID guPlatform;
  /* 0x0028 */ struct _GUID guMinPlatform;
  /* 0x0038 */ unsigned long ulContextSource;
  /* 0x003c */ unsigned long ulElementCount;
  /* 0x0040 */ struct _GUID guElements[48];
}; /* size: 0x0340 */

struct tagSWITCH_CONTEXT
{
  /* 0x0000 */ struct tagSWITCH_CONTEXT_ATTRIBUTE Attribute;
  /* 0x0018 */ struct tagSWITCH_CONTEXT_DATA Data;
}; /* size: 0x0358 */

