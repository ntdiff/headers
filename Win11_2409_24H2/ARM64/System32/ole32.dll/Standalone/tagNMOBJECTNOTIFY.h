struct tagNMHDR
{
  /* 0x0000 */ struct HWND__* hwndFrom;
  /* 0x0008 */ unsigned __int64 idFrom;
  /* 0x0010 */ unsigned int code;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

struct tagNMOBJECTNOTIFY
{
  /* 0x0000 */ struct tagNMHDR hdr;
  /* 0x0018 */ int iItem;
  /* 0x0020 */ const struct _GUID* piid;
  /* 0x0028 */ void* pObject;
  /* 0x0030 */ HRESULT hResult;
  /* 0x0034 */ unsigned long dwFlags;
}; /* size: 0x0038 */

