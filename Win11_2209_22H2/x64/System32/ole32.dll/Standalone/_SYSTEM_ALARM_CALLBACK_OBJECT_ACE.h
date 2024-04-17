typedef struct _ACE_HEADER
{
  /* 0x0000 */ unsigned char AceType;
  /* 0x0001 */ unsigned char AceFlags;
  /* 0x0002 */ unsigned short AceSize;
} ACE_HEADER, *PACE_HEADER; /* size: 0x0004 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _SYSTEM_ALARM_CALLBACK_OBJECT_ACE
{
  /* 0x0000 */ struct _ACE_HEADER Header;
  /* 0x0004 */ unsigned long Mask;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ struct _GUID ObjectType;
  /* 0x001c */ struct _GUID InheritedObjectType;
  /* 0x002c */ unsigned long SidStart;
} SYSTEM_ALARM_CALLBACK_OBJECT_ACE, *PSYSTEM_ALARM_CALLBACK_OBJECT_ACE; /* size: 0x0030 */

