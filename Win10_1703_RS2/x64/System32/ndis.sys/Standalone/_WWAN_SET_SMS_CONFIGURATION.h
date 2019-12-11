typedef enum _WWAN_SMS_FORMAT
{
  WwanSmsFormatPdu = 0,
  WwanSmsFormatReserved0 = 1,
  WwanSmsFormatReserved1 = 2,
  WwanSmsFormatReserved2 = 3,
  WwanSmsFormatCdma = 4,
  WwanSmsFormatMax = 5,
} WWAN_SMS_FORMAT, *PWWAN_SMS_FORMAT;

typedef struct _WWAN_SET_SMS_CONFIGURATION
{
  /* 0x0000 */ char ScAddress[16];
  /* 0x0010 */ enum _WWAN_SMS_FORMAT SmsFormat;
} WWAN_SET_SMS_CONFIGURATION, *PWWAN_SET_SMS_CONFIGURATION; /* size: 0x0014 */

