struct DICTENTRYHEADER
{
  /* 0x0000 */ unsigned long dwPropID;
  /* 0x0004 */ unsigned long cb;
}; /* size: 0x0008 */

struct DICTENTRY
{
  /* 0x0000 */ struct DICTENTRYHEADER hdr;
  /* 0x0008 */ wchar_t sz[256];
}; /* size: 0x0208 */

