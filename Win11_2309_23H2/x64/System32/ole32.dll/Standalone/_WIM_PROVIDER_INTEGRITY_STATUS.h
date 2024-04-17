typedef struct _WIM_PROVIDER_INTEGRITY_STATUS
{
  /* 0x0000 */ unsigned char IntegrityComplete;
  /* 0x0001 */ unsigned char IntegrityRunning;
  /* 0x0008 */ unsigned __int64 IntegrityAvailable;
  /* 0x0010 */ unsigned __int64 IntegrityRequired;
} WIM_PROVIDER_INTEGRITY_STATUS, *PWIM_PROVIDER_INTEGRITY_STATUS; /* size: 0x0018 */

