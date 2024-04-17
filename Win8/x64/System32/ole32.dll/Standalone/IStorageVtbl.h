struct IStorageVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0008 */ void* AddRef /* function */;
  /* 0x0010 */ void* Release /* function */;
  /* 0x0018 */ void* CreateStream /* function */;
  /* 0x0020 */ void* OpenStream /* function */;
  /* 0x0028 */ void* CreateStorage /* function */;
  /* 0x0030 */ void* OpenStorage /* function */;
  /* 0x0038 */ void* CopyTo /* function */;
  /* 0x0040 */ void* MoveElementTo /* function */;
  /* 0x0048 */ void* Commit /* function */;
  /* 0x0050 */ void* Revert /* function */;
  /* 0x0058 */ void* EnumElements /* function */;
  /* 0x0060 */ void* DestroyElement /* function */;
  /* 0x0068 */ void* RenameElement /* function */;
  /* 0x0070 */ void* SetElementTimes /* function */;
  /* 0x0078 */ void* SetClass /* function */;
  /* 0x0080 */ void* SetStateBits /* function */;
  /* 0x0088 */ void* Stat /* function */;
}; /* size: 0x0090 */

