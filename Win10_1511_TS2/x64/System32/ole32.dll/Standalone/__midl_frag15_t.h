typedef struct _NDR64_NON_ENCAPSULATED_UNION
{
  /* 0x0000 */ unsigned char FormatCode;
  /* 0x0001 */ unsigned char Alignment;
  /* 0x0002 */ unsigned char Flags;
  /* 0x0003 */ unsigned char SwitchType;
  /* 0x0004 */ unsigned int MemorySize;
  /* 0x0008 */ const void* Switch;
  /* 0x0010 */ unsigned int Reserved;
  /* 0x0014 */ long __PADDING__[1];
} NDR64_NON_ENCAPSULATED_UNION, *PNDR64_NON_ENCAPSULATED_UNION; /* size: 0x0018 */

typedef struct _NDR64_UNION_ARM_SELECTOR
{
  /* 0x0000 */ unsigned char Reserved1;
  /* 0x0001 */ unsigned char Alignment;
  /* 0x0002 */ unsigned short Reserved2;
  /* 0x0004 */ unsigned int Arms;
} NDR64_UNION_ARM_SELECTOR, *PNDR64_UNION_ARM_SELECTOR; /* size: 0x0008 */

typedef struct _NDR64_UNION_ARM
{
  /* 0x0000 */ __int64 CaseValue;
  /* 0x0008 */ const void* Type;
  /* 0x0010 */ unsigned int Reserved;
  /* 0x0014 */ long __PADDING__[1];
} NDR64_UNION_ARM, *PNDR64_UNION_ARM; /* size: 0x0018 */

typedef struct __midl_frag15_t
{
  /* 0x0000 */ struct _NDR64_NON_ENCAPSULATED_UNION frag1;
  /* 0x0018 */ struct _NDR64_UNION_ARM_SELECTOR frag2;
  /* 0x0020 */ struct _NDR64_UNION_ARM frag3;
  /* 0x0038 */ struct _NDR64_UNION_ARM frag4;
  /* 0x0050 */ struct _NDR64_UNION_ARM frag5;
  /* 0x0068 */ struct _NDR64_UNION_ARM frag6;
  /* 0x0080 */ struct _NDR64_UNION_ARM frag7;
  /* 0x0098 */ struct _NDR64_UNION_ARM frag8;
  /* 0x00b0 */ struct _NDR64_UNION_ARM frag9;
  /* 0x00c8 */ struct _NDR64_UNION_ARM frag10;
  /* 0x00e0 */ struct _NDR64_UNION_ARM frag11;
  /* 0x00f8 */ struct _NDR64_UNION_ARM frag12;
  /* 0x0110 */ struct _NDR64_UNION_ARM frag13;
  /* 0x0128 */ struct _NDR64_UNION_ARM frag14;
  /* 0x0140 */ struct _NDR64_UNION_ARM frag15;
  /* 0x0158 */ struct _NDR64_UNION_ARM frag16;
  /* 0x0170 */ struct _NDR64_UNION_ARM frag17;
  /* 0x0188 */ struct _NDR64_UNION_ARM frag18;
  /* 0x01a0 */ struct _NDR64_UNION_ARM frag19;
  /* 0x01b8 */ struct _NDR64_UNION_ARM frag20;
  /* 0x01d0 */ struct _NDR64_UNION_ARM frag21;
  /* 0x01e8 */ struct _NDR64_UNION_ARM frag22;
  /* 0x0200 */ struct _NDR64_UNION_ARM frag23;
  /* 0x0218 */ struct _NDR64_UNION_ARM frag24;
  /* 0x0230 */ struct _NDR64_UNION_ARM frag25;
  /* 0x0248 */ struct _NDR64_UNION_ARM frag26;
  /* 0x0260 */ struct _NDR64_UNION_ARM frag27;
  /* 0x0278 */ struct _NDR64_UNION_ARM frag28;
  /* 0x0290 */ struct _NDR64_UNION_ARM frag29;
  /* 0x02a8 */ struct _NDR64_UNION_ARM frag30;
  /* 0x02c0 */ struct _NDR64_UNION_ARM frag31;
  /* 0x02d8 */ struct _NDR64_UNION_ARM frag32;
  /* 0x02f0 */ struct _NDR64_UNION_ARM frag33;
  /* 0x0308 */ struct _NDR64_UNION_ARM frag34;
  /* 0x0320 */ struct _NDR64_UNION_ARM frag35;
  /* 0x0338 */ struct _NDR64_UNION_ARM frag36;
  /* 0x0350 */ struct _NDR64_UNION_ARM frag37;
  /* 0x0368 */ struct _NDR64_UNION_ARM frag38;
  /* 0x0380 */ struct _NDR64_UNION_ARM frag39;
  /* 0x0398 */ struct _NDR64_UNION_ARM frag40;
  /* 0x03b0 */ struct _NDR64_UNION_ARM frag41;
  /* 0x03c8 */ struct _NDR64_UNION_ARM frag42;
  /* 0x03e0 */ struct _NDR64_UNION_ARM frag43;
  /* 0x03f8 */ struct _NDR64_UNION_ARM frag44;
  /* 0x0410 */ struct _NDR64_UNION_ARM frag45;
  /* 0x0428 */ struct _NDR64_UNION_ARM frag46;
  /* 0x0440 */ struct _NDR64_UNION_ARM frag47;
  /* 0x0458 */ struct _NDR64_UNION_ARM frag48;
  /* 0x0470 */ struct _NDR64_UNION_ARM frag49;
  /* 0x0488 */ struct _NDR64_UNION_ARM frag50;
  /* 0x04a0 */ struct _NDR64_UNION_ARM frag51;
  /* 0x04b8 */ struct _NDR64_UNION_ARM frag52;
  /* 0x04d0 */ struct _NDR64_UNION_ARM frag53;
  /* 0x04e8 */ struct _NDR64_UNION_ARM frag54;
  /* 0x0500 */ struct _NDR64_UNION_ARM frag55;
  /* 0x0518 */ struct _NDR64_UNION_ARM frag56;
  /* 0x0530 */ struct _NDR64_UNION_ARM frag57;
  /* 0x0548 */ struct _NDR64_UNION_ARM frag58;
  /* 0x0560 */ struct _NDR64_UNION_ARM frag59;
  /* 0x0578 */ struct _NDR64_UNION_ARM frag60;
  /* 0x0590 */ struct _NDR64_UNION_ARM frag61;
  /* 0x05a8 */ struct _NDR64_UNION_ARM frag62;
  /* 0x05c0 */ struct _NDR64_UNION_ARM frag63;
  /* 0x05d8 */ struct _NDR64_UNION_ARM frag64;
  /* 0x05f0 */ struct _NDR64_UNION_ARM frag65;
  /* 0x0608 */ struct _NDR64_UNION_ARM frag66;
  /* 0x0620 */ struct _NDR64_UNION_ARM frag67;
  /* 0x0638 */ struct _NDR64_UNION_ARM frag68;
  /* 0x0650 */ struct _NDR64_UNION_ARM frag69;
  /* 0x0668 */ struct _NDR64_UNION_ARM frag70;
  /* 0x0680 */ struct _NDR64_UNION_ARM frag71;
  /* 0x0698 */ struct _NDR64_UNION_ARM frag72;
  /* 0x06b0 */ struct _NDR64_UNION_ARM frag73;
  /* 0x06c8 */ struct _NDR64_UNION_ARM frag74;
  /* 0x06e0 */ struct _NDR64_UNION_ARM frag75;
  /* 0x06f8 */ struct _NDR64_UNION_ARM frag76;
  /* 0x0710 */ struct _NDR64_UNION_ARM frag77;
  /* 0x0728 */ struct _NDR64_UNION_ARM frag78;
  /* 0x0740 */ struct _NDR64_UNION_ARM frag79;
  /* 0x0758 */ struct _NDR64_UNION_ARM frag80;
  /* 0x0770 */ struct _NDR64_UNION_ARM frag81;
  /* 0x0788 */ struct _NDR64_UNION_ARM frag82;
  /* 0x07a0 */ struct _NDR64_UNION_ARM frag83;
  /* 0x07b8 */ struct _NDR64_UNION_ARM frag84;
  /* 0x07d0 */ struct _NDR64_UNION_ARM frag85;
  /* 0x07e8 */ struct _NDR64_UNION_ARM frag86;
  /* 0x0800 */ struct _NDR64_UNION_ARM frag87;
  /* 0x0818 */ struct _NDR64_UNION_ARM frag88;
  /* 0x0830 */ struct _NDR64_UNION_ARM frag89;
  /* 0x0848 */ struct _NDR64_UNION_ARM frag90;
  /* 0x0860 */ struct _NDR64_UNION_ARM frag91;
  /* 0x0878 */ struct _NDR64_UNION_ARM frag92;
  /* 0x0890 */ struct _NDR64_UNION_ARM frag93;
  /* 0x08a8 */ struct _NDR64_UNION_ARM frag94;
  /* 0x08c0 */ struct _NDR64_UNION_ARM frag95;
  /* 0x08d8 */ struct _NDR64_UNION_ARM frag96;
  /* 0x08f0 */ struct _NDR64_UNION_ARM frag97;
  /* 0x0908 */ struct _NDR64_UNION_ARM frag98;
  /* 0x0920 */ struct _NDR64_UNION_ARM frag99;
  /* 0x0938 */ unsigned int frag100;
  /* 0x093c */ long __PADDING__[1];
} _midl_frag15_t, *P_midl_frag15_t; /* size: 0x0940 */

