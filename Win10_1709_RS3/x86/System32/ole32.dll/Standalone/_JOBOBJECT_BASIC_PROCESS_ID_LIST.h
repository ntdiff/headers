typedef struct _JOBOBJECT_BASIC_PROCESS_ID_LIST
{
  /* 0x0000 */ unsigned long NumberOfAssignedProcesses;
  /* 0x0004 */ unsigned long NumberOfProcessIdsInList;
  /* 0x0008 */ unsigned long ProcessIdList[1];
} JOBOBJECT_BASIC_PROCESS_ID_LIST, *PJOBOBJECT_BASIC_PROCESS_ID_LIST; /* size: 0x000c */

