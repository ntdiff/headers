typedef struct _IOV_IRP_TRACE
{
  /* 0x0000 */ struct _IRP* Irp;
  /* 0x0004 */ struct _KTHREAD* Thread;
  union
  {
    struct
    {
      /* 0x0008 */ short KernelApcDisable;
      /* 0x000a */ short SpecialApcDisable;
    }; /* size: 0x0004 */
    /* 0x0008 */ unsigned long CombinedApcDisable;
  }; /* size: 0x0004 */
  /* 0x000c */ unsigned char Irql;
  /* 0x0010 */ void* StackTrace[12];
} IOV_IRP_TRACE, *PIOV_IRP_TRACE; /* size: 0x0040 */

