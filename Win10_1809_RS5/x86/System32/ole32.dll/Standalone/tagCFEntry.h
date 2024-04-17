struct tagCFEntry
{
  /* 0x0000 */ const struct _GUID* pclsid;
  /* 0x0004 */ void* pfnCI /* function */;
  /* 0x0008 */ unsigned long dwFlags;
}; /* size: 0x000c */

