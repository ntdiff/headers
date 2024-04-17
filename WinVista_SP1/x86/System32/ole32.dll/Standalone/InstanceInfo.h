struct tagInstanceInfoData
{
  /* 0x0000 */ unsigned short* fileName;
  /* 0x0004 */ unsigned long mode;
  /* 0x0008 */ struct tagMInterfacePointer* ifdROT;
  /* 0x000c */ struct tagMInterfacePointer* ifdStg;
}; /* size: 0x0010 */

class InstanceInfo
{
  /* 0x0014 */ struct tagInstanceInfoData _instanceInfoData;
  /* 0x0024 */ struct IStorage* _pstg;
}; /* size: 0x0028 */

