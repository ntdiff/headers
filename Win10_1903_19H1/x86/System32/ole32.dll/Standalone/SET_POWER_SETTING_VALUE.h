typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

enum SYSTEM_POWER_CONDITION
{
  PoAc = 0,
  PoDc = 1,
  PoHot = 2,
  PoConditionMaximum = 3,
};

struct SET_POWER_SETTING_VALUE
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ struct _GUID Guid;
  /* 0x0014 */ enum SYSTEM_POWER_CONDITION PowerCondition;
  /* 0x0018 */ unsigned long DataLength;
  /* 0x001c */ unsigned char Data[1];
  /* 0x001d */ char __PADDING__[3];
}; /* size: 0x0020 */

