typedef struct _CONSOLE_READCONSOLE_CONTROL
{
  /* 0x0000 */ unsigned long nLength;
  /* 0x0004 */ unsigned long nInitialChars;
  /* 0x0008 */ unsigned long dwCtrlWakeupMask;
  /* 0x000c */ unsigned long dwControlKeyState;
} CONSOLE_READCONSOLE_CONTROL, *PCONSOLE_READCONSOLE_CONTROL; /* size: 0x0010 */

