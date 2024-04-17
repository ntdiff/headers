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

typedef struct __midl_frag7_t
{
  /* 0x0000 */ struct _NDR64_NON_ENCAPSULATED_UNION frag1;
  /* 0x0018 */ struct _NDR64_UNION_ARM_SELECTOR frag2;
  /* 0x0020 */ struct _NDR64_UNION_ARM frag3;
  /* 0x0038 */ struct _NDR64_UNION_ARM frag4;
  /* 0x0050 */ unsigned int frag5;
  /* 0x0054 */ long __PADDING__[1];
} _midl_frag7_t, *P_midl_frag7_t; /* size: 0x0058 */

