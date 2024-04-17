typedef enum _THREAD_UMS_INFORMATION_COMMAND
{
  UmsInformationCommandInvalid = 0,
  UmsInformationCommandAttach = 1,
  UmsInformationCommandDetach = 2,
  UmsInformationCommandQuery = 3,
} THREAD_UMS_INFORMATION_COMMAND, *PTHREAD_UMS_INFORMATION_COMMAND;

typedef struct _THREAD_UMS_INFORMATION
{
  /* 0x0000 */ enum _THREAD_UMS_INFORMATION_COMMAND Command;
  union
  {
    struct
    {
      /* 0x0004 */ struct _RTL_UMS_COMPLETION_LIST* CompletionList;
      /* 0x0008 */ struct _RTL_UMS_CONTEXT* UmsContext;
    }; /* size: 0x0008 */
    /* 0x0004 */ unsigned long Flags;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0004 */ unsigned long IsUmsSchedulerThread : 1; /* bit position: 0 */
        /* 0x0004 */ unsigned long IsUmsWorkerThread : 1; /* bit position: 1 */
      }; /* bitfield */
      /* 0x0008 */ long __PADDING__[1];
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} THREAD_UMS_INFORMATION, *PTHREAD_UMS_INFORMATION; /* size: 0x000c */

