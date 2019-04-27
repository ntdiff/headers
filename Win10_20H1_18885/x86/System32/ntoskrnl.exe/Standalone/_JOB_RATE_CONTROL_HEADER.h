typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0004 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0008 */

typedef struct _JOB_RATE_CONTROL_HEADER
{
  /* 0x0000 */ void* RateControlQuotaReference;
  /* 0x0004 */ struct _RTL_BITMAP OverQuotaHistory;
  /* 0x000c */ unsigned char* BitMapBuffer;
  /* 0x0010 */ unsigned long BitMapBufferSize;
} JOB_RATE_CONTROL_HEADER, *PJOB_RATE_CONTROL_HEADER; /* size: 0x0014 */

