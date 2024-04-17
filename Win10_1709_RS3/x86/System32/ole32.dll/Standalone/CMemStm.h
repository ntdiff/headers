class CMemStm
{
  /* 0x0004 */ unsigned long m_dwSig;
  /* 0x0008 */ unsigned long m_refs;
  /* 0x000c */ unsigned long m_pos;
  /* 0x0010 */ void* m_hMem;
  /* 0x0014 */ struct MEMSTM* m_pData;
  /* 0x0018 */ class CRefMutexSem* m_pmxs;
}; /* size: 0x001c */

