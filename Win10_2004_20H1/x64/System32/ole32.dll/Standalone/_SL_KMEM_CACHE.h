typedef struct _SL_KMEM_CACHE_VALUE_DESCRIPTOR
{
  /* 0x0000 */ unsigned short Size;
  /* 0x0002 */ unsigned short NameLength;
  /* 0x0004 */ unsigned short Type;
  /* 0x0006 */ unsigned short DataLength;
  /* 0x0008 */ unsigned long Attributes;
  /* 0x000c */ unsigned long Reserved;
  /* 0x0010 */ wchar_t Name[1];
  /* 0x0012 */ char __PADDING__[2];
} SL_KMEM_CACHE_VALUE_DESCRIPTOR, *PSL_KMEM_CACHE_VALUE_DESCRIPTOR; /* size: 0x0014 */

typedef struct _SL_KMEM_CACHE
{
  /* 0x0000 */ unsigned long TotalSize;
  /* 0x0004 */ unsigned long SizeOfData;
  /* 0x0008 */ unsigned long SignatureSize;
  /* 0x000c */ unsigned long Flags;
  /* 0x0010 */ unsigned long Version;
  /* 0x0014 */ struct _SL_KMEM_CACHE_VALUE_DESCRIPTOR Descriptors[1];
} SL_KMEM_CACHE, *PSL_KMEM_CACHE; /* size: 0x0028 */

