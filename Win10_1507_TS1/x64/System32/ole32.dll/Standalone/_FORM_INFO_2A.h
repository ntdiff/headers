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

typedef struct _FORM_INFO_2A
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0008 */ const char* pName;
  /* 0x0010 */ struct tagSIZE Size;
  /* 0x0018 */ struct _RECTL ImageableArea;
  /* 0x0028 */ const char* pKeyword;
  /* 0x0030 */ unsigned long StringType;
  /* 0x0038 */ const char* pMuiDll;
  /* 0x0040 */ unsigned long dwResourceId;
  /* 0x0048 */ const char* pDisplayName;
  /* 0x0050 */ unsigned short wLangId;
  /* 0x0052 */ char __PADDING__[6];
} FORM_INFO_2A, *PFORM_INFO_2A; /* size: 0x0058 */

