struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

typedef struct _DRAGINFOA
{
  /* 0x0000 */ unsigned int uSize;
  /* 0x0004 */ struct tagPOINT pt;
  /* 0x000c */ int fNC;
  /* 0x0010 */ char* lpFileList;
  /* 0x0014 */ unsigned long grfKeyState;
} DRAGINFOA, *PDRAGINFOA; /* size: 0x0018 */

