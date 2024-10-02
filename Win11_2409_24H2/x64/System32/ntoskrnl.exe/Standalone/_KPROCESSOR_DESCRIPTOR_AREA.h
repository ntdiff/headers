typedef union _KIDTENTRY64
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short OffsetLow;
      /* 0x0002 */ unsigned short Selector;
      struct /* bitfield */
      {
        /* 0x0004 */ unsigned short IstIndex : 3; /* bit position: 0 */
        /* 0x0004 */ unsigned short Reserved0 : 5; /* bit position: 3 */
        /* 0x0004 */ unsigned short Type : 5; /* bit position: 8 */
        /* 0x0004 */ unsigned short Dpl : 2; /* bit position: 13 */
        /* 0x0004 */ unsigned short Present : 1; /* bit position: 15 */
      }; /* bitfield */
      /* 0x0006 */ unsigned short OffsetMiddle;
      /* 0x0008 */ unsigned long OffsetHigh;
      /* 0x000c */ unsigned long Reserved1;
    }; /* size: 0x0010 */
    /* 0x0000 */ unsigned __int64 Alignment;
  }; /* size: 0x0010 */
} KIDTENTRY64, *PKIDTENTRY64; /* size: 0x0010 */

typedef struct _KTSS64
{
  /* 0x0000 */ unsigned long Reserved0;
  /* 0x0004 */ unsigned __int64 Rsp0;
  /* 0x000c */ unsigned __int64 Rsp1;
  /* 0x0014 */ unsigned __int64 Rsp2;
  /* 0x001c */ unsigned __int64 Ist[8];
  /* 0x005c */ unsigned __int64 Reserved1;
  /* 0x0064 */ unsigned short Reserved2;
  /* 0x0066 */ unsigned short IoMapBase;
} KTSS64, *PKTSS64; /* size: 0x0068 */

typedef union _KGDTENTRY64
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short LimitLow;
      /* 0x0002 */ unsigned short BaseLow;
      union
      {
        struct
        {
          /* 0x0004 */ unsigned char BaseMiddle;
          /* 0x0005 */ unsigned char Flags1;
          /* 0x0006 */ unsigned char Flags2;
          /* 0x0007 */ unsigned char BaseHigh;
        } /* size: 0x0004 */ Bytes;
        struct
        {
          struct
          {
            struct /* bitfield */
            {
              /* 0x0004 */ unsigned long BaseMiddle : 8; /* bit position: 0 */
              /* 0x0004 */ unsigned long Type : 5; /* bit position: 8 */
              /* 0x0004 */ unsigned long Dpl : 2; /* bit position: 13 */
              /* 0x0004 */ unsigned long Present : 1; /* bit position: 15 */
              /* 0x0004 */ unsigned long LimitHigh : 4; /* bit position: 16 */
              /* 0x0004 */ unsigned long System : 1; /* bit position: 20 */
              /* 0x0004 */ unsigned long LongMode : 1; /* bit position: 21 */
              /* 0x0004 */ unsigned long DefaultBig : 1; /* bit position: 22 */
              /* 0x0004 */ unsigned long Granularity : 1; /* bit position: 23 */
              /* 0x0004 */ unsigned long BaseHigh : 8; /* bit position: 24 */
            }; /* bitfield */
          } /* size: 0x0004 */ Bits;
          /* 0x0008 */ unsigned long BaseUpper;
          /* 0x000c */ unsigned long MustBeZero;
        }; /* size: 0x000c */
      }; /* size: 0x000c */
    }; /* size: 0x0010 */
    struct
    {
      /* 0x0000 */ __int64 DataLow;
      /* 0x0008 */ __int64 DataHigh;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
} KGDTENTRY64, *PKGDTENTRY64; /* size: 0x0010 */

typedef struct _KLDTENTRY
{
  /* 0x0000 */ unsigned short LimitLow;
  /* 0x0002 */ unsigned short BaseLow;
  union
  {
    union
    {
      struct
      {
        /* 0x0004 */ unsigned char BaseMid;
        /* 0x0005 */ unsigned char Flags1;
        /* 0x0006 */ unsigned char Flags2;
        /* 0x0007 */ unsigned char BaseHi;
      } /* size: 0x0004 */ Bytes;
      struct
      {
        struct /* bitfield */
        {
          /* 0x0004 */ unsigned long BaseMid : 8; /* bit position: 0 */
          /* 0x0004 */ unsigned long Type : 5; /* bit position: 8 */
          /* 0x0004 */ unsigned long Dpl : 2; /* bit position: 13 */
          /* 0x0004 */ unsigned long Pres : 1; /* bit position: 15 */
          /* 0x0004 */ unsigned long LimitHi : 4; /* bit position: 16 */
          /* 0x0004 */ unsigned long Sys : 1; /* bit position: 20 */
          /* 0x0004 */ unsigned long Reserved_0 : 1; /* bit position: 21 */
          /* 0x0004 */ unsigned long Default_Big : 1; /* bit position: 22 */
          /* 0x0004 */ unsigned long Granularity : 1; /* bit position: 23 */
          /* 0x0004 */ unsigned long BaseHi : 8; /* bit position: 24 */
        }; /* bitfield */
      } /* size: 0x0004 */ Bits;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ HighWord;
} KLDTENTRY, *PKLDTENTRY; /* size: 0x0008 */

typedef struct _KIST_BASE_FRAME
{
  /* 0x0000 */ struct _KPCR* KernelGsBase;
  /* 0x0008 */ struct _KIST_LINK_FRAME* IstStack;
  /* 0x0010 */ unsigned __int64 PreviousGsBase;
  /* 0x0018 */ unsigned __int64 PreviousCr3;
  /* 0x0020 */ unsigned __int64 IstPad;
  /* 0x0028 */ unsigned __int64 Reserved;
} KIST_BASE_FRAME, *PKIST_BASE_FRAME; /* size: 0x0030 */

typedef struct _KTRANSITION_STACK
{
  union
  {
    /* 0x0000 */ unsigned char Stack[512];
    struct
    {
      /* 0x0000 */ unsigned char IstStack[464];
      /* 0x01d0 */ struct _KIST_BASE_FRAME IstFrame;
    }; /* size: 0x0200 */
  }; /* size: 0x0200 */
} KTRANSITION_STACK, *PKTRANSITION_STACK; /* size: 0x0200 */

typedef struct _KPROCESSOR_DESCRIPTOR_AREA
{
  /* 0x0000 */ union _KIDTENTRY64 Idt[256];
  /* 0x1000 */ struct _KTSS64 Tss;
  /* 0x1068 */ unsigned __int64 TssSpare;
  /* 0x1070 */ struct _KPCR* KernelGsBase;
  /* 0x1078 */ void* IdleStack;
  /* 0x1080 */ unsigned char TssPad[3888];
  /* 0x1fb0 */ unsigned char GdtPadTemp[4096];
  /* 0x2fb0 */ union _KGDTENTRY64 Gdt[5];
  /* 0x3000 */ struct _KLDTENTRY GdtCmTebDescriptor;
  /* 0x3008 */ unsigned char GdtEndPadding[4088];
  /* 0x4000 */ struct _KTRANSITION_STACK TransitionStack[8];
} KPROCESSOR_DESCRIPTOR_AREA, *PKPROCESSOR_DESCRIPTOR_AREA; /* size: 0x5000 */

