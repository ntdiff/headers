typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _NDIS_NIC_SWITCH_TYPE
{
  NdisNicSwitchTypeUnspecified = 0,
  NdisNicSwitchTypeExternal = 1,
  NdisNicSwitchTypeMax = 2,
} NDIS_NIC_SWITCH_TYPE, *PNDIS_NIC_SWITCH_TYPE;

typedef struct _IF_COUNTED_STRING_LH
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ wchar_t String[257];
} IF_COUNTED_STRING_LH, *PIF_COUNTED_STRING_LH; /* size: 0x0204 */

typedef struct _NDIS_NIC_SWITCH_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ enum _NDIS_NIC_SWITCH_TYPE SwitchType;
  /* 0x000c */ unsigned long SwitchId;
  /* 0x0010 */ struct _IF_COUNTED_STRING_LH SwitchFriendlyName;
  /* 0x0214 */ unsigned long NumVFs;
  /* 0x0218 */ unsigned long NdisReserved1;
  /* 0x021c */ unsigned long NdisReserved2;
  /* 0x0220 */ unsigned long NdisReserved3;
  /* 0x0224 */ unsigned long NumQueuePairsForDefaultVPort;
} NDIS_NIC_SWITCH_PARAMETERS, *PNDIS_NIC_SWITCH_PARAMETERS; /* size: 0x0228 */

