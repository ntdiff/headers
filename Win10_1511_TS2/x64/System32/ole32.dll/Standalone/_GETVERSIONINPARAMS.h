typedef struct _GETVERSIONINPARAMS
{
  /* 0x0000 */ unsigned char bVersion;
  /* 0x0001 */ unsigned char bRevision;
  /* 0x0002 */ unsigned char bReserved;
  /* 0x0003 */ unsigned char bIDEDeviceMap;
  /* 0x0004 */ unsigned long fCapabilities;
  /* 0x0008 */ unsigned long dwReserved[4];
} GETVERSIONINPARAMS, *PGETVERSIONINPARAMS; /* size: 0x0018 */

