typedef struct _CM_KEY_INDEX
{
  /* 0x0000 */ unsigned short Signature;
  /* 0x0002 */ unsigned short Count;
  /* 0x0004 */ unsigned long List[1];
} CM_KEY_INDEX, *PCM_KEY_INDEX; /* size: 0x0008 */

