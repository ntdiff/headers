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

typedef struct _PERF_OBJECT_TYPE
{
  /* 0x0000 */ unsigned long TotalByteLength;
  /* 0x0004 */ unsigned long DefinitionLength;
  /* 0x0008 */ unsigned long HeaderLength;
  /* 0x000c */ unsigned long ObjectNameTitleIndex;
  /* 0x0010 */ wchar_t* ObjectNameTitle;
  /* 0x0014 */ unsigned long ObjectHelpTitleIndex;
  /* 0x0018 */ wchar_t* ObjectHelpTitle;
  /* 0x001c */ unsigned long DetailLevel;
  /* 0x0020 */ unsigned long NumCounters;
  /* 0x0024 */ long DefaultCounter;
  /* 0x0028 */ long NumInstances;
  /* 0x002c */ unsigned long CodePage;
  /* 0x0030 */ union _LARGE_INTEGER PerfTime;
  /* 0x0038 */ union _LARGE_INTEGER PerfFreq;
} PERF_OBJECT_TYPE, *PPERF_OBJECT_TYPE; /* size: 0x0040 */

