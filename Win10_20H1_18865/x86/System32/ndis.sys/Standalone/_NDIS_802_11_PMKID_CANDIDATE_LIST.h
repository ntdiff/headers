typedef struct _PMKID_CANDIDATE
{
  /* 0x0000 */ unsigned char BSSID[6];
  /* 0x0008 */ unsigned long Flags;
} PMKID_CANDIDATE, *PPMKID_CANDIDATE; /* size: 0x000c */

typedef struct _NDIS_802_11_PMKID_CANDIDATE_LIST
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long NumCandidates;
  /* 0x0008 */ struct _PMKID_CANDIDATE CandidateList[1];
} NDIS_802_11_PMKID_CANDIDATE_LIST, *PNDIS_802_11_PMKID_CANDIDATE_LIST; /* size: 0x0014 */

