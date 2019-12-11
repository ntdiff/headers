typedef enum _NDIS_NBL_TRACKER_LIFETIME_EVENT
{
  NdisNblTrackerEvent_QueuedByNdis = 1,
  NdisNblTrackerEvent_NblAllocated = 2,
  NdisNblTrackerEvent_NblAllocatedWithNb = 3,
  NdisNblTrackerEvent_NblFreed = 4,
  NdisNblTrackerEvent_NblAllocatedClone = 5,
  NdisNblTrackerEvent_NblFreedClone = 6,
  NdisNblTrackerEvent_NblAllocatedFragment = 7,
  NdisNblTrackerEvent_NblFreedFragment = 8,
  NdisNblTrackerEvent_NblAllocatedReassembled = 9,
  NdisNblTrackerEvent_NetioAllocatedClone = 10,
  NdisNblTrackerEvent_NetioFreedClone = 11,
  NdisNblTrackerEvent_CustomAllocatedChild = 12,
  NdisNblTrackerEvent_CustomFreedChild = 13,
  NdisNblTrackerEvent_CustomAllocatedNbl = 14,
  NdisNblTrackerEvent_CustomFreedNbl = 15,
  NdisNblTrackerEvent_OtherNotDatapath = 16,
  NdisNblTrackerEvent_LifetimeMax = 17,
} NDIS_NBL_TRACKER_LIFETIME_EVENT, *PNDIS_NBL_TRACKER_LIFETIME_EVENT;

