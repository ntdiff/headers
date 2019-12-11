typedef struct _METHOD
{
  /* 0x0000 */ unsigned long Oid;
  /* 0x0008 */ void* InformationBuffer;
  /* 0x0010 */ unsigned long InputBufferLength;
  /* 0x0014 */ unsigned long OutputBufferLength;
  /* 0x0018 */ unsigned long MethodId;
  /* 0x001c */ unsigned int BytesWritten;
  /* 0x0020 */ unsigned int BytesRead;
  /* 0x0024 */ unsigned int BytesNeeded;
} METHOD, *PMETHOD; /* size: 0x0028 */

