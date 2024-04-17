typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

struct CONFLICT_ITEM_METADATA
{
  /* 0x0000 */ struct _FILETIME ftDateModified;
  /* 0x0008 */ unsigned __int64 ullSize;
  /* 0x0010 */ wchar_t* pszItemName;
  /* 0x0014 */ wchar_t* pszItemPath;
  /* 0x0018 */ int fHasConnectedElement;
  /* 0x001c */ long __PADDING__[1];
}; /* size: 0x0020 */

