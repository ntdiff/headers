typedef struct _COMMTIMEOUTS
{
  /* 0x0000 */ unsigned long ReadIntervalTimeout;
  /* 0x0004 */ unsigned long ReadTotalTimeoutMultiplier;
  /* 0x0008 */ unsigned long ReadTotalTimeoutConstant;
  /* 0x000c */ unsigned long WriteTotalTimeoutMultiplier;
  /* 0x0010 */ unsigned long WriteTotalTimeoutConstant;
} COMMTIMEOUTS, *PCOMMTIMEOUTS; /* size: 0x0014 */

