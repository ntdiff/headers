typedef struct _OBP_LOOKUP_CONTEXT
{
  /* 0x0000 */ struct _OBJECT_DIRECTORY* Directory;
  /* 0x0008 */ struct _OBJECT_DIRECTORY_ENTRY** EntryLink;
  /* 0x0010 */ unsigned long HashValue;
  /* 0x0014 */ unsigned char HashIndex;
  /* 0x0015 */ unsigned char LockedExclusive;
  /* 0x0016 */ unsigned char DirectoryReferenced;
  /* 0x0017 */ unsigned char Unused;
} OBP_LOOKUP_CONTEXT, *POBP_LOOKUP_CONTEXT; /* size: 0x0018 */

