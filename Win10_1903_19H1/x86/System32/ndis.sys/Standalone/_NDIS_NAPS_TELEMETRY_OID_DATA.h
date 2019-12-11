typedef struct _NDIS_NAPS_TELEMETRY_OID_DATA
{
  /* 0x0000 */ unsigned short WakeCount;
  /* 0x0002 */ unsigned short BusyCount;
  /* 0x0004 */ unsigned short Weight;
  /* 0x0008 */ unsigned long Oid;
} NDIS_NAPS_TELEMETRY_OID_DATA, *PNDIS_NAPS_TELEMETRY_OID_DATA; /* size: 0x000c */

