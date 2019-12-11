typedef struct _NDIS_FILTER_ATTACH_LIST
{
  /* 0x0000 */ struct _UNICODE_STRING* FilterInstanceName;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ long __PADDING__[1];
} NDIS_FILTER_ATTACH_LIST, *PNDIS_FILTER_ATTACH_LIST; /* size: 0x0010 */

