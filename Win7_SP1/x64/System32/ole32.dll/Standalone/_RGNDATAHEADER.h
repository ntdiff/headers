struct tagRECT
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
}; /* size: 0x0010 */

typedef struct _RGNDATAHEADER
{
  /* 0x0000 */ unsigned long dwSize;
  /* 0x0004 */ unsigned long iType;
  /* 0x0008 */ unsigned long nCount;
  /* 0x000c */ unsigned long nRgnSize;
  /* 0x0010 */ struct tagRECT rcBound;
} RGNDATAHEADER, *PRGNDATAHEADER; /* size: 0x0020 */

