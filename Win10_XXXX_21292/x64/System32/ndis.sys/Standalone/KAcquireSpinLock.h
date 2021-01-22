class KAcquireSpinLock
{
  union
  {
    /* 0x0000 */ const unsigned char NOT_ACQUIRED;
    /* 0x0000 */ unsigned char m_oldIrql;
  }; /* size: 0x0001 */
  /* 0x0008 */ class KSpinLockBase& m_lock;
}; /* size: 0x0010 */

