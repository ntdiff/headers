typedef union _MI_IMAGE_INFO_REF
{
  union
  {
    /* 0x0000 */ long LongValue;
    /* 0x0000 */ unsigned __int64 FullValue;
    /* 0x0000 */ struct _MI_IMAGE_ADDITIONAL_INFO* PointerValue;
    /* 0x0000 */ unsigned __int64 AllFlags : 3; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 DebugRecordsPresent : 1; /* bit position: 0 */
  }; /* size: 0x0008 */
} MI_IMAGE_INFO_REF, *PMI_IMAGE_INFO_REF; /* size: 0x0008 */

