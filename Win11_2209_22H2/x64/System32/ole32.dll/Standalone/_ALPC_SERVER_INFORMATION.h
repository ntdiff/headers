typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _ALPC_SERVER_INFORMATION
{
  union
  {
    struct
    {
      /* 0x0000 */ void* ThreadHandle;
    } /* size: 0x0008 */ In;
    struct
    {
      /* 0x0000 */ unsigned char ThreadBlocked;
      /* 0x0008 */ void* ConnectedProcessId;
      /* 0x0010 */ struct _UNICODE_STRING ConnectionPortName;
    } /* size: 0x0020 */ Out;
  }; /* size: 0x0020 */
} ALPC_SERVER_INFORMATION, *PALPC_SERVER_INFORMATION; /* size: 0x0020 */

