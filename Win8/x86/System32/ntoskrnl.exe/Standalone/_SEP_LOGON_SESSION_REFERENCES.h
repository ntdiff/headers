typedef struct _LUID
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ long HighPart;
} LUID, *PLUID; /* size: 0x0008 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

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

typedef struct _SEP_LOWBOX_HANDLES_TABLE
{
  /* 0x0000 */ struct _EX_PUSH_LOCK Lock;
  /* 0x0004 */ struct _RTL_DYNAMIC_HASH_TABLE* HashTable;
} SEP_LOWBOX_HANDLES_TABLE, *PSEP_LOWBOX_HANDLES_TABLE; /* size: 0x0008 */

typedef struct _SEP_LOGON_SESSION_REFERENCES
{
  /* 0x0000 */ struct _SEP_LOGON_SESSION_REFERENCES* Next;
  /* 0x0004 */ struct _LUID LogonId;
  /* 0x000c */ struct _LUID BuddyLogonId;
  /* 0x0014 */ unsigned long ReferenceCount;
  /* 0x0018 */ unsigned long Flags;
  /* 0x001c */ struct _DEVICE_MAP* pDeviceMap;
  /* 0x0020 */ void* Token;
  /* 0x0024 */ struct _UNICODE_STRING AccountName;
  /* 0x002c */ struct _UNICODE_STRING AuthorityName;
  /* 0x0034 */ struct _SEP_LOWBOX_HANDLES_TABLE LowBoxHandlesTable;
} SEP_LOGON_SESSION_REFERENCES, *PSEP_LOGON_SESSION_REFERENCES; /* size: 0x003c */

