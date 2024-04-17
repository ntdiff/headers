typedef struct _KPRCB_TRACEPOINT_LOG_ENTRY
{
  /* 0x0000 */ unsigned __int64 OldPc;
  /* 0x0008 */ unsigned __int64 OldSp;
  /* 0x0010 */ unsigned __int64 NewPc;
  /* 0x0018 */ unsigned __int64 NewSp;
} KPRCB_TRACEPOINT_LOG_ENTRY, *PKPRCB_TRACEPOINT_LOG_ENTRY; /* size: 0x0020 */

typedef struct _KPRCB_TRACEPOINT_LOG
{
  /* 0x0000 */ struct _KPRCB_TRACEPOINT_LOG_ENTRY Entries[256];
  /* 0x2000 */ unsigned long LogIndex;
  /* 0x2004 */ long __PADDING__[1];
} KPRCB_TRACEPOINT_LOG, *PKPRCB_TRACEPOINT_LOG; /* size: 0x2008 */

