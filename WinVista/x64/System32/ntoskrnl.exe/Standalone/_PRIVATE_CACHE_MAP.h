typedef struct _PRIVATE_CACHE_MAP_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long DontUse : 16; /* bit position: 0 */
    /* 0x0000 */ unsigned long ReadAheadActive : 1; /* bit position: 16 */
    /* 0x0000 */ unsigned long ReadAheadEnabled : 1; /* bit position: 17 */
    /* 0x0000 */ unsigned long PagePriority : 3; /* bit position: 18 */
    /* 0x0000 */ unsigned long Available : 11; /* bit position: 21 */
  }; /* bitfield */
} PRIVATE_CACHE_MAP_FLAGS, *PPRIVATE_CACHE_MAP_FLAGS; /* size: 0x0004 */

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

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _PRIVATE_CACHE_MAP
{
  union
  {
    /* 0x0000 */ short NodeTypeCode;
    /* 0x0000 */ struct _PRIVATE_CACHE_MAP_FLAGS Flags;
    /* 0x0000 */ unsigned long UlongFlags;
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned long ReadAheadMask;
  /* 0x0008 */ struct _FILE_OBJECT* FileObject;
  /* 0x0010 */ union _LARGE_INTEGER FileOffset1;
  /* 0x0018 */ union _LARGE_INTEGER BeyondLastByte1;
  /* 0x0020 */ union _LARGE_INTEGER FileOffset2;
  /* 0x0028 */ union _LARGE_INTEGER BeyondLastByte2;
  /* 0x0030 */ union _LARGE_INTEGER ReadAheadOffset[2];
  /* 0x0040 */ unsigned long ReadAheadLength[2];
  /* 0x0048 */ unsigned __int64 ReadAheadSpinLock;
  /* 0x0050 */ struct _LIST_ENTRY PrivateLinks;
} PRIVATE_CACHE_MAP, *PPRIVATE_CACHE_MAP; /* size: 0x0060 */

