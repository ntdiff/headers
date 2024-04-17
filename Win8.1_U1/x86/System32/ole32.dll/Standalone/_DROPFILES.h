typedef struct _POINTL
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
} POINTL, *PPOINTL; /* size: 0x0008 */

typedef struct _DROPFILES
{
  /* 0x0000 */ unsigned long pFiles;
  /* 0x0004 */ struct _POINTL pt;
  /* 0x000c */ unsigned long fNC;
  /* 0x0010 */ unsigned long fWide;
} DROPFILES, *PDROPFILES; /* size: 0x0014 */

