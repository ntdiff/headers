struct BREAK_ON_STATUS_BUFFER
{
  /* 0x0000 */ long NtStatus;
  /* 0x0004 */ unsigned long Win32Error;
  /* 0x0008 */ unsigned long ThreadId;
  /* 0x000c */ unsigned long ProcessId;
  /* 0x0010 */ char ImageFileName[16];
}; /* size: 0x0020 */

