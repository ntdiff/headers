typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef enum _SECURITY_IMPERSONATION_LEVEL
{
  SecurityAnonymous = 0,
  SecurityIdentification = 1,
  SecurityImpersonation = 2,
  SecurityDelegation = 3,
} SECURITY_IMPERSONATION_LEVEL, *PSECURITY_IMPERSONATION_LEVEL;

typedef struct _SECURITY_SUBJECT_CONTEXT
{
  /* 0x0000 */ void* ClientToken;
  /* 0x0008 */ enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
  /* 0x0010 */ void* PrimaryToken;
  /* 0x0018 */ void* ProcessAuditId;
} SECURITY_SUBJECT_CONTEXT, *PSECURITY_SUBJECT_CONTEXT; /* size: 0x0020 */

typedef struct _CM_NOTIFY_BLOCK
{
  /* 0x0000 */ struct _LIST_ENTRY HiveList;
  /* 0x0010 */ struct _LIST_ENTRY PostList;
  /* 0x0020 */ struct _CM_KEY_CONTROL_BLOCK* KeyControlBlock;
  /* 0x0028 */ struct _CM_KEY_BODY* KeyBody;
  struct /* bitfield */
  {
    /* 0x0030 */ unsigned long Filter : 30; /* bit position: 0 */
    /* 0x0030 */ unsigned long WatchTree : 1; /* bit position: 30 */
    /* 0x0030 */ unsigned long NotifyPending : 1; /* bit position: 31 */
  }; /* bitfield */
  /* 0x0038 */ struct _SECURITY_SUBJECT_CONTEXT SubjectContext;
} CM_NOTIFY_BLOCK, *PCM_NOTIFY_BLOCK; /* size: 0x0058 */

