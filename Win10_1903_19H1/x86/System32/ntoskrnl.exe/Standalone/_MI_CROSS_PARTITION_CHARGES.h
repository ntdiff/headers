typedef struct _MI_CROSS_PARTITION_CHARGES
{
  /* 0x0000 */ unsigned long CurrentCharges;
  /* 0x0004 */ unsigned long ChargeFailures;
  /* 0x0008 */ unsigned long ChargePeak;
  /* 0x000c */ unsigned long ChargeMinimum;
} MI_CROSS_PARTITION_CHARGES, *PMI_CROSS_PARTITION_CHARGES; /* size: 0x0010 */

