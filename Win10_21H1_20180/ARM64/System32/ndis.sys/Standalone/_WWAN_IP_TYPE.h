typedef enum _WWAN_IP_TYPE
{
  WwanIPTypeDefault = 0,
  WwanIPTypeIPv4 = 1,
  WwanIPTypeIPv6 = 2,
  WwanIPTypeIpv4v6 = 3,
  WwanIPTypeXlat = 4,
  WwanSessionTypeEthernet = 5,
  WwanSessionTypeUnstructured = 6,
  WwanSessionTypeMax = 7,
} WWAN_IP_TYPE, *PWWAN_IP_TYPE;

