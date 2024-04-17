typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _SYSTEM_VERIFIER_INFORMATION_EX
{
  /* 0x0000 */ unsigned long VerifyMode;
  /* 0x0004 */ unsigned long OptionChanges;
  /* 0x0008 */ struct _UNICODE_STRING PreviousBucketName;
  /* 0x0018 */ unsigned long IrpCancelTimeoutMsec;
  /* 0x001c */ unsigned long Reserved[1];
} SYSTEM_VERIFIER_INFORMATION_EX, *PSYSTEM_VERIFIER_INFORMATION_EX; /* size: 0x0020 */

