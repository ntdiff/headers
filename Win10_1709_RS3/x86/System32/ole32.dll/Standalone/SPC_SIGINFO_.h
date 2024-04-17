typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct SPC_SIGINFO_
{
  /* 0x0000 */ unsigned long dwSipVersion;
  /* 0x0004 */ struct _GUID gSIPGuid;
  /* 0x0014 */ unsigned long dwReserved1;
  /* 0x0018 */ unsigned long dwReserved2;
  /* 0x001c */ unsigned long dwReserved3;
  /* 0x0020 */ unsigned long dwReserved4;
  /* 0x0024 */ unsigned long dwReserved5;
}; /* size: 0x0028 */

