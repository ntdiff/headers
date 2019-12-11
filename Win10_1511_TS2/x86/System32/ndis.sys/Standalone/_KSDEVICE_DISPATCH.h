typedef struct _KSDEVICE_DISPATCH
{
  /* 0x0000 */ void* Add /* function */;
  /* 0x0004 */ void* Start /* function */;
  /* 0x0008 */ void* PostStart /* function */;
  /* 0x000c */ void* QueryStop /* function */;
  /* 0x0010 */ void* CancelStop /* function */;
  /* 0x0014 */ void* Stop /* function */;
  /* 0x0018 */ void* QueryRemove /* function */;
  /* 0x001c */ void* CancelRemove /* function */;
  /* 0x0020 */ void* Remove /* function */;
  /* 0x0024 */ void* QueryCapabilities /* function */;
  /* 0x0028 */ void* SurpriseRemoval /* function */;
  /* 0x002c */ void* QueryPower /* function */;
  /* 0x0030 */ void* SetPower /* function */;
  /* 0x0034 */ void* QueryInterface /* function */;
} KSDEVICE_DISPATCH, *PKSDEVICE_DISPATCH; /* size: 0x0038 */

