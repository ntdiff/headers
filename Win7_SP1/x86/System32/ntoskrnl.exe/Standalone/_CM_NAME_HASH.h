typedef struct _CM_NAME_HASH
{
  /* 0x0000 */ unsigned long ConvKey;
  /* 0x0004 */ struct _CM_NAME_HASH* NextHash;
  /* 0x0008 */ unsigned short NameLength;
  /* 0x000a */ wchar_t Name[1];
} CM_NAME_HASH, *PCM_NAME_HASH; /* size: 0x000c */

