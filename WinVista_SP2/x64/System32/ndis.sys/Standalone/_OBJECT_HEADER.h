typedef struct _QUAD
{
  union
  {
    /* 0x0000 */ __int64 UseThisFieldToCopy;
    /* 0x0000 */ double DoNotUseThisField;
  }; /* size: 0x0008 */
} QUAD, *PQUAD; /* size: 0x0008 */

typedef struct _OBJECT_HEADER
{
  /* 0x0000 */ __int64 PointerCount;
  union
  {
    /* 0x0008 */ __int64 HandleCount;
    /* 0x0008 */ void* NextToFree;
  }; /* size: 0x0008 */
  /* 0x0010 */ struct _OBJECT_TYPE* Type;
  /* 0x0018 */ unsigned char NameInfoOffset;
  /* 0x0019 */ unsigned char HandleInfoOffset;
  /* 0x001a */ unsigned char QuotaInfoOffset;
  /* 0x001b */ unsigned char Flags;
  union
  {
    /* 0x0020 */ struct _OBJECT_CREATE_INFORMATION* ObjectCreateInfo;
    /* 0x0020 */ void* QuotaBlockCharged;
  }; /* size: 0x0008 */
  /* 0x0028 */ void* SecurityDescriptor;
  /* 0x0030 */ struct _QUAD Body;
} OBJECT_HEADER, *POBJECT_HEADER; /* size: 0x0038 */

