struct tagLocationInfoData
{
  /* 0x0000 */ wchar_t* machineName;
  /* 0x0004 */ unsigned long processId;
  /* 0x0008 */ unsigned long apartmentId;
  /* 0x000c */ unsigned long contextId;
}; /* size: 0x0010 */

class ServerLocationInfo
{
  /* 0x0014 */ struct tagLocationInfoData _locationInfoData;
  /* 0x0024 */ class CObjectContext* _pObjectContext;
  /* 0x0028 */ struct ISpecialSystemProperties* _pISSP;
}; /* size: 0x002c */

