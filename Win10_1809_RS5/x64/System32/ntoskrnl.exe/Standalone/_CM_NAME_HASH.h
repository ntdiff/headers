typedef struct _CM_COMPONENT_HASH
{
  /* 0x0000 */ unsigned long Hash;
} CM_COMPONENT_HASH, *PCM_COMPONENT_HASH; /* size: 0x0004 */

typedef struct _CM_NAME_HASH
{
  /* 0x0000 */ struct _CM_COMPONENT_HASH ConvKey;
  /* 0x0008 */ struct _CM_NAME_HASH* NextHash;
  /* 0x0010 */ unsigned short NameLength;
  /* 0x0012 */ wchar_t Name[1];
  /* 0x0014 */ long __PADDING__[1];
} CM_NAME_HASH, *PCM_NAME_HASH; /* size: 0x0018 */

