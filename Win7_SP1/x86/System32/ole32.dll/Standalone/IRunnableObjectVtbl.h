struct IRunnableObjectVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0004 */ void* AddRef /* function */;
  /* 0x0008 */ void* Release /* function */;
  /* 0x000c */ void* GetRunningClass /* function */;
  /* 0x0010 */ void* Run /* function */;
  /* 0x0014 */ void* IsRunning /* function */;
  /* 0x0018 */ void* LockRunning /* function */;
  /* 0x001c */ void* SetContainedObject /* function */;
}; /* size: 0x0020 */

