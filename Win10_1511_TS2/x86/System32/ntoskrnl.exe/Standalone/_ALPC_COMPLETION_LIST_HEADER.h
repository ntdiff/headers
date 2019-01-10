typedef struct _ALPC_COMPLETION_LIST_STATE
{
  union
  {
    union
    {
      struct
      {
        struct /* bitfield */
        {
          /* 0x0000 */ unsigned __int64 Head : 24; /* bit position: 0 */
          /* 0x0000 */ unsigned __int64 Tail : 24; /* bit position: 24 */
          /* 0x0000 */ unsigned __int64 ActiveThreadCount : 16; /* bit position: 48 */
        }; /* bitfield */
      } /* size: 0x0008 */ s1;
      /* 0x0000 */ __int64 Value;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u1;
} ALPC_COMPLETION_LIST_STATE, *PALPC_COMPLETION_LIST_STATE; /* size: 0x0008 */

typedef struct _RTL_SRWLOCK
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
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0004 */

typedef struct _ALPC_COMPLETION_LIST_HEADER
{
  /* 0x0000 */ unsigned __int64 StartMagic;
  /* 0x0008 */ unsigned long TotalSize;
  /* 0x000c */ unsigned long ListOffset;
  /* 0x0010 */ unsigned long ListSize;
  /* 0x0014 */ unsigned long BitmapOffset;
  /* 0x0018 */ unsigned long BitmapSize;
  /* 0x001c */ unsigned long DataOffset;
  /* 0x0020 */ unsigned long DataSize;
  /* 0x0024 */ unsigned long AttributeFlags;
  /* 0x0028 */ unsigned long AttributeSize;
  /* 0x0040 */ volatile struct _ALPC_COMPLETION_LIST_STATE State;
  /* 0x0048 */ volatile unsigned long LastMessageId;
  /* 0x004c */ volatile unsigned long LastCallbackId;
  /* 0x0080 */ volatile unsigned long PostCount;
  /* 0x00c0 */ volatile unsigned long ReturnCount;
  /* 0x0100 */ volatile unsigned long LogSequenceNumber;
  /* 0x0140 */ struct _RTL_SRWLOCK UserLock;
  /* 0x0148 */ unsigned __int64 EndMagic;
  /* 0x0150 */ long __PADDING__[12];
} ALPC_COMPLETION_LIST_HEADER, *PALPC_COMPLETION_LIST_HEADER; /* size: 0x0180 */

