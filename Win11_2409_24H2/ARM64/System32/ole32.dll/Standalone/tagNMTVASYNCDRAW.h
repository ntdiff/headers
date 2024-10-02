struct tagNMHDR
{
  /* 0x0000 */ struct HWND__* hwndFrom;
  /* 0x0008 */ unsigned __int64 idFrom;
  /* 0x0010 */ unsigned int code;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

struct tagNMTVASYNCDRAW
{
  /* 0x0000 */ struct tagNMHDR hdr;
  /* 0x0018 */ struct _IMAGELISTDRAWPARAMS* pimldp;
  /* 0x0020 */ HRESULT hr;
  /* 0x0028 */ struct _TREEITEM* hItem;
  /* 0x0030 */ __int64 lParam;
  /* 0x0038 */ unsigned long dwRetFlags;
  /* 0x003c */ int iRetImageIndex;
}; /* size: 0x0040 */

