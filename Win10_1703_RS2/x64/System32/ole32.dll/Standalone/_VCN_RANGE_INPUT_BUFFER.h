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

typedef struct _VCN_RANGE_INPUT_BUFFER
{
  /* 0x0000 */ union _LARGE_INTEGER StartingVcn;
  /* 0x0008 */ union _LARGE_INTEGER ClusterCount;
} VCN_RANGE_INPUT_BUFFER, *PVCN_RANGE_INPUT_BUFFER; /* size: 0x0010 */

