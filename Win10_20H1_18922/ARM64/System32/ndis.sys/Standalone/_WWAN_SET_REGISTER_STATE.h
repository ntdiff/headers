typedef enum _WWAN_REGISTER_ACTION
{
  WwanRegisterActionAutomatic = 0,
  WwanRegisterActionManual = 1,
  WwanRegisterActionMax = 2,
} WWAN_REGISTER_ACTION, *PWWAN_REGISTER_ACTION;

typedef struct _WWAN_SET_REGISTER_STATE
{
  /* 0x0000 */ wchar_t ProviderId[7];
  /* 0x0010 */ enum _WWAN_REGISTER_ACTION RegisterAction;
  /* 0x0014 */ unsigned long WwanDataClass;
} WWAN_SET_REGISTER_STATE, *PWWAN_SET_REGISTER_STATE; /* size: 0x0018 */

