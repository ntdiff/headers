typedef enum _DUPLICATE_EXTENTS_STATE
{
  FileSnapStateInactive = 0,
  FileSnapStateSource = 1,
  FileSnapStateTarget = 2,
} DUPLICATE_EXTENTS_STATE, *PDUPLICATE_EXTENTS_STATE;

typedef struct _ASYNC_DUPLICATE_EXTENTS_STATUS
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ enum _DUPLICATE_EXTENTS_STATE State;
  /* 0x0008 */ unsigned __int64 SourceFileOffset;
  /* 0x0010 */ unsigned __int64 TargetFileOffset;
  /* 0x0018 */ unsigned __int64 ByteCount;
  /* 0x0020 */ unsigned __int64 BytesDuplicated;
} ASYNC_DUPLICATE_EXTENTS_STATUS, *PASYNC_DUPLICATE_EXTENTS_STATUS; /* size: 0x0028 */

