typedef struct _POP_FX_LOG_ENTRY
{
  /* 0x0000 */ unsigned __int64 Timestamp;
  /* 0x0008 */ unsigned char Operation;
  /* 0x0009 */ unsigned char Component;
  /* 0x000a */ unsigned short Processor;
  /* 0x000c */ unsigned short Process;
  /* 0x000e */ unsigned short Thread;
  /* 0x0010 */ unsigned __int64 Information;
} POP_FX_LOG_ENTRY, *PPOP_FX_LOG_ENTRY; /* size: 0x0018 */

