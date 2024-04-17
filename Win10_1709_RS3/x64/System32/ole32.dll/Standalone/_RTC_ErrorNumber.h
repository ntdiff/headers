typedef enum _RTC_ErrorNumber
{
  _RTC_CHKSTK = 0,
  _RTC_CVRT_LOSS_INFO = 1,
  _RTC_CORRUPT_STACK = 2,
  _RTC_UNINIT_LOCAL_USE = 3,
  _RTC_CORRUPTED_ALLOCA = 4,
  _RTC_ILLEGAL = 5,
} RTC_ErrorNumber, *PRTC_ErrorNumber;

