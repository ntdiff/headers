typedef struct _OBP_LOOKUP_CONTEXT
{
  /* 0x0000 */ struct _OBJECT_DIRECTORY* Directory;
  /* 0x0004 */ struct _OBJECT_DIRECTORY_ENTRY** EntryLink;
  /* 0x0008 */ unsigned long HashValue;
  /* 0x000c */ unsigned char HashIndex;
  /* 0x000d */ unsigned char LockedExclusive;
  /* 0x000e */ unsigned char DirectoryReferenced;
  /* 0x000f */ unsigned char Unused;
} OBP_LOOKUP_CONTEXT, *POBP_LOOKUP_CONTEXT; /* size: 0x0010 */

