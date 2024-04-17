typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagCOMVERSION
{
  /* 0x0000 */ unsigned short MajorVersion;
  /* 0x0002 */ unsigned short MinorVersion;
}; /* size: 0x0004 */

class CDestObject
{
  /* 0x0004 */ struct tagCOMVERSION _comversion;
  /* 0x0008 */ unsigned long _dwDestCtx;
}; /* size: 0x000c */

class CRpcChannelBuffer
{
  /* 0x000c */ struct _GUID _guidSignature;
  /* 0x001c */ unsigned long _cRefs;
  /* 0x0020 */ unsigned long state;
  /* 0x0024 */ class CChannelHandle* volatile _pRpcDefault;
  /* 0x0028 */ class CChannelHandle* _pRpcCustom;
  /* 0x002c */ class OXIDEntry* _pOXIDEntry;
  /* 0x0030 */ struct tagIPIDEntry* _pIPIDEntry;
  /* 0x0034 */ void* _pInterfaceInfo;
  /* 0x0038 */ class CStdIdentity* _pStdId;
  /* 0x003c */ class CDestObject _destObj;
}; /* size: 0x0048 */

