typedef struct _FS_FILTER_CALLBACKS
{
  /* 0x0000 */ unsigned long SizeOfFsFilterCallbacks;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ void* PreAcquireForSectionSynchronization /* function */;
  /* 0x000c */ void* PostAcquireForSectionSynchronization /* function */;
  /* 0x0010 */ void* PreReleaseForSectionSynchronization /* function */;
  /* 0x0014 */ void* PostReleaseForSectionSynchronization /* function */;
  /* 0x0018 */ void* PreAcquireForCcFlush /* function */;
  /* 0x001c */ void* PostAcquireForCcFlush /* function */;
  /* 0x0020 */ void* PreReleaseForCcFlush /* function */;
  /* 0x0024 */ void* PostReleaseForCcFlush /* function */;
  /* 0x0028 */ void* PreAcquireForModifiedPageWriter /* function */;
  /* 0x002c */ void* PostAcquireForModifiedPageWriter /* function */;
  /* 0x0030 */ void* PreReleaseForModifiedPageWriter /* function */;
  /* 0x0034 */ void* PostReleaseForModifiedPageWriter /* function */;
  /* 0x0038 */ void* PreQueryOpen /* function */;
  /* 0x003c */ void* PostQueryOpen /* function */;
} FS_FILTER_CALLBACKS, *PFS_FILTER_CALLBACKS; /* size: 0x0040 */

