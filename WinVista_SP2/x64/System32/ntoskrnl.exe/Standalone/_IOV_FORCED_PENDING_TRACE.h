typedef struct _IOV_FORCED_PENDING_TRACE
{
  /* 0x0000 */ struct _IRP* Irp;
  /* 0x0008 */ void* StackTrace[63];
} IOV_FORCED_PENDING_TRACE, *PIOV_FORCED_PENDING_TRACE; /* size: 0x0200 */

