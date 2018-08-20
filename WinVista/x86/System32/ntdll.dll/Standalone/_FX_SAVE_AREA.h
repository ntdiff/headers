typedef struct _FNSAVE_FORMAT
{
  /* 0x0000 */ unsigned long ControlWord;
  /* 0x0004 */ unsigned long StatusWord;
  /* 0x0008 */ unsigned long TagWord;
  /* 0x000c */ unsigned long ErrorOffset;
  /* 0x0010 */ unsigned long ErrorSelector;
  /* 0x0014 */ unsigned long DataOffset;
  /* 0x0018 */ unsigned long DataSelector;
  /* 0x001c */ unsigned char RegisterArea[80];
} FNSAVE_FORMAT, *PFNSAVE_FORMAT; /* size: 0x006c */

typedef struct _FXSAVE_FORMAT
{
  /* 0x0000 */ unsigned short ControlWord;
  /* 0x0002 */ unsigned short StatusWord;
  /* 0x0004 */ unsigned short TagWord;
  /* 0x0006 */ unsigned short ErrorOpcode;
  /* 0x0008 */ unsigned long ErrorOffset;
  /* 0x000c */ unsigned long ErrorSelector;
  /* 0x0010 */ unsigned long DataOffset;
  /* 0x0014 */ unsigned long DataSelector;
  /* 0x0018 */ unsigned long MXCsr;
  /* 0x001c */ unsigned long MXCsrMask;
  /* 0x0020 */ unsigned char RegisterArea[128];
  /* 0x00a0 */ unsigned char Reserved3[128];
  /* 0x0120 */ unsigned char Reserved4[224];
  /* 0x0200 */ unsigned char Align16Byte[8];
} FXSAVE_FORMAT, *PFXSAVE_FORMAT; /* size: 0x0208 */

typedef struct _FX_SAVE_AREA
{
  union // _TAG_UNNAMED_10
  {
    union
    {
      /* 0x0000 */ struct _FNSAVE_FORMAT FnArea;
      /* 0x0000 */ struct _FXSAVE_FORMAT FxArea;
    }; /* size: 0x0208 */
  } /* size: 0x0208 */ U;
  /* 0x0208 */ unsigned long NpxSavedCpu;
  /* 0x020c */ unsigned long Cr0NpxState;
} FX_SAVE_AREA, *PFX_SAVE_AREA; /* size: 0x0210 */

