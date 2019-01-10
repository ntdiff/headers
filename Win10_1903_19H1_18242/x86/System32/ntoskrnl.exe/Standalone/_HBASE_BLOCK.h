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

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _HBASE_BLOCK
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned long Sequence1;
  /* 0x0008 */ unsigned long Sequence2;
  /* 0x000c */ union _LARGE_INTEGER TimeStamp;
  /* 0x0014 */ unsigned long Major;
  /* 0x0018 */ unsigned long Minor;
  /* 0x001c */ unsigned long Type;
  /* 0x0020 */ unsigned long Format;
  /* 0x0024 */ unsigned long RootCell;
  /* 0x0028 */ unsigned long Length;
  /* 0x002c */ unsigned long Cluster;
  /* 0x0030 */ unsigned char FileName[64];
  /* 0x0070 */ struct _GUID RmId;
  /* 0x0080 */ struct _GUID LogId;
  /* 0x0090 */ unsigned long Flags;
  /* 0x0094 */ struct _GUID TmId;
  /* 0x00a4 */ unsigned long GuidSignature;
  /* 0x00a8 */ unsigned __int64 LastReorganizeTime;
  /* 0x00b0 */ unsigned long Reserved1[83];
  /* 0x01fc */ unsigned long CheckSum;
  /* 0x0200 */ unsigned long Reserved2[882];
  /* 0x0fc8 */ struct _GUID ThawTmId;
  /* 0x0fd8 */ struct _GUID ThawRmId;
  /* 0x0fe8 */ struct _GUID ThawLogId;
  /* 0x0ff8 */ unsigned long BootType;
  /* 0x0ffc */ unsigned long BootRecover;
} HBASE_BLOCK, *PHBASE_BLOCK; /* size: 0x1000 */

