class ClipboardWatchdog
{
  union
  {
    struct
    {
      /* 0x0000 */ struct _TP_TIMER* m_timer;
      /* 0x0004 */ unsigned long m_monitoredThreadID;
    }; /* size: 0x0008 */
    /* 0x0000 */ const __int64 MethodTimeout;
    /* 0x0000 */ const __int64 CheckInRate;
    /* 0x0000 */ const __int64 BufferedTimeout;
  }; /* size: 0x0008 */
}; /* size: 0x0008 */

