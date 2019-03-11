typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _SECURITY_DESCRIPTOR_RELATIVE
{
  /* 0x0000 */ unsigned char Revision;
  /* 0x0001 */ unsigned char Sbz1;
  /* 0x0002 */ unsigned short Control;
  /* 0x0004 */ unsigned long Owner;
  /* 0x0008 */ unsigned long Group;
  /* 0x000c */ unsigned long Sacl;
  /* 0x0010 */ unsigned long Dacl;
} SECURITY_DESCRIPTOR_RELATIVE, *PSECURITY_DESCRIPTOR_RELATIVE; /* size: 0x0014 */

typedef struct _CM_KEY_SECURITY_CACHE
{
  /* 0x0000 */ unsigned long Cell;
  /* 0x0004 */ unsigned long ConvKey;
  /* 0x0008 */ struct _LIST_ENTRY List;
  /* 0x0010 */ unsigned long DescriptorLength;
  /* 0x0014 */ unsigned long RealRefCount;
  /* 0x0018 */ struct _SECURITY_DESCRIPTOR_RELATIVE Descriptor;
} CM_KEY_SECURITY_CACHE, *PCM_KEY_SECURITY_CACHE; /* size: 0x002c */

