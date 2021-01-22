typedef struct _M128A
{
  /* 0x0000 */ unsigned __int64 Low;
  /* 0x0008 */ __int64 High;
} M128A, *PM128A; /* size: 0x0010 */

typedef struct _XSAVE_FORMAT
{
  /* 0x0000 */ unsigned short ControlWord;
  /* 0x0002 */ unsigned short StatusWord;
  /* 0x0004 */ unsigned char TagWord;
  /* 0x0005 */ unsigned char Reserved1;
  /* 0x0006 */ unsigned short ErrorOpcode;
  /* 0x0008 */ unsigned long ErrorOffset;
  /* 0x000c */ unsigned short ErrorSelector;
  /* 0x000e */ unsigned short Reserved2;
  /* 0x0010 */ unsigned long DataOffset;
  /* 0x0014 */ unsigned short DataSelector;
  /* 0x0016 */ unsigned short Reserved3;
  /* 0x0018 */ unsigned long MxCsr;
  /* 0x001c */ unsigned long MxCsr_Mask;
  /* 0x0020 */ struct _M128A FloatRegisters[8];
  /* 0x00a0 */ struct _M128A XmmRegisters[16];
  /* 0x01a0 */ unsigned char Reserved4[96];
} XSAVE_FORMAT, *PXSAVE_FORMAT; /* size: 0x0200 */

typedef struct _XSAVE_AREA_HEADER
{
  /* 0x0000 */ unsigned __int64 Mask;
  /* 0x0008 */ unsigned __int64 CompactionMask;
  /* 0x0010 */ unsigned __int64 Reserved2[6];
} XSAVE_AREA_HEADER, *PXSAVE_AREA_HEADER; /* size: 0x0040 */

typedef struct _XSAVE_AREA
{
  /* 0x0000 */ struct _XSAVE_FORMAT LegacyState;
  /* 0x0200 */ struct _XSAVE_AREA_HEADER Header;
} XSAVE_AREA, *PXSAVE_AREA; /* size: 0x0240 */

