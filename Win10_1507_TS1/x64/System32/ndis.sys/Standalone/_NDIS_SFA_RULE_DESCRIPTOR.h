typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_SFA_RULE_DESCRIPTOR
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Length;
  /* 0x0008 */ unsigned long Type;
  /* 0x000c */ unsigned long Flags;
  /* 0x0010 */ unsigned short Priority;
  /* 0x0012 */ unsigned char ConditionCount;
  /* 0x0013 */ unsigned char ConditionType[5];
  /* 0x0018 */ unsigned short ConditionSize[5];
  /* 0x0024 */ unsigned long ConditionDataOffset[5];
  /* 0x0038 */ unsigned char ActionCount;
  /* 0x003a */ unsigned short ActionDataSize[5];
  /* 0x0044 */ unsigned long ActionDataOffset[5];
  /* 0x0058 */ unsigned short TimeToLive;
  /* 0x005a */ char MssDelta;
  /* 0x005b */ char ReverseMssDelta;
} NDIS_SFA_RULE_DESCRIPTOR, *PNDIS_SFA_RULE_DESCRIPTOR; /* size: 0x005c */

