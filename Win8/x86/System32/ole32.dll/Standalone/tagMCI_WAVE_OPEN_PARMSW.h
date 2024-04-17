struct tagMCI_WAVE_OPEN_PARMSW
{
  /* 0x0000 */ unsigned long dwCallback;
  /* 0x0004 */ unsigned int wDeviceID;
  /* 0x0008 */ const wchar_t* lpstrDeviceType;
  /* 0x000c */ const wchar_t* lpstrElementName;
  /* 0x0010 */ const wchar_t* lpstrAlias;
  /* 0x0014 */ unsigned long dwBufferSeconds;
}; /* size: 0x0018 */

