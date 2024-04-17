typedef struct _PROCESS_HANDLE_INFORMATION
{
  /* 0x0000 */ unsigned long HandleCount;
  /* 0x0004 */ unsigned long HandleCountHighWatermark;
} PROCESS_HANDLE_INFORMATION, *PPROCESS_HANDLE_INFORMATION; /* size: 0x0008 */

