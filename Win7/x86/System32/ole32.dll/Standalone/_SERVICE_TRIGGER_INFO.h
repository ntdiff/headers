typedef struct _SERVICE_TRIGGER_INFO
{
  /* 0x0000 */ unsigned long cTriggers;
  /* 0x0004 */ struct _SERVICE_TRIGGER* pTriggers;
  /* 0x0008 */ unsigned char* pReserved;
} SERVICE_TRIGGER_INFO, *PSERVICE_TRIGGER_INFO; /* size: 0x000c */

