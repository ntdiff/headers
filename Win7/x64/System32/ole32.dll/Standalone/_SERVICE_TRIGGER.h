typedef struct _SERVICE_TRIGGER
{
  /* 0x0000 */ unsigned long dwTriggerType;
  /* 0x0004 */ unsigned long dwAction;
  /* 0x0008 */ struct _GUID* pTriggerSubtype;
  /* 0x0010 */ unsigned long cDataItems;
  /* 0x0018 */ struct _SERVICE_TRIGGER_SPECIFIC_DATA_ITEM* pDataItems;
} SERVICE_TRIGGER, *PSERVICE_TRIGGER; /* size: 0x0020 */

