typedef struct _DCB
{
  /* 0x0000 */ unsigned long DCBlength;
  /* 0x0004 */ unsigned long BaudRate;
  struct /* bitfield */
  {
    /* 0x0008 */ unsigned long fBinary : 1; /* bit position: 0 */
    /* 0x0008 */ unsigned long fParity : 1; /* bit position: 1 */
    /* 0x0008 */ unsigned long fOutxCtsFlow : 1; /* bit position: 2 */
    /* 0x0008 */ unsigned long fOutxDsrFlow : 1; /* bit position: 3 */
    /* 0x0008 */ unsigned long fDtrControl : 2; /* bit position: 4 */
    /* 0x0008 */ unsigned long fDsrSensitivity : 1; /* bit position: 6 */
    /* 0x0008 */ unsigned long fTXContinueOnXoff : 1; /* bit position: 7 */
    /* 0x0008 */ unsigned long fOutX : 1; /* bit position: 8 */
    /* 0x0008 */ unsigned long fInX : 1; /* bit position: 9 */
    /* 0x0008 */ unsigned long fErrorChar : 1; /* bit position: 10 */
    /* 0x0008 */ unsigned long fNull : 1; /* bit position: 11 */
    /* 0x0008 */ unsigned long fRtsControl : 2; /* bit position: 12 */
    /* 0x0008 */ unsigned long fAbortOnError : 1; /* bit position: 14 */
    /* 0x0008 */ unsigned long fDummy2 : 17; /* bit position: 15 */
  }; /* bitfield */
  /* 0x000c */ unsigned short wReserved;
  /* 0x000e */ unsigned short XonLim;
  /* 0x0010 */ unsigned short XoffLim;
  /* 0x0012 */ unsigned char ByteSize;
  /* 0x0013 */ unsigned char Parity;
  /* 0x0014 */ unsigned char StopBits;
  /* 0x0015 */ char XonChar;
  /* 0x0016 */ char XoffChar;
  /* 0x0017 */ char ErrorChar;
  /* 0x0018 */ char EofChar;
  /* 0x0019 */ char EvtChar;
  /* 0x001a */ unsigned short wReserved1;
} DCB, *PDCB; /* size: 0x001c */

typedef struct _COMMCONFIG
{
  /* 0x0000 */ unsigned long dwSize;
  /* 0x0004 */ unsigned short wVersion;
  /* 0x0006 */ unsigned short wReserved;
  /* 0x0008 */ struct _DCB dcb;
  /* 0x0024 */ unsigned long dwProviderSubType;
  /* 0x0028 */ unsigned long dwProviderOffset;
  /* 0x002c */ unsigned long dwProviderSize;
  /* 0x0030 */ wchar_t wcProviderData[1];
  /* 0x0032 */ char __PADDING__[2];
} COMMCONFIG, *PCOMMCONFIG; /* size: 0x0034 */

