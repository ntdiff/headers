typedef struct _IO_STATUS_BLOCK
{
  union
  {
    /* 0x0000 */ long Status;
    /* 0x0000 */ void* Pointer;
  }; /* size: 0x0008 */
  /* 0x0008 */ unsigned __int64 Information;
} IO_STATUS_BLOCK, *PIO_STATUS_BLOCK; /* size: 0x0010 */

typedef struct _NT_IORING_CQE
{
  union
  {
    /* 0x0000 */ unsigned __int64 UserData;
    /* 0x0000 */ unsigned __int64 PaddingUserDataForWow;
  }; /* size: 0x0008 */
  /* 0x0008 */ struct _IO_STATUS_BLOCK IoStatus;
} NT_IORING_CQE, *PNT_IORING_CQE; /* size: 0x0018 */

typedef struct _NT_IORING_COMPLETION_QUEUE
{
  /* 0x0000 */ unsigned int Head;
  /* 0x0004 */ unsigned int Tail;
  /* 0x0008 */ struct _NT_IORING_CQE Entries[1];
} NT_IORING_COMPLETION_QUEUE, *PNT_IORING_COMPLETION_QUEUE; /* size: 0x0020 */

