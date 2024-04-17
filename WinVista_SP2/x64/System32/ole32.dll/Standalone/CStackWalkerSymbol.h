class CStackWalkerSymbol
{
  /* 0x0008 */ long m_cRef;
  /* 0x0010 */ wchar_t* m_pwszModuleName;
  /* 0x0018 */ wchar_t* m_pwszSymbolName;
  /* 0x0020 */ unsigned __int64 m_dw64Displacement;
  /* 0x0028 */ unsigned __int64 m_dw64Address;
  /* 0x0030 */ class CStackWalkerSymbol* m_pNext;
}; /* size: 0x0038 */

