typedef struct _OBP_LOOKUP_CONTEXT
{
  /* 0x0000 */ struct _OBJECT_DIRECTORY* Directory;
  /* 0x0004 */ void* Object;
  /* 0x0008 */ unsigned long HashValue;
  /* 0x000c */ unsigned short HashIndex;
  /* 0x000e */ unsigned char DirectoryLocked;
  /* 0x000f */ unsigned char LockedExclusive;
  /* 0x0010 */ volatile unsigned long LockStateSignature;
} OBP_LOOKUP_CONTEXT, *POBP_LOOKUP_CONTEXT; /* size: 0x0014 */

