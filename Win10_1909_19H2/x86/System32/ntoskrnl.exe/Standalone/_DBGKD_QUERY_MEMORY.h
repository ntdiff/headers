typedef struct _DBGKD_QUERY_MEMORY
{
  /* 0x0000 */ unsigned __int64 Address;
  /* 0x0008 */ unsigned __int64 Reserved;
  /* 0x0010 */ unsigned long AddressSpace;
  /* 0x0014 */ unsigned long Flags;
} DBGKD_QUERY_MEMORY, *PDBGKD_QUERY_MEMORY; /* size: 0x0018 */

