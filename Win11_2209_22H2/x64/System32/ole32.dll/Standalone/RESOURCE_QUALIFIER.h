struct RESOURCE_QUALIFIER
{
  /* 0x0000 */ wchar_t* pszQualifierName;
  /* 0x0008 */ wchar_t* pszQualifierValue;
  /* 0x0010 */ int bIsDefault;
  /* 0x0014 */ unsigned int uiPriority;
  /* 0x0018 */ double dMatchedScore;
  /* 0x0020 */ double dDefaultScore;
}; /* size: 0x0028 */

