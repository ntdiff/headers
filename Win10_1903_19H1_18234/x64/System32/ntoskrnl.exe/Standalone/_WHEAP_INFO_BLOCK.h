typedef struct _WHEAP_INFO_BLOCK
{
  /* 0x0000 */ unsigned long ErrorSourceCount;
  /* 0x0008 */ struct _WHEAP_ERROR_SOURCE_TABLE* ErrorSourceTable;
  /* 0x0010 */ struct _WHEAP_WORK_QUEUE* WorkQueue;
} WHEAP_INFO_BLOCK, *PWHEAP_INFO_BLOCK; /* size: 0x0018 */

