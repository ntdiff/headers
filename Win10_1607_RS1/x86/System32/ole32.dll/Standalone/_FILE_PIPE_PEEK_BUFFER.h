typedef struct _FILE_PIPE_PEEK_BUFFER
{
  /* 0x0000 */ unsigned long NamedPipeState;
  /* 0x0004 */ unsigned long ReadDataAvailable;
  /* 0x0008 */ unsigned long NumberOfMessages;
  /* 0x000c */ unsigned long MessageLength;
  /* 0x0010 */ char Data[1];
  /* 0x0011 */ char __PADDING__[3];
} FILE_PIPE_PEEK_BUFFER, *PFILE_PIPE_PEEK_BUFFER; /* size: 0x0014 */

