typedef struct _KEY_EVENT_RECORD
{
  /* 0x0000 */ int bKeyDown;
  /* 0x0004 */ unsigned short wRepeatCount;
  /* 0x0006 */ unsigned short wVirtualKeyCode;
  /* 0x0008 */ unsigned short wVirtualScanCode;
  union
  {
    union
    {
      /* 0x000a */ wchar_t UnicodeChar;
      /* 0x000a */ char AsciiChar;
    }; /* size: 0x0002 */
  } /* size: 0x0002 */ uChar;
  /* 0x000c */ unsigned long dwControlKeyState;
} KEY_EVENT_RECORD, *PKEY_EVENT_RECORD; /* size: 0x0010 */

