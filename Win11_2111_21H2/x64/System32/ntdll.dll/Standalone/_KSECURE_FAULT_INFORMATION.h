typedef struct _KSECURE_FAULT_INFORMATION
{
  /* 0x0000 */ unsigned __int64 FaultCode;
  /* 0x0008 */ unsigned __int64 FaultVa;
  /* 0x0010 */ unsigned __int64 FaultPa;
} KSECURE_FAULT_INFORMATION, *PKSECURE_FAULT_INFORMATION; /* size: 0x0018 */

