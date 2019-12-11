typedef struct _QUERY_INFORMATION
{
  /* 0x0000 */ unsigned long Oid;
  /* 0x0004 */ void* InformationBuffer;
  /* 0x0008 */ unsigned int InformationBufferLength;
  /* 0x000c */ unsigned int BytesWritten;
  /* 0x0010 */ unsigned int BytesNeeded;
} QUERY_INFORMATION, *PQUERY_INFORMATION; /* size: 0x0014 */

typedef struct _SET_INFORMATION
{
  /* 0x0000 */ unsigned long Oid;
  /* 0x0004 */ void* InformationBuffer;
  /* 0x0008 */ unsigned int InformationBufferLength;
  /* 0x000c */ unsigned int BytesRead;
  /* 0x0010 */ unsigned int BytesNeeded;
} SET_INFORMATION, *PSET_INFORMATION; /* size: 0x0014 */

typedef union _DATA
{
  union
  {
    /* 0x0000 */ struct _QUERY_INFORMATION QUERY_INFORMATION;
    /* 0x0000 */ struct _SET_INFORMATION SET_INFORMATION;
  }; /* size: 0x0014 */
} DATA, *PDATA; /* size: 0x0014 */

