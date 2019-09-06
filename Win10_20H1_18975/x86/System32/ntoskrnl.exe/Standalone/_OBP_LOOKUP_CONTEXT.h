typedef struct _OBP_LOOKUP_CONTEXT
{
  /* 0x0000 */ struct _OBJECT_DIRECTORY* Directory;
  /* 0x0004 */ void* Object;
  /* 0x0008 */ struct _OBJECT_DIRECTORY_ENTRY** EntryLink;
  /* 0x000c */ unsigned long HashValue;
  /* 0x0010 */ unsigned short HashIndex;
  /* 0x0012 */ unsigned char DirectoryLocked;
  /* 0x0013 */ unsigned char LockedExclusive;
  /* 0x0014 */ unsigned long LockStateSignature;
} OBP_LOOKUP_CONTEXT, *POBP_LOOKUP_CONTEXT; /* size: 0x0018 */

