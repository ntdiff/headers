class CStackWalkerSymbol
{
  /* 0x0004 */ long m_cRef;
  /* 0x0008 */ wchar_t* m_pwszModuleName;
  /* 0x000c */ wchar_t* m_pwszSymbolName;
  /* 0x0010 */ unsigned __int64 m_dw64Displacement;
  /* 0x0018 */ unsigned __int64 m_dw64Address;
  /* 0x0020 */ class CStackWalkerSymbol* m_pNext;
}; /* size: 0x0028 */

