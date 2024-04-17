typedef enum _TAG_UNNAMED_162
{
  NOT_MARSHALLED = 1,
  SIZED = 2,
  MARSHALLED = 3,
  UNMARSHALLED = 4,
} TAG_UNNAMED_162, *PTAG_UNNAMED_162;

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagCustomHeader
{
  /* 0x0000 */ unsigned long totalSize;
  /* 0x0004 */ unsigned long headerSize;
  /* 0x0008 */ unsigned long cOpaqueData;
  /* 0x000c */ unsigned long destCtx;
  /* 0x0010 */ unsigned long cIfs;
  /* 0x0014 */ struct _GUID classInfoClsid;
  /* 0x0024 */ struct _GUID* pclsid;
  /* 0x0028 */ unsigned long* pSizes;
  /* 0x002c */ struct tagCustomOpaqueData* opaqueData;
}; /* size: 0x0030 */

class ActivationProperties
{
  /* 0x000c */ enum _TAG_UNNAMED_162 _marshalState;
  /* 0x0010 */ struct _GUID _actCLSID;
  /* 0x0020 */ int _unSerialized;
  /* 0x0024 */ int _unSerializedInproc;
  /* 0x0028 */ long _refCount;
  /* 0x002c */ struct tagCustomHeader _serHeader;
  /* 0x005c */ struct tagCustomHeader _unSerHeader;
  /* 0x008c */ unsigned long _marshalFlags;
  /* 0x0090 */ unsigned long _size;
  /* 0x0094 */ int _toDelete;
  /* 0x0098 */ int _fDestruct;
  /* 0x009c */ int _fInprocSerializationRequired;
  /* 0x00a0 */ unsigned long _totalSize;
  /* 0x00a4 */ class SerializableProperty* serializableIfsCollection[10];
  /* 0x00cc */ unsigned long _ifsIndex;
  /* 0x00d0 */ struct _GUID _clsidArray[10];
  /* 0x0170 */ unsigned long _sizeArray[10];
  /* 0x0198 */ unsigned long _headerSize;
  /* 0x019c */ class Serializer* _pUnSer;
  /* 0x01a0 */ void* _blob;
}; /* size: 0x01a4 */

