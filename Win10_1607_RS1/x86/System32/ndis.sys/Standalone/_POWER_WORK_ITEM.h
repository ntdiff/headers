typedef struct _NDIS_WORK_ITEM
{
  /* 0x0000 */ void* Context;
  /* 0x0004 */ void* Routine /* function */;
  /* 0x0008 */ unsigned char WrapperReserved[32];
} NDIS_WORK_ITEM, *PNDIS_WORK_ITEM; /* size: 0x0028 */

typedef struct _POWER_WORK_ITEM
{
  /* 0x0000 */ struct _NDIS_WORK_ITEM WorkItem;
  /* 0x0028 */ struct _IRP* pIrp;
} POWER_WORK_ITEM, *PPOWER_WORK_ITEM; /* size: 0x002c */

