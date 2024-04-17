typedef struct _CROSS_CERT_DIST_POINTS_INFO
{
  /* 0x0000 */ unsigned long dwSyncDeltaTime;
  /* 0x0004 */ unsigned long cDistPoint;
  /* 0x0008 */ struct _CERT_ALT_NAME_INFO* rgDistPoint;
} CROSS_CERT_DIST_POINTS_INFO, *PCROSS_CERT_DIST_POINTS_INFO; /* size: 0x000c */

