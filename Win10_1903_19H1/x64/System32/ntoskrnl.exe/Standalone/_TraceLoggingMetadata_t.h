typedef struct _TraceLoggingMetadata_t
{
  /* 0x0000 */ unsigned int Signature;
  /* 0x0004 */ unsigned short Size;
  /* 0x0006 */ unsigned char Version;
  /* 0x0007 */ unsigned char Flags;
  /* 0x0008 */ unsigned __int64 Magic;
} TraceLoggingMetadata_t, *PTraceLoggingMetadata_t; /* size: 0x0010 */

