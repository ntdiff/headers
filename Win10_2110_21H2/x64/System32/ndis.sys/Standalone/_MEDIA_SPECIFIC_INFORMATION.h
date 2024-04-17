typedef enum _NDIS_CLASS_ID
{
  NdisClass802_3Priority = 0,
  NdisClassWirelessWanMbxMailbox = 1,
  NdisClassIrdaPacketInfo = 2,
  NdisClassAtmAALInfo = 3,
} NDIS_CLASS_ID, *PNDIS_CLASS_ID;

typedef struct _MEDIA_SPECIFIC_INFORMATION
{
  /* 0x0000 */ unsigned int NextEntryOffset;
  /* 0x0004 */ enum _NDIS_CLASS_ID ClassId;
  /* 0x0008 */ unsigned int Size;
  /* 0x000c */ unsigned char ClassInformation[1];
  /* 0x000d */ char __PADDING__[3];
} MEDIA_SPECIFIC_INFORMATION, *PMEDIA_SPECIFIC_INFORMATION; /* size: 0x0010 */

