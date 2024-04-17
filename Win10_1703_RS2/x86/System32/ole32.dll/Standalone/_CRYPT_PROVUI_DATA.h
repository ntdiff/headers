typedef struct _CRYPT_PROVUI_DATA
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0004 */ unsigned long dwFinalError;
  /* 0x0008 */ wchar_t* pYesButtonText;
  /* 0x000c */ wchar_t* pNoButtonText;
  /* 0x0010 */ wchar_t* pMoreInfoButtonText;
  /* 0x0014 */ wchar_t* pAdvancedLinkText;
  /* 0x0018 */ wchar_t* pCopyActionText;
  /* 0x001c */ wchar_t* pCopyActionTextNoTS;
  /* 0x0020 */ wchar_t* pCopyActionTextNotSigned;
} CRYPT_PROVUI_DATA, *PCRYPT_PROVUI_DATA; /* size: 0x0024 */

