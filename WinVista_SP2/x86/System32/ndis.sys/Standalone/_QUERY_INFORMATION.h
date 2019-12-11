typedef struct _QUERY_INFORMATION
{
  /* 0x0000 */ unsigned long Oid;
  /* 0x0004 */ void* InformationBuffer;
  /* 0x0008 */ unsigned int InformationBufferLength;
  /* 0x000c */ unsigned int BytesWritten;
  /* 0x0010 */ unsigned int BytesNeeded;
} QUERY_INFORMATION, *PQUERY_INFORMATION; /* size: 0x0014 */

