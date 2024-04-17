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

typedef struct __midl_frag104_t
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
  /* 0x0488 */ unsigned int frag50;
  /* 0x048c */ long __PADDING__[1];
} _midl_frag104_t, *P_midl_frag104_t; /* size: 0x0490 */

