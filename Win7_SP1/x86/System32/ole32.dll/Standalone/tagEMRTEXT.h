typedef struct _POINTL
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
} POINTL, *PPOINTL; /* size: 0x0008 */

typedef struct _RECTL
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
} RECTL, *PRECTL; /* size: 0x0010 */

struct tagEMRTEXT
{
  /* 0x0000 */ struct _POINTL ptlReference;
  /* 0x0008 */ unsigned long nChars;
  /* 0x000c */ unsigned long offString;
  /* 0x0010 */ unsigned long fOptions;
  /* 0x0014 */ struct _RECTL rcl;
  /* 0x0024 */ unsigned long offDx;
}; /* size: 0x0028 */

