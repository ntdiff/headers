typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _SYSTEM_VERIFIER_INFORMATION_EX
{
  /* 0x0000 */ unsigned long VerifyMode;
  /* 0x0004 */ unsigned long OptionChanges;
  /* 0x0008 */ struct _UNICODE_STRING PreviousBucketName;
  /* 0x0010 */ unsigned long IrpCancelTimeoutMsec;
  /* 0x0014 */ unsigned long VerifierExtensionEnabled;
  /* 0x0018 */ unsigned long Reserved[3];
} SYSTEM_VERIFIER_INFORMATION_EX, *PSYSTEM_VERIFIER_INFORMATION_EX; /* size: 0x0024 */

