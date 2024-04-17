typedef struct _TOKEN_BNO_ISOLATION_INFORMATION
{
  /* 0x0000 */ wchar_t* IsolationPrefix;
  /* 0x0004 */ unsigned char IsolationEnabled;
  /* 0x0005 */ char __PADDING__[3];
} TOKEN_BNO_ISOLATION_INFORMATION, *PTOKEN_BNO_ISOLATION_INFORMATION; /* size: 0x0008 */

