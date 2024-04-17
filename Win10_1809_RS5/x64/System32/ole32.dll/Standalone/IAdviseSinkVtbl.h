struct IAdviseSinkVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0008 */ void* AddRef /* function */;
  /* 0x0010 */ void* Release /* function */;
  /* 0x0018 */ void* OnDataChange /* function */;
  /* 0x0020 */ void* OnViewChange /* function */;
  /* 0x0028 */ void* OnRename /* function */;
  /* 0x0030 */ void* OnSave /* function */;
  /* 0x0038 */ void* OnClose /* function */;
}; /* size: 0x0040 */

