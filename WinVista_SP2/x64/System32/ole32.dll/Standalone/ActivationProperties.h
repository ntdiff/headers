typedef enum _TAG_UNNAMED_24
{
  NOT_MARSHALLED = 1,
  SIZED = 2,
  MARSHALLED = 3,
  UNMARSHALLED = 4,
} TAG_UNNAMED_24, *PTAG_UNNAMED_24;

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
  /* 0x0028 */ struct _GUID* pclsid;
  /* 0x0030 */ unsigned long* pSizes;
  /* 0x0038 */ struct tagCustomOpaqueData* opaqueData;
}; /* size: 0x0040 */

class ActivationProperties
{
  /* 0x0018 */ enum _TAG_UNNAMED_24 _marshalState;
  /* 0x001c */ struct _GUID _actCLSID;
  /* 0x002c */ int _unSerialized;
  /* 0x0030 */ int _unSerializedInproc;
  /* 0x0034 */ long _refCount;
  /* 0x0038 */ struct tagCustomHeader _serHeader;
  /* 0x0078 */ struct tagCustomHeader _unSerHeader;
  /* 0x00b8 */ unsigned long _marshalFlags;
  /* 0x00bc */ unsigned long _size;
  /* 0x00c0 */ int _toDelete;
  /* 0x00c4 */ int _fDestruct;
  /* 0x00c8 */ int _fInprocSerializationRequired;
  /* 0x00cc */ unsigned long _totalSize;
  /* 0x00d0 */ class SerializableProperty* serializableIfsCollection[10];
  /* 0x0120 */ unsigned long _ifsIndex;
  /* 0x0124 */ struct _GUID _clsidArray[10];
  /* 0x01c4 */ unsigned long _sizeArray[10];
  /* 0x01ec */ unsigned long _headerSize;
  /* 0x01f0 */ class Serializer* _pUnSer;
  /* 0x01f8 */ void* _blob;
}; /* size: 0x0200 */

