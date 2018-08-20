typedef struct _TP_DIRECT
{
  /* 0x0000 */ void* Callback /* function */;
  /* 0x0008 */ unsigned long NumaNode;
  /* 0x000c */ unsigned char IdealProcessor;
  /* 0x000d */ char __PADDING__[3];
} TP_DIRECT, *PTP_DIRECT; /* size: 0x0010 */

