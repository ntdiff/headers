typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagMsgRoutingInfo
{
  /* 0x0000 */ unsigned int SystemProcessID;
  /* 0x0004 */ unsigned int SystemThreadID;
  /* 0x0008 */ unsigned int Identity;
  /* 0x0010 */ unsigned __int64 ItemID;
  /* 0x0018 */ struct _GUID ConnectionGuid;
}; /* size: 0x0028 */

struct tagInputRoutingInfo
{
  /* 0x0000 */ unsigned int peerId;
  /* 0x0004 */ unsigned int itemId;
  /* 0x0008 */ struct tagMsgRoutingInfo msgRoutingInfo;
}; /* size: 0x0030 */

