typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _PS_BNO_ISOLATION_PARAMETERS
{
  /* 0x0000 */ struct _UNICODE_STRING IsolationPrefix;
  /* 0x0008 */ unsigned long HandleCount;
  /* 0x000c */ void** Handles;
  /* 0x0010 */ unsigned char IsolationEnabled;
  /* 0x0011 */ char __PADDING__[3];
} PS_BNO_ISOLATION_PARAMETERS, *PPS_BNO_ISOLATION_PARAMETERS; /* size: 0x0014 */

