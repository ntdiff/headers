typedef struct _KSDEVICE_DISPATCH
{
  /* 0x0000 */ void* Add /* function */;
  /* 0x0008 */ void* Start /* function */;
  /* 0x0010 */ void* PostStart /* function */;
  /* 0x0018 */ void* QueryStop /* function */;
  /* 0x0020 */ void* CancelStop /* function */;
  /* 0x0028 */ void* Stop /* function */;
  /* 0x0030 */ void* QueryRemove /* function */;
  /* 0x0038 */ void* CancelRemove /* function */;
  /* 0x0040 */ void* Remove /* function */;
  /* 0x0048 */ void* QueryCapabilities /* function */;
  /* 0x0050 */ void* SurpriseRemoval /* function */;
  /* 0x0058 */ void* QueryPower /* function */;
  /* 0x0060 */ void* SetPower /* function */;
  /* 0x0068 */ void* QueryInterface /* function */;
} KSDEVICE_DISPATCH, *PKSDEVICE_DISPATCH; /* size: 0x0070 */

