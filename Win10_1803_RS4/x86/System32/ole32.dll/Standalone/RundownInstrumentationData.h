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
  RundownInServerSideUnmarshalInterface = 5,
};

struct RundownInstrumentationData
{
  /* 0x0000 */ struct _GUID iidOfCall;
  /* 0x0010 */ unsigned long method;
  /* 0x0014 */ struct _GUID ipid;
  /* 0x0024 */ enum WhichTypeOfRundown whichTypeOfRundown;
  /* 0x0028 */ struct _GUID implementedInterface1;
  /* 0x0038 */ struct _GUID implementedInterface2;
  /* 0x0048 */ struct _GUID implementedInterface3;
}; /* size: 0x0058 */

