struct IRunningObjectTableVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0008 */ void* AddRef /* function */;
  /* 0x0010 */ void* Release /* function */;
  /* 0x0018 */ void* Register /* function */;
  /* 0x0020 */ void* Revoke /* function */;
  /* 0x0028 */ void* IsRunning /* function */;
  /* 0x0030 */ void* GetObjectW /* function */;
  /* 0x0038 */ void* NoteChangeTime /* function */;
  /* 0x0040 */ void* GetTimeOfLastChange /* function */;
  /* 0x0048 */ void* EnumRunning /* function */;
}; /* size: 0x0050 */

