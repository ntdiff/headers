typedef struct _NDIS_WORK_ITEM
{
  /* 0x0000 */ void* Context;
  /* 0x0004 */ void* Routine /* function */;
  /* 0x0008 */ unsigned char WrapperReserved[32];
} NDIS_WORK_ITEM, *PNDIS_WORK_ITEM; /* size: 0x0028 */

typedef struct _NDIS_D0_SIGNAL_WORK_ITEM
{
  /* 0x0000 */ struct _NDIS_WORK_ITEM WorkItem;
  /* 0x0028 */ long CompletionStatus;
  /* 0x002c */ unsigned char Scheduled;
  /* 0x002d */ char __PADDING__[3];
} NDIS_D0_SIGNAL_WORK_ITEM, *PNDIS_D0_SIGNAL_WORK_ITEM; /* size: 0x0030 */

