typedef struct _XMIT_ROUTINE_QUINTUPLE
{
  /* 0x0000 */ void* pfnTranslateToXmit /* function */;
  /* 0x0004 */ void* pfnTranslateFromXmit /* function */;
  /* 0x0008 */ void* pfnFreeXmit /* function */;
  /* 0x000c */ void* pfnFreeInst /* function */;
} XMIT_ROUTINE_QUINTUPLE, *PXMIT_ROUTINE_QUINTUPLE; /* size: 0x0010 */

