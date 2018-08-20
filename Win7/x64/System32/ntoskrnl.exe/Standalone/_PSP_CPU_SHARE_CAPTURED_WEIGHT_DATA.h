typedef union _PSP_CPU_SHARE_CAPTURED_WEIGHT_DATA
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long CapturedCpuShareWeight;
      /* 0x0004 */ unsigned long CapturedTotalWeight;
    }; /* size: 0x0008 */
    /* 0x0000 */ __int64 CombinedData;
  }; /* size: 0x0008 */
} PSP_CPU_SHARE_CAPTURED_WEIGHT_DATA, *PPSP_CPU_SHARE_CAPTURED_WEIGHT_DATA; /* size: 0x0008 */

