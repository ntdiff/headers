struct tagCFEntry
{
  /* 0x0000 */ const struct _GUID* pclsid;
  /* 0x0008 */ void* pfnCI /* function */;
  /* 0x0010 */ unsigned long dwFlags;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

