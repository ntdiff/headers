struct tagSOLE_AUTHENTICATION_SERVICE
{
  /* 0x0000 */ unsigned long dwAuthnSvc;
  /* 0x0004 */ unsigned long dwAuthzSvc;
  /* 0x0008 */ wchar_t* pPrincipalName;
  /* 0x000c */ HRESULT hr;
}; /* size: 0x0010 */

