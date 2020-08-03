typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _WWAN_PIN_MODE
{
  WwanPinModeNotSupported = 0,
  WwanPinModeEnabled = 1,
  WwanPinModeDisabled = 2,
  WwanPinModeMax = 3,
} WWAN_PIN_MODE, *PWWAN_PIN_MODE;

typedef enum _WWAN_PIN_FORMAT
{
  WwanPinFormatUnknown = 0,
  WwanPinFormatNumeric = 1,
  WwanPinFormatAlphaNumeric = 2,
  WwanPinFormatMax = 3,
} WWAN_PIN_FORMAT, *PWWAN_PIN_FORMAT;

typedef struct _WWAN_PIN_DESC
{
  /* 0x0000 */ enum _WWAN_PIN_MODE PinMode;
  /* 0x0004 */ enum _WWAN_PIN_FORMAT PinFormat;
  /* 0x0008 */ unsigned long PinLengthMin;
  /* 0x000c */ unsigned long PinLengthMax;
} WWAN_PIN_DESC, *PWWAN_PIN_DESC; /* size: 0x0010 */

typedef struct _WWAN_PIN_LIST
{
  /* 0x0000 */ struct _WWAN_PIN_DESC WwanPinDescPin1;
  /* 0x0010 */ struct _WWAN_PIN_DESC WwanPinDescPin2;
  /* 0x0020 */ struct _WWAN_PIN_DESC WwanPinDescDeviceSimPin;
  /* 0x0030 */ struct _WWAN_PIN_DESC WwanPinDescDeviceFirstSimPin;
  /* 0x0040 */ struct _WWAN_PIN_DESC WwanPinDescNetworkPin;
  /* 0x0050 */ struct _WWAN_PIN_DESC WwanPinDescNetworkSubsetPin;
  /* 0x0060 */ struct _WWAN_PIN_DESC WwanPinDescSvcProviderPin;
  /* 0x0070 */ struct _WWAN_PIN_DESC WwanPinDescCorporatePin;
  /* 0x0080 */ struct _WWAN_PIN_DESC WwanPinDescSubsidyLock;
  /* 0x0090 */ struct _WWAN_PIN_DESC WwanPinDescCustom;
} WWAN_PIN_LIST, *PWWAN_PIN_LIST; /* size: 0x00a0 */

typedef struct _NDIS_WWAN_PIN_LIST
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long uStatus;
  /* 0x0008 */ struct _WWAN_PIN_LIST PinList;
} NDIS_WWAN_PIN_LIST, *PNDIS_WWAN_PIN_LIST; /* size: 0x00a8 */

