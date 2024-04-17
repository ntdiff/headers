typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef enum _PNP_QUERY_RELATION
{
  PnpQueryEjectRelations = 0,
  PnpQueryRemovalRelations = 1,
  PnpQueryPowerRelations = 2,
  PnpQueryBusRelations = 3,
  MaxPnpQueryRelations = 4,
} PNP_QUERY_RELATION, *PPNP_QUERY_RELATION;

typedef struct _PLUGPLAY_CONTROL_DEVICE_RELATIONS_DATA
{
  /* 0x0000 */ struct _UNICODE_STRING DeviceInstance;
  /* 0x0008 */ enum _PNP_QUERY_RELATION Operation;
  /* 0x000c */ unsigned long BufferLength;
  /* 0x0010 */ wchar_t* Buffer;
} PLUGPLAY_CONTROL_DEVICE_RELATIONS_DATA, *PPLUGPLAY_CONTROL_DEVICE_RELATIONS_DATA; /* size: 0x0014 */

