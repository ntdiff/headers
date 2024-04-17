typedef struct _FILE_PIPE_CLIENT_PROCESS_BUFFER_EX
{
  /* 0x0000 */ void* ClientSession;
  /* 0x0008 */ void* ClientProcess;
  /* 0x0010 */ unsigned short ClientComputerNameLength;
  /* 0x0012 */ wchar_t ClientComputerBuffer[16];
  /* 0x0032 */ char __PADDING__[6];
} FILE_PIPE_CLIENT_PROCESS_BUFFER_EX, *PFILE_PIPE_CLIENT_PROCESS_BUFFER_EX; /* size: 0x0038 */

