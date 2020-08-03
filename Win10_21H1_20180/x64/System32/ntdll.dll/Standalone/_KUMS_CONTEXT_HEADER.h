typedef struct _KUMS_CONTEXT_HEADER
{
  /* 0x0000 */ unsigned __int64 P1Home;
  /* 0x0008 */ unsigned __int64 P2Home;
  /* 0x0010 */ unsigned __int64 P3Home;
  /* 0x0018 */ unsigned __int64 P4Home;
  /* 0x0020 */ void* StackTop;
  /* 0x0028 */ unsigned __int64 StackSize;
  /* 0x0030 */ unsigned __int64 RspOffset;
  /* 0x0038 */ unsigned __int64 Rip;
  /* 0x0040 */ struct _XSAVE_FORMAT* FltSave;
  union
  {
    struct /* bitfield */
    {
      /* 0x0048 */ unsigned __int64 Volatile : 1; /* bit position: 0 */
      /* 0x0048 */ unsigned __int64 Reserved : 63; /* bit position: 1 */
    }; /* bitfield */
    /* 0x0048 */ unsigned __int64 Flags;
  }; /* size: 0x0008 */
  /* 0x0050 */ struct _KTRAP_FRAME* TrapFrame;
  /* 0x0058 */ struct _KEXCEPTION_FRAME* ExceptionFrame;
  /* 0x0060 */ struct _KTHREAD* SourceThread;
  /* 0x0068 */ unsigned __int64 Return;
} KUMS_CONTEXT_HEADER, *PKUMS_CONTEXT_HEADER; /* size: 0x0070 */

