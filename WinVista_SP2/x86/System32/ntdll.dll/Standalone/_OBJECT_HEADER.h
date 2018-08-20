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
  /* 0x0000 */ long PointerCount;
  union
  {
    /* 0x0004 */ long HandleCount;
    /* 0x0004 */ void* NextToFree;
  }; /* size: 0x0004 */
  /* 0x0008 */ struct _OBJECT_TYPE* Type;
  /* 0x000c */ unsigned char NameInfoOffset;
  /* 0x000d */ unsigned char HandleInfoOffset;
  /* 0x000e */ unsigned char QuotaInfoOffset;
  /* 0x000f */ unsigned char Flags;
  union
  {
    /* 0x0010 */ struct _OBJECT_CREATE_INFORMATION* ObjectCreateInfo;
    /* 0x0010 */ void* QuotaBlockCharged;
  }; /* size: 0x0004 */
  /* 0x0014 */ void* SecurityDescriptor;
  /* 0x0018 */ struct _QUAD Body;
} OBJECT_HEADER, *POBJECT_HEADER; /* size: 0x0020 */

