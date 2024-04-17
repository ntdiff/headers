struct IStreamVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0004 */ void* AddRef /* function */;
  /* 0x0008 */ void* Release /* function */;
  /* 0x000c */ void* Read /* function */;
  /* 0x0010 */ void* Write /* function */;
  /* 0x0014 */ void* Seek /* function */;
  /* 0x0018 */ void* SetSize /* function */;
  /* 0x001c */ void* CopyTo /* function */;
  /* 0x0020 */ void* Commit /* function */;
  /* 0x0024 */ void* Revert /* function */;
  /* 0x0028 */ void* LockRegion /* function */;
  /* 0x002c */ void* UnlockRegion /* function */;
  /* 0x0030 */ void* Stat /* function */;
  /* 0x0034 */ void* Clone /* function */;
}; /* size: 0x0038 */

