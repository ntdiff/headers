typedef struct __JUMP_BUFFER
{
  /* 0x0000 */ unsigned long Ebp;
  /* 0x0004 */ unsigned long Ebx;
  /* 0x0008 */ unsigned long Edi;
  /* 0x000c */ unsigned long Esi;
  /* 0x0010 */ unsigned long Esp;
  /* 0x0014 */ unsigned long Eip;
  /* 0x0018 */ unsigned long Registration;
  /* 0x001c */ unsigned long TryLevel;
  /* 0x0020 */ unsigned long Cookie;
  /* 0x0024 */ unsigned long UnwindFunc;
  /* 0x0028 */ unsigned long UnwindData[6];
} _JUMP_BUFFER, *P_JUMP_BUFFER; /* size: 0x0040 */

