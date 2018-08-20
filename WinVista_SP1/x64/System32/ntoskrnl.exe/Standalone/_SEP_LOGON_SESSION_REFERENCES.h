typedef struct _LUID
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ long HighPart;
} LUID, *PLUID; /* size: 0x0008 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _SEP_LOGON_SESSION_REFERENCES
{
  /* 0x0000 */ struct _SEP_LOGON_SESSION_REFERENCES* Next;
  /* 0x0008 */ struct _LUID LogonId;
  /* 0x0010 */ struct _LUID BuddyLogonId;
  /* 0x0018 */ unsigned long ReferenceCount;
  /* 0x001c */ unsigned long Flags;
  /* 0x0020 */ struct _DEVICE_MAP* pDeviceMap;
  /* 0x0028 */ void* Token;
  /* 0x0030 */ struct _UNICODE_STRING AccountName;
  /* 0x0040 */ struct _UNICODE_STRING AuthorityName;
} SEP_LOGON_SESSION_REFERENCES, *PSEP_LOGON_SESSION_REFERENCES; /* size: 0x0050 */

