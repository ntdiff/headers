struct AsyncIAdviseSinkVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0004 */ void* AddRef /* function */;
  /* 0x0008 */ void* Release /* function */;
  /* 0x000c */ void* Begin_OnDataChange /* function */;
  /* 0x0010 */ void* Finish_OnDataChange /* function */;
  /* 0x0014 */ void* Begin_OnViewChange /* function */;
  /* 0x0018 */ void* Finish_OnViewChange /* function */;
  /* 0x001c */ void* Begin_OnRename /* function */;
  /* 0x0020 */ void* Finish_OnRename /* function */;
  /* 0x0024 */ void* Begin_OnSave /* function */;
  /* 0x0028 */ void* Finish_OnSave /* function */;
  /* 0x002c */ void* Begin_OnClose /* function */;
  /* 0x0030 */ void* Finish_OnClose /* function */;
}; /* size: 0x0034 */

