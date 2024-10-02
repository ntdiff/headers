typedef enum _NDIS_802_11_WEP_STATUS
{
  Ndis802_11WEPEnabled = 0,
  Ndis802_11Encryption1Enabled = 0,
  Ndis802_11WEPDisabled = 1,
  Ndis802_11EncryptionDisabled = 1,
  Ndis802_11WEPKeyAbsent = 2,
  Ndis802_11Encryption1KeyAbsent = 2,
  Ndis802_11WEPNotSupported = 3,
  Ndis802_11EncryptionNotSupported = 3,
  Ndis802_11Encryption2Enabled = 4,
  Ndis802_11Encryption2KeyAbsent = 5,
  Ndis802_11Encryption3Enabled = 6,
  Ndis802_11Encryption3KeyAbsent = 7,
} NDIS_802_11_WEP_STATUS, *PNDIS_802_11_WEP_STATUS;

