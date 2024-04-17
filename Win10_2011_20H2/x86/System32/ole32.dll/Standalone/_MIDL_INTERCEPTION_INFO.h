typedef struct _MIDL_INTERCEPTION_INFO
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ const unsigned char* ProcString;
  /* 0x0008 */ const unsigned short* ProcFormatOffsetTable;
  /* 0x000c */ unsigned long ProcCount;
  /* 0x0010 */ const unsigned char* TypeString;
} MIDL_INTERCEPTION_INFO, *PMIDL_INTERCEPTION_INFO; /* size: 0x0014 */

