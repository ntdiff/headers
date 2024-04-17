struct tagCOMVERSION
{
  /* 0x0000 */ unsigned short MajorVersion;
  /* 0x0002 */ unsigned short MinorVersion;
}; /* size: 0x0004 */

class CDestObject
{
  /* 0x0008 */ struct tagCOMVERSION _comversion;
  /* 0x000c */ unsigned long _dwDestCtx;
}; /* size: 0x0010 */

class CRpcChannelBuffer
{
  /* 0x0018 */ unsigned long _cRefs;
  /* 0x001c */ unsigned long state;
  /* 0x0020 */ class CChannelHandle* volatile _pRpcDefault;
  /* 0x0028 */ class CChannelHandle* _pRpcCustom;
  /* 0x0030 */ class OXIDEntry* _pOXIDEntry;
  /* 0x0038 */ struct tagIPIDEntry* _pIPIDEntry;
  /* 0x0040 */ void* _pInterfaceInfo;
  /* 0x0048 */ class CStdIdentity* _pStdId;
  /* 0x0050 */ class CDestObject _destObj;
}; /* size: 0x0060 */

