typedef struct _FILE_PIPE_ASSIGN_EVENT_BUFFER
{
  /* 0x0000 */ void* EventHandle;
  /* 0x0008 */ unsigned long KeyValue;
  /* 0x000c */ long __PADDING__[1];
} FILE_PIPE_ASSIGN_EVENT_BUFFER, *PFILE_PIPE_ASSIGN_EVENT_BUFFER; /* size: 0x0010 */

