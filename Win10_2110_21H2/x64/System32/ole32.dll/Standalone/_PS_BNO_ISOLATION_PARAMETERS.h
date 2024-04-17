typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _PS_BNO_ISOLATION_PARAMETERS
{
  /* 0x0000 */ struct _UNICODE_STRING IsolationPrefix;
  /* 0x0010 */ unsigned long HandleCount;
  /* 0x0018 */ void** Handles;
  /* 0x0020 */ unsigned char IsolationEnabled;
  /* 0x0021 */ char __PADDING__[7];
} PS_BNO_ISOLATION_PARAMETERS, *PPS_BNO_ISOLATION_PARAMETERS; /* size: 0x0028 */

