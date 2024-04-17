typedef struct _NDR64_ENCAPSULATED_UNION
{
  /* 0x0000 */ unsigned char FormatCode;
  /* 0x0001 */ unsigned char Alignment;
  /* 0x0002 */ unsigned char Flags;
  /* 0x0003 */ unsigned char SwitchType;
  /* 0x0004 */ unsigned int MemoryOffset;
  /* 0x0008 */ unsigned int MemorySize;
  /* 0x000c */ unsigned int Reserved;
} NDR64_ENCAPSULATED_UNION, *PNDR64_ENCAPSULATED_UNION; /* size: 0x0010 */

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

typedef struct __midl_frag675_t
{
  /* 0x0000 */ struct _NDR64_ENCAPSULATED_UNION frag1;
  /* 0x0010 */ struct _NDR64_UNION_ARM_SELECTOR frag2;
  /* 0x0018 */ struct _NDR64_UNION_ARM frag3;
  /* 0x0030 */ struct _NDR64_UNION_ARM frag4;
  /* 0x0048 */ struct _NDR64_UNION_ARM frag5;
  /* 0x0060 */ unsigned int frag6;
  /* 0x0064 */ long __PADDING__[1];
} _midl_frag675_t, *P_midl_frag675_t; /* size: 0x0068 */

