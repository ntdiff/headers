typedef struct _TOKEN_BNO_ISOLATION_INFORMATION
{
  /* 0x0000 */ wchar_t* IsolationPrefix;
  /* 0x0008 */ unsigned char IsolationEnabled;
  /* 0x0009 */ char __PADDING__[7];
} TOKEN_BNO_ISOLATION_INFORMATION, *PTOKEN_BNO_ISOLATION_INFORMATION; /* size: 0x0010 */

