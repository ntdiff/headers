typedef struct _IOV_IRP_TRACE
{
  /* 0x0000 */ struct _IRP* Irp;
  /* 0x0008 */ struct _KTHREAD* Thread;
  union
  {
    struct
    {
      /* 0x0010 */ short KernelApcDisable;
      /* 0x0012 */ short SpecialApcDisable;
    }; /* size: 0x0004 */
    /* 0x0010 */ unsigned long CombinedApcDisable;
  }; /* size: 0x0004 */
  /* 0x0014 */ unsigned char Irql;
  /* 0x0018 */ void* StackTrace[13];
} IOV_IRP_TRACE, *PIOV_IRP_TRACE; /* size: 0x0080 */

