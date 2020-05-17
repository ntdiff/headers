typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0008 */

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

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _EX_RUNDOWN_REF
{
  union
  {
    /* 0x0000 */ unsigned __int64 Count;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_RUNDOWN_REF, *PEX_RUNDOWN_REF; /* size: 0x0008 */

typedef struct _MI_ENCLAVE_STATE
{
  /* 0x0000 */ struct _RTL_AVL_TREE EnclaveRegions;
  /* 0x0008 */ void* EnclaveMetadataPage;
  /* 0x0010 */ struct _RTL_BITMAP* EnclaveMetadataBitMap;
  /* 0x0018 */ struct _EX_PUSH_LOCK EnclaveMetadataEntryLock;
  /* 0x0020 */ volatile long EnclaveMetadataPageLock;
  /* 0x0028 */ struct _LIST_ENTRY EnclaveList;
  /* 0x0038 */ struct _EX_PUSH_LOCK EnclaveListLock;
  /* 0x0040 */ struct _EX_RUNDOWN_REF ShutdownRundown;
} MI_ENCLAVE_STATE, *PMI_ENCLAVE_STATE; /* size: 0x0048 */

