typedef struct _OBJECT_HEADER_PROCESS_INFO
{
  /* 0x0000 */ struct _EPROCESS* ExclusiveProcess;
  /* 0x0004 */ unsigned long Reserved;
} OBJECT_HEADER_PROCESS_INFO, *POBJECT_HEADER_PROCESS_INFO; /* size: 0x0008 */

