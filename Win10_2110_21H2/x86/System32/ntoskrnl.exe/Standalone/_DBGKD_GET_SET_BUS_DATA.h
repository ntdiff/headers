typedef struct _DBGKD_GET_SET_BUS_DATA
{
  /* 0x0000 */ unsigned long BusDataType;
  /* 0x0004 */ unsigned long BusNumber;
  /* 0x0008 */ unsigned long SlotNumber;
  /* 0x000c */ unsigned long Offset;
  /* 0x0010 */ unsigned long Length;
} DBGKD_GET_SET_BUS_DATA, *PDBGKD_GET_SET_BUS_DATA; /* size: 0x0014 */

