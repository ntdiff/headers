typedef struct _CM_PATH_HASH
{
  /* 0x0000 */ unsigned long Hash;
} CM_PATH_HASH, *PCM_PATH_HASH; /* size: 0x0004 */

typedef struct _CM_KEY_HASH
{
  /* 0x0000 */ struct _CM_PATH_HASH ConvKey;
  /* 0x0008 */ struct _CM_KEY_HASH* NextHash;
  /* 0x0010 */ struct _HHIVE* KeyHive;
  /* 0x0018 */ unsigned long KeyCell;
  /* 0x001c */ long __PADDING__[1];
} CM_KEY_HASH, *PCM_KEY_HASH; /* size: 0x0020 */

