typedef struct _FS_FILTER_CALLBACKS
{
  /* 0x0000 */ unsigned long SizeOfFsFilterCallbacks;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ void* PreAcquireForSectionSynchronization /* function */;
  /* 0x0010 */ void* PostAcquireForSectionSynchronization /* function */;
  /* 0x0018 */ void* PreReleaseForSectionSynchronization /* function */;
  /* 0x0020 */ void* PostReleaseForSectionSynchronization /* function */;
  /* 0x0028 */ void* PreAcquireForCcFlush /* function */;
  /* 0x0030 */ void* PostAcquireForCcFlush /* function */;
  /* 0x0038 */ void* PreReleaseForCcFlush /* function */;
  /* 0x0040 */ void* PostReleaseForCcFlush /* function */;
  /* 0x0048 */ void* PreAcquireForModifiedPageWriter /* function */;
  /* 0x0050 */ void* PostAcquireForModifiedPageWriter /* function */;
  /* 0x0058 */ void* PreReleaseForModifiedPageWriter /* function */;
  /* 0x0060 */ void* PostReleaseForModifiedPageWriter /* function */;
  /* 0x0068 */ void* PreQueryOpen /* function */;
  /* 0x0070 */ void* PostQueryOpen /* function */;
} FS_FILTER_CALLBACKS, *PFS_FILTER_CALLBACKS; /* size: 0x0078 */

