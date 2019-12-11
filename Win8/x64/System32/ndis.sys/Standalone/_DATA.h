typedef struct _QUERY_INFORMATION
{
  /* 0x0000 */ unsigned long Oid;
  /* 0x0008 */ void* InformationBuffer;
  /* 0x0010 */ unsigned int InformationBufferLength;
  /* 0x0014 */ unsigned int BytesWritten;
  /* 0x0018 */ unsigned int BytesNeeded;
  /* 0x001c */ long __PADDING__[1];
} QUERY_INFORMATION, *PQUERY_INFORMATION; /* size: 0x0020 */

typedef struct _SET_INFORMATION
{
  /* 0x0000 */ unsigned long Oid;
  /* 0x0008 */ void* InformationBuffer;
  /* 0x0010 */ unsigned int InformationBufferLength;
  /* 0x0014 */ unsigned int BytesRead;
  /* 0x0018 */ unsigned int BytesNeeded;
  /* 0x001c */ long __PADDING__[1];
} SET_INFORMATION, *PSET_INFORMATION; /* size: 0x0020 */

typedef union _DATA
{
  union
  {
    /* 0x0000 */ struct _QUERY_INFORMATION QUERY_INFORMATION;
    /* 0x0000 */ struct _SET_INFORMATION SET_INFORMATION;
  }; /* size: 0x0020 */
} DATA, *PDATA; /* size: 0x0020 */

