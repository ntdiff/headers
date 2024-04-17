typedef struct _TP_TASK
{
  /* 0x0000 */ const struct _TP_TASK_CALLBACKS* Callbacks;
  /* 0x0008 */ unsigned long NumaNode;
  /* 0x000c */ unsigned char IdealProcessor;
  /* 0x000d */ char __PADDING__[3];
} TP_TASK, *PTP_TASK; /* size: 0x0010 */

