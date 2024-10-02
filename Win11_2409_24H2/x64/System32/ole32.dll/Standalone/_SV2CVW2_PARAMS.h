typedef struct _SV2CVW2_PARAMS
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ struct IShellView* psvPrev;
  /* 0x0010 */ const struct FOLDERSETTINGS* pfs;
  /* 0x0018 */ struct IShellBrowser* psbOwner;
  /* 0x0020 */ struct tagRECT* prcView;
  /* 0x0028 */ const struct _GUID* pvid;
  /* 0x0030 */ struct HWND__* hwndView;
} SV2CVW2_PARAMS, *PSV2CVW2_PARAMS; /* size: 0x0038 */

