typedef enum _WWAN_SMS_FORMAT
{
  WwanSmsFormatPdu = 0,
  WwanSmsFormatReserved0 = 1,
  WwanSmsFormatReserved1 = 2,
  WwanSmsFormatReserved2 = 3,
  WwanSmsFormatCdma = 4,
  WwanSmsFormatMax = 5,
} WWAN_SMS_FORMAT, *PWWAN_SMS_FORMAT;

typedef enum _WWAN_SMS_FLAG
{
  WwanSmsFlagAll = 0,
  WwanSmsFlagIndex = 1,
  WwanSmsFlagNew = 2,
  WwanSmsFlagOld = 3,
  WwanSmsFlagSent = 4,
  WwanSmsFlagDraft = 5,
  WwanSmsFlagMax = 6,
} WWAN_SMS_FLAG, *PWWAN_SMS_FLAG;

typedef struct _WWAN_SMS_FILTER
{
  /* 0x0000 */ enum _WWAN_SMS_FLAG Flag;
  /* 0x0004 */ unsigned long MessageIndex;
} WWAN_SMS_FILTER, *PWWAN_SMS_FILTER; /* size: 0x0008 */

typedef struct _WWAN_SMS_READ
{
  /* 0x0000 */ enum _WWAN_SMS_FORMAT SmsFormat;
  /* 0x0004 */ struct _WWAN_SMS_FILTER ReadFilter;
} WWAN_SMS_READ, *PWWAN_SMS_READ; /* size: 0x000c */

