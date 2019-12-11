typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef enum _NDIS_NBL_TRACKER_SOURCE
{
  NdisNblTrackerMiniport = 0,
  NdisNblTrackerFilter = 1,
  NdisNblTrackerProtocol = 2,
  NdisNblTrackerNdisNPOSRReturn = 3,
  NdisNblTrackerNdisSSSend = 4,
  NdisNblTrackerNdisSSRReturn = 5,
  NdisNblTrackerFirstCustomContext = 256,
} NDIS_NBL_TRACKER_SOURCE, *PNDIS_NBL_TRACKER_SOURCE;

typedef struct _NDIS_NBL_TRACKER_BUCKET
{
  /* 0x0000 */ struct PNDIS_PER_PROCESSOR_SLOT__* Slot;
  /* 0x0004 */ long PassiveCounter;
} NDIS_NBL_TRACKER_BUCKET, *PNDIS_NBL_TRACKER_BUCKET; /* size: 0x0008 */

typedef struct _NDIS_NBL_TRACKER
{
  /* 0x0000 */ struct _LIST_ENTRY Linkage;
  struct /* bitfield */
  {
    /* 0x0008 */ enum _NDIS_NBL_TRACKER_SOURCE Source : 16; /* bit position: 0 */
    /* 0x0008 */ unsigned long Flags : 16; /* bit position: 16 */
  }; /* bitfield */
  /* 0x000c */ void* Context;
  /* 0x0010 */ const struct _UNICODE_STRING* Name;
  /* 0x0014 */ struct _NDIS_NBL_TRACKER_BUCKET Buckets[2];
} NDIS_NBL_TRACKER, *PNDIS_NBL_TRACKER; /* size: 0x0024 */

