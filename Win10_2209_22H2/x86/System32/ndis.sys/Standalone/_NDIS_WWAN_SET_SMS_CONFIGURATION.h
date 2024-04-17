typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

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

typedef struct _NDIS_WWAN_SET_SMS_CONFIGURATION
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ struct _WWAN_SET_SMS_CONFIGURATION SetSmsConfiguration;
} NDIS_WWAN_SET_SMS_CONFIGURATION, *PNDIS_WWAN_SET_SMS_CONFIGURATION; /* size: 0x0018 */

