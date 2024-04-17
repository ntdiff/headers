enum SYNCMGR_CONFLICT_ITEM_TYPE
{
};

struct CONFIRM_CONFLICT_ITEM
{
  /* 0x0000 */ struct IShellItem2* pShellItem;
  /* 0x0004 */ wchar_t* pszOriginalName;
  /* 0x0008 */ wchar_t* pszAlternateName;
  /* 0x000c */ wchar_t* pszLocationShort;
  /* 0x0010 */ wchar_t* pszLocationFull;
  /* 0x0014 */ enum SYNCMGR_CONFLICT_ITEM_TYPE nType;
}; /* size: 0x0018 */

