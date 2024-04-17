struct tagSOLE_AUTHENTICATION_SERVICE
{
  /* 0x0000 */ unsigned long dwAuthnSvc;
  /* 0x0004 */ unsigned long dwAuthzSvc;
  /* 0x0008 */ wchar_t* pPrincipalName;
  /* 0x0010 */ HRESULT hr;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

