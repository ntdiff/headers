typedef struct _PERSIST_FOLDER_TARGET_INFO
{
  /* 0x0000 */ struct _ITEMIDLIST* pidlTargetFolder;
  /* 0x0008 */ wchar_t szTargetParsingName[260];
  /* 0x0210 */ wchar_t szNetworkProvider[260];
  /* 0x0418 */ unsigned long dwAttributes;
  /* 0x041c */ int csidl;
} PERSIST_FOLDER_TARGET_INFO, *PPERSIST_FOLDER_TARGET_INFO; /* size: 0x0420 */

