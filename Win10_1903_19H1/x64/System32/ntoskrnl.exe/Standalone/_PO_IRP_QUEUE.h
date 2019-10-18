typedef struct _PO_IRP_QUEUE
{
  /* 0x0000 */ struct _IRP* CurrentIrp;
  /* 0x0008 */ struct _IRP* PendingIrpList;
} PO_IRP_QUEUE, *PPO_IRP_QUEUE; /* size: 0x0010 */

