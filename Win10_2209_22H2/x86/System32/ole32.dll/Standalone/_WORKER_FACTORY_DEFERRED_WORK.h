typedef struct _WORKER_FACTORY_DEFERRED_WORK
{
  /* 0x0000 */ struct _PORT_MESSAGE* AlpcSendMessage;
  /* 0x0004 */ void* AlpcSendMessagePort;
  /* 0x0008 */ unsigned long AlpcSendMessageFlags;
  /* 0x000c */ unsigned long Flags;
} WORKER_FACTORY_DEFERRED_WORK, *PWORKER_FACTORY_DEFERRED_WORK; /* size: 0x0010 */

