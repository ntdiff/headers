class Serializer
{
  /* 0x0000 */ struct IStream* _pStream;
  /* 0x0004 */ struct IStream* _pOriginalStream;
  /* 0x0008 */ struct IBuffer* _pIBuff;
  /* 0x000c */ unsigned char* _buffer;
  /* 0x0010 */ unsigned long _nWritten;
  /* 0x0014 */ unsigned long _bufSize;
  /* 0x0018 */ unsigned long _operationSize;
  /* 0x001c */ void* _handle;
  /* 0x0020 */ long _clRefs;
  /* 0x0024 */ unsigned long _direction;
  /* 0x0028 */ unsigned long _position;
  /* 0x002c */ unsigned long _start;
  /* 0x0030 */ unsigned long _dwMaxDestCtx;
  /* 0x0034 */ unsigned long _dwCurrentDestCtx;
  /* 0x0038 */ unsigned long _dwMarshalFlags;
}; /* size: 0x003c */

