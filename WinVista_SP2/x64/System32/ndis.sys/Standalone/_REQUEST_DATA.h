typedef struct _QUERY
{
  /* 0x0000 */ unsigned long Oid;
  /* 0x0008 */ void* InformationBuffer;
  /* 0x0010 */ unsigned int InformationBufferLength;
  /* 0x0014 */ unsigned int BytesWritten;
  /* 0x0018 */ unsigned int BytesNeeded;
  /* 0x001c */ long __PADDING__[1];
} QUERY, *PQUERY; /* size: 0x0020 */

typedef struct _SET
{
  /* 0x0000 */ unsigned long Oid;
  /* 0x0008 */ void* InformationBuffer;
  /* 0x0010 */ unsigned int InformationBufferLength;
  /* 0x0014 */ unsigned int BytesRead;
  /* 0x0018 */ unsigned int BytesNeeded;
  /* 0x001c */ long __PADDING__[1];
} SET, *PSET; /* size: 0x0020 */

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

typedef union _REQUEST_DATA
{
  union
  {
    /* 0x0000 */ struct _QUERY QUERY_INFORMATION;
    /* 0x0000 */ struct _SET SET_INFORMATION;
    /* 0x0000 */ struct _METHOD METHOD_INFORMATION;
  }; /* size: 0x0028 */
} REQUEST_DATA, *PREQUEST_DATA; /* size: 0x0028 */

