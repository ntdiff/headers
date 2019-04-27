typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0008 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0010 */

typedef struct _JOB_RATE_CONTROL_HEADER
{
  /* 0x0000 */ void* RateControlQuotaReference;
  /* 0x0008 */ struct _RTL_BITMAP OverQuotaHistory;
  /* 0x0018 */ unsigned char* BitMapBuffer;
  /* 0x0020 */ unsigned __int64 BitMapBufferSize;
} JOB_RATE_CONTROL_HEADER, *PJOB_RATE_CONTROL_HEADER; /* size: 0x0028 */

