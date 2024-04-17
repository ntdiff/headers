typedef struct _PRIV_SCM_INFO
{
  /* 0x0000 */ long lThreadID;
  /* 0x0004 */ wchar_t* pwszWinstaDesktop;
  /* 0x0008 */ unsigned __int64 ProcessSignature;
  /* 0x0010 */ wchar_t* pEnvBlock;
  /* 0x0014 */ unsigned long EnvBlockLength;
} PRIV_SCM_INFO, *PPRIV_SCM_INFO; /* size: 0x0018 */

