struct tagSOUNDSENTRYW
{
  /* 0x0000 */ unsigned int cbSize;
  /* 0x0004 */ unsigned long dwFlags;
  /* 0x0008 */ unsigned long iFSTextEffect;
  /* 0x000c */ unsigned long iFSTextEffectMSec;
  /* 0x0010 */ unsigned long iFSTextEffectColorBits;
  /* 0x0014 */ unsigned long iFSGrafEffect;
  /* 0x0018 */ unsigned long iFSGrafEffectMSec;
  /* 0x001c */ unsigned long iFSGrafEffectColor;
  /* 0x0020 */ unsigned long iWindowsEffect;
  /* 0x0024 */ unsigned long iWindowsEffectMSec;
  /* 0x0028 */ wchar_t* lpszWindowsEffectDLL;
  /* 0x002c */ unsigned long iWindowsEffectOrdinal;
}; /* size: 0x0030 */

