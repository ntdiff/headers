typedef enum _PROXY_ACCESS
{
  PROXY_ACCESS_PRECONFIG = 0,
  PROXY_ACCESS_DIRECT = 1,
  PROXY_ACCESS_PROXY = 2,
} PROXY_ACCESS, *PPROXY_ACCESS;

typedef struct _PROXY_INFO
{
  /* 0x0000 */ unsigned long dwSize;
  /* 0x0008 */ const wchar_t* pcwszUserAgent;
  /* 0x0010 */ enum _PROXY_ACCESS paUseProxy;
  /* 0x0014 */ int fLocalBypass;
  /* 0x0018 */ unsigned long dwPortNumber;
  /* 0x0020 */ const wchar_t* pcwszProxyName;
  /* 0x0028 */ const wchar_t* pcwszBypassList;
} PROXY_INFO, *PPROXY_INFO; /* size: 0x0030 */

