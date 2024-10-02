typedef struct _ENCRYPTION_KEY_CTRL_INPUT
{
  /* 0x0000 */ unsigned long HeaderSize;
  /* 0x0004 */ unsigned long StructureSize;
  /* 0x0008 */ unsigned short KeyOffset;
  /* 0x000a */ unsigned short KeySize;
  /* 0x000c */ unsigned long DplLock;
  /* 0x0010 */ unsigned __int64 DplUserId;
  /* 0x0018 */ unsigned __int64 DplCredentialId;
} ENCRYPTION_KEY_CTRL_INPUT, *PENCRYPTION_KEY_CTRL_INPUT; /* size: 0x0020 */

