typedef struct _IOP_IRP_EXTENSION_STATUS
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long ActivityId;
  /* 0x0008 */ unsigned long IoTracking;
} IOP_IRP_EXTENSION_STATUS, *PIOP_IRP_EXTENSION_STATUS; /* size: 0x000c */

