struct tagDOCDISPATCHDATA
{
  /* 0x0008 */ struct HWND__* hwnd;
  /* 0x0010 */ unsigned long msg;
  /* 0x0018 */ unsigned __int64 wParam;
  /* 0x0020 */ __int64 lParam;
  /* 0x0028 */ void* hdata;
  /* 0x0030 */ unsigned short aItem;
  /* 0x0038 */ class CDefClient* lpclient;
}; /* size: 0x0040 */

