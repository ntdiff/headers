typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _NDIS_GFT_HEADER_GROUP_TRANSPOSITION_ACTION
{
  NdisGftHeaderGroupTranspositionActionUndefined = 0,
  NdisGftHeaderGroupTranspositionActionModify = 1,
  NdisGftHeaderGroupTranspositionActionIgnore = 2,
  NdisGftHeaderGroupTranspositionActionPush = 3,
  NdisGftHeaderGroupTranspositionActionPop = 4,
  NdisGftHeaderGroupTranspositionActionMax = 5,
} NDIS_GFT_HEADER_GROUP_TRANSPOSITION_ACTION, *PNDIS_GFT_HEADER_GROUP_TRANSPOSITION_ACTION;

typedef struct _NDIS_GFT_HEADER_GROUP_TRANSPOSITION_PROFILE
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ enum _NDIS_GFT_HEADER_GROUP_TRANSPOSITION_ACTION Action;
  /* 0x000c */ unsigned long HeadersPresent;
  /* 0x0010 */ unsigned long HeaderFields;
} NDIS_GFT_HEADER_GROUP_TRANSPOSITION_PROFILE, *PNDIS_GFT_HEADER_GROUP_TRANSPOSITION_PROFILE; /* size: 0x0014 */

