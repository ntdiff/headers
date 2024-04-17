struct IRunningObjectTableVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0004 */ void* AddRef /* function */;
  /* 0x0008 */ void* Release /* function */;
  /* 0x000c */ void* Register /* function */;
  /* 0x0010 */ void* Revoke /* function */;
  /* 0x0014 */ void* IsRunning /* function */;
  /* 0x0018 */ void* GetObjectW /* function */;
  /* 0x001c */ void* NoteChangeTime /* function */;
  /* 0x0020 */ void* GetTimeOfLastChange /* function */;
  /* 0x0024 */ void* EnumRunning /* function */;
}; /* size: 0x0028 */

