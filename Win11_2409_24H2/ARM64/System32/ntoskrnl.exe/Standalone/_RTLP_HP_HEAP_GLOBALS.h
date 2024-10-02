typedef struct _RTLP_HEAP_COMMIT_LIMIT_DATA
{
  /* 0x0000 */ unsigned __int64 CommitLimitBytes;
  /* 0x0008 */ unsigned __int64 CommitLimitFailureCode;
} RTLP_HEAP_COMMIT_LIMIT_DATA, *PRTLP_HEAP_COMMIT_LIMIT_DATA; /* size: 0x0010 */

typedef struct _RTLP_HP_HEAP_GLOBALS
{
  /* 0x0000 */ unsigned __int64 HeapKey;
  /* 0x0008 */ unsigned __int64 LfhKey;
  /* 0x0010 */ struct _HEAP_FAILURE_INFORMATION* FailureInfo;
  /* 0x0018 */ struct _RTLP_HEAP_COMMIT_LIMIT_DATA CommitLimitData;
  union
  {
    /* 0x0028 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0028 */ unsigned long CpuFeaturesChecked : 1; /* bit position: 0 */
      /* 0x0028 */ unsigned long ErmsSupported : 1; /* bit position: 1 */
      /* 0x0028 */ unsigned long BMI2Supported : 1; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0040 */ unsigned __int64 RandomSeed;
  /* 0x0048 */ long __PADDING__[14];
} RTLP_HP_HEAP_GLOBALS, *PRTLP_HP_HEAP_GLOBALS; /* size: 0x0080 */

