typedef struct _STORAGE_GET_BC_PROPERTIES_OUTPUT
{
  /* 0x0000 */ unsigned long MaximumRequestsPerPeriod;
  /* 0x0004 */ unsigned long MinimumPeriod;
  /* 0x0008 */ unsigned __int64 MaximumRequestSize;
  /* 0x0010 */ unsigned long EstimatedTimePerRequest;
  /* 0x0014 */ unsigned long NumOutStandingRequests;
  /* 0x0018 */ unsigned __int64 RequestSize;
} STORAGE_GET_BC_PROPERTIES_OUTPUT, *PSTORAGE_GET_BC_PROPERTIES_OUTPUT; /* size: 0x0020 */

