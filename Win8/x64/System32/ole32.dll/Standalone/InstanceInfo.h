struct tagInstanceInfoData
{
  /* 0x0000 */ wchar_t* fileName;
  /* 0x0008 */ unsigned long mode;
  /* 0x0010 */ struct tagMInterfacePointer* ifdROT;
  /* 0x0018 */ struct tagMInterfacePointer* ifdStg;
}; /* size: 0x0020 */

class InstanceInfo
{
  /* 0x0020 */ struct tagInstanceInfoData _instanceInfoData;
  /* 0x0040 */ struct IStorage* _pstg;
}; /* size: 0x0048 */

