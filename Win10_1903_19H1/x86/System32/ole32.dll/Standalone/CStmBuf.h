class CStmBuf
{
  /* 0x0000 */ struct IStream* m_pStm;
  /* 0x0004 */ unsigned char m_aBuffer[256];
  /* 0x0104 */ unsigned char* m_pBuffer;
  /* 0x0108 */ unsigned long m_cBuffer;
}; /* size: 0x010c */

