typedef struct _REFS_SET_ROLLBACK_PROTECTION_INFO_INPUT_BUFFER
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned char FailMountOnMismatch;
  /* 0x0008 */ unsigned long CustomPayloadLength;
  /* 0x000c */ unsigned long CustomPayloadOffset;
} REFS_SET_ROLLBACK_PROTECTION_INFO_INPUT_BUFFER, *PREFS_SET_ROLLBACK_PROTECTION_INFO_INPUT_BUFFER; /* size: 0x0010 */

