typedef struct _NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY
{
  /* 0x0000 */ struct _NET_BUFFER_LIST* FirstNbl;
  /* 0x0004 */ struct _NET_BUFFER_LIST* LastNbl;
  /* 0x0008 */ unsigned char IterationInProgress;
  /* 0x0009 */ char __PADDING__[3];
} NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY, *PNDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY; /* size: 0x000c */

