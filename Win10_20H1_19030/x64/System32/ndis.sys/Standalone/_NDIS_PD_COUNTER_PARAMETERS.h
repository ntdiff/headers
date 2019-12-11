typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

enum NDIS_PD_COUNTER_TYPE
{
  PDCounterTypeUnknown = 0,
  PDCounterTypeReceiveQueue = 1,
  PDCounterTypeTransmitQueue = 2,
  PDCounterTypeReceiveFilter = 3,
  PDCounterTypeMax = 4,
};

typedef struct _NDIS_PD_COUNTER_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ const wchar_t* CounterName;
  /* 0x0010 */ enum NDIS_PD_COUNTER_TYPE Type;
  /* 0x0014 */ long __PADDING__[1];
} NDIS_PD_COUNTER_PARAMETERS, *PNDIS_PD_COUNTER_PARAMETERS; /* size: 0x0018 */

