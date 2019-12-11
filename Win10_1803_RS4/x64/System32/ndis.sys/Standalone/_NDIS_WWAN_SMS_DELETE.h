typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

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

typedef struct _NDIS_WWAN_SMS_DELETE
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ struct _WWAN_SMS_FILTER SmsFilter;
} NDIS_WWAN_SMS_DELETE, *PNDIS_WWAN_SMS_DELETE; /* size: 0x000c */

