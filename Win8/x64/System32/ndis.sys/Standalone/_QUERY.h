typedef struct _QUERY
{
  /* 0x0000 */ unsigned long Oid;
  /* 0x0008 */ void* InformationBuffer;
  /* 0x0010 */ unsigned int InformationBufferLength;
  /* 0x0014 */ unsigned int BytesWritten;
  /* 0x0018 */ unsigned int BytesNeeded;
  /* 0x001c */ long __PADDING__[1];
} QUERY, *PQUERY; /* size: 0x0020 */

