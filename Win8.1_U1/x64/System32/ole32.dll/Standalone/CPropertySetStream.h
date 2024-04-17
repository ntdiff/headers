class CPropertySetStream
{
  /* 0x0000 */ struct tagPROPERTYSETHEADER* _pph;
  /* 0x0008 */ unsigned long _oSection;
  /* 0x000c */ unsigned long _cSection;
  /* 0x0010 */ unsigned short _CodePage;
  /* 0x0012 */ unsigned char _Flags;
  /* 0x0013 */ unsigned char _State;
  /* 0x0014 */ unsigned long _Locale;
  /* 0x0018 */ unsigned long _grfBehavior;
  /* 0x001c */ unsigned long _cbTail;
  /* 0x0020 */ class PMemoryAllocator* _pma;
  /* 0x0028 */ class IMappedStream* _pmstm;
}; /* size: 0x0030 */

