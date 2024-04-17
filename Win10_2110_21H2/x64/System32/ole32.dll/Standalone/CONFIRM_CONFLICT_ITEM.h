enum SYNCMGR_CONFLICT_ITEM_TYPE
{
  SYNCMGR_CIT_UPDATED = 1,
  SYNCMGR_CIT_DELETED = 2,
};

struct CONFIRM_CONFLICT_ITEM
{
  /* 0x0000 */ struct IShellItem2* pShellItem;
  /* 0x0008 */ wchar_t* pszOriginalName;
  /* 0x0010 */ wchar_t* pszAlternateName;
  /* 0x0018 */ wchar_t* pszLocationShort;
  /* 0x0020 */ wchar_t* pszLocationFull;
  /* 0x0028 */ enum SYNCMGR_CONFLICT_ITEM_TYPE nType;
  /* 0x002c */ long __PADDING__[1];
}; /* size: 0x0030 */

