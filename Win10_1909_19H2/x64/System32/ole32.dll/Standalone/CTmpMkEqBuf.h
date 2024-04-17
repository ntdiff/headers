typedef struct _MnkEqBuf
{
  /* 0x0000 */ unsigned long cdwSize;
  /* 0x0004 */ unsigned char abEqData[1];
  /* 0x0005 */ char __PADDING__[3];
} MnkEqBuf, *PMnkEqBuf; /* size: 0x0008 */

class CTmpMkEqBuf
{
  /* 0x0000 */ struct _MnkEqBuf _mkeqbuf;
  /* 0x0008 */ unsigned char _abData[2047];
}; /* size: 0x0808 */

