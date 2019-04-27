typedef struct _SEP_TOKEN_DIAG_TRACK_ENTRY
{
  /* 0x0000 */ void* ProcessCid;
  /* 0x0008 */ void* ThreadCid;
  /* 0x0010 */ unsigned char ImageFileName[16];
  /* 0x0020 */ unsigned long CreateMethod;
  /* 0x0028 */ unsigned __int64 CreateTrace[30];
  /* 0x0118 */ long Count;
  /* 0x011c */ long CaptureCount;
} SEP_TOKEN_DIAG_TRACK_ENTRY, *PSEP_TOKEN_DIAG_TRACK_ENTRY; /* size: 0x0120 */

