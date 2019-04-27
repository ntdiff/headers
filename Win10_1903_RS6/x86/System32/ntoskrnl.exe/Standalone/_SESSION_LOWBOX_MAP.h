typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

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

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0004 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0008 */

typedef struct _SEP_LOWBOX_NUMBER_MAPPING
{
  /* 0x0000 */ struct _EX_PUSH_LOCK Lock;
  /* 0x0004 */ struct _RTL_BITMAP Bitmap;
  /* 0x000c */ struct _RTL_DYNAMIC_HASH_TABLE* HashTable;
  /* 0x0010 */ unsigned char Active;
  /* 0x0011 */ char __PADDING__[3];
} SEP_LOWBOX_NUMBER_MAPPING, *PSEP_LOWBOX_NUMBER_MAPPING; /* size: 0x0014 */

typedef struct _SESSION_LOWBOX_MAP
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0008 */ unsigned long SessionId;
  /* 0x000c */ struct _SEP_LOWBOX_NUMBER_MAPPING LowboxMap;
} SESSION_LOWBOX_MAP, *PSESSION_LOWBOX_MAP; /* size: 0x0020 */

