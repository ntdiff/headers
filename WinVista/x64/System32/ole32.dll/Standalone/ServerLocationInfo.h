struct tagLocationInfoData
{
  /* 0x0000 */ wchar_t* machineName;
  /* 0x0008 */ unsigned long processId;
  /* 0x000c */ unsigned long apartmentId;
  /* 0x0010 */ unsigned long contextId;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

class ServerLocationInfo
{
  /* 0x0020 */ struct tagLocationInfoData _locationInfoData;
  /* 0x0038 */ class CObjectContext* _pObjectContext;
  /* 0x0040 */ struct ISpecialSystemProperties* _pISSP;
}; /* size: 0x0048 */

