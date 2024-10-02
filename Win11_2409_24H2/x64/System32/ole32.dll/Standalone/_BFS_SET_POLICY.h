typedef enum _BFS_ENTRY_TYPE
{
  EntryNotPresent = 0,
  EntryFile = 1,
  EntryDirectory = 2,
} BFS_ENTRY_TYPE, *PBFS_ENTRY_TYPE;

typedef enum _BFS_POLICY
{
  PolicyAsSelf = 0,
  PolicyAsUser = 1,
  PolicyAsUserQueryOnly = 2,
  PolicyAsSelfNoPrompt = 3,
} BFS_POLICY, *PBFS_POLICY;

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _BFS_POLICY_INFORMATION
{
  /* 0x0000 */ enum _BFS_ENTRY_TYPE EntryType;
  /* 0x0004 */ enum _BFS_POLICY Policy;
  /* 0x0008 */ unsigned long InheritFlags;
  /* 0x0010 */ struct _UNICODE_STRING Path;
} BFS_POLICY_INFORMATION, *PBFS_POLICY_INFORMATION; /* size: 0x0020 */

typedef enum _BFS_SET_POLICY_TYPE
{
  AddPolicy = 0,
  ModifyPolicy = 1,
  DeletePolicy = 2,
} BFS_SET_POLICY_TYPE, *PBFS_SET_POLICY_TYPE;

typedef struct _BFS_SET_POLICY
{
  /* 0x0000 */ void* Token;
  /* 0x0008 */ struct _BFS_POLICY_INFORMATION PolicyInformation;
  /* 0x0028 */ enum _BFS_SET_POLICY_TYPE Type;
  /* 0x002c */ long __PADDING__[1];
} BFS_SET_POLICY, *PBFS_SET_POLICY; /* size: 0x0030 */

