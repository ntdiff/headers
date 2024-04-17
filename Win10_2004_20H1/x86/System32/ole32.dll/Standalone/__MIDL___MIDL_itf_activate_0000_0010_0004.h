typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef enum __MIDL___MIDL_itf_activate_0000_0010_0001
{
  ST_SERVER = 1,
  ST_OLDSURROGATE = 2,
  ST_COMPLUSAPP = 3,
  ST_SERVICE = 4,
} _MIDL___MIDL_itf_activate_0000_0010_0001, *P_MIDL___MIDL_itf_activate_0000_0010_0001;

typedef enum __MIDL___MIDL_itf_activate_0000_0010_0002
{
  SIT_RUNAS_SPECIFIC_USER = 1,
  SIT_RUNAS_INTERACTIVE = 2,
} _MIDL___MIDL_itf_activate_0000_0010_0002, *P_MIDL___MIDL_itf_activate_0000_0010_0002;

typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

typedef struct __MIDL___MIDL_itf_activate_0000_0010_0004
{
  /* 0x0000 */ unsigned long ulNumClasses;
  /* 0x0004 */ struct _GUID* pCLSIDs;
  /* 0x0008 */ unsigned long pidProcess;
  /* 0x000c */ void* hProcess;
  /* 0x0010 */ void* hImpersonationToken;
  /* 0x0014 */ wchar_t* pwszWinstaDesktop;
  /* 0x0018 */ unsigned long dwState;
  /* 0x001c */ struct _GUID AppId;
  /* 0x002c */ enum __MIDL___MIDL_itf_activate_0000_0010_0001 ServerType;
  /* 0x0030 */ enum __MIDL___MIDL_itf_activate_0000_0010_0002 ServerID;
  /* 0x0034 */ struct _FILETIME ftCreated;
} _MIDL___MIDL_itf_activate_0000_0010_0004, *P_MIDL___MIDL_itf_activate_0000_0010_0004; /* size: 0x003c */

