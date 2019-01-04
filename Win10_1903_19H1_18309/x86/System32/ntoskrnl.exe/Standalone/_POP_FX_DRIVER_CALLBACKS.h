typedef struct _POP_FX_DRIVER_CALLBACKS
{
  /* 0x0000 */ void* ComponentActive /* function */;
  /* 0x0004 */ void* ComponentIdle /* function */;
  /* 0x0008 */ void* ComponentIdleState /* function */;
  /* 0x000c */ void* DevicePowerRequired /* function */;
  /* 0x0010 */ void* DevicePowerNotRequired /* function */;
  /* 0x0014 */ void* PowerControl /* function */;
  /* 0x0018 */ void* ComponentCriticalTransition /* function */;
  /* 0x001c */ void* DripsWatchdogCallback /* function */;
  /* 0x0020 */ void* DirectedPowerUpCallback /* function */;
  /* 0x0024 */ void* DirectedPowerDownCallback /* function */;
} POP_FX_DRIVER_CALLBACKS, *PPOP_FX_DRIVER_CALLBACKS; /* size: 0x0028 */

