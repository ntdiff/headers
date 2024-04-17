struct tagDOCDISPATCHDATA
{
  /* 0x0004 */ struct HWND__* hwnd;
  /* 0x0008 */ unsigned long msg;
  /* 0x000c */ unsigned int wParam;
  /* 0x0010 */ long lParam;
  /* 0x0014 */ void* hdata;
  /* 0x0018 */ unsigned short aItem;
  /* 0x001c */ class CDefClient* lpclient;
}; /* size: 0x0020 */

