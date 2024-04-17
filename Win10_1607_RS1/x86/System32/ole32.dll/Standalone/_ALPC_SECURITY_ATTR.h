typedef struct _ALPC_SECURITY_ATTR
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ struct _SECURITY_QUALITY_OF_SERVICE* QoS;
  /* 0x0008 */ void* ContextHandle;
} ALPC_SECURITY_ATTR, *PALPC_SECURITY_ATTR; /* size: 0x000c */

