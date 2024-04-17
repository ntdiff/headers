typedef struct _STORAGE_PHYSICAL_NODE_DATA
{
  /* 0x0000 */ unsigned long NodeId;
  /* 0x0004 */ unsigned long AdapterCount;
  /* 0x0008 */ unsigned long AdapterDataLength;
  /* 0x000c */ unsigned long AdapterDataOffset;
  /* 0x0010 */ unsigned long DeviceCount;
  /* 0x0014 */ unsigned long DeviceDataLength;
  /* 0x0018 */ unsigned long DeviceDataOffset;
  /* 0x001c */ unsigned long Reserved[3];
} STORAGE_PHYSICAL_NODE_DATA, *PSTORAGE_PHYSICAL_NODE_DATA; /* size: 0x0028 */

