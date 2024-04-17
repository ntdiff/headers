typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct WMIREGGUIDW
{
  /* 0x0000 */ struct _GUID Guid;
  /* 0x0010 */ unsigned long Flags;
  /* 0x0014 */ unsigned long InstanceCount;
  union
  {
    /* 0x0018 */ unsigned long InstanceNameList;
    /* 0x0018 */ unsigned long BaseNameOffset;
    /* 0x0018 */ unsigned __int64 Pdo;
    /* 0x0018 */ unsigned __int64 InstanceInfo;
  }; /* size: 0x0008 */
}; /* size: 0x0020 */

