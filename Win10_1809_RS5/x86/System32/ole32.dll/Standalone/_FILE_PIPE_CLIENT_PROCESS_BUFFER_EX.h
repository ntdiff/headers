typedef struct _FILE_PIPE_CLIENT_PROCESS_BUFFER_EX
{
  /* 0x0000 */ void* ClientSession;
  /* 0x0004 */ void* ClientProcess;
  /* 0x0008 */ unsigned short ClientComputerNameLength;
  /* 0x000a */ wchar_t ClientComputerBuffer[16];
  /* 0x002a */ char __PADDING__[2];
} FILE_PIPE_CLIENT_PROCESS_BUFFER_EX, *PFILE_PIPE_CLIENT_PROCESS_BUFFER_EX; /* size: 0x002c */

