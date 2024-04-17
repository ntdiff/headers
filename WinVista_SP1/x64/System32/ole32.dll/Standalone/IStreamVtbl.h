struct IStreamVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0008 */ void* AddRef /* function */;
  /* 0x0010 */ void* Release /* function */;
  /* 0x0018 */ void* Read /* function */;
  /* 0x0020 */ void* Write /* function */;
  /* 0x0028 */ void* Seek /* function */;
  /* 0x0030 */ void* SetSize /* function */;
  /* 0x0038 */ void* CopyTo /* function */;
  /* 0x0040 */ void* Commit /* function */;
  /* 0x0048 */ void* Revert /* function */;
  /* 0x0050 */ void* LockRegion /* function */;
  /* 0x0058 */ void* UnlockRegion /* function */;
  /* 0x0060 */ void* Stat /* function */;
  /* 0x0068 */ void* Clone /* function */;
}; /* size: 0x0070 */

