typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef enum _LEARNING_MODE_LOG_LEVEL
{
  LearningModeLogLevelPassive = 0,
  LearningModeLogLevelNormalApc = 1,
  LearningModeLogLevelSpecialApc = 2,
  LearningModeLogLevelMax = 3,
} LEARNING_MODE_LOG_LEVEL, *PLEARNING_MODE_LOG_LEVEL;

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _LEARNING_MODE_OBJECT_INFORMATION
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY ListEntry;
  /* 0x0008 */ enum _LEARNING_MODE_LOG_LEVEL LogLevel;
  /* 0x0010 */ struct _UNICODE_STRING* ObjectType;
  /* 0x0018 */ struct _UNICODE_STRING* ObjectName;
  /* 0x0020 */ void* RootDirectory;
  /* 0x0028 */ struct _UNICODE_STRING FullObjectName;
} LEARNING_MODE_OBJECT_INFORMATION, *PLEARNING_MODE_OBJECT_INFORMATION; /* size: 0x0038 */

