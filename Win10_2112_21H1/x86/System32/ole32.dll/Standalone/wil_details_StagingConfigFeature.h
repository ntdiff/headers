struct wil_details_StagingConfigFeature
{
  /* 0x0000 */ unsigned int featureId;
  struct /* bitfield */
  {
    /* 0x0004 */ unsigned int changedInSession : 1; /* bit position: 0 */
    /* 0x0004 */ unsigned int isVariantConfig : 1; /* bit position: 1 */
    /* 0x0004 */ unsigned int unused1 : 6; /* bit position: 2 */
    /* 0x0004 */ unsigned int serviceState : 2; /* bit position: 8 */
    /* 0x0004 */ unsigned int userState : 2; /* bit position: 10 */
    /* 0x0004 */ unsigned int testState : 2; /* bit position: 12 */
    /* 0x0004 */ unsigned int unused2 : 2; /* bit position: 14 */
    /* 0x0004 */ unsigned int unused3 : 8; /* bit position: 16 */
    /* 0x0004 */ unsigned int variant : 6; /* bit position: 24 */
    /* 0x0004 */ unsigned int payloadKind : 2; /* bit position: 30 */
  }; /* bitfield */
  /* 0x0008 */ unsigned int payload;
}; /* size: 0x000c */

