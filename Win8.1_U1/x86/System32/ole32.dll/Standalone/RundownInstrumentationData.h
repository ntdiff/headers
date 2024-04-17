typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

enum WhichTypeOfRundown
{
  NoRundown = 0,
  RundownInRemoteAddrefCall = 1,
  RundownInRemoteQueryInterfaceCall = 2,
  RundownInRemoteQueryInterface2Call = 3,
  RundownInNonIUnknownInterfaceCall = 4,
};

struct RundownInstrumentationData
{
  /* 0x0000 */ struct _GUID riid;
  /* 0x0010 */ unsigned long method;
  /* 0x0014 */ struct _GUID ripid;
  /* 0x0024 */ enum WhichTypeOfRundown whichTypeOfRundown;
}; /* size: 0x0028 */

