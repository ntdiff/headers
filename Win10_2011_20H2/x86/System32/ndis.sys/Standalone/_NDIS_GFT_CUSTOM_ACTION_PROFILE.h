typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _NDIS_GFP_TABLE_TYPE
{
  NdisGfpTableTypeUndefined = 0,
  NdisGfpTableTypeWildcardIngress = 1,
  NdisGfpTableTypeWildcardEgress = 2,
  NdisGfpTableTypeExactMatchIngress = 3,
  NdisGfpTableTypeExactMatchEgress = 4,
  NdisGfpTableTypePacketDirect = 5,
  NdisGfpTableTypeMax = 6,
} NDIS_GFP_TABLE_TYPE, *PNDIS_GFP_TABLE_TYPE;

typedef struct _NDIS_GFT_CUSTOM_ACTION_PROFILE
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ enum _NDIS_GFP_TABLE_TYPE TableType;
  /* 0x000c */ unsigned long ProfileId;
  /* 0x0010 */ unsigned long Type;
  /* 0x0014 */ unsigned long Length;
  union
  {
    /* 0x0018 */ unsigned long Alignment;
    struct
    {
      /* 0x0018 */ unsigned char ActionProfileData[1];
      /* 0x0019 */ char __PADDING__[3];
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
} NDIS_GFT_CUSTOM_ACTION_PROFILE, *PNDIS_GFT_CUSTOM_ACTION_PROFILE; /* size: 0x001c */

