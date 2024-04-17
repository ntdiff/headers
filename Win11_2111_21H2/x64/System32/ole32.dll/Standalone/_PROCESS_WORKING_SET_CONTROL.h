typedef enum _PROCESS_WORKING_SET_OPERATION
{
  ProcessWorkingSetSwap = 0,
  ProcessWorkingSetEmpty = 1,
  ProcessWorkingSetOperationMax = 2,
} PROCESS_WORKING_SET_OPERATION, *PPROCESS_WORKING_SET_OPERATION;

typedef struct _PROCESS_WORKING_SET_CONTROL
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ enum _PROCESS_WORKING_SET_OPERATION Operation;
  /* 0x0008 */ unsigned long Flags;
} PROCESS_WORKING_SET_CONTROL, *PPROCESS_WORKING_SET_CONTROL; /* size: 0x000c */

