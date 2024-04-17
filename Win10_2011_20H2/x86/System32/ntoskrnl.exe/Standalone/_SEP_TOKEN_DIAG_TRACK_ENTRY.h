typedef struct _SEP_TOKEN_DIAG_TRACK_ENTRY
{
  /* 0x0000 */ void* ProcessCid;
  /* 0x0004 */ void* ThreadCid;
  /* 0x0008 */ unsigned char ImageFileName[16];
  /* 0x0018 */ unsigned long CreateMethod;
  /* 0x001c */ unsigned long CreateTrace[30];
  /* 0x0094 */ long Count;
  /* 0x0098 */ long CaptureCount;
} SEP_TOKEN_DIAG_TRACK_ENTRY, *PSEP_TOKEN_DIAG_TRACK_ENTRY; /* size: 0x009c */

