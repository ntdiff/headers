typedef struct _PROCESS_WINDOW_INFORMATION
{
  /* 0x0000 */ unsigned long WindowFlags;
  /* 0x0004 */ unsigned short WindowTitleLength;
  /* 0x0006 */ wchar_t WindowTitle[1];
} PROCESS_WINDOW_INFORMATION, *PPROCESS_WINDOW_INFORMATION; /* size: 0x0008 */

