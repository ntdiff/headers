typedef struct _NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY
{
  /* 0x0000 */ struct _NET_BUFFER_LIST* FirstNbl;
  /* 0x0004 */ struct _NET_BUFFER_LIST* LastNbl;
  /* 0x0008 */ unsigned long NumNbls;
  /* 0x000c */ unsigned char IterationInProgress;
  struct /* bitfield */
  {
    /* 0x000d */ unsigned char SameFlags : 1; /* bit position: 0 */
    /* 0x000d */ unsigned char SamePort : 1; /* bit position: 1 */
  }; /* bitfield */
  /* 0x0010 */ unsigned long Flags;
  /* 0x0014 */ unsigned long Port;
} NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY, *PNDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY; /* size: 0x0018 */

