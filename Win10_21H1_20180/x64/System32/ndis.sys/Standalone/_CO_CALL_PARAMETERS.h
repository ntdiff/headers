typedef struct _CO_CALL_PARAMETERS
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0008 */ struct _CO_CALL_MANAGER_PARAMETERS* CallMgrParameters;
  /* 0x0010 */ struct _CO_MEDIA_PARAMETERS* MediaParameters;
} CO_CALL_PARAMETERS, *PCO_CALL_PARAMETERS; /* size: 0x0018 */

