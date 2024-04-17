struct ILockBytesVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0008 */ void* AddRef /* function */;
  /* 0x0010 */ void* Release /* function */;
  /* 0x0018 */ void* ReadAt /* function */;
  /* 0x0020 */ void* WriteAt /* function */;
  /* 0x0028 */ void* Flush /* function */;
  /* 0x0030 */ void* SetSize /* function */;
  /* 0x0038 */ void* LockRegion /* function */;
  /* 0x0040 */ void* UnlockRegion /* function */;
  /* 0x0048 */ void* Stat /* function */;
}; /* size: 0x0050 */

