typedef enum _NDIS_802_11_STATUS_TYPE
{
  Ndis802_11StatusType_Authentication = 0,
  Ndis802_11StatusType_MediaStreamMode = 1,
  Ndis802_11StatusType_PMKID_CandidateList = 2,
  Ndis802_11StatusTypeMax = 3,
} NDIS_802_11_STATUS_TYPE, *PNDIS_802_11_STATUS_TYPE;

typedef struct _NDIS_802_11_STATUS_INDICATION
{
  /* 0x0000 */ enum _NDIS_802_11_STATUS_TYPE StatusType;
} NDIS_802_11_STATUS_INDICATION, *PNDIS_802_11_STATUS_INDICATION; /* size: 0x0004 */

typedef struct _NDIS_802_11_AUTHENTICATION_REQUEST
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ unsigned char Bssid[6];
  /* 0x000c */ unsigned long Flags;
} NDIS_802_11_AUTHENTICATION_REQUEST, *PNDIS_802_11_AUTHENTICATION_REQUEST; /* size: 0x0010 */

typedef struct _NDIS_802_11_AUTHENTICATION_EVENT
{
  /* 0x0000 */ struct _NDIS_802_11_STATUS_INDICATION Status;
  /* 0x0004 */ struct _NDIS_802_11_AUTHENTICATION_REQUEST Request[1];
} NDIS_802_11_AUTHENTICATION_EVENT, *PNDIS_802_11_AUTHENTICATION_EVENT; /* size: 0x0014 */

