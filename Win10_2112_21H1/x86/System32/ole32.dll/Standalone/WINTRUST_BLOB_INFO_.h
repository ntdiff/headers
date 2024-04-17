typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct WINTRUST_BLOB_INFO_
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0004 */ struct _GUID gSubject;
  /* 0x0014 */ const wchar_t* pcwszDisplayName;
  /* 0x0018 */ unsigned long cbMemObject;
  /* 0x001c */ unsigned char* pbMemObject;
  /* 0x0020 */ unsigned long cbMemSignedMsg;
  /* 0x0024 */ unsigned char* pbMemSignedMsg;
}; /* size: 0x0028 */

