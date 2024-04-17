typedef class _com_error
{
  /* 0x0004 */ const HRESULT m_hresult;
  /* 0x0008 */ struct IErrorInfo* m_perrinfo;
  /* 0x000c */ wchar_t* m_pszMsg;
} com_error, *Pcom_error; /* size: 0x0010 */

