typedef struct _WNF_STATE_NAME_REGISTRATION
{
  /* 0x0000 */ unsigned long MaxStateSize;
  /* 0x0004 */ const struct _WNF_TYPE_ID* TypeId;
  /* 0x0008 */ struct _SECURITY_DESCRIPTOR* SecurityDescriptor;
} WNF_STATE_NAME_REGISTRATION, *PWNF_STATE_NAME_REGISTRATION; /* size: 0x000c */

