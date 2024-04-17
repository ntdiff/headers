typedef struct _POP_FX_DRIVER_CALLBACKS
{
  /* 0x0000 */ void* ComponentActive /* function */;
  /* 0x0008 */ void* ComponentIdle /* function */;
  /* 0x0010 */ void* ComponentIdleState /* function */;
  /* 0x0018 */ void* DevicePowerRequired /* function */;
  /* 0x0020 */ void* DevicePowerNotRequired /* function */;
  /* 0x0028 */ void* PowerControl /* function */;
  /* 0x0030 */ void* ComponentCriticalTransition /* function */;
  /* 0x0038 */ void* DripsWatchdogCallback /* function */;
  /* 0x0040 */ void* DirectedPowerUpCallback /* function */;
  /* 0x0048 */ void* DirectedPowerDownCallback /* function */;
} POP_FX_DRIVER_CALLBACKS, *PPOP_FX_DRIVER_CALLBACKS; /* size: 0x0050 */

