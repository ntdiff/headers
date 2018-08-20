typedef struct _CM_NAME_HASH
{
  /* 0x0000 */ unsigned long ConvKey;
  /* 0x0008 */ struct _CM_NAME_HASH* NextHash;
  /* 0x0010 */ unsigned short NameLength;
  /* 0x0012 */ wchar_t Name[1];
  /* 0x0014 */ long __PADDING__[1];
} CM_NAME_HASH, *PCM_NAME_HASH; /* size: 0x0018 */

typedef struct _CM_NAME_CONTROL_BLOCK
{
  /* 0x0000 */ unsigned char Compressed;
  /* 0x0002 */ unsigned short RefCount;
  union
  {
    /* 0x0008 */ struct _CM_NAME_HASH NameHash;
    struct
    {
      /* 0x0008 */ unsigned long ConvKey;
      /* 0x0010 */ struct _CM_KEY_HASH* NextHash;
      /* 0x0018 */ unsigned short NameLength;
      /* 0x001a */ wchar_t Name[1];
      /* 0x001c */ long __PADDING__[1];
    }; /* size: 0x0014 */
  }; /* size: 0x0018 */
} CM_NAME_CONTROL_BLOCK, *PCM_NAME_CONTROL_BLOCK; /* size: 0x0020 */

