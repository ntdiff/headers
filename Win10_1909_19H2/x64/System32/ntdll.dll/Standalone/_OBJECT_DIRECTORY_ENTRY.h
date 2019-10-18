typedef struct _OBJECT_DIRECTORY_ENTRY
{
  /* 0x0000 */ struct _OBJECT_DIRECTORY_ENTRY* ChainLink;
  /* 0x0008 */ void* Object;
  /* 0x0010 */ unsigned long HashValue;
  /* 0x0014 */ long __PADDING__[1];
} OBJECT_DIRECTORY_ENTRY, *POBJECT_DIRECTORY_ENTRY; /* size: 0x0018 */

