typedef struct _CONSOLE_HISTORY_INFO
{
  /* 0x0000 */ unsigned int cbSize;
  /* 0x0004 */ unsigned int HistoryBufferSize;
  /* 0x0008 */ unsigned int NumberOfHistoryBuffers;
  /* 0x000c */ unsigned long dwFlags;
} CONSOLE_HISTORY_INFO, *PCONSOLE_HISTORY_INFO; /* size: 0x0010 */

