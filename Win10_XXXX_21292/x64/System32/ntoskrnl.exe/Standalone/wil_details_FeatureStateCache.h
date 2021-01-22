union wil_details_FeatureStateCache
{
  union
  {
    /* 0x0000 */ unsigned int exchange;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned int stateCached : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned int hasNotificationCached : 1; /* bit position: 1 */
        /* 0x0000 */ unsigned int variantCached : 1; /* bit position: 2 */
        /* 0x0000 */ unsigned int effectiveState : 1; /* bit position: 3 */
        /* 0x0000 */ unsigned int desiredState : 1; /* bit position: 4 */
        /* 0x0000 */ unsigned int configuredState : 2; /* bit position: 5 */
        /* 0x0000 */ unsigned int needsRefresh : 1; /* bit position: 7 */
        /* 0x0000 */ unsigned int hasNotification : 1; /* bit position: 8 */
        /* 0x0000 */ unsigned int isVariant : 1; /* bit position: 9 */
        /* 0x0000 */ unsigned int variant : 6; /* bit position: 10 */
        /* 0x0000 */ unsigned int unused : 16; /* bit position: 16 */
      }; /* bitfield */
      /* 0x0004 */ unsigned int payloadId;
    }; /* size: 0x0008 */
    /* 0x0000 */ unsigned __int64 exchange64;
  }; /* size: 0x0008 */
}; /* size: 0x0008 */

