typedef enum _AUTH_TYPE
{
  eAUTH_TYPE_ANONYMOUS = 0,
  eAUTH_TYPE_NTLM = 1,
  eAUTH_TYPE_BASIC = 2,
} AUTH_TYPE, *PAUTH_TYPE;

typedef struct _AUTHENTICATION_INFO
{
  /* 0x0000 */ unsigned long dwSize;
  /* 0x0004 */ enum _AUTH_TYPE atAuthenticationType;
  /* 0x0008 */ const wchar_t* pcwszUser;
  /* 0x0010 */ const wchar_t* pcwszPassword;
} AUTHENTICATION_INFO, *PAUTHENTICATION_INFO; /* size: 0x0018 */

