typedef enum _THREAD_UMS_INFORMATION_COMMAND
{
  UmsInformationCommandInvalid = 0,
  UmsInformationCommandAttach = 1,
  UmsInformationCommandDetach = 2,
} THREAD_UMS_INFORMATION_COMMAND, *PTHREAD_UMS_INFORMATION_COMMAND;

typedef struct _THREAD_UMS_INFORMATION
{
  /* 0x0000 */ enum _THREAD_UMS_INFORMATION_COMMAND Command;
  /* 0x0004 */ struct _RTL_UMS_COMPLETION_LIST* CompletionList;
  /* 0x0008 */ struct _RTL_UMS_CONTEXT* UmsContext;
} THREAD_UMS_INFORMATION, *PTHREAD_UMS_INFORMATION; /* size: 0x000c */

