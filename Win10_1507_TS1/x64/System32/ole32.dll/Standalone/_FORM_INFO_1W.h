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

typedef struct _FORM_INFO_1W
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0008 */ wchar_t* pName;
  /* 0x0010 */ struct tagSIZE Size;
  /* 0x0018 */ struct _RECTL ImageableArea;
} FORM_INFO_1W, *PFORM_INFO_1W; /* size: 0x0028 */

