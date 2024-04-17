struct tagSIZE
{
  /* 0x0000 */ long cx;
  /* 0x0004 */ long cy;
}; /* size: 0x0008 */

typedef struct _RECTL
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
} RECTL, *PRECTL; /* size: 0x0010 */

typedef struct _FORM_INFO_2W
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ const wchar_t* pName;
  /* 0x0008 */ struct tagSIZE Size;
  /* 0x0010 */ struct _RECTL ImageableArea;
  /* 0x0020 */ const char* pKeyword;
  /* 0x0024 */ unsigned long StringType;
  /* 0x0028 */ const wchar_t* pMuiDll;
  /* 0x002c */ unsigned long dwResourceId;
  /* 0x0030 */ const wchar_t* pDisplayName;
  /* 0x0034 */ unsigned short wLangId;
  /* 0x0036 */ char __PADDING__[2];
} FORM_INFO_2W, *PFORM_INFO_2W; /* size: 0x0038 */

