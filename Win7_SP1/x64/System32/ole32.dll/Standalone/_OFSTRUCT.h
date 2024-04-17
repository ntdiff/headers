typedef struct _OFSTRUCT
{
  /* 0x0000 */ unsigned char cBytes;
  /* 0x0001 */ unsigned char fFixedDisk;
  /* 0x0002 */ unsigned short nErrCode;
  /* 0x0004 */ unsigned short Reserved1;
  /* 0x0006 */ unsigned short Reserved2;
  /* 0x0008 */ char szPathName[128];
} OFSTRUCT, *POFSTRUCT; /* size: 0x0088 */

