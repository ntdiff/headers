typedef struct _CM_KEY_HASH
{
  /* 0x0000 */ unsigned long ConvKey;
  /* 0x0004 */ struct _CM_KEY_HASH* NextHash;
  /* 0x0008 */ struct _HHIVE* KeyHive;
  /* 0x000c */ unsigned long KeyCell;
} CM_KEY_HASH, *PCM_KEY_HASH; /* size: 0x0010 */

