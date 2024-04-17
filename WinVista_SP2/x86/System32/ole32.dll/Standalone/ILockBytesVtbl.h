struct ILockBytesVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0004 */ void* AddRef /* function */;
  /* 0x0008 */ void* Release /* function */;
  /* 0x000c */ void* ReadAt /* function */;
  /* 0x0010 */ void* WriteAt /* function */;
  /* 0x0014 */ void* Flush /* function */;
  /* 0x0018 */ void* SetSize /* function */;
  /* 0x001c */ void* LockRegion /* function */;
  /* 0x0020 */ void* UnlockRegion /* function */;
  /* 0x0024 */ void* Stat /* function */;
}; /* size: 0x0028 */

