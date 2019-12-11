class MiniportSpinLock
{
  union
  {
    /* 0x0000 */ struct _NDIS_MINIPORT_BLOCK* m_miniport;
    /* 0x0000 */ const unsigned char NOT_ACQUIRED;
    /* 0x0000 */ const unsigned char ACQUIRED_AT_DPC;
  }; /* size: 0x0008 */
  /* 0x0008 */ unsigned char m_oldIrql;
}; /* size: 0x0010 */

