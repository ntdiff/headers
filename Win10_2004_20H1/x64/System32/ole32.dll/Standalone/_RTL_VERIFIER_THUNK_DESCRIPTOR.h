typedef struct _RTL_VERIFIER_THUNK_DESCRIPTOR
{
  /* 0x0000 */ char* ThunkName;
  /* 0x0008 */ void* ThunkOldAddress;
  /* 0x0010 */ void* ThunkNewAddress;
} RTL_VERIFIER_THUNK_DESCRIPTOR, *PRTL_VERIFIER_THUNK_DESCRIPTOR; /* size: 0x0018 */

