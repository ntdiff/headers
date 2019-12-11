typedef enum _WWAN_CONFIGURATION_SOURCE
{
  WwanUserProvisioned = 0,
  WwanAdminProvisioned = 1,
  WwanOperatorProvisioned = 2,
  WwanDeviceProvisioned = 3,
  WwanModemProvisioned = 4,
  WwanMaxProvisionSource = 5,
} WWAN_CONFIGURATION_SOURCE, *PWWAN_CONFIGURATION_SOURCE;

