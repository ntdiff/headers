struct COPYFILE2_EXTENDED_PARAMETERS_V2
{
  /* 0x0000 */ unsigned long dwSize;
  /* 0x0004 */ unsigned long dwCopyFlags;
  /* 0x0008 */ int* pfCancel;
  /* 0x0010 */ void* pProgressRoutine /* function */;
  /* 0x0018 */ void* pvCallbackContext;
  /* 0x0020 */ unsigned long dwCopyFlagsV2;
  /* 0x0024 */ unsigned long ioDesiredSize;
  /* 0x0028 */ unsigned long ioDesiredRate;
  /* 0x0030 */ void* pProgressRoutineOld /* function */;
  /* 0x0038 */ struct _COPYFILE2_CREATE_OPLOCK_KEYS* SourceOplockKeys;
  /* 0x0040 */ void* reserved[6];
}; /* size: 0x0070 */

