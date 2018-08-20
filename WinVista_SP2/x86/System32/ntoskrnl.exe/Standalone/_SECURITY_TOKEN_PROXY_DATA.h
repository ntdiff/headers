typedef enum _PROXY_CLASS
{
  ProxyFull = 0,
  ProxyService = 1,
  ProxyTree = 2,
  ProxyDirectory = 3,
} PROXY_CLASS, *PPROXY_CLASS;

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _SECURITY_TOKEN_PROXY_DATA
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ enum _PROXY_CLASS ProxyClass;
  /* 0x0008 */ struct _UNICODE_STRING PathInfo;
  /* 0x0010 */ unsigned long ContainerMask;
  /* 0x0014 */ unsigned long ObjectMask;
} SECURITY_TOKEN_PROXY_DATA, *PSECURITY_TOKEN_PROXY_DATA; /* size: 0x0018 */

