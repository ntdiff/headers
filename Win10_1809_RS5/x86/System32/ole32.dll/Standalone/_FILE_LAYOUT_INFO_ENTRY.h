typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef enum _STORAGE_RESERVE_ID
{
  StorageReserveIdNone = 0,
  StorageReserveIdHard = 1,
  StorageReserveIdSoft = 2,
  StorageReserveIdMax = 3,
} STORAGE_RESERVE_ID, *PSTORAGE_RESERVE_ID;

typedef struct _FILE_LAYOUT_INFO_ENTRY
{
  struct
  {
    /* 0x0000 */ union _LARGE_INTEGER CreationTime;
    /* 0x0008 */ union _LARGE_INTEGER LastAccessTime;
    /* 0x0010 */ union _LARGE_INTEGER LastWriteTime;
    /* 0x0018 */ union _LARGE_INTEGER ChangeTime;
    /* 0x0020 */ unsigned long FileAttributes;
    /* 0x0024 */ long __PADDING__[1];
  } /* size: 0x0028 */ BasicInformation;
  /* 0x0028 */ unsigned long OwnerId;
  /* 0x002c */ unsigned long SecurityId;
  /* 0x0030 */ __int64 Usn;
  /* 0x0038 */ enum _STORAGE_RESERVE_ID StorageReserveId;
  /* 0x003c */ long __PADDING__[1];
} FILE_LAYOUT_INFO_ENTRY, *PFILE_LAYOUT_INFO_ENTRY; /* size: 0x0040 */

