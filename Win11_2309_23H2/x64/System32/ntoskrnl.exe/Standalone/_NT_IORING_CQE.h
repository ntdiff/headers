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

