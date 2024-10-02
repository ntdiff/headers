class CStmBuf
{
  /* 0x0000 */ struct IStream* m_pStm;
  /* 0x0008 */ unsigned char m_aBuffer[256];
  /* 0x0108 */ unsigned char* m_pBuffer;
  /* 0x0110 */ unsigned long m_cBuffer;
}; /* size: 0x0118 */

