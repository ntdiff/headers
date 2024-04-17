typedef enum _FS_BPIO_OPERATIONS
{
  FS_BPIO_OP_ENABLE = 1,
  FS_BPIO_OP_DISABLE = 2,
  FS_BPIO_OP_QUERY = 3,
  FS_BPIO_OP_VOLUME_STACK_PAUSE = 4,
  FS_BPIO_OP_VOLUME_STACK_RESUME = 5,
  FS_BPIO_OP_STREAM_PAUSE = 6,
  FS_BPIO_OP_STREAM_RESUME = 7,
  FS_BPIO_OP_GET_INFO = 8,
  FS_BPIO_OP_MAX_OPERATION = 9,
} FS_BPIO_OPERATIONS, *PFS_BPIO_OPERATIONS;

typedef enum _FS_BPIO_OUTFLAGS
{
  FSBPIO_OUTFL_None = 0,
  FSBPIO_OUTFL_VOLUME_STACK_BYPASS_PAUSED = 1,
  FSBPIO_OUTFL_STREAM_BYPASS_PAUSED = 2,
  FSBPIO_OUTFL_FILTER_ATTACH_BLOCKED = 4,
  FSBPIO_OUTFL_COMPATIBLE_STORAGE_DRIVER = 8,
} FS_BPIO_OUTFLAGS, *PFS_BPIO_OUTFLAGS;

typedef struct _FS_BPIO_RESULTS
{
  /* 0x0000 */ long OpStatus;
  /* 0x0004 */ unsigned short FailingDriverNameLen;
  /* 0x0006 */ wchar_t FailingDriverName[32];
  /* 0x0046 */ unsigned short FailureReasonLen;
  /* 0x0048 */ wchar_t FailureReason[128];
} FS_BPIO_RESULTS, *PFS_BPIO_RESULTS; /* size: 0x0148 */

typedef struct _FS_BPIO_INFO
{
  /* 0x0000 */ unsigned long ActiveBypassIoCount;
  /* 0x0004 */ unsigned short StorageDriverNameLen;
  /* 0x0006 */ wchar_t StorageDriverName[32];
  /* 0x0046 */ char __PADDING__[2];
} FS_BPIO_INFO, *PFS_BPIO_INFO; /* size: 0x0048 */

typedef struct _FS_BPIO_OUTPUT
{
  /* 0x0000 */ enum _FS_BPIO_OPERATIONS Operation;
  /* 0x0004 */ enum _FS_BPIO_OUTFLAGS OutFlags;
  /* 0x0008 */ unsigned __int64 Reserved1;
  /* 0x0010 */ unsigned __int64 Reserved2;
  union
  {
    /* 0x0018 */ struct _FS_BPIO_RESULTS Enable;
    /* 0x0018 */ struct _FS_BPIO_RESULTS Query;
    /* 0x0018 */ struct _FS_BPIO_RESULTS VolumeStackResume;
    /* 0x0018 */ struct _FS_BPIO_RESULTS StreamResume;
    struct
    {
      /* 0x0018 */ struct _FS_BPIO_INFO GetInfo;
      /* 0x0060 */ long __PADDING__[64];
    }; /* size: 0x0148 */
  }; /* size: 0x0148 */
} FS_BPIO_OUTPUT, *PFS_BPIO_OUTPUT; /* size: 0x0160 */

