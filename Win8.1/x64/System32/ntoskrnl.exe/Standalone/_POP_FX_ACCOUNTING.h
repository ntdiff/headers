typedef struct _POP_FX_ACCOUNTING
{
  /* 0x0000 */ unsigned __int64 Lock;
  /* 0x0008 */ unsigned char Active;
  /* 0x000c */ unsigned long DripsRequiredState;
  /* 0x0010 */ long Level;
  /* 0x0018 */ __int64 ActiveStamp;
  /* 0x0020 */ unsigned __int64 CsActiveTime;
  /* 0x0028 */ __int64 CriticalActiveTime;
} POP_FX_ACCOUNTING, *PPOP_FX_ACCOUNTING; /* size: 0x0030 */

