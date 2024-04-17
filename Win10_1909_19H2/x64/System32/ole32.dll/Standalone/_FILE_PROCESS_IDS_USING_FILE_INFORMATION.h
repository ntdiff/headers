typedef struct _FILE_PROCESS_IDS_USING_FILE_INFORMATION
{
  /* 0x0000 */ unsigned long NumberOfProcessIdsInList;
  /* 0x0008 */ unsigned __int64 ProcessIdList[1];
} FILE_PROCESS_IDS_USING_FILE_INFORMATION, *PFILE_PROCESS_IDS_USING_FILE_INFORMATION; /* size: 0x0010 */

