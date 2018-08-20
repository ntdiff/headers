typedef struct _CM_INDEX
{
  /* 0x0000 */ unsigned long Cell;
  union
  {
    /* 0x0004 */ unsigned char NameHint[4];
    /* 0x0004 */ unsigned long HashKey;
  }; /* size: 0x0004 */
} CM_INDEX, *PCM_INDEX; /* size: 0x0008 */

