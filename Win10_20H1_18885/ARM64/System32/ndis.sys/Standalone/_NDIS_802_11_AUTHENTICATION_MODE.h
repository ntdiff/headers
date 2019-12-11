typedef enum _NDIS_802_11_AUTHENTICATION_MODE
{
  Ndis802_11AuthModeOpen = 0,
  Ndis802_11AuthModeShared = 1,
  Ndis802_11AuthModeAutoSwitch = 2,
  Ndis802_11AuthModeWPA = 3,
  Ndis802_11AuthModeWPAPSK = 4,
  Ndis802_11AuthModeWPANone = 5,
  Ndis802_11AuthModeWPA2 = 6,
  Ndis802_11AuthModeWPA2PSK = 7,
  Ndis802_11AuthModeWPA3 = 8,
  Ndis802_11AuthModeWPA3SAE = 9,
  Ndis802_11AuthModeMax = 10,
} NDIS_802_11_AUTHENTICATION_MODE, *PNDIS_802_11_AUTHENTICATION_MODE;

