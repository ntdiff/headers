struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

typedef struct _DROPFILES
{
  /* 0x0000 */ unsigned long pFiles;
  /* 0x0004 */ struct tagPOINT pt;
  /* 0x000c */ int fNC;
  /* 0x0010 */ int fWide;
} DROPFILES, *PDROPFILES; /* size: 0x0014 */

