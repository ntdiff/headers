typedef struct _MI_DEBUGGER_STATE
{
  /* 0x0000 */ unsigned char TransientWrite;
  /* 0x0001 */ unsigned char CodePageEdited;
  /* 0x0008 */ struct _MMPTE* DebugPte;
  /* 0x0010 */ unsigned long PoisonedTb;
  /* 0x0014 */ volatile long InDebugger;
  /* 0x0018 */ void* volatile Pfns[32];
} MI_DEBUGGER_STATE, *PMI_DEBUGGER_STATE; /* size: 0x0118 */

