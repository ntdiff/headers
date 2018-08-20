typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef enum _MM_PAGE_ACCESS_TYPE
{
  MmPteAccessType = 0,
  MmCcReadAheadType = 1,
  MmPfnRepurposeType = 2,
  MmMaximumPageAccessType = 3,
} MM_PAGE_ACCESS_TYPE, *PMM_PAGE_ACCESS_TYPE;

typedef struct _MM_PAGE_ACCESS_INFO_HEADER
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY Link;
  /* 0x0004 */ enum _MM_PAGE_ACCESS_TYPE Type;
  union
  {
    /* 0x0008 */ unsigned long EmptySequenceNumber;
    /* 0x0008 */ unsigned long CurrentFileIndex;
  }; /* size: 0x0004 */
  /* 0x0010 */ unsigned __int64 CreateTime;
  union
  {
    /* 0x0018 */ unsigned __int64 EmptyTime;
    /* 0x0018 */ struct _MM_PAGE_ACCESS_INFO* TempEntry;
  }; /* size: 0x0008 */
  union
  {
    struct
    {
      /* 0x0020 */ struct _MM_PAGE_ACCESS_INFO* PageEntry;
      /* 0x0024 */ unsigned long* FileEntry;
      /* 0x0028 */ unsigned long* FirstFileEntry;
      /* 0x002c */ struct _EPROCESS* Process;
      /* 0x0030 */ unsigned long SessionId;
    }; /* size: 0x0014 */
    struct
    {
      /* 0x0020 */ unsigned long* PageFrameEntry;
      /* 0x0024 */ unsigned long* LastPageFrameEntry;
      /* 0x0028 */ long __PADDING__[4];
    }; /* size: 0x0018 */
  }; /* size: 0x0018 */
} MM_PAGE_ACCESS_INFO_HEADER, *PMM_PAGE_ACCESS_INFO_HEADER; /* size: 0x0038 */

