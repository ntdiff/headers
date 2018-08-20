typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0008 */

typedef struct _HVIEW_MAP_PIN_LOG_ENTRY
{
  /* 0x0000 */ unsigned long ViewOffset;
  /* 0x0004 */ unsigned char Pinned;
  /* 0x0008 */ unsigned __int64 PinMask;
  /* 0x0010 */ struct _KTHREAD* Thread;
  /* 0x0018 */ void* Stack[6];
} HVIEW_MAP_PIN_LOG_ENTRY, *PHVIEW_MAP_PIN_LOG_ENTRY; /* size: 0x0048 */

typedef struct _HVIEW_MAP_PIN_LOG
{
  /* 0x0000 */ unsigned long Next;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ struct _HVIEW_MAP_PIN_LOG_ENTRY Entries[16];
} HVIEW_MAP_PIN_LOG, *PHVIEW_MAP_PIN_LOG; /* size: 0x0488 */

typedef struct _HVIEW_MAP
{
  /* 0x0000 */ unsigned long MappedLength;
  /* 0x0008 */ struct _EX_PUSH_LOCK Lock;
  /* 0x0010 */ struct _FILE_OBJECT* FileObject;
  /* 0x0018 */ struct _HVIEW_MAP_DIRECTORY* Directory;
  /* 0x0020 */ unsigned long PagesCharged;
  /* 0x0028 */ struct _HVIEW_MAP_PIN_LOG PinLog;
} HVIEW_MAP, *PHVIEW_MAP; /* size: 0x04b0 */

