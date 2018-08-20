typedef struct _TP_TASK_CALLBACKS
{
  /* 0x0000 */ void* ExecuteCallback /* function */;
  /* 0x0008 */ void* Unposted /* function */;
} TP_TASK_CALLBACKS, *PTP_TASK_CALLBACKS; /* size: 0x0010 */

