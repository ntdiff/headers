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

