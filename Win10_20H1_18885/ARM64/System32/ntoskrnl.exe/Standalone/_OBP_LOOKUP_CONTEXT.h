typedef struct _OBP_LOOKUP_CONTEXT
{
  /* 0x0000 */ struct _OBJECT_DIRECTORY* Directory;
  /* 0x0008 */ void* Object;
  /* 0x0010 */ struct _OBJECT_DIRECTORY_ENTRY** EntryLink;
  /* 0x0018 */ unsigned long HashValue;
  /* 0x001c */ unsigned short HashIndex;
  /* 0x001e */ unsigned char DirectoryLocked;
  /* 0x001f */ unsigned char LockedExclusive;
  /* 0x0020 */ unsigned long LockStateSignature;
  /* 0x0024 */ long __PADDING__[1];
} OBP_LOOKUP_CONTEXT, *POBP_LOOKUP_CONTEXT; /* size: 0x0028 */

