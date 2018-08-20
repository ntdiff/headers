typedef struct _FLOATING_SAVE_AREA
{
  /* 0x0000 */ unsigned long ControlWord;
  /* 0x0004 */ unsigned long StatusWord;
  /* 0x0008 */ unsigned long TagWord;
  /* 0x000c */ unsigned long ErrorOffset;
  /* 0x0010 */ unsigned long ErrorSelector;
  /* 0x0014 */ unsigned long DataOffset;
  /* 0x0018 */ unsigned long DataSelector;
  /* 0x001c */ unsigned char RegisterArea[80];
  /* 0x006c */ unsigned long Cr0NpxState;
} FLOATING_SAVE_AREA, *PFLOATING_SAVE_AREA; /* size: 0x0070 */

typedef struct _CONTEXT
{
  /* 0x0000 */ unsigned long ContextFlags;
  /* 0x0004 */ unsigned long Dr0;
  /* 0x0008 */ unsigned long Dr1;
  /* 0x000c */ unsigned long Dr2;
  /* 0x0010 */ unsigned long Dr3;
  /* 0x0014 */ unsigned long Dr6;
  /* 0x0018 */ unsigned long Dr7;
  /* 0x001c */ struct _FLOATING_SAVE_AREA FloatSave;
  /* 0x008c */ unsigned long SegGs;
  /* 0x0090 */ unsigned long SegFs;
  /* 0x0094 */ unsigned long SegEs;
  /* 0x0098 */ unsigned long SegDs;
  /* 0x009c */ unsigned long Edi;
  /* 0x00a0 */ unsigned long Esi;
  /* 0x00a4 */ unsigned long Ebx;
  /* 0x00a8 */ unsigned long Edx;
  /* 0x00ac */ unsigned long Ecx;
  /* 0x00b0 */ unsigned long Eax;
  /* 0x00b4 */ unsigned long Ebp;
  /* 0x00b8 */ unsigned long Eip;
  /* 0x00bc */ unsigned long SegCs;
  /* 0x00c0 */ unsigned long EFlags;
  /* 0x00c4 */ unsigned long Esp;
  /* 0x00c8 */ unsigned long SegSs;
  /* 0x00cc */ unsigned char ExtendedRegisters[512];
} CONTEXT, *PCONTEXT; /* size: 0x02cc */

typedef struct _DESCRIPTOR
{
  /* 0x0000 */ unsigned short Pad;
  /* 0x0002 */ unsigned short Limit;
  /* 0x0004 */ unsigned long Base;
} DESCRIPTOR, *PDESCRIPTOR; /* size: 0x0008 */

typedef struct _KSPECIAL_REGISTERS
{
  /* 0x0000 */ unsigned long Cr0;
  /* 0x0004 */ unsigned long Cr2;
  /* 0x0008 */ unsigned long Cr3;
  /* 0x000c */ unsigned long Cr4;
  /* 0x0010 */ unsigned long KernelDr0;
  /* 0x0014 */ unsigned long KernelDr1;
  /* 0x0018 */ unsigned long KernelDr2;
  /* 0x001c */ unsigned long KernelDr3;
  /* 0x0020 */ unsigned long KernelDr6;
  /* 0x0024 */ unsigned long KernelDr7;
  /* 0x0028 */ struct _DESCRIPTOR Gdtr;
  /* 0x0030 */ struct _DESCRIPTOR Idtr;
  /* 0x0038 */ unsigned short Tr;
  /* 0x003a */ unsigned short Ldtr;
  /* 0x003c */ unsigned long Reserved[6];
} KSPECIAL_REGISTERS, *PKSPECIAL_REGISTERS; /* size: 0x0054 */

typedef struct _KPROCESSOR_STATE
{
  /* 0x0000 */ struct _CONTEXT ContextFrame;
  /* 0x02cc */ struct _KSPECIAL_REGISTERS SpecialRegisters;
} KPROCESSOR_STATE, *PKPROCESSOR_STATE; /* size: 0x0320 */

