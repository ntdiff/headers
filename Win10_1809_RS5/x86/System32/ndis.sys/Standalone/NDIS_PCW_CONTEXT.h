struct NDIS_PCW_CONTEXT
{
  /* 0x0000 */ struct _NDIS_PCW_DATA_BLOCK* PcwBlock;
  /* 0x0004 */ unsigned long DatapathEventsMask;
  /* 0x0008 */ unsigned long DatapathCyclesMask;
  /* 0x000c */ unsigned long CurrentCpu;
}; /* size: 0x0010 */

