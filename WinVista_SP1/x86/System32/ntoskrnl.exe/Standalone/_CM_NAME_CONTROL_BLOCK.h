typedef struct _CM_NAME_HASH
{
  /* 0x0000 */ unsigned long ConvKey;
  /* 0x0004 */ struct _CM_NAME_HASH* NextHash;
  /* 0x0008 */ unsigned short NameLength;
  /* 0x000a */ wchar_t Name[1];
} CM_NAME_HASH, *PCM_NAME_HASH; /* size: 0x000c */

typedef struct _CM_NAME_CONTROL_BLOCK
{
  /* 0x0000 */ unsigned char Compressed;
  /* 0x0002 */ unsigned short RefCount;
  union
  {
    /* 0x0004 */ struct _CM_NAME_HASH NameHash;
    struct
    {
      /* 0x0004 */ unsigned long ConvKey;
      /* 0x0008 */ struct _CM_KEY_HASH* NextHash;
      /* 0x000c */ unsigned short NameLength;
      /* 0x000e */ wchar_t Name[1];
    }; /* size: 0x000c */
  }; /* size: 0x000c */
} CM_NAME_CONTROL_BLOCK, *PCM_NAME_CONTROL_BLOCK; /* size: 0x0010 */

