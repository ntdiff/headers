typedef struct _ARBITER_CONFLICT_INFO
{
  /* 0x0000 */ struct _DEVICE_OBJECT* OwningObject;
  /* 0x0008 */ unsigned __int64 Start;
  /* 0x0010 */ unsigned __int64 End;
} ARBITER_CONFLICT_INFO, *PARBITER_CONFLICT_INFO; /* size: 0x0018 */

