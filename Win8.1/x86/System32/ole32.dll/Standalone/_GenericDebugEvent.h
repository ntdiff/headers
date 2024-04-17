typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

typedef struct _GenericDebugEvent
{
  /* 0x0000 */ void* AssociatedObject;
  /* 0x0004 */ HRESULT Status;
  /* 0x0008 */ unsigned long ThreadId;
  /* 0x000c */ unsigned long Sequence;
  /* 0x0010 */ struct _FILETIME SystemTime;
  /* 0x0018 */ unsigned __int64 TickCount;
  /* 0x0020 */ void** StackTrace;
  /* 0x0024 */ long __PADDING__[1];
} GenericDebugEvent, *PGenericDebugEvent; /* size: 0x0028 */

