enum tagKF_CATEGORY
{
  KF_CATEGORY_VIRTUAL = 1,
  KF_CATEGORY_FIXED = 2,
  KF_CATEGORY_COMMON = 3,
  KF_CATEGORY_PERUSER = 4,
};

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagKNOWNFOLDER_DEFINITION
{
  /* 0x0000 */ enum tagKF_CATEGORY category;
  /* 0x0004 */ unsigned short* pszName;
  /* 0x0008 */ unsigned short* pszDescription;
  /* 0x000c */ struct _GUID fidParent;
  /* 0x001c */ unsigned short* pszRelativePath;
  /* 0x0020 */ unsigned short* pszParsingName;
  /* 0x0024 */ unsigned short* pszTooltip;
  /* 0x0028 */ unsigned short* pszLocalizedName;
  /* 0x002c */ unsigned short* pszIcon;
  /* 0x0030 */ unsigned short* pszSecurity;
  /* 0x0034 */ unsigned long dwAttributes;
  /* 0x0038 */ unsigned long kfdFlags;
  /* 0x003c */ struct _GUID ftidType;
}; /* size: 0x004c */

