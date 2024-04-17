typedef struct _ITEM_INFO
{
  /* 0x0000 */ unsigned long dwSize;
  /* 0x0008 */ const wchar_t* pcwszFromEMail;
  /* 0x0010 */ const wchar_t* pcwszApplicationName;
  /* 0x0018 */ const wchar_t* pcwszCatalogName;
  /* 0x0020 */ const wchar_t* pcwszContentClass;
} ITEM_INFO, *PITEM_INFO; /* size: 0x0028 */

