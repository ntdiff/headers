typedef struct _AMD64_M128
{
  /* 0x0000 */ unsigned __int64 Low;
  /* 0x0008 */ __int64 High;
} AMD64_M128, *PAMD64_M128; /* size: 0x0010 */

typedef struct _AMD64_XMM_SAVE_AREA32
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
  /* 0x0020 */ struct _AMD64_M128 FloatRegisters[8];
  /* 0x00a0 */ struct _AMD64_M128 XmmRegisters[16];
  /* 0x01a0 */ unsigned char Reserved4[96];
} AMD64_XMM_SAVE_AREA32, *PAMD64_XMM_SAVE_AREA32; /* size: 0x0200 */

