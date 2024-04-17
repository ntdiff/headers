typedef struct _FILE_PIPE_EVENT_BUFFER
{
  /* 0x0000 */ unsigned long NamedPipeState;
  /* 0x0004 */ unsigned long EntryType;
  /* 0x0008 */ unsigned long ByteCount;
  /* 0x000c */ unsigned long KeyValue;
  /* 0x0010 */ unsigned long NumberRequests;
} FILE_PIPE_EVENT_BUFFER, *PFILE_PIPE_EVENT_BUFFER; /* size: 0x0014 */

