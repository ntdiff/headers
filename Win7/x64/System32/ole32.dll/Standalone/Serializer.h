class Serializer
{
  /* 0x0000 */ struct IStream* _pStream;
  /* 0x0008 */ struct IStream* _pOriginalStream;
  /* 0x0010 */ struct IBuffer* _pIBuff;
  /* 0x0018 */ unsigned char* _buffer;
  /* 0x0020 */ unsigned long _nWritten;
  /* 0x0024 */ unsigned long _bufSize;
  /* 0x0028 */ unsigned long _operationSize;
  /* 0x0030 */ void* _handle;
  /* 0x0038 */ long _clRefs;
  /* 0x003c */ unsigned long _direction;
  /* 0x0040 */ unsigned long _position;
  /* 0x0044 */ unsigned long _start;
  /* 0x0048 */ unsigned long _dwMaxDestCtx;
  /* 0x004c */ unsigned long _dwCurrentDestCtx;
  /* 0x0050 */ unsigned long _dwMarshalFlags;
}; /* size: 0x0058 */

