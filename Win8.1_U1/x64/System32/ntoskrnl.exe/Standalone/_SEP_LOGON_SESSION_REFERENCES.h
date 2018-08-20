typedef struct _LUID
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ long HighPart;
} LUID, *PLUID; /* size: 0x0008 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

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

typedef struct _SEP_LOWBOX_HANDLES_TABLE
{
  /* 0x0000 */ struct _EX_PUSH_LOCK Lock;
  /* 0x0008 */ struct _RTL_DYNAMIC_HASH_TABLE* HashTable;
} SEP_LOWBOX_HANDLES_TABLE, *PSEP_LOWBOX_HANDLES_TABLE; /* size: 0x0010 */

typedef struct _SEP_LOGON_SESSION_REFERENCES
{
  /* 0x0000 */ struct _SEP_LOGON_SESSION_REFERENCES* Next;
  /* 0x0008 */ struct _LUID LogonId;
  /* 0x0010 */ struct _LUID BuddyLogonId;
  /* 0x0018 */ __int64 ReferenceCount;
  /* 0x0020 */ unsigned long Flags;
  /* 0x0028 */ struct _DEVICE_MAP* pDeviceMap;
  /* 0x0030 */ void* Token;
  /* 0x0038 */ struct _UNICODE_STRING AccountName;
  /* 0x0048 */ struct _UNICODE_STRING AuthorityName;
  /* 0x0058 */ struct _SEP_LOWBOX_HANDLES_TABLE LowBoxHandlesTable;
  /* 0x0068 */ struct _EX_PUSH_LOCK SharedDataLock;
  /* 0x0070 */ struct _AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION* SharedClaimAttributes;
  /* 0x0078 */ struct _SEP_SID_VALUES_BLOCK* SharedSidValues;
} SEP_LOGON_SESSION_REFERENCES, *PSEP_LOGON_SESSION_REFERENCES; /* size: 0x0080 */

