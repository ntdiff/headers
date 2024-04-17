typedef struct _xml_error
{
  /* 0x0000 */ unsigned int _nLine;
  /* 0x0008 */ wchar_t* _pchBuf;
  /* 0x0010 */ unsigned int _cchBuf;
  /* 0x0014 */ unsigned int _ich;
  /* 0x0018 */ wchar_t* _pszFound;
  /* 0x0020 */ wchar_t* _pszExpected;
  /* 0x0028 */ unsigned long _reserved1;
  /* 0x002c */ unsigned long _reserved2;
} xml_error, *Pxml_error; /* size: 0x0030 */

