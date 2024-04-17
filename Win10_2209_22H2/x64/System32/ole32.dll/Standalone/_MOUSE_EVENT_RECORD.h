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

