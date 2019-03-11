typedef struct _CM_UOW_KEY_STATE_MODIFICATION
{
  /* 0x0000 */ unsigned long RefCount;
  /* 0x0004 */ unsigned long SubKeyListCount[2];
  /* 0x000c */ unsigned long NewSubKeyList[2];
} CM_UOW_KEY_STATE_MODIFICATION, *PCM_UOW_KEY_STATE_MODIFICATION; /* size: 0x0014 */

