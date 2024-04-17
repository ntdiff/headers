struct MEMSTM
{
  /* 0x0000 */ unsigned long cb;
  /* 0x0004 */ unsigned long cRef;
  /* 0x0008 */ unsigned char* m_pBuf;
  /* 0x0010 */ void* hGlobal;
  /* 0x0018 */ int fDeleteOnRelease;
  /* 0x001c */ long __PADDING__[1];
}; /* size: 0x0020 */

