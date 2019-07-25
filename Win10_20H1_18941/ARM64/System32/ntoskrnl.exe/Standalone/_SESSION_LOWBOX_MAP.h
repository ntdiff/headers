typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

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

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0008 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0010 */

typedef struct _SEP_LOWBOX_NUMBER_MAPPING
{
  /* 0x0000 */ struct _EX_PUSH_LOCK Lock;
  /* 0x0008 */ struct _RTL_BITMAP Bitmap;
  /* 0x0018 */ struct _RTL_DYNAMIC_HASH_TABLE* HashTable;
  /* 0x0020 */ unsigned char Active;
  /* 0x0021 */ char __PADDING__[7];
} SEP_LOWBOX_NUMBER_MAPPING, *PSEP_LOWBOX_NUMBER_MAPPING; /* size: 0x0028 */

typedef struct _SESSION_LOWBOX_MAP
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ unsigned long SessionId;
  /* 0x0018 */ struct _SEP_LOWBOX_NUMBER_MAPPING LowboxMap;
} SESSION_LOWBOX_MAP, *PSESSION_LOWBOX_MAP; /* size: 0x0040 */

