typedef struct _SET_INFORMATION
{
  /* 0x0000 */ unsigned long Oid;
  /* 0x0004 */ void* InformationBuffer;
  /* 0x0008 */ unsigned int InformationBufferLength;
  /* 0x000c */ unsigned int BytesRead;
  /* 0x0010 */ unsigned int BytesNeeded;
} SET_INFORMATION, *PSET_INFORMATION; /* size: 0x0014 */

