typedef struct _FILE_PIPE_LOCAL_INFORMATION
{
  /* 0x0000 */ unsigned long NamedPipeType;
  /* 0x0004 */ unsigned long NamedPipeConfiguration;
  /* 0x0008 */ unsigned long MaximumInstances;
  /* 0x000c */ unsigned long CurrentInstances;
  /* 0x0010 */ unsigned long InboundQuota;
  /* 0x0014 */ unsigned long ReadDataAvailable;
  /* 0x0018 */ unsigned long OutboundQuota;
  /* 0x001c */ unsigned long WriteQuotaAvailable;
  /* 0x0020 */ unsigned long NamedPipeState;
  /* 0x0024 */ unsigned long NamedPipeEnd;
} FILE_PIPE_LOCAL_INFORMATION, *PFILE_PIPE_LOCAL_INFORMATION; /* size: 0x0028 */

