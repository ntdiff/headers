typedef enum _WWAN_CONTEXT_TYPE
{
  WwanContextTypeNone = 0,
  WwanContextTypeInternet = 1,
  WwanContextTypeVpn = 2,
  WwanContextTypeVoice = 3,
  WwanContextTypeVideoShare = 4,
  WwanContextTypeCustom = 5,
  WwanContextTypePurchase = 6,
  WwanContextTypeMms = 7,
  WwanContextTypeIms = 8,
  WwanContextTypeAdmin = 9,
  WwanContextTypeApp = 10,
  WwanContextTypeXcap = 11,
  WwanContextTypeTethering = 12,
  WwanContextTypeEmergencyCall = 13,
  WwanContextTypeLteAttach = 14,
  WwanContextTypeMax = 15,
} WWAN_CONTEXT_TYPE, *PWWAN_CONTEXT_TYPE;

