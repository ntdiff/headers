typedef struct _OBP_LOOKUP_CONTEXT
{
  /* 0x0000 */ struct _OBJECT_DIRECTORY* Directory;
  /* 0x0008 */ void* Object;
  /* 0x0010 */ unsigned long HashValue;
  /* 0x0014 */ unsigned short HashIndex;
  /* 0x0016 */ unsigned char DirectoryLocked;
  /* 0x0018 */ volatile unsigned long LockStateSignature;
  /* 0x001c */ long __PADDING__[1];
} OBP_LOOKUP_CONTEXT, *POBP_LOOKUP_CONTEXT; /* size: 0x0020 */

