typedef union _MI_RESERVATION_CLUSTER_INFO
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long ClusterSize : 10; /* bit position: 0 */
      /* 0x0000 */ unsigned long SequenceNumber : 22; /* bit position: 10 */
    }; /* bitfield */
    /* 0x0000 */ long EntireInfo;
  }; /* size: 0x0004 */
} MI_RESERVATION_CLUSTER_INFO, *PMI_RESERVATION_CLUSTER_INFO; /* size: 0x0004 */

typedef struct _MI_MODWRITE_DATA
{
  /* 0x0000 */ long PagesLoad;
  /* 0x0004 */ unsigned long PagesAverage;
  /* 0x0008 */ unsigned long AverageAvailablePages;
  /* 0x000c */ unsigned long PagesWritten;
  /* 0x0010 */ unsigned long WritesIssued;
  /* 0x0014 */ unsigned long IgnoredReservationsCount;
  /* 0x0018 */ unsigned long FreedReservationsCount;
  /* 0x001c */ unsigned long WriteBurstCount;
  /* 0x0020 */ unsigned __int64 IgnoreReservationsStartTime;
  /* 0x0028 */ volatile union _MI_RESERVATION_CLUSTER_INFO ReservationClusterInfo;
  struct /* bitfield */
  {
    /* 0x002c */ unsigned short IgnoreReservations : 1; /* bit position: 0 */
    /* 0x002c */ unsigned short Spare : 15; /* bit position: 1 */
  }; /* bitfield */
  /* 0x002e */ unsigned short Spare1;
} MI_MODWRITE_DATA, *PMI_MODWRITE_DATA; /* size: 0x0030 */

