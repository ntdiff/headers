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

