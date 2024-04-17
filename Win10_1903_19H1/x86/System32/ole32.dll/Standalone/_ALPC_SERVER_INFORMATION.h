typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _ALPC_SERVER_INFORMATION
{
  union
  {
    struct
    {
      /* 0x0000 */ void* ThreadHandle;
    } /* size: 0x0004 */ In;
    struct
    {
      /* 0x0000 */ unsigned char ThreadBlocked;
      /* 0x0004 */ void* ConnectedProcessId;
      /* 0x0008 */ struct _UNICODE_STRING ConnectionPortName;
    } /* size: 0x0010 */ Out;
  }; /* size: 0x0010 */
} ALPC_SERVER_INFORMATION, *PALPC_SERVER_INFORMATION; /* size: 0x0010 */

