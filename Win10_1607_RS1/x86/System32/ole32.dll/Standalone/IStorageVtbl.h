struct IStorageVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0004 */ void* AddRef /* function */;
  /* 0x0008 */ void* Release /* function */;
  /* 0x000c */ void* CreateStream /* function */;
  /* 0x0010 */ void* OpenStream /* function */;
  /* 0x0014 */ void* CreateStorage /* function */;
  /* 0x0018 */ void* OpenStorage /* function */;
  /* 0x001c */ void* CopyTo /* function */;
  /* 0x0020 */ void* MoveElementTo /* function */;
  /* 0x0024 */ void* Commit /* function */;
  /* 0x0028 */ void* Revert /* function */;
  /* 0x002c */ void* EnumElements /* function */;
  /* 0x0030 */ void* DestroyElement /* function */;
  /* 0x0034 */ void* RenameElement /* function */;
  /* 0x0038 */ void* SetElementTimes /* function */;
  /* 0x003c */ void* SetClass /* function */;
  /* 0x0040 */ void* SetStateBits /* function */;
  /* 0x0044 */ void* Stat /* function */;
}; /* size: 0x0048 */

