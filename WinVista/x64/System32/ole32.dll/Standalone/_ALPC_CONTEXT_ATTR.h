typedef struct _ALPC_CONTEXT_ATTR
{
  /* 0x0000 */ void* PortContext;
  /* 0x0008 */ void* MessageContext;
  /* 0x0010 */ unsigned long Sequence;
  /* 0x0014 */ unsigned long MessageId;
  /* 0x0018 */ unsigned long CallbackId;
  /* 0x001c */ long __PADDING__[1];
} ALPC_CONTEXT_ATTR, *PALPC_CONTEXT_ATTR; /* size: 0x0020 */

