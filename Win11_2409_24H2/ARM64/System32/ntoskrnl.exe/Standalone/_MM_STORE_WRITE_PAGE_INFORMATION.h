typedef union _MM_STORE_KEY
{
  /* 0x0000 */ unsigned long EntireKey;
} MM_STORE_KEY, *PMM_STORE_KEY; /* size: 0x0004 */

typedef union _MM_STORE_SUB_KEY_DESCRIPTOR
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long KeyType : 2; /* bit position: 0 */
        /* 0x0000 */ unsigned long Spare : 10; /* bit position: 2 */
      }; /* bitfield */
    } /* size: 0x0004 */ Flags;
    /* 0x0000 */ void* VirtualAddress;
  }; /* size: 0x0008 */
} MM_STORE_SUB_KEY_DESCRIPTOR, *PMM_STORE_SUB_KEY_DESCRIPTOR; /* size: 0x0008 */

typedef struct _MM_STORE_KEY_DESCRIPTOR
{
  /* 0x0000 */ unsigned __int64 ContainerKey;
  /* 0x0008 */ union _MM_STORE_SUB_KEY_DESCRIPTOR SubKey;
} MM_STORE_KEY_DESCRIPTOR, *PMM_STORE_KEY_DESCRIPTOR; /* size: 0x0010 */

typedef struct _MM_STORE_WRITE_PAGE_INFORMATION
{
  /* 0x0000 */ long IssueStatus;
  /* 0x0004 */ union _MM_STORE_KEY StoreKey;
  /* 0x0008 */ struct _MM_STORE_KEY_DESCRIPTOR StoreKeyDescriptor;
  /* 0x0018 */ unsigned long WritePageIndex;
  /* 0x0020 */ void* OpaqueStoreContext;
  /* 0x0028 */ struct _MDL* Mdl;
  /* 0x0030 */ void* TransferContext;
  /* 0x0038 */ struct _IO_STATUS_BLOCK* IoStatus;
} MM_STORE_WRITE_PAGE_INFORMATION, *PMM_STORE_WRITE_PAGE_INFORMATION; /* size: 0x0040 */

