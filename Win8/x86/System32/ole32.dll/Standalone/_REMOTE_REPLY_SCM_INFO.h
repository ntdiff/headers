typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagCOMVERSION
{
  /* 0x0000 */ unsigned short MajorVersion;
  /* 0x0002 */ unsigned short MinorVersion;
}; /* size: 0x0004 */

typedef struct _REMOTE_REPLY_SCM_INFO
{
  /* 0x0000 */ unsigned __int64 Oxid;
  /* 0x0008 */ struct tagDUALSTRINGARRAY* pdsaOxidBindings;
  /* 0x000c */ struct _GUID ipidRemUnknown;
  /* 0x001c */ unsigned long authnHint;
  /* 0x0020 */ struct tagCOMVERSION serverVersion;
  /* 0x0024 */ long __PADDING__[1];
} REMOTE_REPLY_SCM_INFO, *PREMOTE_REPLY_SCM_INFO; /* size: 0x0028 */

