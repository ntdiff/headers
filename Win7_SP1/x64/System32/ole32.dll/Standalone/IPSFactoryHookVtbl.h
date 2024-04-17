struct IPSFactoryHookVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0008 */ void* AddRef /* function */;
  /* 0x0010 */ void* Release /* function */;
  /* 0x0018 */ void* CreateProxy /* function */;
  /* 0x0020 */ void* CreateStub /* function */;
  /* 0x0028 */ void* HkGetProxyFileInfo /* function */;
}; /* size: 0x0030 */

