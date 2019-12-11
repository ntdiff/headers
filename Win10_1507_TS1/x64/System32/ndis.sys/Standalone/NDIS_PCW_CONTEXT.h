struct NDIS_PCW_CONTEXT
{
  /* 0x0000 */ struct _NDIS_PCW_DATA_BLOCK* PcwBlock;
  /* 0x0008 */ unsigned long DatapathEventsMask;
  /* 0x000c */ unsigned long DatapathCyclesMask;
  /* 0x0010 */ unsigned long CurrentCpu;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

