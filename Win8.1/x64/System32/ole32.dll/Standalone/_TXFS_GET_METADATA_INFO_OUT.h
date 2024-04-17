typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _TXFS_GET_METADATA_INFO_OUT
{
  struct
  {
    /* 0x0000 */ __int64 LowPart;
    /* 0x0008 */ __int64 HighPart;
  } /* size: 0x0010 */ TxfFileId;
  /* 0x0010 */ struct _GUID LockingTransaction;
  /* 0x0020 */ unsigned __int64 LastLsn;
  /* 0x0028 */ unsigned long TransactionState;
  /* 0x002c */ long __PADDING__[1];
} TXFS_GET_METADATA_INFO_OUT, *PTXFS_GET_METADATA_INFO_OUT; /* size: 0x0030 */

