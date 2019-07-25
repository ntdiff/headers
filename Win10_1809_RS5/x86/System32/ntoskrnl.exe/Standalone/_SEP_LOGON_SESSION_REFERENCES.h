typedef struct _LUID
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ long HighPart;
} LUID, *PLUID; /* size: 0x0008 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
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

typedef struct _SEP_CACHED_HANDLES_TABLE
{
  /* 0x0000 */ struct _EX_PUSH_LOCK Lock;
  /* 0x0004 */ struct _RTL_DYNAMIC_HASH_TABLE* HashTable;
} SEP_CACHED_HANDLES_TABLE, *PSEP_CACHED_HANDLES_TABLE; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _EX_RUNDOWN_REF
{
  union
  {
    /* 0x0000 */ unsigned long Count;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_RUNDOWN_REF, *PEX_RUNDOWN_REF; /* size: 0x0004 */

typedef struct _OB_HANDLE_REVOCATION_BLOCK
{
  /* 0x0000 */ struct _LIST_ENTRY RevocationInfos;
  /* 0x0008 */ struct _EX_PUSH_LOCK Lock;
  /* 0x000c */ struct _EX_RUNDOWN_REF Rundown;
} OB_HANDLE_REVOCATION_BLOCK, *POB_HANDLE_REVOCATION_BLOCK; /* size: 0x0010 */

typedef struct _SEP_LOGON_SESSION_REFERENCES
{
  /* 0x0000 */ struct _SEP_LOGON_SESSION_REFERENCES* Next;
  /* 0x0004 */ struct _LUID LogonId;
  /* 0x000c */ struct _LUID BuddyLogonId;
  /* 0x0014 */ long ReferenceCount;
  /* 0x0018 */ unsigned long Flags;
  /* 0x001c */ struct _DEVICE_MAP* pDeviceMap;
  /* 0x0020 */ void* Token;
  /* 0x0024 */ struct _UNICODE_STRING AccountName;
  /* 0x002c */ struct _UNICODE_STRING AuthorityName;
  /* 0x0034 */ struct _SEP_CACHED_HANDLES_TABLE CachedHandlesTable;
  /* 0x003c */ struct _EX_PUSH_LOCK SharedDataLock;
  /* 0x0040 */ struct _AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION* SharedClaimAttributes;
  /* 0x0044 */ struct _SEP_SID_VALUES_BLOCK* SharedSidValues;
  /* 0x0048 */ struct _OB_HANDLE_REVOCATION_BLOCK RevocationBlock;
  /* 0x0058 */ struct _EJOB* ServerSilo;
  /* 0x005c */ struct _LUID SiblingAuthId;
  /* 0x0064 */ struct _LIST_ENTRY TokenList;
} SEP_LOGON_SESSION_REFERENCES, *PSEP_LOGON_SESSION_REFERENCES; /* size: 0x006c */

