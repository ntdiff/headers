typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _SOV_RANGE_CHECK_DATA
{
  /* 0x0000 */ unsigned char RemoveZone;
  /* 0x0008 */ unsigned __int64 InRange[2];
  /* 0x0018 */ struct _GUID ZidForRemoval;
  /* 0x0028 */ unsigned __int64 Reserved1;
  /* 0x0030 */ unsigned __int64 Reserved2;
} SOV_RANGE_CHECK_DATA, *PSOV_RANGE_CHECK_DATA; /* size: 0x0038 */

