typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Shared : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0004 */

typedef struct _HVIEW_MAP_PIN_LOG_ENTRY
{
  /* 0x0000 */ unsigned long ViewOffset;
  /* 0x0004 */ unsigned char Pinned;
  /* 0x0008 */ unsigned __int64 PinMask;
  /* 0x0010 */ struct _KTHREAD* Thread;
  /* 0x0014 */ void* Stack[6];
  /* 0x002c */ long __PADDING__[1];
} HVIEW_MAP_PIN_LOG_ENTRY, *PHVIEW_MAP_PIN_LOG_ENTRY; /* size: 0x0030 */

typedef struct _HVIEW_MAP_PIN_LOG
{
  /* 0x0000 */ unsigned long Next;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ struct _HVIEW_MAP_PIN_LOG_ENTRY Entries[16];
} HVIEW_MAP_PIN_LOG, *PHVIEW_MAP_PIN_LOG; /* size: 0x0308 */

typedef struct _HVIEW_MAP
{
  /* 0x0000 */ unsigned long MappedLength;
  /* 0x0004 */ struct _EX_PUSH_LOCK Lock;
  /* 0x0008 */ struct _FILE_OBJECT* FileObject;
  /* 0x000c */ struct _HVIEW_MAP_DIRECTORY* Directory;
  /* 0x0010 */ unsigned long PagesCharged;
  /* 0x0018 */ struct _HVIEW_MAP_PIN_LOG PinLog;
} HVIEW_MAP, *PHVIEW_MAP; /* size: 0x0320 */

