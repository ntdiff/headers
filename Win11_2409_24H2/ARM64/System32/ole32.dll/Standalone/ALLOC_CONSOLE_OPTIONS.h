enum ALLOC_CONSOLE_MODE
{
  ALLOC_CONSOLE_MODE_DEFAULT = 0,
  ALLOC_CONSOLE_MODE_NEW_WINDOW = 1,
  ALLOC_CONSOLE_MODE_NO_WINDOW = 2,
};

struct ALLOC_CONSOLE_OPTIONS
{
  /* 0x0000 */ enum ALLOC_CONSOLE_MODE mode;
  /* 0x0004 */ int useShowWindow;
  /* 0x0008 */ unsigned short showWindow;
  /* 0x000a */ char __PADDING__[2];
}; /* size: 0x000c */

