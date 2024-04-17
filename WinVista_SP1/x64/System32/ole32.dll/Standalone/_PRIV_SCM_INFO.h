typedef struct _PRIV_SCM_INFO
{
  /* 0x0000 */ long lThreadID;
  /* 0x0008 */ wchar_t* pwszWinstaDesktop;
  /* 0x0010 */ unsigned __int64 ProcessSignature;
  /* 0x0018 */ wchar_t* pEnvBlock;
  /* 0x0020 */ unsigned long EnvBlockLength;
  /* 0x0024 */ long __PADDING__[1];
} PRIV_SCM_INFO, *PPRIV_SCM_INFO; /* size: 0x0028 */

