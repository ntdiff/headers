typedef enum _JOURNAL_CHANGE_INFORMATION_CLASS
{
  JournalCreateKey = 0,
  JournalDeleteKey = 1,
  JournalRenameKey = 2,
  JournalSetValue = 3,
  JournalDeleteValue = 4,
  JournalSetKeySecurity = 5,
  JournalSetKeyUserFlags = 6,
  JournalSetLastWriteTime = 7,
  JournalBeginTransaction = 8,
  JournalCommitTransaction = 9,
  JournalAbortTransaction = 10,
  MaxJournalChangeAction = 11,
} JOURNAL_CHANGE_INFORMATION_CLASS, *PJOURNAL_CHANGE_INFORMATION_CLASS;

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _JOURNAL_SET_KEY_USER_FLAGS_INFORMATION
{
  /* 0x0000 */ enum _JOURNAL_CHANGE_INFORMATION_CLASS Action;
  /* 0x0008 */ unsigned __int64 RecordNumber;
  /* 0x0010 */ union _LARGE_INTEGER TimeStamp;
  /* 0x0018 */ struct _UNICODE_STRING KeyPathName;
  /* 0x0020 */ unsigned long OldFlags;
  /* 0x0024 */ unsigned long NewFlags;
} JOURNAL_SET_KEY_USER_FLAGS_INFORMATION, *PJOURNAL_SET_KEY_USER_FLAGS_INFORMATION; /* size: 0x0028 */

