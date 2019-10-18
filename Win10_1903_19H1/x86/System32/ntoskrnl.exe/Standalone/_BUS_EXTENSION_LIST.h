typedef struct _BUS_EXTENSION_LIST
{
  /* 0x0000 */ void* Next;
  /* 0x0004 */ struct _PI_BUS_EXTENSION* BusExtension;
} BUS_EXTENSION_LIST, *PBUS_EXTENSION_LIST; /* size: 0x0008 */

