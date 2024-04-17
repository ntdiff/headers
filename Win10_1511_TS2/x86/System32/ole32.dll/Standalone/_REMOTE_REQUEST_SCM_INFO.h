typedef struct _REMOTE_REQUEST_SCM_INFO
{
  /* 0x0000 */ unsigned long ClientImpLevel;
  /* 0x0004 */ unsigned short cRequestedProtseqs;
  /* 0x0008 */ unsigned short* pRequestedProtseqs;
} REMOTE_REQUEST_SCM_INFO, *PREMOTE_REQUEST_SCM_INFO; /* size: 0x000c */

