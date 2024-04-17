class CPropertySetStream
{
  /* 0x0000 */ struct tagPROPERTYSETHEADER* _pph;
  /* 0x0004 */ unsigned long _oSection;
  /* 0x0008 */ unsigned long _cSection;
  /* 0x000c */ unsigned short _CodePage;
  /* 0x000e */ unsigned char _Flags;
  /* 0x000f */ unsigned char _State;
  /* 0x0010 */ unsigned long _Locale;
  /* 0x0014 */ unsigned long _grfBehavior;
  /* 0x0018 */ unsigned long _cbTail;
  /* 0x001c */ class PMemoryAllocator* _pma;
  /* 0x0020 */ class IMappedStream* _pmstm;
}; /* size: 0x0024 */

