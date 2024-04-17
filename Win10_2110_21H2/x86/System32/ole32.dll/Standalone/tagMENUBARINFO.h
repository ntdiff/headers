struct tagRECT
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
}; /* size: 0x0010 */

struct tagMENUBARINFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ struct tagRECT rcBar;
  /* 0x0014 */ struct HMENU__* hMenu;
  /* 0x0018 */ struct HWND__* hwndMenu;
  struct /* bitfield */
  {
    /* 0x001c */ int fBarFocused : 1; /* bit position: 0 */
    /* 0x001c */ int fFocused : 1; /* bit position: 1 */
    /* 0x001c */ int fUnused : 30; /* bit position: 2 */
  }; /* bitfield */
}; /* size: 0x0020 */

