typedef struct _REFS_VOLUME_DEDUP_INFO_INPUT_BUFFER
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned char SetDedupState;
  /* 0x0005 */ unsigned char Enable;
  /* 0x0006 */ unsigned char SetWeakRefState;
  /* 0x0007 */ unsigned char EnableWeakRef;
  /* 0x0008 */ unsigned char SetDirtyRangeTrackingState;
  /* 0x0009 */ unsigned char EnableDirtyRangeTracking;
  /* 0x000a */ unsigned char SetWeakRefInconsistentState;
  /* 0x000b */ unsigned char SetWeakRefInconsistent;
} REFS_VOLUME_DEDUP_INFO_INPUT_BUFFER, *PREFS_VOLUME_DEDUP_INFO_INPUT_BUFFER; /* size: 0x000c */

