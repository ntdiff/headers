typedef struct _FILE_MAILSLOT_PEEK_BUFFER
{
  /* 0x0000 */ unsigned long ReadDataAvailable;
  /* 0x0004 */ unsigned long NumberOfMessages;
  /* 0x0008 */ unsigned long MessageLength;
} FILE_MAILSLOT_PEEK_BUFFER, *PFILE_MAILSLOT_PEEK_BUFFER; /* size: 0x000c */

