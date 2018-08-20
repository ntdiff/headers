typedef struct _OBJECT_DIRECTORY_ENTRY
{
  /* 0x0000 */ struct _OBJECT_DIRECTORY_ENTRY* ChainLink;
  /* 0x0004 */ void* Object;
  /* 0x0008 */ unsigned long HashValue;
} OBJECT_DIRECTORY_ENTRY, *POBJECT_DIRECTORY_ENTRY; /* size: 0x000c */

