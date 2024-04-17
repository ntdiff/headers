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

typedef struct _COORD
{
  /* 0x0000 */ short X;
  /* 0x0002 */ short Y;
} COORD, *PCOORD; /* size: 0x0004 */

typedef struct _MOUSE_EVENT_RECORD
{
  /* 0x0000 */ struct _COORD dwMousePosition;
  /* 0x0004 */ unsigned long dwButtonState;
  /* 0x0008 */ unsigned long dwControlKeyState;
  /* 0x000c */ unsigned long dwEventFlags;
} MOUSE_EVENT_RECORD, *PMOUSE_EVENT_RECORD; /* size: 0x0010 */

typedef struct _WINDOW_BUFFER_SIZE_RECORD
{
  /* 0x0000 */ struct _COORD dwSize;
} WINDOW_BUFFER_SIZE_RECORD, *PWINDOW_BUFFER_SIZE_RECORD; /* size: 0x0004 */

typedef struct _MENU_EVENT_RECORD
{
  /* 0x0000 */ unsigned int dwCommandId;
} MENU_EVENT_RECORD, *PMENU_EVENT_RECORD; /* size: 0x0004 */

typedef struct _FOCUS_EVENT_RECORD
{
  /* 0x0000 */ int bSetFocus;
} FOCUS_EVENT_RECORD, *PFOCUS_EVENT_RECORD; /* size: 0x0004 */

typedef struct _INPUT_RECORD
{
  /* 0x0000 */ unsigned short EventType;
  union
  {
    union
    {
      /* 0x0004 */ struct _KEY_EVENT_RECORD KeyEvent;
      /* 0x0004 */ struct _MOUSE_EVENT_RECORD MouseEvent;
      /* 0x0004 */ struct _WINDOW_BUFFER_SIZE_RECORD WindowBufferSizeEvent;
      /* 0x0004 */ struct _MENU_EVENT_RECORD MenuEvent;
      /* 0x0004 */ struct _FOCUS_EVENT_RECORD FocusEvent;
    }; /* size: 0x0010 */
  } /* size: 0x0010 */ Event;
} INPUT_RECORD, *PINPUT_RECORD; /* size: 0x0014 */

