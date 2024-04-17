typedef struct _xml_error
{
  /* 0x0000 */ unsigned int _nLine;
  /* 0x0004 */ wchar_t* _pchBuf;
  /* 0x0008 */ unsigned int _cchBuf;
  /* 0x000c */ unsigned int _ich;
  /* 0x0010 */ wchar_t* _pszFound;
  /* 0x0014 */ wchar_t* _pszExpected;
  /* 0x0018 */ unsigned long _reserved1;
  /* 0x001c */ unsigned long _reserved2;
} xml_error, *Pxml_error; /* size: 0x0020 */

