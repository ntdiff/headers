typedef struct _POWER_SESSION_WINLOGON
{
  /* 0x0000 */ unsigned long SessionId;
  /* 0x0004 */ unsigned char Console;
  /* 0x0005 */ unsigned char Locked;
  /* 0x0006 */ char __PADDING__[2];
} POWER_SESSION_WINLOGON, *PPOWER_SESSION_WINLOGON; /* size: 0x0008 */

